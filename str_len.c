/*****           *****/
/*
STRING LENGTH COUNT IS FROM 1 TO UPTO NULL.NULL IS EXCLUDED
HERE I STARTS FROM 0,THE LAST VALUE IS i++ IS USED I INCREMENTED

*/
#include<stdio.h>
void fun_str_len(char *a){
	int i=0;
	while(a[i])
         i++;
printf("STRING LENGTH is %d\n",i);
}

