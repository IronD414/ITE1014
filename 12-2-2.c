#include <stdio.h>
#include <string.h>

int main(void)
{
    char* list[10];
    char word[20];
    int a = 0;
    while (strcmp(word,"end")!=0)
    {
        printf("Enter a word (Enter 'end' to quit): ");
        scanf("%s",word);
        list[a] = word;
        a++;
    }
    printf("%d words in the list:\n",a+1);
    for (int i=0; i<a+1; i++)
    {
        printf("%s ",list[i]);
    }
}
