#include<stdio.h>

int toplama(int x, int y) {
    int toplam = x+y;
    return toplam;
}

int main() {
    int x = toplama(9, 15);
    printf("bir sayı girin: ");
    scanf("%d", &x);
    printf("girdiğini sayı bu muydu yoksa: %d\n", x);
}

