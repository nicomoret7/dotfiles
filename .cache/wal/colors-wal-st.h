const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#010100", /* black   */
  [1] = "#887239", /* red     */
  [2] = "#94803F", /* green   */
  [3] = "#A08743", /* yellow  */
  [4] = "#AE9248", /* blue    */
  [5] = "#D2AE56", /* magenta */
  [6] = "#E4BC5D", /* cyan    */
  [7] = "#ecd8a6", /* white   */

  /* 8 bright colors */
  [8]  = "#a59774",  /* black   */
  [9]  = "#887239",  /* red     */
  [10] = "#94803F", /* green   */
  [11] = "#A08743", /* yellow  */
  [12] = "#AE9248", /* blue    */
  [13] = "#D2AE56", /* magenta */
  [14] = "#E4BC5D", /* cyan    */
  [15] = "#ecd8a6", /* white   */

  /* special colors */
  [256] = "#010100", /* background */
  [257] = "#ecd8a6", /* foreground */
  [258] = "#ecd8a6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
