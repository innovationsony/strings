#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#define METHOD1 	//using do while
#define METHOD2		//using  while only
//in console do while is the best option 
int
main(){
	int i=0;
	char console_char_buffer[100];
#ifdef METHOD1
	do{
		scanf("%c",(console_char_buffer+ i++));
	}while(console_char_buffer[i-1]!='\n');
	console_char_buffer[i]='\0';
	i=0;
	while(console_char_buffer[i])
	printf("%c\n",console_char_buffer[i++]);
#endif

#ifdef METHOD2
	i=0;
	scanf("%c",&console_char_buffer[i++]);
	while(console_char_buffer[i-1]!='\n')          //checking i-1 =0 i=2-1=1 checked  i=2 checked
		scanf("%c",&console_char_buffer[i++]); //i=1   i=2 taken       
		console_char_buffer[i-1]='\0';
	printf("%s\n",console_char_buffer);
#endif
}

