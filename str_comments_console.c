#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	
	
	char infile[50]="input_file.c";
        FILE *fptr=fopen(infile,"r+");
        char file_buffer[800];
        int j=0;
        char ch1;
        while((ch1=fgetc(fptr))!=EOF)
                file_buffer[j++]=ch1;
        file_buffer[j]='\0';
        printf("file_buffer=\n%s",file_buffer);
        printf("**************************\n");
	
	//char dup_src_string[500];
	//char dup_src_string[500]="AB//12\nEFGH//5678912\nIJKLijkl//91011121234555\nMNOPQRST//12345678910394";
	char *dup_src_string=file_buffer;
//			       012345678910	
	char dup_file_string[500];
	char *newline_ptr;
	char *slash_ptr1;
	int i=0;
	char ch;
	j=0;
/*	printf("enter the file string\n");
		do{
			scanf("%c",&ch);
			dup_src_string[i++]=ch;
		}while(ch!='*');
		dup_src_string[i-1]='\0';
*/		newline_ptr=slash_ptr1=dup_src_string;
		for(i=0;dup_src_string[i];i++){
			if(dup_src_string[i]=='/'){
				if(dup_src_string[i+1]=='/'){
//					newline_ptr=strchr(newline_ptr,'\n');
		//			slash_ptr1=strchr(dup_src_string+i,'/');
					dup_file_string[j++]='\n';
					if(newline_ptr=strchr(dup_src_string+i,'\n'))
					i=newline_ptr-dup_src_string;
					else
					break;
					printf("i=%d\n",i);
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
printf("dup_src=%s\n",dup_src_string);
printf("dup_file=%s\n",dup_file_string);
}


