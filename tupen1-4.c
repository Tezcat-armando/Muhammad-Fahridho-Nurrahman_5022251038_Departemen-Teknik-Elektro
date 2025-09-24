#include <stdio.h>

double akar(double n) {
    if (n < 0) return -1;
    
    double x = n;    
    double y = 1;     
    double z = 0.000001; 
    
    while (x - y > z) {
        x = (x + y) / 2;   
        y = n / x;         
    }
    
    return x;
}

int main() {
    double num;
    
    printf("Masukkan angka: ");
    scanf("%lf", &num);
    
    double hasil = akar(num);
    
    if (result == -1) {
        printf("Angka tidak valid\n");
    } else {
        printf("Akar kuadrat dari %.2f = %.6f\n", num, result);
    }
    
    return 0;
}
