#include <stdio.h>
#include <stdlib.h>

int asalmi(int sayi){
    if(sayi<2) return 0;
    for(int i=2;i*i<=sayi;i++){
        if(sayi%i==0)
        return 0;
    }
    return 1;
}
int seslimi(char c){
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return 1;
    return 0;
}
int main(){
    
    int sira=1;
    printf("Gecerli isimler:\n");
  
        for(char c1='a';c1<='z';c1++){
            for(char c2='a';c2<='z';c2++){

                if(seslimi(c1) !=seslimi(c2)){


                    int toplam=c1+c2+c1;
                    if(asalmi(toplam)){
                        printf("%d. %c%c%c\n",sira,c1,c2,c1);
                        sira++;
                    }
                }
            }
                
             
            }
        
    
    return 0;
}