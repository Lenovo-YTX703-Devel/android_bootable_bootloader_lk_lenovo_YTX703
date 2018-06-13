/* Copyright (c) 2015, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _PANEL_NT35597_WQXGA_DUALDSI_VIDEO_H_
#define _PANEL_NT35597_WQXGA_DUALDSI_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config nt35597_wqxga_dualdsi_video_panel_data = {
	"qcom,mdss_dsi_nt35597_wqxga_video", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 1, 1, 10, 0, 0, 0, 11, 0, 0,
	"qcom,mdss_dsi_nt35597_wqxga_video"
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution nt35597_wqxga_dualdsi_video_panel_res = {
	//1600, 2560, 104, 72, 4, 0, 16, 24, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0
	1600, 2560, 17, 30, 4, 0, 16, 24, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info nt35597_wqxga_dualdsi_video_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char nt35597_wqxga_dualdsi_video_on_cmd0[] = {
	0x06, 0x0,  0x39, 0xc0,
	0xf0, 0x55, 0xaa, 0x52, 
	0x08, 0x00, 0xff, 0xff
};

static char nt35597_wqxga_dualdsi_video_on_cmd1[] = {
	0xc0, 0x0d, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd2[] = {
	0x05, 0x0,  0x39, 0xc0,
	0xb8, 0x03, 0x06, 0x00,
	0x00, 0xff, 0xff, 0xff
};

static char nt35597_wqxga_dualdsi_video_on_cmd3[] = {
	0x05, 0x0,  0x39, 0xc0,
	0xff, 0xaa, 0x55, 0xa5,
	0x80, 0xff, 0xff, 0xff
};

static char nt35597_wqxga_dualdsi_video_on_cmd4[] = {
	0x6f, 0x0f, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd5[] = {
	0xf7, 0x01, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd6[] = {
	0x05, 0x0,  0x39, 0xc0,
	0xff, 0xaa, 0x55, 0xa5,
	0x00, 0xff, 0xff, 0xff
};

static char nt35597_wqxga_dualdsi_video_on_cmd7[] = {
	0x62, 0x01, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd8[] = {
	0x55, 0x02, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd9[] = {
	0x53, 0x24, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd10[] = {
	0x51, 0x80, 0x15, 0x80
};
/*
static char nt35597_wqxga_dualdsi_video_on_cmd11[] = {
	0x6c, 0x3d, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd12[] = {
	0x6d, 0x3d, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd13[] = {
	0x6e, 0x3d, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd14[] = {
	0x6f, 0x3d, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd15[] = {
	0x35, 0x02, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd16[] = {
	0x36, 0x72, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd17[] = {
	0x37, 0x10, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd18[] = {
	0x8, 0xc0, 0x15, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd19[] = {
	0xff, 0x10, 0x15, 0x80
};
*/
static char nt35597_wqxga_dualdsi_video_on_cmd20[] = {
	0x11, 0x00, 0x05, 0x80
};

static char nt35597_wqxga_dualdsi_video_on_cmd21[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd nt35597_wqxga_dualdsi_video_on_command[] = {
	{0xc, nt35597_wqxga_dualdsi_video_on_cmd0, 0x01},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd1, 0x01},
	{0xc, nt35597_wqxga_dualdsi_video_on_cmd2, 0x01},
	{0xc, nt35597_wqxga_dualdsi_video_on_cmd3, 0x01},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd4, 0x01},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd5, 0x01},
	{0xc, nt35597_wqxga_dualdsi_video_on_cmd6, 0x01},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd7, 0x01},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd8, 0x01},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd9, 0x01},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd10, 0x01},
	/*
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd11, 0x10},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd12, 0x10},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd13, 0x10},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd14, 0x10},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd15, 0x10},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd16, 0x10},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd17, 0x10},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd18, 0x10},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd19, 0x10},
	*/
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd20, 0x78},
	{0x4, nt35597_wqxga_dualdsi_video_on_cmd21, 0x14},
};

#define NT35597_WQXGA_DUALDSI_VIDEO_ON_COMMAND 13


static char nt35597_wqxga_dualdsi_videooff_cmd0[] = {
	0x28, 0x00, 0x05, 0x80
};

static char nt35597_wqxga_dualdsi_videooff_cmd1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd nt35597_wqxga_dualdsi_video_off_command[] = {
	{0x4, nt35597_wqxga_dualdsi_videooff_cmd0, 0x32},
	{0x4, nt35597_wqxga_dualdsi_videooff_cmd1, 0x78}
};

#define NT35597_WQXGA_DUALDSI_VIDEO_OFF_COMMAND 2

static struct command_state nt35597_wqxga_dualdsi_video_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info nt35597_wqxga_dualdsi_video_command_panel = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info nt35597_wqxga_dualdsi_video_video_panel = {
	0, 0, 0, 0, 1, 1, 1, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration nt35597_wqxga_dualdsi_video_lane_config = {
	4, 0, 1, 1, 1, 1, 0
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t nt35597_wqxga_dualdsi_video_timings[] = {
	//0xd5, 0x32, 0x22, 0x00, 0x60, 0x64, 0x26, 0x36, 0x29, 0x03, 0x04, 0x00
	//0xda, 0x68, 0x48, 0x01, 0xae, 0xb0, 0x50, 0x6c, 0x57, 0x03, 0x04, 0x00
	//0xf3, 0x3a, 0x26, 0x00, 0x6a, 0x6e, 0x2c, 0x3e, 0x2f, 0x03, 0x04, 0x00
	0xD5, 0x32, 0x22, 0x00, 0x60, 0x64, 0x26, 0x34, 0x29, 0x03, 0x04, 0x00
};

static const uint32_t nt35597_wqxga_dualdsi_thulium_video_timings[] = {
	0x23, 0x1e, 0x7, 0x8, 0x5, 0x3, 0x4, 0xa0,
	0x23, 0x1e, 0x7, 0x8, 0x5, 0x3, 0x4, 0xa0,
	0x23, 0x1e, 0x7, 0x8, 0x5, 0x3, 0x4, 0xa0,
	0x23, 0x1e, 0x7, 0x8, 0x5, 0x3, 0x4, 0xa0,
	0x23, 0x18, 0x7, 0x8, 0x5, 0x3, 0x4, 0xa0,
};

static struct panel_timing nt35597_wqxga_dualdsi_video_timing_info = {
	0x0, 0x04, 0x0d, 0x2d
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence nt35597_wqxga_dualdsi_video_reset_seq = {
	{1, 0, 1, }, {20, 20, 50, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight nt35597_wqxga_dualdsi_video_backlight = {
	1, 1, 4095, 100, 1, "PMIC_8941"		/* BL_WLED */
};

static struct labibb_desc nt35597_wqxga_dualdsi_video_labibb = {
	0, 1, 5500000, 5500000, 5500000, 5500000, 3, 3, 1, 0
};

/*---------------------------------------------------------------------------*/
/* Dynamic fps supported frequencies by panel                                */
/*---------------------------------------------------------------------------*/
static const struct dfps_panel_info nt35597_wqxga_dualdsi_video_dfps = {
	1, 8, {53, 54, 55, 56, 57, 58, 59, 60}
};

#endif
