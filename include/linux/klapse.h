#ifndef _KLAPSE_H
#define _KLAPSE_H

/* KLAPSE_MDSS : Use 1 if using with MDSS */
#define KLAPSE_MDSS 1

/* set_rgb_slider : Interface function for brightness-mode */
typedef int bl_type_t;
extern void set_rgb_slider(bl_type_t bl_lvl);

#if KLAPSE_MDSS
 extern void kcal_rgb_get(int *r, int *g, int *b);
 extern void kcal_rgb_store(int r, int g, int b);
#else
 #define K_RED    kcal_red
 #define K_GREEN  kcal_green
 #define K_BLUE   kcal_blue

 extern unsigned short K_RED, K_GREEN, K_BLUE;
#endif

/* Constants - Customize as needed */
#define DEFAULT_ENABLE 0 /* 0 = off, 1 = time-based, 2 = brightness-based */

#define MAX_SCALE 256 /* Maximum value of RGB possible */

#define MIN_SCALE 20 /* Minimum value of RGB recommended */

#define MAX_BRIGHTNESS 255 /* Maximum display brightness */

#define MIN_BRIGHTNESS 5 /* Minimum display brightness */

#define UPPER_BL_LVL 255 /* Upper target for brightness-dependent mode */

#define LOWER_BL_LVL 2 /* Lower target for brightness-dependent mode */

#define DEFAULT_FLOW_FREQ 360 /* Flow delays for rapid pushes in mode 2 */

#endif  /* _KLAPSE_H */
