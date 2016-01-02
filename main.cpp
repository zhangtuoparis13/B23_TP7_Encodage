#include <stdio.h>

/*
 * écrire une procédure qui permet d'afficher à l'écran la table ASCII
 * */
//Exo 4.1
void print_ASCII()
{
    for (int i = 0; i < 255 ; ++i) {
        printf("ASCII : %d \t HEXA : %x \t CHAR : %c \n",i,i,i);
    }
}
//Exo 4.2
/*
 * 如果是单引号之间的,说明是一个字符, 且没有\0
 * 如果是双引号之间的,说明是一个字符串, 且自动加上\0 也就是字符串的长度是所有字符的总和加1
 * */
void maju_minu()
{
    char c;
    printf("Plese input a carecter : \n");
    c = getchar();
    if (c>='a' && c<='z')
    {
        c = c -32;
        printf("Majuscule : %c, ASCII : %d \n",c,c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        c=c+32;
        printf("Minuscule ：%c, ASCII：%d\n",c,c);
    } else
        printf("Error!!!\n");
}

int main(){
//    test solution 1
    //print_ASCII();

    maju_minu();
    return 0;
}