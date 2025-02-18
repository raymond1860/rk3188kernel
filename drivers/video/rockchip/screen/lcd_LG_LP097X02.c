#ifndef __LCD_LG097X02__
#define __LCD_LG097X02__

/* Base */
#define SCREEN_TYPE		SCREEN_RGB
#define LVDS_FORMAT      	LVDS_8BIT_1
#define OUT_FACE		OUT_P666
#define DCLK		 	9000000
#define LCDC_ACLK           	300000000
/* Timing */
#define H_PW			20
#define H_BP			20
#define H_VD			480
#define H_FP			5

#define V_PW			4
#define V_BP			4
#define V_VD			272
#define V_FP			8

#define LCD_WIDTH   196// 142  // 202
#define LCD_HEIGHT  147 //106//  152
/* Other */
#define DCLK_POL		1 // 
#define DEN_POL		0
#define VSYNC_POL	0
#define HSYNC_POL	0

#define SWAP_RB		0
#define SWAP_RG		0
#define SWAP_GB		0

#endif
