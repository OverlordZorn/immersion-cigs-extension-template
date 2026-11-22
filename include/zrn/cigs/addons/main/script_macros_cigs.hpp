// Copy of Immersive Cigs' addons\main\script_macros_cigs.hpp for extension mods.
// The main mod builds its paths with QPATHTOEF, which would use this mod's MAINPREFIX (cigx).
// The main mod's own files sit under zrn\cigs, so those paths are written out here.

#define QPATH_TEXTURE QPATHTOF(data\texture.paa)
#define QPATH_MODEL_CIGPACK QPATHTOF(data\cigpack.p3d)

#define QPATH_BASE_RVMAT Q(zrn\cigs\addons\base\data\texture.rvmat)
#define QPATH_BASE_RVMAT_LIT Q(zrn\cigs\addons\base\data\texture_lit.rvmat)

#define QPATH_BASE_MODEL_CIG0 Q(zrn\cigs\addons\base\data\cig0.p3d)
#define QPATH_BASE_MODEL_CIG1 Q(zrn\cigs\addons\base\data\cig1.p3d)
#define QPATH_BASE_MODEL_CIG2 Q(zrn\cigs\addons\base\data\cig2.p3d)
#define QPATH_BASE_MODEL_CIG3 Q(zrn\cigs\addons\base\data\cig3.p3d)
#define QPATH_BASE_MODEL_CIG4 Q(zrn\cigs\addons\base\data\cig4.p3d)

// Filterless cigarettes: the same texture layout, paper only, 56 mm down to 20 mm
#define QPATH_BASE_MODEL_NOFILTER_CIG0 Q(zrn\cigs\addons\base\data\cig_nofilter0.p3d)
#define QPATH_BASE_MODEL_NOFILTER_CIG1 Q(zrn\cigs\addons\base\data\cig_nofilter1.p3d)
#define QPATH_BASE_MODEL_NOFILTER_CIG2 Q(zrn\cigs\addons\base\data\cig_nofilter2.p3d)
#define QPATH_BASE_MODEL_NOFILTER_CIG3 Q(zrn\cigs\addons\base\data\cig_nofilter3.p3d)
#define QPATH_BASE_MODEL_NOFILTER_CIG4 Q(zrn\cigs\addons\base\data\cig_nofilter4.p3d)

// Cigars: shared models and materials, each brand brings data\cigars\cigar_co.paa
#define QPATH_TEXTURE_CIGAR QPATHTOF(data\cigars\cigar_co.paa)
#define QPATH_BASE_RVMAT_CIGAR Q(zrn\cigs\addons\base\data\cigar.rvmat)
#define QPATH_BASE_RVMAT_CIGAR_LIT Q(zrn\cigs\addons\base\data\cigar_lit.rvmat)
#define QPATH_BASE_MODEL_CIGAR0 Q(zrn\cigs\addons\base\data\cigar0.p3d)
#define QPATH_BASE_MODEL_CIGAR1 Q(zrn\cigs\addons\base\data\cigar1.p3d)
#define QPATH_BASE_MODEL_CIGAR2 Q(zrn\cigs\addons\base\data\cigar2.p3d)
#define QPATH_BASE_MODEL_CIGAR3 Q(zrn\cigs\addons\base\data\cigar3.p3d)
#define QPATH_BASE_MODEL_CIGAR4 Q(zrn\cigs\addons\base\data\cigar4.p3d)

#define MODLSTRING(key) [LSTRING(DOUBLES(module,key)),LSTRING(TRIPLES(module,key,desc))]
