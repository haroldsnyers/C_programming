#include <stdio.h>

int main ()
{
    int i = 12;

    int *p [2];
    p[0] = &i;
    printf ("%d\n", *p [0]) ;

    int data [] = {99 , 98, 97};

    int (*q) [];
    q = & data ;
    printf ("%d\n", (*q) [0]) ;
}