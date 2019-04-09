//mario.c
#include <cs50.h>
#include <stdio.h>
void mario(int);
    
int main(void)
{
    int i = 0;
    do
    {
        i = get_int("Enter pyramid height 1-8: ");
        if (i < 1 || i > 8)
        {
            printf("Sorry, must be between 1 and 8\n");
        }
    }
    while(i < 1 || i > 8);
    mario(i);
}

void mario(int i)
{
    int j = 0;
    int k;
    int l;
    while (j < i)
    {
        j++;
        for (l = 8-j; l > 0; l--)
        {
            printf(" ");
        }
        for (k = 0; k < j; k++)
        {
            printf("#");
        }
        printf("  ");
        for (k = 0; k < j; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    //printf("%i\n",i);
}
