
// for문의 조건으로 조건문을 나갔는지, break 때문에 조건문을 나갔는지에 따라서
#include<stdio.h>

int main()
{
    int input;
    int k = 1;
    int j;

    printf("2 이상의 정수를 입력하세요: ");
    scanf("%d", &input);

    for(int i = 2; i<input; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i%j==0) break;

        }
        if(j==i)
        {
            printf("%5d%s",i,(k%5==0) ? "\n": "");
            k++;
        }

        
    }



    return 0;
}