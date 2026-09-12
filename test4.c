#include<stdio.h>


void ss(int (*score)[2], int * arr, int n) //2열에만 접근해서 입력
{
    //score[][] 이렇게 있을 때. 2번째 행 접근 방법: score[]+1

    //score[((arr[n])/10)][1]=score[((arr[n])/10)][1]+1;
     ++score[((arr[n])/10)][1];

}

void pp(int (*score)[2],int c) //높은 숫자대로 점수 출력 ..100점, 90점.. + [0][1] vs [1][1]
{
    int temp;
    for(int i=0; i<c-1; ++i) // n;5
    {
        for(int j=i+1; j<c; ++j)
        {
            if(score[i][1]<score[j][1]) {
               // 점수 교환
                temp = score[i][0];
                score[i][0] = score[j][0];
                score[j][0] = temp;

                // 인원수 교환
                temp = score[i][1];
                score[i][1] = score[j][1];
                score[j][1] = temp;
            }

        }
    }

    for(int i=0; i<c; ++i) { 
       
        if(score[i][1]==0) continue;
         printf("%d : %d person\n", *(score[i]),score[i][1]);
        
       
          //printf("dd");
    }

}
int main()
{

  int arr[101] = {0}; //학생 저장 배열
  int score[11][2] = {0,0,10,0,20,0,30,0,40,0,50,0,60,0,70,0,80,0,90,0,100,0}; //점수 저장 배열 //0점은 1명,,,10점 2명,,
  int i =-1; //3개를 넣었어 -->인덱스는 2

  do{

    scanf("%d",&arr[++i]);
    if(arr[i]==0) break;
    //score 배열에 넣는 함수
    ss(score, arr,i);
    
  }while(i<100);
 

   pp(score,11);
    
  return 0;
}


