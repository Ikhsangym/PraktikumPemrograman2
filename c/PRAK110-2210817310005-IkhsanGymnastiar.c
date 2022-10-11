#include <stdio.h> 
#include <math.h>

    int main(){
        int al = 5;
        int ti = 12;
        int sa = al;
        int sb = sqrt(al * al + ti * ti);
        int sc = ti;
        int kel= 30;
        int lu = 30;
       
        printf("Diketahui :");
        printf("Alas = %d cm\n", al);
        printf("tinggi = %d cm\n", ti);
        printf("\n");
        printf("Jawab : ");
        printf("Sisi A = %d cm\n", sa);
        printf("Sisi B = %d cm\n", sb);
        printf("Sisi C = %d cm\n", ti);
        printf("Keliling = %d cm\n", kel);
        printf("Luas = %d cm\n", lu);
        return 0;
    }