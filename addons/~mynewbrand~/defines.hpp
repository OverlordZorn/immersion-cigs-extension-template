// TOTALPUFFS Defines how many puffs a cigarette last
#define TOTALPUFFS 17

// CIGPACK_SIZE Defines how many cigarettes are in the cigarette package.
#define CIGPACK_SIZE 20

// FLAVOR A random one of these is told to the player a little while after lighting up: "Hmm, it tastes like %1!".
// Keep them short, lower case, and separated by commas. Leave it empty (#define FLAVOR) for no flavour text.
#define FLAVOR "~updateFlavor1~", "~updateFlavor2~", "~updateFlavor3~"

// Filterless cigarette: in cigs_glasses.hpp and cigs_hmd.hpp, replace every QPATH_BASE_MODEL_CIG
// with QPATH_BASE_MODEL_NOFILTER_CIG (stages 0 to 4). See docs\basic_guide.md.
