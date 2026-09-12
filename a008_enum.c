#include<stdio.h>

int main()
{
    enum Size{Short,Tall,Grande,Venti};
    char sizeName[][7] = {"short","tall","grande","venti"};
     int priceAmericano[] = {3800,4100,4600,5100};

    for(int i = Short; i<=Venti; i++)
    {
        printf("%10s : %5d\n", sizeName[i],priceAmericano[i]);
    }

    return 0;
}
