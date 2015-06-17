#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define FILE_BUFFER 500
//#define FILE1
//#define STRING1
main(int argc,char**argv){
system("whoami");
system("date");
system("time");

	//FILE OPERATIONS
	char file_name[500]="input_file.c";
	FILE *fptr=fopen(file_name,"r+");	
        char ch;
	int j=0;
//#ifdef FILE1	
	char src_string[500];//=(char*)calloc(FILE_BUFFER,sizeof(char));
//#endif
	while((ch=fgetc(fptr))!=EOF)
		src_string[j++]=ch;
	src_string[j]='\0';
	printf("src_string=%s\n",src_string);
/*
#ifdef STRING1  
#endif
*/
	//char src_string1[500]="abc/*12345*/defghijk/*123\n4567\n891011*/lmno\npqrst\nxyz";
	char *dup_src_string=src_string;
	char commentless_string[500]={'\0'};
	char *slash_star_start;
	char *slash_star_end;
	while((slash_star_start=strstr(dup_src_string,"/*"))!='\0'){
		strncat(commentless_string,dup_src_string,slash_star_start-dup_src_string);
		//printf("\n*****%s\n",strncat(commentless_string,dup_src_string,slash_star_start-dup_src_string));
		slash_star_end=strstr(slash_star_start,"*/");//upto * only 
		dup_src_string=slash_star_end+2;
	}
	if(!slash_star_start)
		strcat(commentless_string,dup_src_string);
printf("src_string=%s\n",src_string);
printf("dup_src_string=\n%s\n",commentless_string);

}

