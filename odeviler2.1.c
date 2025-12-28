#include <stdio.h>
 
    int ucgensayi(int a)
    {
        if(a==1){
            return 1;
        }else{
            return a +ucgensayi(a-1);
        }
    }
int main(){
    int a=5;
    
    printf("%d ucgen sayilar.\n\n",a);

    for(int i=1;i<=a;i++){
        printf(" %d ",ucgensayi(i));
    }
    printf( " \n");

    return 0;
}