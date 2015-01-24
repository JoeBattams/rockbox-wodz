/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 *
 * Copyright (C) 2015 Marcin Bukat
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#include <stdbool.h>
#include "power.h"
#include "usb_core.h"   /* for usb_charging_maxcurrent_change */
#include "gpio-atj213x.h"

void power_off(void)
{
    atj213x_gpio_set(GPIO_PORTA, 13, 0);
    while(1);
}

void power_init(void)
{
    atj213x_gpio_setup(GPIO_PORTA, 13, GPIO_OUT);
    atj213x_gpio_set(GPIO_PORTA, 13, 1);
}

bool tuner_power(bool status)
{
    (void) status;
    return true;
}

unsigned int power_input_status(void)
{
    return (usb_detect() == USB_INSERTED) ? POWER_INPUT_MAIN_CHARGER : POWER_INPUT_NONE;
}

bool charging_state(void)
{
   return (usb_detect() == USB_INSERTED);
}
