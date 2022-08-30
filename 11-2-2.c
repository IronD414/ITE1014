#include <stdio.h>

typedef struct
{
    char name[7];
    int score;
} Person;

void printScoreStars(Person* persons, int len)
{
    for (int a=0; a<len; a++)
    {
        printf("%s  ",persons[a].name);
        for (int b=1; b<= (persons[a].score/5); b++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main(void)
{
    Person students[3];
    scanf("%s %d",students[0].name,&students[0].score);
    scanf("%s %d",students[1].name,&students[1].score);
    scanf("%s %d",students[2].name,&students[2].score);
    printScoreStars(&students,3);
}
