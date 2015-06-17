/*WAP for    */
#include<stdio.h>
//#include<string.h>
main(){
	int i=0,j=0;
	unsigned char g[10]="naresh";
	unsigned char r[10];
	while(g[i])  i++;i--;
	while(i>=0)  r[j++]=g[i--];
             j--;   
             i=0;
	while(i<=j)   g[i]=r[i++];
	printf("%s\n",r);
	printf("%s\n",g);
}
