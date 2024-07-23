#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"



int main()
{

       /*****************************************************************
           const char str1[] = "Welcome to Egypt";
           const char ch = 'c';

           char* result = (char*)My_memchr(str1, ch, sizeof(str1));

           if (result != NULL)
           {
               printf("'%c' found at position %i\n", ch, result - str1);
           }
           else
           {
               printf("'%c' not found in the string\n", ch);
           }
        ******************************************************************/

        /*****************************************************************
           char str1[] = "12345678901400345678";
           char str2[] = "1234567";

           int result = My_memcmp(str1, str2, 10);

           if (result < 0)
           {
               printf("First is less than second.\n");
           }
           else if (result == 0)
           {
               printf("First is equal to second.\n");
           }
           else
           {
               printf("First is greater than second.\n");
           }
        ******************************************************************/

        /*****************************************************************
            char first_str[100] = "Hello World!";
            char second_str[100] = "Welcome";

            printf("first_str: %s\n", first_str);
            printf("second_str: %s\n", second_str);

            my_memcpy(second_str ,first_str ,sizeof(first_str));
            printf("first_str: %s\n", first_str);
            printf("second_str: %s\n", second_str);
       ******************************************************************/

       /*****************************************************************
           char dest_str[] = "oldstring";
           const char src_str[]  = "newstring";
           printf("Before memmove dest = %s, src = %s\n", dest_str, src_str);
           My_memmove(dest_str, src_str, 9);
           printf("After memmove dest = %s, src = %s\n", dest_str, src_str);
       ******************************************************************/

      /*****************************************************************
            char str[50] = {"Welcome to Tutorialspoint"};
            printf(" %s \n", str);
            My_memset(str, '*', 25);
            printf(" %s \n", str);
      ******************************************************************/






}
