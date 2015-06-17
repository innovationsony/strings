/*****           *****/
#include<stdio.h>
main(){
char a[20]="le llee leela";
char b[20];
int i=0;
int j=0;
for(i=0;a[i]!=' ';i++){
b[i]=a[i];
}



printf("  a=%s \nb=%s\n",a,b);
for(i=0;i<=10;i++){
b[i]=NULL;
printf("  a=%s \nb=%s\n",a,b);
b[i]=a[i];

printf("  ATER a=%s \nb=%s\n",a,b);
}

}
