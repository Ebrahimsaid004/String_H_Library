/*
**********************************************
@file    : string.c
@version : 1.4
@author  : Ebrahim Elgaml
@brief   : Implement in string.h
**********************************************
*/

#include <stdio.h>
#include "string.h"


/*-----------------memchr------------------*/
void *My_memchr(const void *str, char c, unsigned int n)
{
    unsigned char *ptr = str;

    if(NULL == str)
    {
        printf("Invalid Processes \n");

    }
    else
    {
            while(n--)
            {
                if((*ptr) == c)
                {
                    break;
                }
                else if((*ptr) != c)
                {
                    ptr++;
                }
                else
                {
                    ptr = NULL;
                }
            }
    }
    return ptr;


}

/*-----------------memcmp------------------*/
int My_memcmp(const void *str1, const void *str2, unsigned int n)
{
    unsigned char *ptr_1 = str1;
    unsigned char *ptr_2 = str2;
    signed int ret =0;

    if((NULL == str1)||(NULL == str2))
    {
        printf("Invalid Processes.. \n");

    }
    else
    {
        while(n --)
        {
            if((*ptr_1) > (*ptr_2))
            {
                ret =1;
                break;
            }
            else if((*ptr_1) < (*ptr_2))
            {
                ret =-1;
                break;
            }
            else
            {
                ptr_1++;
                ptr_2++;
                continue;
            }



        }
        return ret;

    }

}

/*-----------------memcpy------------------*/
void *my_memcpy(void *dest_str, const void *src_str, unsigned int n)
{

    unsigned char *ptr_1 = dest_str;
    unsigned char *ptr_2 = src_str;

    if((NULL == dest_str)||(NULL == src_str))
    {
        printf("Invalid Processes.. \n");

    }
    else
    {

        while(n--)
        {

            *ptr_1 = *ptr_2;
             ptr_1++;
             ptr_2++;

        }

    }

}

/*-----------------memmove------------------*/
void *My_memmove(void *dest_str, const void *src_str, unsigned int n)
{
    unsigned char *ptr_1 = dest_str;
    unsigned char *ptr_2 = src_str;

    if((NULL == dest_str)||(NULL == src_str))
    {
        printf("Invalid Processes.. \n");

    }
    else
    {

        while(n--)
        {

            *ptr_1 = *ptr_2;
             ptr_1++;
             ptr_2++;

        }

    }


}

/*-----------------memset------------------*/
void *My_memset(void *str, int c, unsigned int n)
{
    unsigned char *ptr = str;

    if(NULL == str)
    {
        printf("Invalid Processes.. \n");

    }
    else
    {
        while(n--)
        {

            *ptr = c;
            ptr++;

        }


    }

}

/*-----------------strcat------------------*/
char *MY_strcat(char *dest_str, const char *src_str)
{
    char *str_D = dest_str;
    char *str_S = src_str;
    unsigned int Number_D =0;
    unsigned int Number_S =0;

    if((NULL == dest_str)||(NULL == src_str))
    {
        printf("Invalid Processes.. \n");

    }
    else
    {
        while('\0' !=  *dest_str++)
        {
            Number_D++;

        }

        str_D = dest_str + Number_D;

        while('\0' !=  *src_str++)
        {
            Number_S++;

        }

        while(Number_S--)
        {
            *dest_str++ = *src_str++;
        }
        *str_D = '\0';
    }
    return str_D;
}

/*-----------------strncat------------------*/
char *MY_strncat(char *dest, const char *src, unsigned int n)
{
    char *str_D = dest;
    char *str_S = src;
    unsigned int Number_D =0;

    if((NULL == dest)||(NULL == src))
    {
        printf("Invalid Processes.. \n");

    }
    else
    {
        while('\0' !=  *dest++)
        {
            Number_D++;

        }

        str_D = dest + Number_D;

        while(n--)
        {
            *dest++ = *src++;
        }
        *str_D = '\0';
    }
    return str_D;

}

/*-----------------strchr------------------*/
char *MY_strchr(const char *str, int search_str)
{
    char *ptr = str;
    unsigned int Number_S =0;

    if((NULL == str))
    {
        printf("Invalid Processes.. \n");

    }
    else
    {
        while('\0' != *str++)
        {
            Number_S++;
        }

        while(Number_S)
        {
            if(*ptr == search_str)
            {
                return ptr;
            }
            else
            {
                Number_S--;
            }

        }

        return NULL;


    }

}

