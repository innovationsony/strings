//strnacat
#include<stdio.h>
main(){
char src[30]="naresh";
char dst[30]="leela";
int t=131233;
strncat(dst,src,t);
printf("t=%d\n",t);
printf("t=%02d\n",t);
printf("t=%2d\n",t);
printf("t=%3d\n",t);
printf("string=%s\n",dst);


}
