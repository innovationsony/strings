#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void get_lines_string(char *src_buffer_ptr){
int i=0;
	 	scanf("%c",&src_buffer_ptr[i++]);
        	for(;src_buffer_ptr[i-1]!='*';i++){
         		scanf("%c",&src_buffer_ptr[i]);
		}
		src_buffer_ptr[i-1]='\0';
}
void str_remove_spaces(char *dst_buffer,char *src_buffer_ptr){
	int i=0;
	int space_count=0,j=0,k=0;
	for(;src_buffer_ptr[i];i++){
		if(src_buffer_ptr[i]==' '){
			for(j=0;*(src_buffer_ptr+i+j)==' ';j++);
				space_count=j-1;
			printf("space_count=%d\n",space_count);
		i=i+space_count;
		}
		dst_buffer[k++]=src_buffer_ptr[i];
	}
	dst_buffer[k]='\0';
}
//TWO METHODS
//1.THE STRING METHOD ;CHECK FOR COMMENTS AND AFTER THAT \N
//2.THE GET LINE METHOD;TAKE EACH LINE AND GIVE DO THE PROCESSING

void str_remove_comments(char *dst_buffer,char *remove_comments){
		int i=0;
	char get_line_buffer[500];
	for(;dst_buffer[i];i++){
		if(dst_buffer[i]=='/'){
             		get_line_buffer[i]=dst_buffer[i];
			}
		else{//if char == /
			if(get_line_buffer[i+1]=='/')
				i=i+2;
			strstr(dst_buffer,"\n");
		}
			//int j=0;
			//for(dst_buffer[i];i++){
			//	if(get_line_buffer[j]=='/'){
			//		if(get_line_buffer[j+1]=='/')
		i++;				
		}
}

main(int argc,char**argv){
        char *src_buffer_ptr=(char *)calloc(sizeof(src_buffer_ptr),sizeof(char));
	char dst_buffer[500];
	char remove_comments[500];
	       get_lines_string(src_buffer_ptr);
		printf("%s\n",src_buffer_ptr);
	str_remove_spaces(dst_buffer,src_buffer_ptr);
	
//	str_remove_comments(dst_buffer);
//	printf("src_buffer=%s\n",src_buffer_ptr);
	printf("dst_buffer=%s\n",dst_buffer);
}
