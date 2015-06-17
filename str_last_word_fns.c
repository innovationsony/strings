//searching a string from last char//
#include<stdio.h>
main(){
char src[30]="leelanarshbollanareshnareh";
char str[10]="naresh";
char temp[10];
int k=0;
int* addr;
 printf("src=%p\n",src);
        while(strchr(src,str[0])){
                 addr=strrchr(src,str[0]);
                 strncpy(temp,addr,strlen(str));
                       if(!(strcmp(str,temp))){ 
                            //printf("temp=%s\n",temp);
                            printf("occurence of string from last is at addr=%p\n",addr); 
                            k=k+1;             
                            break;
                       }
//   	       	          printf("string length (strlen(str)-(strlen(temp)))=%d\n",(strlen(src)-strlen(temp)));
                           strncpy(src,src,((strlen(src))-(strlen(temp))));
                           src[strlen(src)-(strlen(temp))]='\0';
 //			  printf("src=%s\n",src);
        }
        if(k) printf("found\n"); 
         else printf("not found\n");
}

