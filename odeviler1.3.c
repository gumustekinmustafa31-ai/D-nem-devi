#include <stdio.h>
int main(){

    int cirolar[]={2, 8, 5, 1, 10, 5, 9, 9, 3, 5, 6, 6};
    int aysayi=12;
    int maxciro=0;
    for(int i=0;i<aysayi;i++){
        if(cirolar[i]>maxciro){
            maxciro=cirolar[i];
        }
    }

    printf("  dikey bar grafigi: \n");
    for(int satir=maxciro;satir>0;satir--){
        for(int sutun=0;sutun<aysayi;sutun++){
            if(cirolar[sutun]>=satir){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n ");
    }
    for(int i=1;i<=aysayi;i++){
        printf("%d. ",i);
    }
    printf("\n\n");

    return 0;
}