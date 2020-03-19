/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        �C/GUI-BitmapConvert V3.96.
*        Compiled Jul 19 2005, 13:50:35
*          (c) 2002-2005  Micrium, Inc.
  www.micrium.com

  (c) 1998-2005  Segger
  Microcontroller Systeme GmbH
  www.segger.com
*
**********************************************************************
*
* Source file: bmp_about
* Dimensions:  80 * 50
* NumColors:   256
*
**********************************************************************
*/

#include "stdlib.h"

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR Colorsbmp_about[] = {
     0x000000,0x000024,0x000048,0x00006D
    ,0x000091,0x0000B6,0x0000DA,0x0000FF
    ,0x005500,0x005524,0x005548,0x00556D
    ,0x005591,0x0055B6,0x0055DA,0x0055FF
    ,0x00AA00,0x00AA24,0x00AA48,0x00AA6D
    ,0x00AA91,0x00AAB6,0x00AADA,0x00AAFF
    ,0x00FF00,0x00FF24,0x00FF48,0x00FF6D
    ,0x00FF91,0x00FFB6,0x00FFDA,0x00FFFF
    ,0x240000,0x240024,0x240048,0x24006D
    ,0x240091,0x2400B6,0x2400DA,0x2400FF
    ,0x245500,0x245524,0x245548,0x24556D
    ,0x245591,0x2455B6,0x2455DA,0x2455FF
    ,0x24AA00,0x24AA24,0x24AA48,0x24AA6D
    ,0x24AA91,0x24AAB6,0x24AADA,0x24AAFF
    ,0x24FF00,0x24FF24,0x24FF48,0x24FF6D
    ,0x24FF91,0x24FFB6,0x24FFDA,0x24FFFF
    ,0x480000,0x480024,0x480048,0x48006D
    ,0x480091,0x4800B6,0x4800DA,0x4800FF
    ,0x485500,0x485524,0x485548,0x48556D
    ,0x485591,0x4855B6,0x4855DA,0x4855FF
    ,0x48AA00,0x48AA24,0x48AA48,0x48AA6D
    ,0x48AA91,0x48AAB6,0x48AADA,0x48AAFF
    ,0x48FF00,0x48FF24,0x48FF48,0x48FF6D
    ,0x48FF91,0x48FFB6,0x48FFDA,0x48FFFF
    ,0x6D0000,0x6D0024,0x6D0048,0x6D006D
    ,0x6D0091,0x6D00B6,0x6D00DA,0x6D00FF
    ,0x6D5500,0x6D5524,0x6D5548,0x6D556D
    ,0x6D5591,0x6D55B6,0x6D55DA,0x6D55FF
    ,0x6DAA00,0x6DAA24,0x6DAA48,0x6DAA6D
    ,0x6DAA91,0x6DAAB6,0x6DAADA,0x6DAAFF
    ,0x6DFF00,0x6DFF24,0x6DFF48,0x6DFF6D
    ,0x6DFF91,0x6DFFB6,0x6DFFDA,0x6DFFFF
    ,0x910000,0x910024,0x910048,0x91006D
    ,0x910091,0x9100B6,0x9100DA,0x9100FF
    ,0x915500,0x915524,0x915548,0x91556D
    ,0x915591,0x9155B6,0x9155DA,0x9155FF
    ,0x91AA00,0x91AA24,0x91AA48,0x91AA6D
    ,0x91AA91,0x91AAB6,0x91AADA,0x91AAFF
    ,0x91FF00,0x91FF24,0x91FF48,0x91FF6D
    ,0x91FF91,0x91FFB6,0x91FFDA,0x91FFFF
    ,0xB60000,0xB60024,0xB60048,0xB6006D
    ,0xB60091,0xB600B6,0xB600DA,0xB600FF
    ,0xB65500,0xB65524,0xB65548,0xB6556D
    ,0xB65591,0xB655B6,0xB655DA,0xB655FF
    ,0xB6AA00,0xB6AA24,0xB6AA48,0xB6AA6D
    ,0xB6AA91,0xB6AAB6,0xB6AADA,0xB6AAFF
    ,0xB6FF00,0xB6FF24,0xB6FF48,0xB6FF6D
    ,0xB6FF91,0xB6FFB6,0xB6FFDA,0xB6FFFF
    ,0xDA0000,0xDA0024,0xDA0048,0xDA006D
    ,0xDA0091,0xDA00B6,0xDA00DA,0xDA00FF
    ,0xDA5500,0xDA5524,0xDA5548,0xDA556D
    ,0xDA5591,0xDA55B6,0xDA55DA,0xDA55FF
    ,0xDAAA00,0xDAAA24,0xDAAA48,0xDAAA6D
    ,0xDAAA91,0xDAAAB6,0xDAAADA,0xDAAAFF
    ,0xDAFF00,0xDAFF24,0xDAFF48,0xDAFF6D
    ,0xDAFF91,0xDAFFB6,0xDAFFDA,0xDAFFFF
    ,0xFF0000,0xFF0024,0xFF0048,0xFF006D
    ,0xFF0091,0xFF00B6,0xFF00DA,0xFF00FF
    ,0xFF5500,0xFF5524,0xFF5548,0xFF556D
    ,0xFF5591,0xFF55B6,0xFF55DA,0xFF55FF
    ,0xFFAA00,0xFFAA24,0xFFAA48,0xFFAA6D
    ,0xFFAA91,0xFFAAB6,0xFFAADA,0xFFAAFF
    ,0xFFFF00,0xFFFF24,0xFFFF48,0xFFFF6D
    ,0xFFFF91,0xFFFFB6,0xFFFFDA,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palbmp_about = {
  256,	/* number of entries */
  0, 	/* No transparency */
  &Colorsbmp_about[0]
};

static GUI_CONST_STORAGE unsigned char acbmp_about[] = {
  /* RLE: 754 Pixels @ 000,000*/ 254, 0xE0, 254, 0xE0, 246, 0xE0, 
  /* RLE: 008 Pixels @ 034,009*/ 8, 0xFF, 
  /* RLE: 069 Pixels @ 042,009*/ 69, 0xE0, 
  /* RLE: 014 Pixels @ 031,010*/ 14, 0xFF, 
  /* RLE: 064 Pixels @ 045,010*/ 64, 0xE0, 
  /* RLE: 018 Pixels @ 029,011*/ 18, 0xFF, 
  /* RLE: 061 Pixels @ 047,011*/ 61, 0xE0, 
  /* RLE: 007 Pixels @ 028,012*/ 7, 0xFF, 
  /* RLE: 006 Pixels @ 035,012*/ 6, 0xE0, 
  /* RLE: 007 Pixels @ 041,012*/ 7, 0xFF, 
  /* RLE: 059 Pixels @ 048,012*/ 59, 0xE0, 
  /* RLE: 005 Pixels @ 027,013*/ 5, 0xFF, 
  /* RLE: 012 Pixels @ 032,013*/ 12, 0xE0, 
  /* RLE: 005 Pixels @ 044,013*/ 5, 0xFF, 
  /* RLE: 057 Pixels @ 049,013*/ 57, 0xE0, 
  /* RLE: 004 Pixels @ 026,014*/ 4, 0xFF, 
  /* RLE: 016 Pixels @ 030,014*/ 16, 0xE0, 
  /* RLE: 004 Pixels @ 046,014*/ 4, 0xFF, 
  /* RLE: 055 Pixels @ 050,014*/ 55, 0xE0, 
  /* RLE: 004 Pixels @ 025,015*/ 4, 0xFF, 
  /* RLE: 007 Pixels @ 029,015*/ 7, 0xE0, 
  /* RLE: 004 Pixels @ 036,015*/ 4, 0xFF, 
  /* RLE: 007 Pixels @ 040,015*/ 7, 0xE0, 
  /* RLE: 004 Pixels @ 047,015*/ 4, 0xFF, 
  /* RLE: 053 Pixels @ 051,015*/ 53, 0xE0, 
  /* RLE: 004 Pixels @ 024,016*/ 4, 0xFF, 
  /* RLE: 008 Pixels @ 028,016*/ 8, 0xE0, 
  /* RLE: 004 Pixels @ 036,016*/ 4, 0xFF, 
  /* RLE: 008 Pixels @ 040,016*/ 8, 0xE0, 
  /* RLE: 004 Pixels @ 048,016*/ 4, 0xFF, 
  /* RLE: 051 Pixels @ 052,016*/ 51, 0xE0, 
  /* RLE: 004 Pixels @ 023,017*/ 4, 0xFF, 
  /* RLE: 009 Pixels @ 027,017*/ 9, 0xE0, 
  /* RLE: 004 Pixels @ 036,017*/ 4, 0xFF, 
  /* RLE: 009 Pixels @ 040,017*/ 9, 0xE0, 
  /* RLE: 004 Pixels @ 049,017*/ 4, 0xFF, 
  /* RLE: 050 Pixels @ 053,017*/ 50, 0xE0, 
  /* RLE: 003 Pixels @ 023,018*/ 3, 0xFF, 
  /* RLE: 010 Pixels @ 026,018*/ 10, 0xE0, 
  /* RLE: 004 Pixels @ 036,018*/ 4, 0xFF, 
  /* RLE: 010 Pixels @ 040,018*/ 10, 0xE0, 
  /* RLE: 003 Pixels @ 050,018*/ 3, 0xFF, 
  /* RLE: 049 Pixels @ 053,018*/ 49, 0xE0, 
  /* RLE: 004 Pixels @ 022,019*/ 4, 0xFF, 
  /* RLE: 024 Pixels @ 026,019*/ 24, 0xE0, 
  /* RLE: 004 Pixels @ 050,019*/ 4, 0xFF, 
  /* RLE: 048 Pixels @ 054,019*/ 48, 0xE0, 
  /* RLE: 003 Pixels @ 022,020*/ 3, 0xFF, 
  /* RLE: 026 Pixels @ 025,020*/ 26, 0xE0, 
  /* RLE: 003 Pixels @ 051,020*/ 3, 0xFF, 
  /* RLE: 048 Pixels @ 054,020*/ 48, 0xE0, 
  /* RLE: 003 Pixels @ 022,021*/ 3, 0xFF, 
  /* RLE: 009 Pixels @ 025,021*/ 9, 0xE0, 
  /* RLE: 006 Pixels @ 034,021*/ 6, 0xFF, 
  /* RLE: 011 Pixels @ 040,021*/ 11, 0xE0, 
  /* RLE: 003 Pixels @ 051,021*/ 3, 0xFF, 
  /* RLE: 047 Pixels @ 054,021*/ 47, 0xE0, 
  /* RLE: 004 Pixels @ 021,022*/ 4, 0xFF, 
  /* RLE: 009 Pixels @ 025,022*/ 9, 0xE0, 
  /* RLE: 006 Pixels @ 034,022*/ 6, 0xFF, 
  /* RLE: 012 Pixels @ 040,022*/ 12, 0xE0, 
  /* RLE: 003 Pixels @ 052,022*/ 3, 0xFF, 
  /* RLE: 046 Pixels @ 055,022*/ 46, 0xE0, 
  /* RLE: 003 Pixels @ 021,023*/ 3, 0xFF, 
  /* RLE: 012 Pixels @ 024,023*/ 12, 0xE0, 
  /* RLE: 004 Pixels @ 036,023*/ 4, 0xFF, 
  /* RLE: 012 Pixels @ 040,023*/ 12, 0xE0, 
  /* RLE: 003 Pixels @ 052,023*/ 3, 0xFF, 
  /* RLE: 046 Pixels @ 055,023*/ 46, 0xE0, 
  /* RLE: 003 Pixels @ 021,024*/ 3, 0xFF, 
  /* RLE: 012 Pixels @ 024,024*/ 12, 0xE0, 
  /* RLE: 004 Pixels @ 036,024*/ 4, 0xFF, 
  /* RLE: 012 Pixels @ 040,024*/ 12, 0xE0, 
  /* RLE: 003 Pixels @ 052,024*/ 3, 0xFF, 
  /* RLE: 046 Pixels @ 055,024*/ 46, 0xE0, 
  /* RLE: 003 Pixels @ 021,025*/ 3, 0xFF, 
  /* RLE: 012 Pixels @ 024,025*/ 12, 0xE0, 
  /* RLE: 004 Pixels @ 036,025*/ 4, 0xFF, 
  /* RLE: 012 Pixels @ 040,025*/ 12, 0xE0, 
  /* RLE: 003 Pixels @ 052,025*/ 3, 0xFF, 
  /* RLE: 046 Pixels @ 055,025*/ 46, 0xE0, 
  /* RLE: 003 Pixels @ 021,026*/ 3, 0xFF, 
  /* RLE: 012 Pixels @ 024,026*/ 12, 0xE0, 
  /* RLE: 004 Pixels @ 036,026*/ 4, 0xFF, 
  /* RLE: 012 Pixels @ 040,026*/ 12, 0xE0, 
  /* RLE: 003 Pixels @ 052,026*/ 3, 0xFF, 
  /* RLE: 046 Pixels @ 055,026*/ 46, 0xE0, 
  /* RLE: 003 Pixels @ 021,027*/ 3, 0xFF, 
  /* RLE: 012 Pixels @ 024,027*/ 12, 0xE0, 
  /* RLE: 004 Pixels @ 036,027*/ 4, 0xFF, 
  /* RLE: 012 Pixels @ 040,027*/ 12, 0xE0, 
  /* RLE: 003 Pixels @ 052,027*/ 3, 0xFF, 
  /* RLE: 046 Pixels @ 055,027*/ 46, 0xE0, 
  /* RLE: 003 Pixels @ 021,028*/ 3, 0xFF, 
  /* RLE: 012 Pixels @ 024,028*/ 12, 0xE0, 
  /* RLE: 004 Pixels @ 036,028*/ 4, 0xFF, 
  /* RLE: 012 Pixels @ 040,028*/ 12, 0xE0, 
  /* RLE: 003 Pixels @ 052,028*/ 3, 0xFF, 
  /* RLE: 046 Pixels @ 055,028*/ 46, 0xE0, 
  /* RLE: 004 Pixels @ 021,029*/ 4, 0xFF, 
  /* RLE: 011 Pixels @ 025,029*/ 11, 0xE0, 
  /* RLE: 004 Pixels @ 036,029*/ 4, 0xFF, 
  /* RLE: 012 Pixels @ 040,029*/ 12, 0xE0, 
  /* RLE: 003 Pixels @ 052,029*/ 3, 0xFF, 
  /* RLE: 047 Pixels @ 055,029*/ 47, 0xE0, 
  /* RLE: 003 Pixels @ 022,030*/ 3, 0xFF, 
  /* RLE: 011 Pixels @ 025,030*/ 11, 0xE0, 
  /* RLE: 004 Pixels @ 036,030*/ 4, 0xFF, 
  /* RLE: 011 Pixels @ 040,030*/ 11, 0xE0, 
  /* RLE: 003 Pixels @ 051,030*/ 3, 0xFF, 
  /* RLE: 048 Pixels @ 054,030*/ 48, 0xE0, 
  /* RLE: 003 Pixels @ 022,031*/ 3, 0xFF, 
  /* RLE: 011 Pixels @ 025,031*/ 11, 0xE0, 
  /* RLE: 004 Pixels @ 036,031*/ 4, 0xFF, 
  /* RLE: 011 Pixels @ 040,031*/ 11, 0xE0, 
  /* RLE: 003 Pixels @ 051,031*/ 3, 0xFF, 
  /* RLE: 048 Pixels @ 054,031*/ 48, 0xE0, 
  /* RLE: 004 Pixels @ 022,032*/ 4, 0xFF, 
  /* RLE: 010 Pixels @ 026,032*/ 10, 0xE0, 
  /* RLE: 004 Pixels @ 036,032*/ 4, 0xFF, 
  /* RLE: 010 Pixels @ 040,032*/ 10, 0xE0, 
  /* RLE: 004 Pixels @ 050,032*/ 4, 0xFF, 
  /* RLE: 049 Pixels @ 054,032*/ 49, 0xE0, 
  /* RLE: 003 Pixels @ 023,033*/ 3, 0xFF, 
  /* RLE: 010 Pixels @ 026,033*/ 10, 0xE0, 
  /* RLE: 004 Pixels @ 036,033*/ 4, 0xFF, 
  /* RLE: 010 Pixels @ 040,033*/ 10, 0xE0, 
  /* RLE: 003 Pixels @ 050,033*/ 3, 0xFF, 
  /* RLE: 050 Pixels @ 053,033*/ 50, 0xE0, 
  /* RLE: 004 Pixels @ 023,034*/ 4, 0xFF, 
  /* RLE: 007 Pixels @ 027,034*/ 7, 0xE0, 
  /* RLE: 008 Pixels @ 034,034*/ 8, 0xFF, 
  /* RLE: 007 Pixels @ 042,034*/ 7, 0xE0, 
  /* RLE: 004 Pixels @ 049,034*/ 4, 0xFF, 
  /* RLE: 051 Pixels @ 053,034*/ 51, 0xE0, 
  /* RLE: 004 Pixels @ 024,035*/ 4, 0xFF, 
  /* RLE: 006 Pixels @ 028,035*/ 6, 0xE0, 
  /* RLE: 008 Pixels @ 034,035*/ 8, 0xFF, 
  /* RLE: 006 Pixels @ 042,035*/ 6, 0xE0, 
  /* RLE: 004 Pixels @ 048,035*/ 4, 0xFF, 
  /* RLE: 053 Pixels @ 052,035*/ 53, 0xE0, 
  /* RLE: 004 Pixels @ 025,036*/ 4, 0xFF, 
  /* RLE: 018 Pixels @ 029,036*/ 18, 0xE0, 
  /* RLE: 004 Pixels @ 047,036*/ 4, 0xFF, 
  /* RLE: 055 Pixels @ 051,036*/ 55, 0xE0, 
  /* RLE: 004 Pixels @ 026,037*/ 4, 0xFF, 
  /* RLE: 016 Pixels @ 030,037*/ 16, 0xE0, 
  /* RLE: 005 Pixels @ 046,037*/ 5, 0xFF, 
  /* RLE: 056 Pixels @ 051,037*/ 56, 0xE0, 
  /* RLE: 005 Pixels @ 027,038*/ 5, 0xFF, 
  /* RLE: 012 Pixels @ 032,038*/ 12, 0xE0, 
  /* RLE: 006 Pixels @ 044,038*/ 6, 0xFF, 
  /* RLE: 058 Pixels @ 050,038*/ 58, 0xE0, 
  /* RLE: 006 Pixels @ 028,039*/ 6, 0xFF, 
  /* RLE: 008 Pixels @ 034,039*/ 8, 0xE0, 
  /* RLE: 006 Pixels @ 042,039*/ 6, 0xFF, 
  /* RLE: 061 Pixels @ 048,039*/ 61, 0xE0, 
  /* RLE: 018 Pixels @ 029,040*/ 18, 0xFF, 
  /* RLE: 064 Pixels @ 047,040*/ 64, 0xE0, 
  /* RLE: 014 Pixels @ 031,041*/ 14, 0xFF, 
  /* RLE: 069 Pixels @ 045,041*/ 69, 0xE0, 
  /* RLE: 008 Pixels @ 034,042*/ 8, 0xFF, 
  /* RLE: 598 Pixels @ 042,042*/ 254, 0xE0, 254, 0xE0, 90, 0xE0, 


  0};  /* 334 for 4000 pixels */

GUI_CONST_STORAGE GUI_BITMAP bmbmp_about = {
  80, /* XSize */
  50, /* YSize */
  80, /* BytesPerLine */
  GUI_COMPRESS_RLE8, /* BitsPerPixel */
  acbmp_about,  /* Pointer to picture data (indices) */
  &Palbmp_about  /* Pointer to palette */
 ,GUI_DRAW_RLE8
};

/* *** End of file *** */
