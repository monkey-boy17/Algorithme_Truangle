#include<stdio.h>
#include<stdlib.h>


 int main (){

            int d;
            int j;
            int k;
            int i;

            printf(" saisir la taille du triangle : ");

            scanf("%d",&d);

            for(i = 0; i < d; i ++){

               for( j = d - i; j > 0; j --){

                    printf(" ");
                }

                for(k = 0; k < 1 + 2* i; k ++){

                    printf("*");
                }
                printf("\n");
            }

            return 0;

    }
