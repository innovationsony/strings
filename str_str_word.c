//searching a string from last char//
#include<stdio.h>
main(){
char src[30]="leelanareshbollanaresh";
char str[10]="naresh";
char temp[10];
int i,k=0;
int* addr;
printf("src=%p\n",src);

	for(i=(strlen(src)-1);i>=0;i--){
		if(src[i]==str[0] && k==0){
                         addr=&src[i];
			 strncpy(temp,(src+i),strlen(str));
                  	 printf("temp=%s\n",temp);
                  	 if(!strcmp(str,temp)){
                                k=k+1;
                        	printf("last occurence of str %s=%p\n",str,addr);
			}
                 }
         }
}
