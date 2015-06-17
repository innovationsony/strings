#include<stdio.h>
void fn_str_rev(char*,char*,int);

void fn_str_rev(char*dst,char* src,int len){
        len--; 
	if(len>=0){
	printf("char=%c\n",src[len]);
		fn_str_rev(dst,src,len);
          }
}

main(){
	char src[40]="nar";
	char dst[20];
	char ch='o';
	int t,len;
	len=strlen(src);
	printf("len=%d\n",len);
        fn_str_rev(dst,src,len);
	printf("\n");
	printf("string=%s\n",src);
}
