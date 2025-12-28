#include <stdio.h>
int main(){ 
    int n,j,i;
    int sayac=1;
    printf("Bir tam sayi giriniz: ");
    scanf("%d",&n);
    
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" %d  ",sayac);
            sayac++;
        }
        printf(" \n");
    }
    return 0;
}