//FILE to get the string data

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv ){

char *src_file=argv[1];
char *dst_file=argv[2];
FILE *fp=fopen(src_file,"r+");

char string[200];
char line_buffer[200];
char file_buffer[500];
char ch;
//formation of a line
int i=0;
scanf("%c",&line_buffer[i++]);
while(line_buffer[i-1]!='*')
	scanf("%c",&line_buffer[i++]);
	line_buffer[i-1]='\0';
printf("%s\n",line_buffer);
for(i=0;line_buffer[i]!='\n';i++)
printf("%c",line_buffer[i]);

}
