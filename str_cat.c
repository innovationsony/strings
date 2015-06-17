/*****           *****/
#include<stdio.h>
#include"str_prototypes.h"
#include"str_libraries.h"

char* fun_str_cat(char *b,char *a){
        int i=0,j=0;
        i=fun_str_len(b);
        fun_str_cp((b+i),a);
/*
         printf("i=%d\n",i);
          while(a[j])
             b[i++]=a[j++];
        b[i]='\0';
*/
}


main(){
	char a[10]="naresh";
	char b[20]="leela";
	fun_str_cat(b,a);
	printf("GIVEN STRING  %s\n",a);
	printf("COPIED STRING %s\n",b);
}
