#include <stdio.h>

unsigned char to_bcd(unsigned char c){
    char a;
    char b;
    char bcd;

    a = c % 10; //récupère reste
    b = c / 10; //division entière
    b = b << 4; // xxxx0000
    // xxxx0000 | 0000yyyy
    bcd = a|b; // xxxxyyyy
    return bcd;
}

int main(){
    printf("%d\n",to_bcd(49));
    printf("%d\n",to_bcd(37));
    return 0;
}

// void print_bits ( unsigned char n)
// {
// char i;
// for (i = 8 * sizeof ( unsigned char ) - 1; i >= 0 ; i --)
// printf ("%d", (1 << i & n) >> i);
// }

