/**/
#include<stdio.h>
main(){
int c;
printf("enter the number");
scanf("%d",&c);
if(c>0) {
	printf("the num is POS\n");
}      

else if(c<0) {
	printf("the num is NEG\n");
}
else{

	printf("the num is ZERO\n");
}
}
