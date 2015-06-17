#include<stdio.h>
main(){
int a;
printf("enter a");
scanf("%d",&a);
if((a>30) && (a<40)) 
  printf("a ");
//else if(if(a>40) && if(a<50) )printf("b");
else if((a>40)&& (a<50))
    printf("b");
else printf("c");

a=log(1024)/log(2);
printf("%d",a);
}
 

