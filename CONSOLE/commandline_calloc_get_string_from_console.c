#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define METHOD1 	        //using do while
//#define METHOD2		//using  while only  press ENTER in CONSOLE
//#define METHOD3		//if mmore than one line  press until * stored in buffer

//in console do while is the best option 
int
main(){
	int i=0;
	char* console_char_buffer=(char *)calloc(sizeof(console_char_buffer),sizeof(char));
	//char console_char_buffer[100]=calloc(sizeof(console_char_buffer),sizeof(char));
#ifdef METHOD1
	do{
		scanf("%c",(console_char_buffer+ i++));
	}while(console_char_buffer[i-1]!='\n');
	console_char_buffer[i]='\0';
	i=0;
	//while(console_char_buffer[i])
	printf("%s\n",console_char_buffer);
#endif

#ifdef METHOD2
	i=0;
//	scanf("%c",&console_char_buffer[i++]);
	while(scanf("%c",&console_char_buffer[i++]),console_char_buffer[i-1]!='\n')   
       //checking i-1 =0 i=2-1=1 checked  i=2 checked
		scanf("%c",&console_char_buffer[i++]); //i=1   i=2 taken       
		console_char_buffer[i-1]='\0';
	printf("%s\n",console_char_buffer);
#endif

#ifdef METHOD3
	i=0;
	scanf("%c",&console_char_buffer[i++]);
	while(console_char_buffer[i-1]!='*')   
       //checking i-1 =0 i=2-1=1 checked  i=2 checked
		scanf("%c",&console_char_buffer[i++]); //i=1   i=2 taken       
		console_char_buffer[i-1]='\0';
	printf("%s\n",console_char_buffer);
#endif
}

