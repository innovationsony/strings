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
		printf("%s\n",src_buffer_ptr);
//FILE STORED IN A STRING  IS COMPLETED
//        char src_buffer_ptr[100]="n   a              r           e         s   h\nl ee  l  a \nbolla";
	i=0;
	char dst_buffer[500];
	char line_buffer[500];//ij
	char *ptr;
	//char *get_line=(char *)calloc(800,sizeof(char));
	char get_line[800];
	int space_count=0,j=0,k=0;
	char *dup_src=src_buffer_ptr;
//	for(i=0;dup_src[i];i++){
		//NOW TAKING EAH LINE AND PROCESSING
		while( (ptr=strchr(dup_src,'\n'))!='\0'){
			strncpy(line_buffer,dup_src,ptr-dup_src+1);	
			line_buffer[ptr-dup_src+2]='\0';
			dup_src=ptr+1;
			// REMOVING DOUBLE CHARACTERS STARTED =>NOTE last line had to be done seperately
			char *dup_line_buffer=line_buffer;
			char *ptr_double_char;
			while((ptr_double_char=strchr(dup_line_buffer,'/'))!='\0'){
				if(*(ptr_double_char+1)=='/'){
					*(ptr_double_char)='\n';
					*(ptr_double_char+1)='\0';
				}
 				else{
					ptr_double_char=ptr_double_char+1;
				}
				strcat(get_line,line_buffer);
				printf("line_buffer=%s\n",line_buffer);	
				printf("line_buffer=%s\n",get_line);	
			}
		}
		strcpy(line_buffer,dup_src-1);
		//strcat(get_line,line_buffer);
		//printf("line_buffer=%s\n",get_line);	
}
/////////////////////////////////////////////////////////////////
/*
		if(src_buffer_ptr[i]=='  '){
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
