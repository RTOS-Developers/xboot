/*
 * init/version.c
 *
 * Copyright (c) 2007-2008  jianjun jiang <jerryjianjun@gmail.com>
 * official site: http://xboot.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */


#include <configs.h>
#include <default.h>
#include <xboot.h>
#include <vsprintf.h>
#include <xboot/log.h>
#include <xboot/printk.h>
#include <console/console.h>
#include <version.h>

/*
 * print xboot banner
 */
void xboot_banner(void)
{
	printk("xboot version: %ld.%ld%ld (%s - %s) for %s\r\n", XBOOT_MAJOY, XBOOT_MINIOR, XBOOT_PATCH, __DATE__, __TIME__, __MACH__);
}

/* xboot's character logo.
 *         _
 *        | |                  _        __0
 *   _  _ | |___ _____ _____ _| |_    _  /\_
 *  \ \/ /|  _  |  _  |  _  |_   _|    \/\
 *   )  ( | |_| | |_| | |_| | | |________/_____
 *  /_/\_\|_____|_____|_____| |________________|
 *
 */
static const char xboot[6][64] = {	"        _\r\n",
									"       | |                  _        __0\r\n",
									"  _  _ | |___ _____ _____ _| |_    _  /\\_\r\n",
									" \\ \\/ /|  _  |  _  |  _  |_   _|    \\/\\\r\n",
									"  )  ( | |_| | |_| | |_| | | |________/_____\r\n",
									" /_/\\_\\|_____|_____|_____| |________________|\r\n" };

/*
 * display xboot's character logo.
 */
void xboot_char_logo(x_u32 x0, x_u32 y0)
{
	x_u32 i, len;
	x_s32 w, h;
	x_s8 buf[64];

	if(!console_getwh(get_stdout(), &w, &h))
		return;

	if(x0 + 1 > w || y0 + 1 > h)
		return;

	for(i = 0; i < 6; i++)
	{
		len = strlen((x_s8*)&xboot[i][0]);
		if( len <= w-x0 )
			sprintf(buf, (x_s8*)("%s"), &xboot[i][0]);
		else
		{
			strncpy(buf, (x_s8*)&xboot[i][0], w-x0);
			buf[w-x0] = 0;
		}
		console_gotoxy(get_stdout(), x0, y0 + i);
		printk((const char *)buf);
	}
}
