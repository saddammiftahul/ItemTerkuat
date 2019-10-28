#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char jwb = 'y';
    char item[15];
    int stat;
    char itemprev[15];
    bool a=1;

    char item_strong[15];
    char item_weak[15];
    int terlemah = 0;
    int terhebat = 0;

    while(jwb == 'y'){
        fflush(stdin);
        printf("\n--------------------------------\n");
        printf("Masukkan Item : "); gets(item);
        printf("Masukkan Stat : "); scanf("%d", &stat);

        printf("Item anda : %s \n", item);
        printf("Stat : %d \n", stat);

        if(a==1){
            terhebat = stat;
            terlemah = stat;
            strcpy(item_strong,item);
            strcpy(item_weak,item);
        }
        else if(stat > terhebat){
            terhebat = stat;
            strcpy(item_strong,item);
        }else if(stat < terlemah){
            terlemah = stat;
            strcpy(item_weak,item);
        }

        if(a==1){
            printf("Item Sebelumnya : Nothing\n");
            printf("Item Terlemah : %s\n", item);
            printf("Item Terhebat : %s\n", item);
            a=0;
        }else{
            printf("Item Sebelumnya : %s\n", itemprev);
            printf("Item Terlemah : %s\n", item_weak);
            printf("Item Terhebat : %s\n", item_strong);
        }
        strcpy(itemprev,item);

        fflush(stdin);
        printf("Mau Input Lagi? (y/n)"); scanf("%c",&jwb);
    }
    return 0;
}
