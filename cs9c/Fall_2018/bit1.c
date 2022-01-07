/*
 * File: bit1.c 
 * ------------
 * This program demonstrates bitwise operator AND.
 */


#include <stdio.h>

int main() {
   int c1, c2;

   c1 = 0x45;
   c2 = 0x71;

   printf("Result of %x & %x = %x\n", c1, c2, (c1 & c2));
  
   return 0;
  
}
