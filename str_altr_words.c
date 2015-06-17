#include<stdio.h>
char* fn_str_altr_words(char* ,char*);
char* fn_str_altr_words(char* dest,char *src){
	int i=0,j=0,sp=0;
       // int *str_ref[10];
	//identify spaces
	while(src[i]){
	        (src[i]==' ')?sp++:0;	     
		i++;
	}
        printf("spaces %d\n",sp);
        i=0;
        int sp_ptr[sp];//space location to be strored in array
        char *str_ref[sp];
        while(src[i]){
             if(src[i]==' '){
                sp_ptr[j]=i;
                str_ref[j]=&src[i];
                j++;
		}
	i++; 
        }
        printf("************************\n");
	for(j=0;j<5;j++)
	printf("ptr[%d]=%d\t,str_ref[%d]=%p\n",j,sp_ptr[j],j,str_ref[j]);
       // the locations of spaces are stored in array
          i=0;j=0;
          while(src[i]){
              for(j=0;j<5;j=j+1){
                   // if(sp_ptr[j]==i){
                   if(i==sp_ptr[j]){
                       i=i+sp_ptr[j+1];
			
                         printf("TEST:sp_ptr[%d]:%d!=%d\n",j,sp_ptr[j],i);
                     }   
                   else{
                     
                     dest[i]=src[i];    
                       }                  
                                 
          
		}
              i++;
              }
   printf("dest=%s\n",dest);



}

main(){
char src[]="stay hungry and stay foolish ok! Not ok :P";
char dest[100];
fn_str_altr_words(dest,src);
printf("string=%s\n",src);
}
