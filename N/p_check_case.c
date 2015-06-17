/**/
#include<stdio.h>
main(){
char c;
printf("enter the number");
scanf("%c",&c);
// caps 64-90
printf("the char is %d",c);
//small 97-122
if((c>=65) && (c<=90)){
	printf("the char is CAPS\n");
	printf("the char is LE\n");
}      
	else if((c>=97) & (c<=122)){
		printf("the char is SMALL\n");
		printf("the char is SMALL letter\n");
      } 
		else {
		printf("its symbol_numeric");
		printf("its symbol_numeric letter");
                 }

         

}
