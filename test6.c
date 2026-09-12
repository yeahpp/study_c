
#include<stdio.h>
void input_arr(int (*p)[3],int r,int c)
{
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            scanf("%d", &p[i][j]);
        }
    }
}

void arr_mul(int (*a)[3], int (*b)[3], int (*c)[3], int r, int col)
{
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            c[i][j] = a[i][j] * b[i][j];
        }
    }
}



int main()
{
    typedef void (*Func)(int(*)[3],int , int );
    Func funcs = input_arr;

    int A[2][3] ={0};
    int B[2][3] ={0};
    int C[2][3] ={0};
    funcs(A,2,3);
    funcs(B,2,3);
    arr_mul(A,B,C,2,3);

    

    for(int i=0; i<2; ++i)
    {
        for(int j=0; j<3; ++j)
        {
           printf("%d%s", C[i][j], (j != 2) ? " " : "\n");
        }
        
    }

    


    return 0;
}