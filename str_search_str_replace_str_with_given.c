#include<stdio.h>
main(){
    char src[50]="leela naresh leela bolla omkar naresh naresh";
    char replace_str[10]="leela";
    char search_str[10]="naresh";
    char buf1[40];
    char *addr;
        	addr=strstr(src,search_str);
                strncpy(buf1,src,addr-src);
                strcat(buf1,replace_str);
                strcat(buf1,addr+strlen(replace_str));
                printf("string==%s\n",buf1);
}







/*
while(strstr(src,search_str)){
        	addr=strstr(addr,search_str);
        	t=strlen(src);
        	t1=strlen(addr);
        	printf("t==%d\n",t);
        	printf("t1==%d\n",t1);
        	printf("length=%d\n",t-t1);
        	strncpy(buf1,src,(t-t1));
        	t3=strlen(search_str);
        	strcpy(buf3,(addr+t3+1));//middle space
        	strcat(buf1,replace_str);
        	strcat(buf1,buf3);
                printf("len=%d\n",strlen(src));
        	printf("string=%s\n",buf1);
                strcpy(src,buf1); 
*/
