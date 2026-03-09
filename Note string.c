void *memset(void *str, int c, size_t n)

#include <stdio.h>
#include <string.h>
 
int main ()
{
   char str[50];
 
   strcpy(str,"This is string.h library function");
   puts(str);
 
   memset(str,'$',7);//將str長度為7的部分設為$
   puts(str);
   
   return(0);
}
//出處:https://www.runoob.com/cprogramming/c-function-memset.html

char *strcpy(char *dest, const char *src)

#include <stdio.h>
#include <string.h>
 
int main()
{
   char src[40];
   char dest[100];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is runoob.com");  //複製This is runoob.com到src
   strcpy(dest, src);   //複製src到dest
 
   printf("最终的目标字符串： %s\n", dest);
   
   return(0);
}

//出處:https://www.runoob.com/cprogramming/c-function-strcpy.html


char *strncpy(char *dest, const char *src, size_t n)

#include <stdio.h>
#include <string.h>
 
int main()
{
   char src[40];
   char dest[12];
  
   memset(dest, '\0', sizeof(dest));   //先把dest全部設為\0
   strcpy(src, "This is runoob.com");  //複製This is runoob.com到src
   strncpy(dest, src, 10);             //複製src長度10到dest
 
   printf("最终的目标字符串： %s\n", dest);
   
   return(0);
}

//出處:https://www.runoob.com/cprogramming/c-function-strncpy.html


int strncmp(const char *str1, const char *str2, size_t n)

#include <stdio.h>
#include <string.h>

int main ()
{
   char str1[15];
   char str2[15];
   int ret;


   strcpy(str1, "abcdef");                                              
   strcpy(str2, "ABCDEF");

   ret = strncmp(str1, str2, 4);          //比較前4個字符是否相符

   if(ret < 0)
   {     
      printf("str1 小于 str2");          //如果返回值 < 0，则表示 str1 小於 str2。
   }
   else if(ret > 0)
   {
      printf("str2 小于 str1");          //如果返回值 > 0，则表示 str1 大於 str2。
   }
   else
   {
      printf("str1 等于 str2");           //如果返回值 = 0，則表示 str1 等於 str2。
   }
   
   return(0);
}

//出處:https://www.runoob.com/cprogramming/c-function-strncmp.html


void *memchr(const void *str, int c, size_t n)

#include <stdio.h>
#include <string.h>
 
int main ()
{
   const char str[] = "http://www.runoob.com";
   const char ch = '.';
   char *ret;
 
   ret = (char*)memchr(str, ch, strlen(str));      //將長度為str的str分析是否有ch裡面的字符
 
   printf("|%c| 之后的字符串是 - |%s|\n", ch, ret);
 
   return(0);
}

//出處:https://www.runoob.com/cprogramming/c-function-memchr.html

int memcmp(const void *str1, const void *str2, size_t n)

#include <stdio.h>
#include <string.h>

int main ()
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);           //str1 -- 指向記憶體的指標。str2 -- 指向記憶體的指標。5要被比較的字節數
                                          
   if(ret > 0)
   {
      printf("str2 小于 str1");
   }
   else if(ret < 0)
   {
      printf("str1 小于 str2");
   }
   else
   {
      printf("str1 等于 str2");
   }
   
   return(0);
}

//出處:https://www.runoob.com/cprogramming/c-function-memcmp.html

void *memcpy(void *str1, const void *str2, size_t n)

#include <string.h>
 
int main ()
{
   const char src[50] = "http://www.runoob.com";
   char dest[50];
 
   memcpy(dest, src, strlen(src)+1);   //複製src到dest
   printf("dest = %s\n", dest);
   
   return(0);
}

#include <stdio.h>
#include<string.h>
 
int main()
 
{
  char *s="http://www.runoob.com";
  char d[20];
  memcpy(d, s+11, 6);      // 从第 11 個字符(r)開始複製，連續複製6個字符(runoob)
                           // 或者 memcpy(d, s+11*sizeof(char), 6*sizeof(char));
  d[6]='\0';
  printf("%s", d);
  return 0;
}

//出處:https://www.runoob.com/cprogramming/c-function-memcpy.html

