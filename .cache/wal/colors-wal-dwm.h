static const char norm_fg[] = "#d0dbe0";
static const char norm_bg[] = "#201213";
static const char norm_border[] = "#91999c";

static const char sel_fg[] = "#d0dbe0";
static const char sel_bg[] = "#917C97";
static const char sel_border[] = "#d0dbe0";

static const char urg_fg[] = "#d0dbe0";
static const char urg_bg[] = "#4B6C93";
static const char urg_border[] = "#4B6C93";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
