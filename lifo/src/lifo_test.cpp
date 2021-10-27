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

#include <iostream>
#include "lifo.h"

int main() {

  Lifo mein_lifo_buffer;
  
  mein_lifo_buffer.draufpacken("foo");

  mein_lifo_buffer.draufpacken("baa");
  mein_lifo_buffer.draufpacken("baa");
  mein_lifo_buffer.draufpacken("baa2");
  mein_lifo_buffer.draufpacken("baa3");
  

  while(!mein_lifo_buffer.isEmpty()){
    std::string  meinstring = mein_lifo_buffer.wegnehmen();
    printf("%s\n", meinstring.c_str());
  }
  return 0;
}
