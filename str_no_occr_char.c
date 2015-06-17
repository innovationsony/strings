#include<stdio.h>
int fn_str_no_occr_char(char*,char);
int fn_str_no_occr_char(char*src,char ch){
int i=0,sp=0;
//identify spaces
while(src[i]){
   if(src[i]==ch){
      sp++;
//   (src[i]==ch)?sp++:0;  

}    
i++;
}

     
return(sp);
}

main(){
char src[40]="stay hungry and stay foolish ok";
char ch='o';
int t;
t=fn_str_no_occr_char(src,ch);
printf("string=%s\n",src);
printf("occurence of %c is %d\n",ch,t);


}
