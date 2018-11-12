# include <stdio.h>
# include <stdbool.h>

bool is_weekend(int a) // comparaison with the value given to the value of weekday
{
    if (a == 6 || a == 7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main ()
{
    enum weekday {MON = 1, TUE, WEN, TUR, FRI, SAT, SUN};
    int today;
    today = TUE; // today equals 2 
    printf ("%d : %d\n", today , is_weekend ( today ));
    return 0;
}

