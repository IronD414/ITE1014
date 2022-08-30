#include <stdio.h>

int main(void)
{
    typedef struct person
    {
        char name[10];
        int age;
    } Person;
    Person per1;
    scanf("%s %d",&per1.name,&per1.age);
    printf("name: %s\nage: %d",per1.name,per1.age);
}
