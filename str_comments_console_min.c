#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char input_file[20]="input_file.c";
	FILE*fptr=fopen(input_file,"r+");
	int k=0;
	char ch;		
	char dup_src_string[500];
	while((ch=fgetc(fptr))!=EOF)
		dup_src_string[k++]=ch;
	dup_src_string[k]='\0';
//char dup_src_string[500]="AB//12\nEFGH//56789123496956\nIJKkdsfjkfLijkl//9839048934521011121234555\nMNOPQRST//12345678910394";
//			       012345678910	
	char dup_file_string[500];
	char *newline_ptr;
	char *slash_ptr1;
	char *slashptr;
	int i=0;
	int j=0;
/*printf("enter the file string\n");do{scanf("%c",&ch);dup_src_string[i++]=ch;}while(ch!='*');	dup_src_string[i-1]='\0';*/
		newline_ptr=slash_ptr1=dup_src_string;
		for(i=0;dup_src_string[i];i++){
			if(dup_src_string[i]=='/'){
				slashptr=dup_src_string+i;
				if(dup_src_string[i+1]=='/'){
					newline_ptr=strchr(newline_ptr+1,'\n');
					if(newline_ptr=='\0')
                                            break;
					if((newline_ptr-slashptr)<0)
					    newline_ptr=strchr(newline_ptr+1,'\n');
					i=i+newline_ptr-slashptr;
					dup_file_string[j++]='\n';
				}
				else{
				dup_file_string[j++]=dup_src_string[i];
				}
			}
			else{
			   dup_file_string[j++]=dup_src_string[i];	
			}
		}
dup_file_string[j]='\0';
printf("dup_src=\n%s\n",dup_src_string);
printf("dup_file=\n%s\n",dup_file_string);
}


