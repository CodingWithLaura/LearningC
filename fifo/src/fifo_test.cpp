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
#include "fifo.h"

int main() {
  std::cout << "test" << std::endl << "huhu";
  Fifo mein_fifo_buffer;
  
  mein_fifo_buffer.dranflanschen("foo");

  mein_fifo_buffer.dranflanschen("baa");
  mein_fifo_buffer.dranflanschen("baa");
  mein_fifo_buffer.dranflanschen("baa2");
  mein_fifo_buffer.dranflanschen("baa3");
  

  while(!mein_fifo_buffer.empty()){
    std::string  meinstring = mein_fifo_buffer.abhabsen();
    printf("%s\n", meinstring.c_str());
  }
  return 0;
}
