#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(){

    int cirolar[12];
    char*aylar[]={"Ocak","Subat","Mart","Nisan","Mayis","Haziran","Temmuz","Agustos","Eylul","Ekim","Kasim","Aralik"};
 
     printf("Yil icindeki aylara ait cirolar:\n");
     for(int i=0;i<12;i++){
        cirolar[i]=rand()%10000;
        printf("%s: %d\n",aylar[i],cirolar[i]);
     }
    
    return 0;

}