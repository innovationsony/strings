/**/
#include<stdio.h>
main(){
int c,d;
printf("enter the number");
scanf("%x",&c);
printf("c value %x\n",c);
printf("c shifted %x\n",(c>>31));
d=c>>31;

printf("d value %x\n",(d));



if( (c>>31) & 1){

//if(c>0) {
	printf("the num is NEG\n");
}      

else  {
	printf("the num is NEG\n");
}
}
