#include<stdio.h>
int main(void)
{
    int a[10];
    int min;
    int max;
    int sum = 0;

    for(int i=0; i<10; i++)
    {
        printf("%d번째 숫자를 입력하세요 ", i+1);
        scanf("%d",&a[i]);
    }

    for(int i=0; i<10; i++)
    {
        printf("%6d\n",a[i]);
        
    }

    min=max=a[0];
    for(int i=0; i<10; i++)
    {
        if(min > a[i]) min = a[i];
        if(max < a[i]) max = a[i];

    }

    sum = (min +max)/2;

    printf("min = %d, max = %d, sum = %d ",min,max,sum);



    return 0;
}