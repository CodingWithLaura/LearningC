/* 
 * This file is part of the fifo distribution (https://github.com/CodingWithLaura/LearningC/fifo).
 * Copyright (c) 2015 Liviu Ionescu.
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>
#include "lifo_c.h"

int main() {
  Lifo_c* mein_lifo_c_buffer = newLifo_c();

  char text1[16] = "foo";
  char text2[16] = "baa";
  char text3[16] = "baa";
  char text4[16] = "baa2";
  char text5[16] = "baa3";

  draufpacken(mein_lifo_c_buffer, text1);
  draufpacken(mein_lifo_c_buffer, text2);
  draufpacken(mein_lifo_c_buffer, text3);
  draufpacken(mein_lifo_c_buffer, text4);
  draufpacken(mein_lifo_c_buffer, text5);

  while(!isEmpty(mein_lifo_c_buffer)) {
    char* text = wegnehmen(mein_lifo_c_buffer);
    printf("%s\n", text);
    free(text);
  }
  delLifo_c(mein_lifo_c_buffer);
  return 0;
}
