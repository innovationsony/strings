//

//src constant pointer so it cant be changed
#include<stdio.h>
main(){
 char src[30]="leelanaresa ha afa";
printf( "string is %s\n",src);
 int k=0;
char *addr;
printf( "adress of string is %p\n",src);
             k++;
           
	   addr=strchr(src,'a');
           printf("1st addr %p\n",addr);
              while(strchr(addr,'a')){  
              addr=strchr(addr,'a');
              printf("next occr addr %p\n",addr);
 		addr=addr+1;
	}
}
