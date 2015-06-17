//** library file contains all DEFINITIONS of FUNCTIONS
char* fun_str_cp(char *b,char *a){
        int i=0;
        while(a[i])
             b[i++]=a[i];
        b[i]='\0';
}
int fun_str_len(char *a){
        int i=0;
        while(a[i])
         i++;
        return(i);
printf("STRING LENGTH is %d\n",i);
}

