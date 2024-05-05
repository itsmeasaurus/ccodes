#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string phone_number;
}
Person;

int main (void)
{
    Person people[3];

    people[0].name = "Liam";
    people[0].phone_number = "+66 12234";

    people[1].name = "Asaurus";
    people[1].phone_number = "+66 3242352";

    people[2].name = "Wai";
    people[2].phone_number = "+66 13089070";

    string name = get_string("Who number do you want?");

    for(int i=0; i<3; i++) {
        if(strcmp(people[i].name, name) == 0) {
            printf("Found! Your number is %s\n", people[i].phone_number);
            return 0;
        }
    }

    printf("Not found!\n");
    return 1;
}
