#include<stdio.h>
int main()
{

    int n;
    printf("몇층 피라미드를 만들까요?: ");
    scanf("%d",&n);
    printf("\n");
    printf("1. 기본 피라미드\n");
    for(int i=0; i<n; i++)
    {
        for(int j =0; j<n-i-1; j++)
            printf("-");
        for(int j = 0; j<2*i+1; j++)
            printf("*");
        
      printf("\n");      

    }

    return 0;
}