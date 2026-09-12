    #include <stdio.h>
    #include <stdlib.h>
    // id 개수를 받고, malloc 을 이용해서 id개수 * 구조체크기 만큼 메모리 할당
    // 과목 개수를 받고, malloc 을 이용해서 과목개수 * int * id 만큼 메모리 할당
    // ptr_score의 주소를  student3.score에게 할당, *ptr_score + i * score_input 만큼 더하면서 주소이동


    typedef struct
    {
        int id;
         char name[20];
         int *score;

    }student3;


student3 * print_student_num(int *id_input)
{
    printf("학생의 수는: ");
        scanf("%d",id_input);
        student3 * ptr_id = (student3 *)malloc(*(id_input)*sizeof(student3));
        if(ptr_id == NULL) exit(1);
        //student3 만큼 점프 가능한 동적 메모리 할당

    return ptr_id;
}

int * print_score_num(int *score_input, int id_input){
        printf("과목 점수는 몇개? : ");
         scanf("%d",score_input);
         int * ptr_score  = (int *)malloc(*(score_input)*sizeof(int)*id_input);
         if(ptr_score == NULL) exit(1);
        //int 타입 만큼 점프 가능한 동적 메모리 할당

        return ptr_score;

}

void scanf_name_score(int id_input,student3 * ptr_id, int score_input,  int * ptr_score){

    for(int i=0; i<id_input; ++i)
        {
            printf("이름을 입력하세요: ");
            scanf("%s",(ptr_id+i)->name);

            (ptr_id+i)->score = ptr_score+ i * score_input; // ptr_score의 주소를 student3.score 에 할당
            for(int j=0; j<score_input; ++j)
            {
                printf("%d번 점수를 입력하세요: ",j+1);
                scanf("%d",(ptr_id+i)->score+j);
                
            }
            printf("\n");   
        }
    

}

void print_everything(int id_input,student3 * ptr_id, int score_input){

 for(int i=0; i<id_input; ++i)
        {
            printf("\n이름: %s\n",(ptr_id+i)->name);
            for(int j=0; j<score_input; ++j)
            {
                printf("%d 번 과목의 점수: %d\n",j+1, *((ptr_id+i)->score+j));
            }
            printf("\n==============\n");
        }

}


    int main()
    {
       int id_input, score_input;
       student3 * ptr_id= print_student_num(&id_input); //id 개수를 이용한 malloc
       int *ptr_score= print_score_num(&score_input,id_input); //score 개수를 이용한 malloc
        
      scanf_name_score(id_input,ptr_id, score_input,ptr_score); //이름과 점수 할당
      print_everything(id_input,ptr_id,score_input); // 모든 정보 출력
       
        

         free(ptr_score);
         free(ptr_id);
         ptr_id =NULL;
         ptr_score = NULL;



        return 0;   
    }