// ACE Arsenal Extended (AAE) compat: adds this addon's items (every burn stage) to the main mod's cigarette model.
// Included by compat_aceax\config.cpp, which only loads with AAE.
// AAE only offers items that are in the arsenal: the burn stages show in dev builds, in release builds they're scope 1.

// Your brand as a button in the main mod's brand selector (cigs\addons\base\aceax.hpp).
// AAE only shows a brand that is listed in values[], so this appends it there (+=) instead of replacing the list.
class XtdGearModels {
    class EGVAR(base,cigaretteBase) {
        class brand {
            values[] += { QUOTE(COMPONENT) };

            // Logo button like the main mod's brands: your pack front, 256x256 on a transparent square (data\ui\aceax_logo_ca.paa).
            // For a text button instead, set label = "~updateBrandNameBeautified~"; and remove the image line.
            class COMPONENT {
                label = "";
                image = QPATHTOF(data\ui\aceax_logo_ca.paa);
                description = CSTRING(cigarette);
            };
        };
    };
};

class XtdGearInfos {
    class CfgGlasses {
        class GVAR(cig0) {
            model = QEGVAR(base,cigarette);
            brand = QUOTE(COMPONENT);
            stage = "s0";
        };
        class GVAR(cig1) {
            model = QEGVAR(base,cigarette);
            brand = QUOTE(COMPONENT);
            stage = "s1";
        };
        class GVAR(cig2) {
            model = QEGVAR(base,cigarette);
            brand = QUOTE(COMPONENT);
            stage = "s2";
        };
        class GVAR(cig3) {
            model = QEGVAR(base,cigarette);
            brand = QUOTE(COMPONENT);
            stage = "s3";
        };
        class GVAR(cig4) {
            model = QEGVAR(base,cigarette);
            brand = QUOTE(COMPONENT);
            stage = "s4";
        };
    };

    class CfgWeapons {
        class GVAR(cig0_nv) {
            model = QEGVAR(base,cigarette);
            brand = QUOTE(COMPONENT);
            stage = "s0";
        };
        class GVAR(cig1_nv) {
            model = QEGVAR(base,cigarette);
            brand = QUOTE(COMPONENT);
            stage = "s1";
        };
        class GVAR(cig2_nv) {
            model = QEGVAR(base,cigarette);
            brand = QUOTE(COMPONENT);
            stage = "s2";
        };
        class GVAR(cig3_nv) {
            model = QEGVAR(base,cigarette);
            brand = QUOTE(COMPONENT);
            stage = "s3";
        };
        class GVAR(cig4_nv) {
            model = QEGVAR(base,cigarette);
            brand = QUOTE(COMPONENT);
            stage = "s4";
        };
    };
};
