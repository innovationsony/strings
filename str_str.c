/*****           *****/
#include<stdio.h>
//char *fun_str_str(char *haystack, char *needle);
	void *fn_str_str( char *s, char* siubstr){
	char *ptr;
        char d[10];
	
int i=0,j=0,k;
printf("char=%p\n",s);
         for(i=0;s[i];i++){
              if(s[i]==' '){
                  if(s[i+1]==siubstr[0]){
                      for(j=0;s[i+1+j]!=' ' && s[i+j+1]!=NULL;j++){
                              d[j]=s[i+1+j];
                              printf("d char %c= %c\n",d[j],s[i+1+j]);
                             }
                        printf("d string %s\n",d);
                        printf("s[i+1]address=%p\n",s+i+1);
                        k=(strcmp(d,siubstr));
                   	 printf("k=%d\n",k);
                   	if(!k)
                   	 printf("$$$$$$$$$$$address of %s is at %p\n",siubstr,&s[i+1]);
                     }
                i++;
               }
          for(j=0;d[j]!=0;j++)d[j]=NULL;
         }
	      
       //char *strstr(const char *haystack, const char *needle);
}
main(){
	char src[40]="hello stay hadsfads hello brother hello  hii asdf hello";
	char substr[10] ="hello";
	char *ptr1;

	fn_str_str(src,substr);
//	ptr1=strstr(src,substr);
	printf("MAIN string         =%s\n",src);
//	printf("start of string %p\n",src);
//	printf("occurence of    %p\n",ptr1);
       
        //first check the substring first letter after space







}



