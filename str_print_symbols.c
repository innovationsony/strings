//TO PUT QUOTATIONS IN A STRING WE HAVE TO PUT \ (BACKWARD SLASH) BEFORE THE QUOTATION

#include<stdio.h>


main(){
char title1[40]="naresh $leela\" bolla";
char title2[40]="\"naresh\" \"leela\" \"bolla\"";
char title3[40]="\" /\\/@re$/-/ \"";
char title4[40]="\'N\'aresh \\n \'L\'eela \\t  \"\'B\'olla\"";

printf("title1=%s\n",title1);
printf("title2=%s\n",title2);
printf("title3=%s\n",title3);
printf("title4=%s\n",title4);


}
