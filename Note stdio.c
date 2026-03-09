int fprintf(FILE * restrict stream, const char * restrict format, ...);

   #include <stdio.h>
   #include <stdlib.h>

   int main()
   {
      FILE * fp;

      fp = fopen ("file.txt", "w+");   //創一個文件檔file.txt
      fprintf(fp, "%s %s %s %d", "We", "are", "in", 2014);  //file.txt 裡面有內容We are in 2004// //fscanf()，從檔案輸入
      
      fclose(fp);
      
      return(0);
   }
//出處：https://www.runoob.com/cprogramming/c-function-fprintf.html

int fscanf(FILE * restrict stream, const char * restrict format, ...);

   #include <stdio.h>
   #include <stdlib.h>


   int main()
   {
      char str1[10], str2[10], str3[10];
      int year;
      FILE * fp;

      fp = fopen ("file.txt", "w+");   //創一個文件檔file.txt
      fputs("We are in 2014", fp);
      
      rewind(fp);
      fscanf(fp, "%s %s %s %d", str1, str2, str3, &year); //可以對file.txt輸入要輸入的東西
      
      printf("Read String1 |%s|\n", str1 );
      printf("Read String2 |%s|\n", str2 );
      printf("Read String3 |%s|\n", str3 );
      printf("Read Integer |%d|\n", year );

      fclose(fp);
      
      return(0);
   }
//出處：https://www.runoob.com/cprogramming/c-function-fscanf.html

int printf(const char * restrict format, ...);

   #include<stdio.h>
   int main (){
      
      printf("Hello World!"); //印出Hello World!
      
      return 0;
   }

//出處：https://www.runoob.com/cprogramming/c-function-fscanf.html

int scanf(const char * restrict format, ...);

   #include<stdio.h>
   int main(void) 
   { 
      int a,b,c; 
   
      printf("請輸入三個數字：");
      scanf("%d%d%d",&a,&b,&c); //將a,b,c存在記憶體內   //scanf()，從控制檯（鍵盤）輸入
      printf("%d,%d,%d\n",a,b,c);
      return 0; 
   }
//出處：https://www.runoob.com/cprogramming/c-function-scanf.html

int sscanf(const char * restrict s, const char * restrict format, ...);

   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>

   int main()
   {
      int day, year;
      char weekday[20], month[20], dtm[100];

      strcpy( dtm, "Saturday March 25 1989" );
      sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year ); //sscanf()，從字串輸入

      printf("%s %d, %d = %s\n", month, day, year, weekday );
      
      return(0);
   }                                                          
//出處：https://www.runoob.com/cprogramming/c-function-sscanf.html                                                     
                                                               
int puts(const char *str)

#include <stdio.h>
#include <string.h>

int main()
{
   char str1[15];
   char str2[15];

   strcpy(str1, "RUNOOB1");
   strcpy(str2, "RUNOOB2");

   puts(str1);       //印出str1
   puts(str2);       //印出str2
   
   return(0);
}

//出處:https://www.runoob.com/cprogramming/c-function-puts.html

int putchar(int char)

#include <stdio.h>

int main ()
{
   char ch;

   for(ch = 'A' ; ch <= 'Z' ; ch++) {
      putchar(ch);                           //印出ch的字符
   }
   
   return(0);
}

//出處:https://www.runoob.com/cprogramming/c-function-putchar.html


