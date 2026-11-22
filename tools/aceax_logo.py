#!/usr/bin/env python3
"""
Cuts your brand's flat pack front out of its texture as data/UI/aceax_logo_ca.paa,
the picture on its ACE Arsenal Extended brand button.

    python tools/aceax_logo.py sucky_strike

Reads addons/<brand>/data/texture.paa, writes addons/<brand>/data/UI/aceax_logo_ca.paa
and a PNG preview next to it in .hemttout/. Run it from the repository root.

Requires Pillow (pip install pillow) and hemtt on PATH.
Same cut as the main mod's tools/gear_icons/aceax_logos.py.
"""

import argparse
import os
import shutil
import subprocess
import tempfile

from PIL import Image

SIZE = 256
PACK_FRONT = (512, 451, 873, 1015)  # the pack's front face in pixels of a 1024 texture


def hemtt_convert(src, dest):
    # hemtt refuses to overwrite, so convert to a temp name and move into place
    tmp = dest + ".tmp" + os.path.splitext(dest)[1]
    if os.path.exists(tmp):
        os.remove(tmp)
    subprocess.run(["hemtt", "utils", "paa", "convert", src, tmp], check=True, capture_output=True)
    shutil.move(tmp, dest)


def logo(tex):
    k = tex.width / 1024
    u0, v0, u1, v1 = (round(c * k) for c in PACK_FRONT)
    front = tex.crop((u0, v0, u1, v1)).convert("RGBA")
    scale = SIZE / max(front.size)
    front = front.resize((round(front.width * scale), round(front.height * scale)), Image.LANCZOS)
    out = Image.new("RGBA", (SIZE, SIZE), (0, 0, 0, 0))
    out.paste(front, ((SIZE - front.width) // 2, (SIZE - front.height) // 2))
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("brand", help="addon folder name, e.g. sucky_strike")
    args = ap.parse_args()

    data = os.path.join("addons", args.brand, "data")
    tex_paa = os.path.join(data, "texture.paa")
    if not os.path.exists(tex_paa):
        raise SystemExit(f"{tex_paa} not found (run this from the repository root)")

    os.makedirs(".hemttout", exist_ok=True)
    png = os.path.join(".hemttout", f"{args.brand}_aceax_logo_ca.png")
    with tempfile.TemporaryDirectory() as tmp:
        tex_png = os.path.join(tmp, "texture.png")
        hemtt_convert(tex_paa, tex_png)
        logo(Image.open(tex_png)).save(png)
    hemtt_convert(png, os.path.join(data, "UI", "aceax_logo_ca.paa"))
    print(f"wrote {os.path.join(data, 'UI', 'aceax_logo_ca.paa')}, preview: {png}")


if __name__ == "__main__":
    main()
