#include<stdio.h>

char NAME = 'a';

/*
int toplama(int x, int y) {
    int toplam = x+y;
    return toplam;
}
*/

void isimg(char newName){
    NAME = newName;   
}


int main() {
    char temp;
//    int x = toplama(9, 15);
//    printf("bir sayı girin: ");
//    scanf("%d", &x);
//    printf("girdiğini sayı bu muydu yoksa: %d\n", x);
    printf("şuanki harfiniz: %c \n", NAME);
    printf("yeni harf girin: ");
    scanf("%c", &temp);
    isimg(temp);
    printf("işte yeni harfiniz: %c \n", NAME);
}
