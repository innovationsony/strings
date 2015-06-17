//wac for character after word  elimination until the charater had arrived alternatively
//hints:check i should be incremented j should be in constant
//worked for EVEN NUMBER OF CHARATER REFERENCE (here:spacee only)
//INPUT  STRING:function are used to solve complex problems int simple problems
//OUTPUT STRING:function used solve problems simple 

#include<stdio.h>
char*fun_char_alter_words(char*s,char*d){
	int i=0,j=0,k=0,sp=0;
	for(i=k;s[i]!=0;i++){
	lp:
		if(s[i]!=0 && s[i]==' '){
	            d[j]=s[i];
	            k++;
	         } 
	         else {
	                  while(k==1){
	                   i=i+1;        
	                   goto  lp;
	                   }
	              d[j++]=s[i];      
	       k=0;  
	       } 
	}
	d[j]=0;
}

main(){
char s[40]="leela bolla omkar bolla venkat bl kkl";
//char s[40]="abc def ghi jkl mnop qrs";
char d[40];
int *ptr;
int *k;
ptr=s;
k=ptr++;
printf("s=%p,ptr=%p %p\n",s,k,ptr);

	printf("d=%p\tptr=%p %p\n",s,k,ptr);
	printf("d=%p\tptr=%p\n",s,k);
fun_char_alter_words(s,d);



	printf("s=%s\n",s);
	printf("d=%s\n",d);
	printf("d=%p\t%pptr=%p\n",s,k,ptr);
}
