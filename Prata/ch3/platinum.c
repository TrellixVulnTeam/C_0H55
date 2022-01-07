/*
 * File:platinum.c
 * ---------------
 * This program determines the user weight in platinum.
 */


#include <stdio.h>

int main()  {
   float weight;    /* user weight */
   float value;     /* platiunum equivalent */


   printf("Are you worth your weight in platinum?\n");
   printf("Let's check it out.\n");
   printf("Please enter your weight in pounds:  ");


   /* get input from the user  */
   scanf("%f", &weight);

   /* assume platinum is $1700 per ounce */
   /* 14.5833 converts pounds avd. to ounces troy */

   value = 1700.0 * weight * 14.5833;

   printf("Your weight in platinum is worth $%.2f.\n", value);
   printf(" Your are easily worth that! If Platinum prices drop,\n");
   printf("eat more to maintain your value.\n");

   return 0;

}

