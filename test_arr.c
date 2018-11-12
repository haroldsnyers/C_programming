#include <stdio.h>

void print_arr(int (*arr)[], int N);

int* sub_arr ( int *arr , int start )
{
    return &arr[ start ];
}

int main ()
{
    int a[] = {1, 2, 3, 4, 5};
    int *b = sub_arr (a, 2);
    int (*q)[];
    q = &a;
    print_arr(q, 20); // Affiche [3, 4, 5]
    printf("%d\n", b[-2]) ;  // affiche 1

return 0;
}

void print_arr(int (*arr)[], int N){
    
    int n = N/sizeof (int); 
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