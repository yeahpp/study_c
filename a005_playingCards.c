#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define CARDS 52
#define CLOVERS 0
#define HEARTS 1
#define SPADE 2
#define DIAMOND 3

int main()
{
    int check[CARDS] = {0};
    int cards_order[CARDS] = {0};
    //int rand_max = 51;
    char suit;

    srand(time(0));
    for(int i=0; i<CARDS; i++){
        int x;
        do{
            x = (double)rand()/((double)RAND_MAX +1)*CARDS;

        }while(check[x]==1);
        check[x] = 1;
        cards_order[i] =x;
    }

    printf("cards_order[ ]:\n");
    for(int i=0; i < CARDS; i++)
    {
        printf("%-5d%s",cards_order[i],((i+1) % 13)==0? "\n" : "");
    }

    printf("cards : \n");
    for(int i = 0; i <CARDS; i++)
    {
        int demon = cards_order[i]%13+1;
        switch (cards_order[i]/13)
        {
        case CLOVERS:
            suit = 'C';
            break;
        case HEARTS:
            suit='H';
            break;
        case SPADE:
            suit='S';
            break;
        case DIAMOND:
            suit = 'D';
            break;
        default:
            break;
        }
        printf("%c%-1d%s", suit,demon,(i+1)%13==0?"\n":", ");

    }

    return 0;
}