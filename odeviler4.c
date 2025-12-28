#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Sifrecozumu(char sifrelimesaj[],int anahtardegeri1);
void Sifreolusturma(char mesaj[],int anahtardegeri);

 char mesaj[200],sifrelimesaj[200];
 int anahtardegeri,i,anahtardegeri1;


int main()
{
    int yol;

do {

    printf("istediginiz islemi giriniz.\n");
    printf("Sifre olusturma islemi icin = 1\n");
    printf("Sifre cozme islemi icin =2\n");
    printf("Programi kapatmak icin = -1\n\n");

    scanf("%d",&yol);

    if(yol==1)
        {
            getchar();
           Sifreolusturma(mesaj,anahtardegeri);
           getchar();

        }else if (yol==2)
        {
          getchar();
        Sifrecozumu(sifrelimesaj,anahtardegeri1);
          getchar();
        }else if (yol!=1 && yol!=2 && yol !=-1)
        {

          printf("1 veya 2 girmen gerek!\n\n");
          continue;

        }

    }
    while (yol!=-1);

system("pause");

    return 0;
}


 void Sifreolusturma(char mesaj[],int anahtardegeri)

  {
       printf("\nSifrelemek istediginiz mesaji girin:");
    gets(mesaj);

    printf("\nAnahtar degeri girin:");
    scanf("%d",&anahtardegeri);

    for (i=0;i<strlen(mesaj);i++)
        {
            if(mesaj[i]>='a' && mesaj[i]<='z')
                {

                 mesaj[i]=(mesaj[i]-'a'+ anahtardegeri)%26+'a';//%26 alfabede z gelirse basa don

                }
                else if (mesaj[i]>='A' && mesaj[i]<='Z')
                    {

                      mesaj[i]=(mesaj[i]-'A'+anahtardegeri)%26+'A';

                    }

            }

            for (i=0;i<strlen(mesaj);i++) //strelen string uzunlugu bulmak icin
                {

                  printf("%c",mesaj[i]);

                }
                printf("\n\n");

  }


  void Sifrecozumu(char sifrelimesaj[],int anahtardegeri1)
  {
   printf("\nSifreli mesaji girin:");
        gets(sifrelimesaj);

        printf("\nAnahtar degeri girin:");
        scanf("%d",&anahtardegeri1);

        printf("\n");

       for (i=0;i<strlen(sifrelimesaj);i++)
        {
            if(sifrelimesaj[i]>='a' && sifrelimesaj[i]<='z')
                {

                 sifrelimesaj[i]=((sifrelimesaj[i]-'a'- anahtardegeri1)+26)%26+'a';

                }
                else if (sifrelimesaj[i]>='A' && sifrelimesaj[i]<='Z')
                    {

                      sifrelimesaj[i]=((sifrelimesaj[i]-'A'-anahtardegeri1)+26)%26+'A';

                    }

            }

            for (i=0;i<strlen(sifrelimesaj);i++)
                {

                  printf("%c",sifrelimesaj[i]);

                }

           printf("\n\n");
  }