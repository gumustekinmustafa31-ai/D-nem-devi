#include <stdio.h>

int main(){
    int cirolar[12]={2,8,5,1,10,5,9,9,3,5,6,6};
    int aysayi=12;
    printf("yatay bar grafigi\n\n");
    for(int i=0;i<aysayi;i++){
        printf("%d.ay: ",i+1);
        for(int j=0;j<cirolar[i];j++){
            printf("*");
        }
        printf("\n");  
    }
    return 0; 
}