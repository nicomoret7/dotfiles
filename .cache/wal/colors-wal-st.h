const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#201213", /* black   */
  [1] = "#4B6C93", /* red     */
  [2] = "#917C97", /* green   */
  [3] = "#6A8FAA", /* yellow  */
  [4] = "#7CB1C4", /* blue    */
  [5] = "#A9B0B1", /* magenta */
  [6] = "#F4D4A4", /* cyan    */
  [7] = "#d0dbe0", /* white   */

  /* 8 bright colors */
  [8]  = "#91999c",  /* black   */
  [9]  = "#4B6C93",  /* red     */
  [10] = "#917C97", /* green   */
  [11] = "#6A8FAA", /* yellow  */
  [12] = "#7CB1C4", /* blue    */
  [13] = "#A9B0B1", /* magenta */
  [14] = "#F4D4A4", /* cyan    */
  [15] = "#d0dbe0", /* white   */

  /* special colors */
  [256] = "#201213", /* background */
  [257] = "#d0dbe0", /* foreground */
  [258] = "#d0dbe0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
