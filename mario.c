#include <stdio.h>

void main(void){
    int i, j, n;
     
     printf("Cuy, mau berapa jumlah tingkatan piramidanya: ");
     scanf("%d", &n);

     for (i = 1; i <= n; i++) {
       
       for (j = 1; j <= n - i; j++){
        printf(" ");
        
       }

       for (j = 1; j <= i; j++){
        printf("#");
       }

       printf("\n");
       
       
     }
     

}