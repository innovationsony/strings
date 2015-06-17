#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){

char src[100]="my name is naresh my name is also leela";
char req[10]="naresh";
char temp[50]={'\0'};
int i,j;
int k=0;
int len=strlen(req);
int p;
printf("%d\n",len);
	for(i=0;src[i];i++){
            
		if(src[i]==req[0]){
		                 //backup i value		
			for(j=0;j<(len);j++){
				while(src[i+j]==req[j]){
					printf("src[%d]= %c\treq[%d]===%c=     \n",i+j,src[i+j],j,req[j]);
				}
				else{
				           printf("string not matched\n");
					  break()
				}
				
			}
			printf("%d\n",j);
			if(j==len){
			printf("%d\n",j);
			printf(" string matched &src[i]=%p\t src[i]=%c\n",(&src[i]),src[i]);
			}
		}

	}
}
