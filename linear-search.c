#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {1, 50, 2, 40, 100, 23, 59};

    int predictedNum = get_int("Type a number");

    // Linear Search Implementation starts here
    for(int i=0; i < 8; i++)
    {
        if(numbers[i] == predictedNum) {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not Found\n");
    return 1;
}
