#include<stdio.h>
printf ("This is line %d of file %s (function %s)\n",__LINE__, __FILE__, __func__);


/*
int my_atoi(char* k,int len){
int i,j=0,sum=0,n[20],rem;
	for(i=len-1;i>=0;i--){
		if(k[i]>=0 || k[i]<=9){
			n[i]=k[i]-48;
                       //n[i]= k[i] && 0x0f;
			j=n[i]+j*10;
		}	
	}
	while(j){//num=j
rem=j%10;
sum=sum*10+rem;
j/=10;
}
return sum;
}
*/

int my_atoi(char *str)
{
printf("%s\n",__FILE__);
int x=0;
int i=0;
for(;str[i]>='0' && str[i] <= '9';i++)
x=x*10 + str[i]-0x30;
return x;
}



main(){
	TEST;
	char k[20]="a1";
	int  d=my_atoi(k);
	printf("sum=%d\n",d);
return 0;
}
