#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height;

    do{
        height = get_int("What height do you want? (between 0 and 99)");

    }while(height <= 0 || height > 50);

    int space = height-1; //8
    int rows = space+1+space; // 17
    int count = 1;

    for(int i=0; i<= height; i++)
    {

        int sp = height-i; //2

        int spcounter = 0;

        for(int j=1; j<=rows; j++)
        {

            if(j == sp){

                printf("X");

                spcounter ++;

                if(spcounter < count){

                    sp += 2;
                }

            }else{
                printf(" ");
            }
        }

        count++;
        printf("\n");
    }
}
