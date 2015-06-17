/*
program for inclusion of the character in specified charracter LEFT SIDE

*/
#include<stdio.h>
char*char_inc_wrt_char(char*s,char*d){
   int i=0,j=0,k=1;
	for(i=0;i<(strlen(s)+k);i++){
	     if(s[i]=='r'){
	        d[j++]='$';
	        d[j++]=s[i];
	        k++;
                }
	     else{
	      d[j++]=s[i];
	     }
	}
 d[i]=0;
}

main(){
   char s[40]="nrarrrersrhr";
   char d[40];
   char*ptr;
   char_inc_wrt_char(s,d);
   printf("s=%s\n",s);
   printf("d=%s\n",d);
   printf("d=%p\tptr=%p\n",s,ptr);
//    printf("strlen=%d d=%d\n",strlen(s),strlen(d));
}



