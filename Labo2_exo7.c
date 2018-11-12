#include <stdio.h>
#include <stdbool.h>

# define ALARM 1
# define HEATING 2
# define COOLING 4
# define LIGHTS 8
# define DOORLOCK 16
# define SPRINKLE 32

bool is_set ( unsigned char*, unsigned short);
void set ( unsigned char*, unsigned short);
void print_bits(unsigned char);
void print_arr(char (*arr)[8]);
void print_bitsNew (unsigned char n);


int main ()
{
    unsigned char config = 0;
    print_bitsNew(config); printf("\n");
    set(&config , HEATING | SPRINKLE );
    print_bitsNew(config); printf ("\n");
    printf("%d\n", is_set(&config , LIGHTS));
    printf("%d\n", is_set(&config , SPRINKLE));
    
    return 0;
}

/*
sets the config to some particular config made of multiple components
*/
void set(unsigned char *co, unsigned short c){
    *co = c;
}

/*
comparaison of config and the component's number
*/
bool is_set( unsigned char *co, unsigned short c){
    return (*co & c);
}

/* 
best and smallest way to display bits BUT not practical for rest of program
*/
void print_bitsNew (unsigned char n)
{
   char i;
   for (i = 8 * sizeof ( unsigned char ) - 1; i >= 0 ; i --)
      printf ("%d", (1 << i & n) >> i);
}

/*
Not useful for this program
Longer way to display bits 
*/
void print_bits(unsigned char c){
    char result[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    char result1[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    char reste;
    int j = 0;
    int step = 1;
    while (c!=0){
        reste = c % 2;
        // printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, c, reste, c/2);
        c /= 2; //c = c /2
        result[j] = reste;
        j++;
    }
    //print_arr(&result);
    for (int i = (sizeof result - 1); i >= 0; i--){
        result1[7-i] = result[i];
    }
    //print_arr(&result1);
    for (int i = 0; i < 8; i++){
        printf("%d", result1[i]);
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


