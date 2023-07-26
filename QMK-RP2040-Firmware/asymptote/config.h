/*
Copyright 2021 Noah Kiser (contact@kiserdesigns.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H


#define MATRIX_ROWS 7
#define MATRIX_COLS 6


#define MATRIX_ROW_PINS { GP4, GP29, GP2, GP0, GP1, GP6, GP12 }
#define MATRIX_COL_PINS { GP26, GP27, GP3, GP28, GP11, GP7 }


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#endif
