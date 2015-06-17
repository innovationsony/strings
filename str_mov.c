//wac for character elinination in a string
//only one i variable cant move all the with i as 2 reference so j had taken
#include<stdio.h>
main(){
char s[20]="in taao ares hnar sh";
char d[20];
char *ptr;
int i=0,j=0,k=0,sp=0;
//sp=strlen
for(i=k;s[i]!=0;i++){
	if(s[i]==' '){
          //k=i+1;
         } 
        else {
              d[j++]=s[i];      
         } 
}
d[j]=0;//`'\0';
	printf("s=%s\n",s);
	printf("d=%s\n",d);
	printf("d=%p\tptr=%p\n",s,ptr);
}
