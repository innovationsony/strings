#include<stdio.h>
main(){

 char src[20]="leelanareshbolla";
 char dest[20];
 int i,j;
 char temp;
	printf("src=%s\n",src);
   //for(j=0;src[j]!=0;j++){ 
   while(src[j]!=0){ 
    for(i=j+1;src[i]!=0;i++){
	if(src[j]>src[i]){
           temp=src[i];
           src[i]=src[j];
           src[j]=temp;
        }
   }
 j++;  
 }
 printf("src=%s\n",src);
}
