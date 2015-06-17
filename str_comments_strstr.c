#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	//char dup_src_string[500];
	char src_string[500]="AB//12\nEFGH//5678912\nIJKLijkl//91011121234555\nMNOPQRST//12345678910394";
	char *dup_src_string=src_string;
	char *dup=src_string;
	char dup_file_string[500]={'\0'};
	char *newline_ptr;
	char *dslash;
	int newline=0;
	char *line_ptr;
	int i=0;
		while((line_ptr=strchr(dup,'\n'))!='\0'){
			newline++;
			dup=line_ptr+1;
		}
		printf("**************************newline=%d\n",newline);	
		printf("dup_src_string=%p\n",dup_src_string);
	        while((dslash=strstr(dup_src_string,"//"))!='\0'){
			printf("dslash=%p\n",dslash);
			//if(newline_ptr =strchr(dup_src_string+1,'\n')!='\0'){
			newline_ptr =strchr(dup_src_string+1,'\n');
				printf("newline_ptr=%p\n",newline_ptr);
	//	strncpy(dup_file_string,dup_src_string,dslash-dup_src_string);
				strncat(dup_file_string,dup_src_string,dslash-dup_src_string);
				dup_src_string=newline_ptr;
				printf("dup_src_string END=%p\n",dup_src_string);
				printf("dup_src=%s\n",src_string);
				printf("dup_file=%s\n",dup_file_string);
				printf("END OF FIRST ITERATION\n");
/*
			else{
				printf("ELSEEEEE\n");
				strncat(dup_file_string,dup_src_string,dslash-dup_src_string);
			}

*/		i++;
		if(i==(newline+1))
		break;
	         }
	
}
/*
///////////////////////////////////////////////////////////////////////////////////////////	        
		dslash=strstr(dup_src_string,"//");
		printf("dslash=%p\n",dslash);
		newline_ptr =strchr(dup_src_string+1,'\n');
		printf("newline_ptr=%p\n",newline_ptr);
	strncat(dup_file_string,dup_src_string,dslash-dup_src_string);
		dup_src_string=newline_ptr;
		printf("dup_src_string END=%p\n",dup_src_string);
		printf("dup_src=%s\n",src_string);
		printf("dup_file=%s\n",dup_file_string);
		printf("END OF SECOND ITERATION\n");
////////////////////////////////////////////////////////////////
		dslash=strstr(dup_src_string,"//");
		printf("dslash=%p\n",dslash);
		newline_ptr =strchr(dup_src_string+1,'\n');
		printf("newline_ptr=%p\n",newline_ptr);
	strncat(dup_file_string,dup_src_string,dslash-dup_src_string);
		dup_src_string=newline_ptr;
		printf("dup_src_string END=%p\n",dup_src_string);
		printf("dup_src=%s\n",src_string);
		printf("dup_file=%s\n",dup_file_string);
		printf("END OF THIRD ITERATION\n");
/////////////////////////////////////////////////////////////////////////////
		dslash=strstr(dup_src_string,"//");
		printf("dslash=%p\n",dslash);
		newline_ptr =strchr(dup_src_string+1,'\n');
		printf("newline_ptr=%p\n",newline_ptr);
	strncat(dup_file_string,dup_src_string,dslash-dup_src_string);
		dup_src_string=newline_ptr;
		printf("dup_src_string END=%p\n",dup_src_string);
		printf("dup_src=%s\n",src_string);
		printf("dup_file=%s\n",dup_file_string);
		printf("END OF THIRD ITERATION\n");
///////////////////////////////////////////////////////////////////////////
		dslash=strstr(dup_src_string,"//");
		printf("dslash=%p\n",dslash);
		newline_ptr =strchr(dup_src_string+1,'\n');
		printf("newline_ptr=%p\n",newline_ptr);
	strncat(dup_file_string,dup_src_string,dslash-dup_src_string);
		dup_src_string=newline_ptr;
		printf("dup_src_string END=%p\n",dup_src_string);
		printf("dup_src=%s\n",src_string);
		printf("dup_file=%s\n",dup_file_string);
		printf("END OF THIRD ITERATION\n");
	
	while((dslash=strstr(dup_src_string,"//"))!='\0'){
		//newline_ptr =strchr(dup_src_string+1,'\n');
	//	strncat(dup_file_string,src_string,dslash-dup_src_string);
		dup_src_string=newline_ptr;
	}*/



