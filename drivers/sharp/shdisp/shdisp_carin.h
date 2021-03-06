/* drivers/sharp/shdisp/shdisp_carin.h  (Display Driver)
 *
 * Copyright (C) 2011-2012 SHARP CORPORATION
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

/* ------------------------------------------------------------------------- */
/* SHARP DISPLAY DRIVER FOR KERNEL MODE                                      */
/* ------------------------------------------------------------------------- */

#ifndef SHDISP_CARIN_H
#define SHDISP_CARIN_H

/* ------------------------------------------------------------------------- */
/* MACROS                                                                    */
/* ------------------------------------------------------------------------- */


/* ------------------------------------------------------------------------- */
/* TYPES                                                                     */
/* ------------------------------------------------------------------------- */


/* ------------------------------------------------------------------------- */
/* VARIABLES                                                                 */
/* ------------------------------------------------------------------------- */


/* ------------------------------------------------------------------------- */
/* PROTOTYPES                                                                */
/* ------------------------------------------------------------------------- */

struct shdisp_panel_operations *shdisp_carin_API_create(void);

int shdisp_carin_API_mipi_start_display(void);

int shdisp_carin_API_cabc_init(void);
int shdisp_carin_API_cabc_indoor_on(void);
int shdisp_carin_API_cabc_outdoor_on(int lut_level);
int shdisp_carin_API_cabc_off(int wait_on, int pwm_disable);
int shdisp_carin_API_cabc_outdoor_move(int lut_level);

#endif /* SHDISP_CARIN_H */

/* ------------------------------------------------------------------------- */
/* END OF FILE                                                               */
/* ------------------------------------------------------------------------- */

