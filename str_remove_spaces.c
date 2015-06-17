#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc,char**argv){
int i=0;
        char *src_buffer_ptr=(char *)calloc(sizeof(src_buffer_ptr),sizeof(char));
	 	scanf("%c",&src_buffer_ptr[i++]);
        	for(;src_buffer_ptr[i-1]!='*';i++){
         		scanf("%c",&src_buffer_ptr[i]);
		}
		src_buffer_ptr[i-1]='\0';
	//for(i=0;src_buffer_ptr[i]!='*';i++)
		//printf("%s\n",src_buffer_ptr[i]);
		printf("%s\n",src_buffer_ptr);
        
//        char src_buffer_ptr[100]="n   a              r           e         s   h\nl ee  l  a \nbolla";
//	int i=0;
	char dst_buffer[100];
	int space_count=0,j=0,k=0;
	for(i=0;src_buffer_ptr[i];i++){
		if(src_buffer_ptr[i]==' '){
			for(j=0;*(src_buffer_ptr+i+j)==' ';j++);
				space_count=j-1;
			printf("space_count=%d\n",space_count);
		i=i+space_count;
		}
		dst_buffer[k++]=src_buffer_ptr[i];
	}
	printf("src_buffer=%s\n",src_buffer_ptr);
	printf("dst_buffer=%s\n",dst_buffer);
	
}
/*
main(){
	char src_buffer[100]="naresh                 omkar    leela    venkat om\nnaresh";
	char dst_buffer[100];
	int  space_count=0,i=0,j=0,k=0;
	for(i=0;src_buffer[i];i++){
		if(src_buffer[i]==' '){
		    for(j=0;*(src_buffer+i+j)==' ';j++);
			 space_count=j-1;
                         i=i+space_count;
		}
		dst_buffer[k++]=src_buffer[i];
	}
	printf("src_buffer=%s\n",src_buffer);
	printf("dst_buffer=%s\n",dst_buffer);
}
*/
