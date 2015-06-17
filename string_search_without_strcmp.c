#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
char src[100]="naresmy name is $CGGPGAnareshmy name is also   leela";
char req[10]="$CGGPGA";
int i,j,cnt=0;
int len=strlen(req);
/*
char *ptr=req;
while(*ptr++)
{
//ptr++;
i++;
}
printf("i====%d\n",i);
len=cnt;
printf("lennn%d\n",len);
*/
printf("src=%p\n",src);
	for(i=0;src[i];i++){
		if(src[i]==req[0]){
			cnt=0;
			for(j=0;j<(len);j++){
				if(src[i+j]==req[j]){
					cnt++;//printf("src[%d]= %c\treq[%d]===%c=     \n",i+j,src[i+j],j,req[j]);
				}
			}
			printf("%d\n",j);
			if(cnt==len){
			      printf("%d\n",j);
			      printf(" string matched &src[i]=%p\t src[i]=%c\n",(&src[i]),src[i]);
			}
		}

	}
}
