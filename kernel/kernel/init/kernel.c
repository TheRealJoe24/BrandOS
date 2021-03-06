/**
 * BrandOS
 * file: kernel.c  Copyright (C) 2021  Brandon Stevens
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <kernel/brandos.h>
#include <printk.h>
#include <drivers/keyboard.h>

void kmain( void ) {
    tty_initialize();

    /**
     * initalize architecture specific code
     * such as GDT and IDT for x86.
     */
    arch_init();

    /* initialize keyboard driver */
    initialize_keyboard();

    for (;;) {
        asm("hlt");
        char s = read_next();
        if (s) tty_putchar(s);
    }
}
