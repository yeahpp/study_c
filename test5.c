
#include<stdio.h>

void pp (int (*p)[3],int c)
{
    for(int i=0; i<c; ++i)
    {
        scanf("%d %d %d",&(p[i][0]),&(p[i][1]),&(p[i][2]));
        p[i][0] = p[i][0]+p[i][1]+p[i][2]; //첫번쨰 행에 합을 저장
    }

}

int main()
{
    //4반에서 3명 제기의 합
    //4행3열을 구해서 반별로 행에다가 
    int arr[4][3];
    int n =sizeof(arr)/sizeof(arr[0]);
    pp(arr,n);
    for(int i=0; i<n; ++i)
    {
        printf("%dclass : %d\n",i+1, arr[i][0]);
    }
    

    return 0;
}



