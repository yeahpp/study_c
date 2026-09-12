#include <stdio.h>

make_malloc(int r, int c,

typedef struct{
    int r;
    int c
    int type;
    void *arr;
}_memory;

int main()
{
   
    int r,c,type;
    printf("행 과 열을 입력하세요 \n: ");
    scanf("%d %d",&r,&c);
    printf("타입을 정하세요: \n ");
    printf("1) int 2)double : ");
    scanf("%d %d",&type);
     _memory m[2]={{NULL,NULL}},{r,c,},{r,c,'double'}};


    void * arr;
    input_malloc(r,c,type);





    return 0;
}