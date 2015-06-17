
#include<stdio.h>
main(){
char src[30]="leelanareshnaresholla";
char sstr[10]="naresh";
char temp[10];
printf("src=%s\n",src);
printf("src=%p\n",src);
int i,cnt=0;
int *addr;
  for(i=0;src[i];i++){
        if(cnt==1){
             break;
                }
        else{
           if(src[i]==sstr[0]){
     		   int k=0;
                   addr=&src[i];     
                   for(k=0;k<strlen(sstr);k++)
                       temp[k]=src[i+k];
                        //printf("temp[%d]=%c\n",k,temp[k]);
                    
  	        temp[k]='\0';
              if(!strcmp(temp,sstr)){
               cnt=cnt+1;
  	       printf("address=%p\n",addr);
               }
           }        	
        }
  }
}
