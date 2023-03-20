#include "cs50.h"
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    char name[100];

    printf("put a name moron\n");
    scanf("%s", name);

    printf("%s", name);

    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-902-575-1829";

    people[1].name = "Dingus";
    people[1].number = "+1-902-686-2804";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not Found\n");
    return 1;
}