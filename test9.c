#include <stdio.h>
#include <stdlib.h>
// student3 구조체 만든다.
// score 개수와 id 개수를 구한다. 
// sizeof(int) * score * id + sizeof(student3)*id 만큼 malloc을 한다
// student3의 객체들은 +i 로 접근 가능
// student3 + id 를 하면 거기서 부터 int score 을 저장하는 공간
// int * score_pos = (int *)(student3 + id) 로 접근 가능


    typedef struct
    {
        int id;
         char name[20];
         int *score;

    }student3;

 student3 * make_memory(int *num_id, int* num_score){
    printf("학생의 수와 점수 입력 개수 : ");
    scanf("%d %d",num_id,num_score);
    student3 * ptr_id = (student3 *)malloc(*num_id *sizeof(student3)+ sizeof(int) * (*num_score) * (*num_id));

    if (ptr_id ==NULL) exit(1);

    return ptr_id;


 }

 void scanf_name_score(student3 * ptr_id, int num_id,int num_score, int* ptr_score){
    for(int i=0; i<num_id; ++i)
    {
        (ptr_id+i)->score = ptr_score + i * num_score;
        printf("이름은 무엇입니까? :  ");
        scanf("%s",(ptr_id+i)->name);
        for(int j=0; j<num_score; ++j)
        {
            printf("\n%d번의 점수를 입력하시오: ",j+1);
            scanf("%d", (ptr_id+i)->score+j);
        }
        printf("\n=======\n");
    }

 }

 void print_name_score(student3* ptr_id,int num_id, int num_score){
    
    for(int i=0; i<num_id; ++i)
    {
        printf("이름 : %s",(ptr_id+i)->name);
        for(int j=0; j<num_score; ++j)
        {
            printf("\n%d번의 점수: %d",j+1, *((ptr_id+i)->score+j));
        }
        printf("\n=======\n");
    }
 }


int main()
{
    int num_id, num_score;
    student3 * ptr_id = make_memory(&num_id,&num_score); //동적할당
    int * ptr_score =(int *)(ptr_id+num_id); // score 저장하는 곳을 가리키는 주소 

    scanf_name_score(ptr_id,num_id,num_score, ptr_score);
    print_name_score(ptr_id,num_id,num_score);

    free(ptr_id);
    ptr_id = NULL;

}