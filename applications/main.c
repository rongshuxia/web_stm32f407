/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-11-06     misonyo   first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>


int main(void)
{
    while (1)
    {
			rt_kprintf("webnet serial port print success !\n");
      rt_thread_delay(1000);
    }


}
