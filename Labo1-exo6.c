# include <stdio.h>

int main ()
{
    unsigned int n = 0;
    do {
        n ++;
    } while (! (n % 22 == 0 && n % 14 == 0));

    printf ("%u\n", n);

    unsigned int a = 1;
    while (! (a % 22 == 0 && a % 14 == 0)) 
    {
        a ++;
    } 

    printf ("%u\n", a);
    return 0;
}