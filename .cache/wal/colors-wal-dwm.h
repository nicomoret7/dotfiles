static const char norm_fg[] = "#ecd8a6";
static const char norm_bg[] = "#010100";
static const char norm_border[] = "#a59774";

static const char sel_fg[] = "#ecd8a6";
static const char sel_bg[] = "#94803F";
static const char sel_border[] = "#ecd8a6";

static const char urg_fg[] = "#ecd8a6";
static const char urg_bg[] = "#887239";
static const char urg_border[] = "#887239";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
