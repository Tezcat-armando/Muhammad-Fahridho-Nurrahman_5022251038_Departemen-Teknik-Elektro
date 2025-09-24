#include<stdio.h>

int pos(int a, int b) {
    if (a > 0 && b > 0) {
        printf("ACC\n");
        return 1;
    } else {
        printf("Tidak ACC\n");
        return 0;
    }
}

int main() {
    int a, b;
    
    printf("Beri 2 nomor positif: ");
    scanf("%d %d", &a, &b);
    
    if (pos(a, b)) {
        printf("Luas adalah: %d\n", a * b);
    } else {
        printf("Input tidak valid.\n");
    }
    
    return 0;
}
