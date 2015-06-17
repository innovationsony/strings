/*****           *****/
#include<stdio.h>
char *fn_str_chr( char *s, int ch){
	//void *fn_str_chr( char *s, int ch){
	char *ptr;
	int i=0,k;
	        while(s[i]){
	             if(s[i]==ch){	
		          ptr=(s+i);    
	        	   break;
	             }
                     else
                        ptr=NULL;
	            i++;
	      }
printf("ptr in function %p\n",ptr);
	return(ptr);

}
main(){
	char src[40]="stay hungry and stay foolish ok";
	int ch='b';
	char *ptr1;
	ptr1=fn_str_chr(src,ch);
	printf("string=%s\n",src);
	printf("start of string %p\n",src);
	printf("occurence of %p\n",ptr1);
}



