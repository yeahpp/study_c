#define _C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student3 {
    int id;
    int* score;
    char name[20];
};

void input_data3(struct student3* stu, int n, int m) {
    struct student3* pos;
    int* scores;
    char str[100];

    for (int i = 0; i < n; ++i) {
        pos = stu + i; //stu 위치
        scores = pos->score; // 해당 stu 안에 있는 score

      
        fgets(str, sizeof str, stdin); // 한 줄로 다 받아
        char *token = strtok(str, " ");
        pos->id = atoi(token); //아이디
        token = strtok(NULL, " ");
        strcpy(pos->name, token);        

        for(int i=0; i<m; ++i)
        {
            token = strtok(NULL, " ");
            if(token !=NULL){
                scores[i] = atoi(token);
            }
            

        }

       
    }
}

void print_data3(struct student3* stu, int n, int m) {
    struct student3* pos;
    int* scores;

    for (int i = 0; i < n; ++i) {
        pos = stu + i;
        scores = pos->score;

        printf("%d ", pos->id);

        for (int j = 0; j < m; ++j) {
            printf("%d ", scores[j]);
        }

        printf("%s\n", pos->name);
    }
}

int main(void) {
    struct student3* stu;
    struct student3* pos;
    int* scores;
    int n, m;

    if (freopen("../student2.txt", "r", stdin) == NULL)
    {
        perror("freopen");
        return 1;
    }
    (void)scanf("%d %d", &n, &m);
    getchar();   // 남아있는 '\n' 제거

    stu = (struct student3*)malloc(sizeof(*stu) * n + sizeof(*scores) * n * m);

    if (stu == NULL) {
        exit(0);
    }

    // 구조체 배열 바로 뒤부터 점수 영역으로 사용
    scores = (int*)(stu + n);

    // 각 학생의 score 포인터 연결
    for (int i = 0; i < n; ++i) {
        pos = stu + i;
        pos->score = scores + i * m;
    }

    input_data3(stu, n, m);
    print_data3(stu, n, m);

    free(stu);
    stu = NULL;

    return 0;//jnjhnjn
}