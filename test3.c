
#if 0
//중복 확인 배열 (입력받은 숫자가 배열의 인덱스가 됨), 해당 요소는 1이 됨
//count를 통해서 6개 입력받기, 로또배열 접근하기
#include<stdio.h>
void input_nums(int *lotto_nums)
{
    int count = 0;
    int input;
    int arr[45]={0};

   while(count < 6)
   {
    printf("번호입력: ");
    scanf("%d",&input);
    if(arr[input] == 1)
    {
        printf("같은 번호가 있습니다.\n");
    }else{
        arr[input]++;
        lotto_nums[count] = input;
        count++;
    }
   }


}


void pritnt_nums(int *lotto_nums)
{
    for(int i =0; i<6;i++)
    {
       printf("로또 번호: %2d\n",lotto_nums[i]);
    }
}

int main()
{
    int lotto_nums[6]={0};
    input_nums(lotto_nums);
    pritnt_nums(lotto_nums);

    return 0;
}
#endif 

#if 0
// scanf는 형태를 지정해서 입력 받을 수 있음 
// 따라서 공백(Space), 탭(\t), 줄바꿈(\n)을 데이터와 데이터를 구분하는 경계(구분자)로 인식
#include <stdio.h>
int main(){
    int i;
    int j;
    char a;
    int answer;
    printf("사칙연산 입력(정수) : ");
    scanf("%d %c %d",&i,&a,&j);
    switch (a)
    {
    case '/':
      answer= i/j;
        break;
    case '+':
       answer=i+j;
        break;
    case '-':
       answer=i-j;
        break;
    case '*':
        answer=i*j;
        break;
    
    default:
       
    }

    printf("%d%c%d = %d\n",i,a,j,answer);

    return 0;
}
#endif

#if 0
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
#endif

#if 0
#include<stdio.h>
int main()
{
    int cnt = 0;
    int j;
    for(int i=2; i<=100; i++)
    {
        for(j=2;j<i; j++)
        {
            if(i%j == 0)break;
        }
        if(i==j)
        {
            cnt++;
            printf("%3d%s",i,(cnt%5==0) ? "\n":" ");
        }
    }
     printf("\n소수는 총 %d입니다.",cnt);
    return 0;
}
#endif

#if 0
#include<stdio.h>
int main()
{
    float w,h,b;
    char* str[] = {"체중관리가 필요합니다.","표준입니다."};

    printf("몸무게(kg) 와 키(cm) 입력 : ");
    scanf("%f %f",&w,&h);
    b= w/(h/100*h/100);

    printf("%s",str[(b>=20 && b >25)]);
   

    return 0;
}
#endif


#if 0
//정수/정수는 정수라는 점
//min,max를 임의로 지정하면 입력값이 음수일 떄 대비를 못함 (초기 입력값이 min,max)
#include<stdio.h>
int main()
{
    int arr[10] = {0};
    int sum=0;
    int min=0;
    int max=0;
    
    for(int i=0; i<10; i++)
    {
        printf("%d번째 숫자를 입력하시오: ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
        if(i==0){
            min = arr[i];
            min = arr[i];
        }else{
            if(min>arr[i]) min = arr[i];
            if(max<arr[i]) max = arr[i];
        }
       
    }
  
    for(int i=0; i<10; i++)
    {
        printf("%4d%s",arr[i],((i+1)%10)==0 ? "\n":"");
    }
    printf("min = %d, max = %d, average = %.2f\n",min,max,sum/10.0);

    return 0;
}

#endif

#if 0
//한글은 3byte, 영어와 \0(null)은 1byte
#include<stdio.h>
int main()
{
    char s[10]={'a','b','c','d','e'}; //10
    char t[]={'a','b','c','d','e','\0'};//6
    char u[]="abcde";//6
    char v[]="안녕하세요";//16

    printf("s = |%s| size = %d\n",s,sizeof(s));
    printf("t = |%s| size = %d\n",s,sizeof(t));
    printf("u = |%s| size = %d\n",s,sizeof(u));
    printf("v = |%s| size = %d\n",s,sizeof(v));


    return 0;
}
#endif

#if 0
#include<stdio.h>
int main()
{
    //1
    for(int i=0; i<5; ++i)
    {
       for(int j=0;j<=i;++j)
       {
            printf("*");
       }
       printf("\n");
    }
    printf("\n");

    //2
    for(int i=0; i<9; i+=2)
    {
       for(int j=0;j<=i;++j)
       {
            printf("*");
       }
       printf("\n");
    }
    printf("\n");




    //3
    for(int i=0;i<5; i++)
    {
        for(int j=5; j>i; --j)
        {
            printf("*");
        }
        printf("\n");
    }

    //4
    for(int i=0; i<5;++i)
    {
        for(int j=4; j>i; --j)
        {
            printf(" ");
        }
        for(int k=0;k<=i;++k)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    //5
    for(int i=0; i<5; i++)
    {
        for(int j=i; j<4;j++)
        {
            printf(" ");
        }
        for(int k=0;k<(i*2+1); ++k)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    //6
    for(int i=5; i>0; --i)
    {
        for(int k=5; k>i; --k)
        {
            printf(" ");
        }
        for(int j=0; j<2*i-1;j++)
        {
            printf("*");
        }
        
        printf("\n");

    }


    return 0;
}


#endif