#include <stdio.h>

void print_bits(unsigned char);
void print_arr(char (*arr)[8]);
void print_bitsNew (unsigned char n);

int main(){
    print_bits(8);
    printf("\n");
    print_bitsNew(8);
    return 0;
}

void print_bits(unsigned char c){
    char result[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    char reste;
    int j = 0;
    int step = 1;
    while (c!=0){
        reste = c % 2;
        //printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, c, reste, c/2);
        c /= 2; //c = c /2
        result[j] = reste;
        j++;
    }
    print_arr(&result);
    for (int i = (sizeof result - 1); i >= 0; i--){
        printf("%d", result[i]);
    }
}

void print_arr(char (*arr)[8]){
    int n = sizeof (*arr)/sizeof(char); 
    if (n==0){
        printf("[]\n");
    } else {
        printf("[%d", (*arr)[0]);

        int i;
        for (i = 1; i < n; i++){
            printf(", %d", (*arr)[i]);
        }
        printf("]\n");
    }
}

void print_bitsNew (unsigned char n)
{
   char i;
   for (i = 8 * sizeof ( unsigned char ) - 1; i >= 0 ; i --)
      printf ("%d", (1 << i & n) >> i);
}