/*-----------------strcmp------------------*/
signed int MY_strcmp(const char *str_1, const char *str_2)
{
    char *ptr_1 = str_1;
    char *ptr_2= str_2;
    unsigned int Number_1 =0;
    unsigned int Number_2 =0;
    unsigned int Result =0;

    if((NULL == str_1)||(NULL == str_2))
    {
        printf("Invalid Processes.. \n");

    }
    else
    {
        while('\0' != *str_1++)
        {
            Number_1++;

        }
        while('\0' != *str_2++)
        {
            Number_2++;

        }
        if(Number_1 == Number_2)
        {
            while(Number_1--)
            {
                if(*ptr_1++ == *ptr_2++)
                {
                    Result =0;
                }
                else if(*ptr_1++ > *ptr_2++)
                {
                    Result =1;

                }
                else
                {
                    Result =-1;
                }
            }

        }
        else if(Number_1 > Number_2)
        {
            Result =1;
        }
        else
        {
            Result =-1;
        }

    }
    return Result;

}

/*-----------------strncmp------------------*/
signed int MY_strncmp(const char *str_1, const char *str_2, unsigned int n)
{
    char *ptr_1 = str_1;
    char *ptr_2= str_2;
    unsigned int Number_1 =0;
    unsigned int Number_2 =0;
    unsigned int Result =0;

    if((NULL == str_1)||(NULL == str_2))
    {
        printf("Invalid Processes.. \n");

    }
    else
    {
        while(n--)
        {
            while('\0' != *str_1++)
            {
                Number_1++;

            }
            while('\0' != *str_2++)
            {
                Number_2++;

            }
            if(Number_1 == Number_2)
            {
                while(Number_1--)
                {
                    if(*ptr_1++ == *ptr_2++)
                    {
                        Result =0;
                    }
                    else if(*ptr_1++ > *ptr_2++)
                    {
                        Result =1;

                    }
                    else
                    {
                        Result =-1;
                    }
                }

            }
            else if(Number_1 > Number_2)
            {
                Result =1;
            }
            else
            {
                Result =-1;
            }

        }
    }
    return Result;
}

/*-----------------strcoll------------------*/
int My_strcoll(const char *STRING_1, const char *STRING_2)
{

    char *String_1 = STRING_1;
    char *String_2 = STRING_2;
    int Return_Value = 0; //Assume equality

    if((NULL == STRING_1) || (NULL == STRING_2))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        if(STRING_1 == STRING_2)
        {
            Return_Value = 0;
        }
        else
        {
            if('\0' == (*String_1) && ('\0' != (*String_2)))
            {
                Return_Value = -1;
            }
            else  if('\0' == (*String_2) && ('\0' != (*String_2)))
            {
                Return_Value = 1;
            }
            else if(('\0' == (*String_1)) && ('\0' == (*String_2)))
            {
                Return_Value = 0;
            }
            else
            {
                while(('\0' != (*String_1++)) && ('\0' != (*String_2++)))
                {
                    if(*String_1 > *String_2)
                    {
                        Return_Value = 1;
                        break;
                    }
                    else if(*String_1 < *String_2)
                    {
                        Return_Value = -1;
                        break;
                    }
                    else
                    {
                        Return_Value = 0;
                    }
                }
            }
        }
    }

    return Return_Value;
}

/*-----------------strcpy------------------*/
char *MY_strcpy(char *dest, const char *src)
{
    char *ptr_1 = dest;
    char *ptr_2 = src;
    unsigned int Calc_N =0;

    if((NULL == dest) || (NULL == src))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        while('\0' != *src++)
        {
            Calc_N++;
        }

        while(Calc_N--)
        {
            *ptr_1++ = *ptr_2++;
        }

    }

    *ptr_1 = '\0';
    return ptr_1;

}

/*-----------------strncpy------------------*/
char *MY_strncpy(char *dest, const char *src, unsigned int n)
{
    char *ptr_1 = dest;
    char *ptr_2 = src;

    if((NULL == dest) || (NULL == src))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {

        while(n--)
        {
            *ptr_1++ = *ptr_2++;
        }

    }

    *ptr_1 = '\0';
    return ptr_1;
}

/*-----------------strcspn------------------*/
int My_strcspn(const char *str1, const char *str2)
{
    char *ptr_1 = str1;
    char *ptr_2 = str2;
    int Num_of_Char_of_String_1 = 0;
    int Num_of_Char_of_String_2 = 0;

    if((NULL == str1) || (NULL == str2))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        while('\0' != *ptr_1)
        {
            ptr_1++;
            Num_of_Char_of_String_1++;
        }
        ptr_1 = str1;
        while('\0' != *ptr_2)
        {
            ptr_2++;
            Num_of_Char_of_String_2++;
        }
        ptr_2 = str2;
        for(int String1_Counter = 0; String1_Counter < Num_of_Char_of_String_1; String1_Counter++)
        {
            for(int String2_Counter = 0; String2_Counter < Num_of_Char_of_String_2; String2_Counter++)
            {
                if(*ptr_1 = *ptr_2)
                {
                    return ptr_1-str1;
                }
                else
                {
                    ptr_2++;
                }

            }

            ptr_1++;

        }
    }

    return ptr_1-str1;
}

