#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define METHOD1                 //using do while
main(int argc,char **argv){
if(argc<2)
	printf("error\n");
        int i=0;
        char* console_char_buffer=(char *)calloc(sizeof(console_char_buffer),sizeof(char));
#ifdef METHOD1
        do{
             scanf("%c",(console_char_buffer+ i++));
          }while(console_char_buffer[i-1]!='\n');
        console_char_buffer[i]='\0';
        i=0;
        //while(console_char_buffer[i])
        printf("%s\n",console_char_buffer);
#endif
}
