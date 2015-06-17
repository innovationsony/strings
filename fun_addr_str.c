//
#include<stdio.h>

/*char *fn_addr_str(char *dst,char* ptr ,char *src){
	char temp[40];
        int i=0;
	if(ptr<=(src+strlen(src)-1) && ptr>=src)
	  strncpy(dst,src,(strlen(src)-strlen(strcpy(temp,ptr))));
	
        else
        printf("Address is not in the range\n");
}*/
char *fn_addr_str(char *dst,char* ptr ,char *src){
int i=0;
	if(ptr<=(src+strlen(src)-1) && ptr>=src){
             printf("src =%p\n",src);
             printf(" ptr=%p\n",ptr);
             printf("prc-src =%d\n",ptr-src);
             strncpy(dst,src,ptr-src); 
             dst[ptr-src]='\0';
             }        
         
        else
        printf("Address is not in the range\n");
}

main(){
char src[40]="leela naresh bolla";
char dst[40];
char* addr=strchr(src,'r');
fn_addr_str(dst,(addr),src);
printf("src=%s\n",src);
printf("dst=%s\n",dst);

printf("src=%p\n",src);
printf("src+1=%p\n",src+1);

}