/*-----------------strlen------------------*/
unsigned int MY_strlen(const char *str)
{
    char *ptr = str;
    unsigned int Leng_s =0;

    if(NULL == str)
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        while('\0' != *ptr++)
        {
            Leng_s++;
        }
    }

    return Leng_s;
}

/*-----------------strpbrk------------------*/
char *MY_strpbrk(const char *str1, const char *str2)
{
    char *ptr_1 = str1;
    char *ptr_2 = str2;
    int NumCharString_1 = MY_strlen(ptr_1);
    int NumCharString_2 = MY_strlen(ptr_2);

    if((NULL == str1) || (NULL == str2))
    {
        printf("Failed due to NULL Pointer..!!\n");
        ptr_1 = NULL;
    }
    else
    {
        for(int Counter_1 = 0; Counter_1 < NumCharString_1; Counter_1++)
        {
            int flag = 0; //Assume 0 is not equal
            for(int Counter_2 = 0; Counter_2 < NumCharString_2; Counter_2++)
            {
                if(*ptr_1 == *ptr_2)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    flag = 0;
                    ptr_2++;
                }
            }
            if(flag)
            {
                break;
            }
            else
            {
                ptr_2 = str2;
                ptr_1++;
                continue;
            }
        }
    }

    return ptr_1;
}
/*-----------------strrchr------------------*/
char *My_strrchr(const char *STRING, int character)
{
    char *TempString = STRING;
    char *RetString = NULL;
    int NumOfChar = MY_strlen(STRING);
    int flag = 0; //Assume not found

    if(NULL == STRING)
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        for(int Counter = 0; Counter < NumOfChar; Counter++)
        {
            if((char)character == *TempString)
            {
                RetString = TempString++;
                flag = 1;
            }
            else
            {
                TempString++;
            }
        }
        if(0 == flag)
        {
            RetString = NULL;
        }
    }

    return RetString;
}
/*---------------------strspn--------------------*/
int My_strspn(const char *STRING_1, const char *STRING_2)
{
    int length = 0;
    char *string_1 = STRING_1;
    char *string_2 = STRING_2;
    char *TempString_2 = NULL;

    if((!STRING_1) || (!STRING_2))
    {
        printf("Failed due to NULL Pointer .. !!\n");
    }
    else
    {
        for(int counter1 = 0; counter1 < MY_strlen(STRING_1); counter1++)
        {
            if('\0' == string_1)
            {
                break;
            }

            for(int counter2 = 0; counter2 < MY_strlen(STRING_2); counter2++)
            {
                if('\0' == *string_2)
                {
                    break;
                }
                if(*string_1 == *string_2++)
                {
                    length++;
                    string_1++;
                    TempString_2 = string_2;
                }
                else
                {
                }
            }

            if(!TempString_2)
            {
                string_2 = STRING_2;
                string_1++;
            }
            else
            {
                string_2 = TempString_2;
            }
        }
    }

    return length;
}
/*----------------------strstr---------------------*/
char *My_strstr(const char *haystack, const char *needle)
{
    char *RetValue = NULL;
    char *string_1 = haystack;
    char *string_2 = needle;
    int NumOfString_1 = MY_strlen(haystack);
    int NumOfString_2 = MY_strlen(needle);
    char *TempPtr = NULL;
    short flag = 0;

    if((!haystack) || (!needle))
    {
        RetValue = NULL;
    }
    else
    {
        for(int Counter = 0; Counter < NumOfString_1; Counter++)
        {
            if(*string_2 == *string_1)
            {
                flag++;
                TempPtr = string_1;
            }
            string_1++;
        }

        if(!TempPtr)
        {
            RetValue = NULL;
        }
        else
        {
            RetValue = TempPtr;
            TempPtr++;
            string_2++;
            for(int Counter = 1; Counter < NumOfString_2; Counter++)
            {
                if(*string_2 != *TempPtr)
                {
                    RetValue = NULL;
                    break;
                }
                else
                {
                    TempPtr++;
                    string_2++;
                }
            }
        }
    }

    return RetValue;
}
/*-----------------------strxfrm-------------------*/
int My_strxfrm(char *dest, const char *source, int NumOfBytes)
{
    int len = 0;

    if((!dest) || (!source) || (!NumOfBytes))
    {
        len = 0;
    }
    else
    {
        while('\0' != *source)
        {
            *dest++ = *source++;
            len++;
        }
    }

    *dest = '\0';

    return len;
}
