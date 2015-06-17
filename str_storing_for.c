#include<stdio.h>
void fun(char (*a)[10],int r,int c){
//printf("function string a=%s\n",a+1);
printf("function stirng *(a+1)=%s\n",*(a+1));
//printf("function a=%d\n",a);
printf("function a=%p\n",a);
printf("function *a=%p\n",*a);
printf("function a[1]=%s\n",a[1]);
}

void fun_int(int (*p)[2],int r,int c){
printf("***************************************\n");
printf("THE ROW ADDRESS\n");
printf(" p[4][2]={100,101,200,201,300,301};\n");
printf("function number (*(p)=%p\n",(*(p)));
printf("function number *(p+1)=%p\n",(*(p+1)));
printf("function number *(p+2)=%p\n",(*(p+2)));
printf("function number *(p+3)=%p\n",(*(p+3)));
printf("function number *(p+4)=%p\n",(*(p+4)));
printf("function number *(*(p+3))=%d\n",*(*(p+3)));
printf("***************************************\n");




printf("the first row  address and first element\n");
printf("function number *(p)=%d\n",*(*(p)));
printf("function number *(p)=%d\n",*(*(p)));

printf("the first row second element\n");



printf("the second row  address and first element\n");
printf("function number (p+1)=%p\n",(*(p+1)));
printf("function number *(p+1)=%d\n",*(*(p+1)));

printf("the first row second element\n");
printf("function number (*(p+1)+1)=%p\n",(*(p+1)+1));
printf("function number *(*(p+1)+1)=%d\n",*(*(p+1)+1));


printf("the first row third element\n");
printf("function number (*(p+1)+2)=%p\n",(*(p+1)+2));
printf("function number *(*(p+1)+2)=%d\n",*(*(p+1)+2));

printf("the first row third element\n");
printf("function number (*(p+1)+3)=%p\n",(*(p+1)+3));
printf("function number *(*(p+1)+3)=%d\n",*(*(p+1)+3));

printf("the first row second element\n");
printf("function number (*(p+2)+3)=%p\n",(*(p+2)+1));
printf("function number *(*(p+2)+3)=%d\n",*(*(p+2)+1));

printf("the first row second element\n");
printf("function number (*(p+3)+1)=%p\n",(*(p+3)+1));
printf("function number *(*(p+3)+1)=%d\n",*(*(p+3)+1));
}
main(){

char a[4][10]={"Naresh","Om","venkat","kanaka"};
int p[4][2]={100,101,200,201,300,301};
char titles[4][10]={"Name","day","month","year"};
int day[4]={11,17,19,25};
int month[4]={4,5000000000,7,12};
int year[4]={1986,1988,1990,1965};
int i;
/*printf("|****************************************************************|\n");
printf("|\t%s\t |\t%s\t |\t%s\t |\t%s\t |\n",titles[0],titles[1],titles[2],titles[3]);
printf("|****************************************************************|\n");
for(i=0;i<4;i++)
printf("|\t%s\t |\t%d\t |\t%d\t |\t%d\t |\n",a[i],day[i],month[i],year[i]);
printf("******************************************************************\n");
*/
printf("******************************************************************\n");
printf("|\t%s\t |%010s |%010s |%010s |\n",titles[0],titles[1],titles[2],titles[3]);
printf("|****************************************************************|\n");
for(i=0;i<4;i++)
printf("|\t%s\t |%010d |%010d |%010d |\n",a[i],day[i],month[i],year[i]);
printf("******************************************************************\n");
printf("function a=%p\n",a);
fun(a,4,10);

//fun_int(p,4,2);
}
