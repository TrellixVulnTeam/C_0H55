/*
 * File: strings.c
 * ---------------
 * This program requests inputs of two strings, then demonstrates
 * the four string functions with them.
 */

#include <string.h>
#include <stdio.h>

int main() {
   char str1[80], str2[80];
   int i;

   printf("Enter the first string: ");
   gets(str1);
   printf("Enter the second string: ");
   gets(str2);

   /* see how long the strings are */
   printf("%s is %d chars long\n", str1, strlen(str1));
   printf("%s is %d chars long\n", str2, strlen(str2));
  
   /* Compare the strings */
   i = strcmp (str1, str2); 
   if (!i) {
     printf("The strings are equal. \n");
   } else if (i < 0) {
      printf("%s is less than %s\n", str1, str2);
   } else { 
      printf("%s is greater than %s\n", str1, str2);
   }
          
   /* Concatenate str2 to end of str1 if there enough room */
   if (strlen(str1)  + strlen(str2) <  80)  {
     strcat (str1, str2);
     printf("%s\n ", str1);
   }

   /* copy str2 to str1 */
   strcpy (str1, str2);
   printf("%s %s\n ", str1, str2);

   return 0;
    
}



