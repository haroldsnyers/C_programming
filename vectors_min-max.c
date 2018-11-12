#include <stdio.h>

void min_et_max(int(*arr)[], int N, int min, int max);
void min_et_max1(int(*arr)[], int N, int ar[]);
void print_arr(int (*arr)[], int N);

int* sub_arr (int *arr, int start )
{
    return &arr[start];
}

int length ( int *arr[])
{
    int i = 0;
    while (arr[i++] != NULL);
        printf("%d", i); 
        return i;  // donne pas la bonne longueur
}

void print_arr1 ( int *arr [])
{
   if (*arr == NULL )
      printf (" []\n");
   else {
      printf ("[%d", ** arr );

      while (*(++ arr) != NULL )
         printf (", %d", ** arr );
      printf ("]\n");
   }
}

int main(){
    int arr[] = {5, 20, 77, 10, 15, 20, 55, 67};
    int a = sizeof arr;
    int (*max)[], (*min)[], (*q)[];
    max = &arr;
    min = &arr;
    q = &arr;
    print_arr(q, a);
    min_et_max1(q, a, arr);
    min_et_max(q, a, (*max)[0], (*min)[0]);
    
    // avec pointeur NULL
    int c = 3;
    int b = -5;
    int *ar[10] = {&b,&c};
    ar[8] = NULL;
    print_arr1(ar);
    printf("%d", length(ar));
}

void min_et_max(int(*arr)[], int N, int min, int max){
    int n = N/sizeof (int);
    for (int i = 0; i < n; i++){
        // printf("Step %d: %d\n", i, (*arr)[i]);
        if (((*arr)[i]) > max){
            max = (*arr)[i];
        }
        else if (((*arr)[i]) < min){
            min = (*arr)[i];
        }
    }
    printf("Minimum: %d\n", min);
    printf("maximum: %d\n", max);
}

void min_et_max1(int(*arr)[], int N, int ar[]){
    int n = N /sizeof (int);
    int (*max)[];
    max = &ar[1];
    int (*min)[];
    min = &ar;
    // print_arr(ar, N);
    for (int i = 0; i < n; i++){
        // printf("Step %d: %d\n", i, (*arr)[i]);
        if (((*arr)[i]) > (*max)[1]){
            (*max)[1] = (*arr)[i];
        }
        else if (((*arr)[i]) < (*min)[1]){
            (*min)[1] = (*arr)[i];
        }
    }
    printf("Minimum: %d\n", (*min)[1]);
    printf("maximum: %d\n", (*max)[1]);
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