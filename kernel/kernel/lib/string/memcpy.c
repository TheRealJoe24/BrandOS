/**
 * BrandOS
 * file: memcpy.c  Copyright (C) 2021  Brandon Stevens
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


#include <string.h>

void* memcpy(void * _dst, const void * _src, const size_t nbytes) {
    unsigned char* dst = (unsigned char*) _dst;
	const unsigned char* src = (const unsigned char*) _src;
	for (size_t i = 0; i < nbytes; i++)
		dst[i] = src[i];
	return _dst;
}
