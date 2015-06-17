/*****           *****/
#include<stdio.h>
main(){
char src[30]="leela naresh bolla";
char patrn[10]="naresh";
char dst[30];
int t;
//t=strstr(src,patrn);


printf("src=%p\n",src);
//printf("t=%p\n",t);
//printf("len=%ld\n",strspn(src,strstr(src,patrn)));
memset(dst,0,sizeof(dst));
strncpy(dst,src,strspn(src,"hseran"));
printf("dst=%s\n",dst);

}
