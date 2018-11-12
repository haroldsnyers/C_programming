#include <stdio.h>

int power(int a, unsigned int b);

int main()
    {
        int a = 12;
        // int b = 1;
        int b = 0;
        // int b = 4;
        int result = power(a, b);
        printf("%d to the power %d equals %d", a, b, result);
        return 0;
    }

int power(int a, unsigned int b)
    {
        int result;
        if (b == 1)
        {
            result = a;
            return result;
        }
        else if (b%2 == 0 && b != 0)
        {
            // recursive function: example 8^4, power(8,4) will enter the fucntion power
            // and do power (8*8, 2) and then power(64*64, 1) and here is your response.
            result = power(a*a, b/2);
            return result;
        }
        else if (b > 2 && b%2 != 0)
        {
            result = a*power(a*a, (b-1)/2);
            return result;
        }
        else if (b == 0)
        {
            result = 1;
            return result;
        }
        else
        {
            return 0;
        }



    }
