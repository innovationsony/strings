//DOUBLE CHAR IDENTIFICATION
//1.first taken line
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
int i;
char *ptr;
char str[100]="leellanaresh  dfsgk dfgkj  fgsddd";
		printf("str=%p\n",str);
char *dupstr=str;
for(i=0;str[i];i++){
	ptr=strchr(dupstr,'e');
	if(*(ptr+1)=='e'){
		printf("found@=%p\n",ptr);
		dupstr=ptr+2;
		}
	else
		dupstr=ptr+1;
	}
}
