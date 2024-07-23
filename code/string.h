#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

/*-----------------memchr------------------*/
void *My_memchr(const void *str, char c, unsigned int n);
/*-----------------memcmp------------------*/
int My_memcmp(const void *str1, const void *str2, unsigned int n);
/*-----------------memcpy------------------*/
void *my_memcpy(void *dest_str, const void * src_str, unsigned int n);
/*-----------------memmove------------------*/
void *My_memmove(void *dest_str, const void *src_str, unsigned int numBytes);
/*-----------------memset------------------*/
void *My_memset(void *str, int c, unsigned int n);
/*-----------------strcat------------------*/
char *MY_strcat(char *dest_str, const char *src_str);
/*-----------------strncat------------------*/
char *MY_strncat(char *dest, const char *src, unsigned int n);
/*-----------------strchr------------------*/
char *MY_strchr(const char *str, int search_str);
/*-----------------strcmp------------------*/
signed int MY_strcmp(const char *str_1, const char *str_2);
/*-----------------strncmp------------------*/
signed int MY_strncmp(const char *str1, const char *str2, unsigned int n);
/*-----------------strcoll------------------*/
int My_strcoll(const char *STRING_1, const char *STRING_2);
/*-----------------strcpy------------------*/
char *MY_strcpy(char *dest, const char *src);
/*-----------------strncpy------------------*/
char *MY_strncpy(char *dest, const char *src, unsigned int n);
/*-----------------strcspn------------------*/
int My_strcspn(const char *str1, const char *str2);
/*-----------------strlen------------------*/
unsigned int MY_strlen(const char *str);
/*-----------------strpbrk------------------*/
char *MY_strpbrk(const char *str1, const char *str2);
/*-----------------strrchr------------------*/
char *My_strrchr(const char *STRING, int character);
/*---------------------strspn--------------------*/
int My_strspn(const char *STRING_1, const char *STRING_2);
/*----------------------strstr---------------------*/
char *My_strstr(const char *haystack, const char *needle);
/*-----------------------strxfrm-------------------*/
int My_strxfrm(char *dest, const char *source, int NumOfBytes);

#endif // STRING_H_INCLUDED
