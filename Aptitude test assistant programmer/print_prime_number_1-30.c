#include <stdio.h>

int main()
{
    printf("Prime numbers between 1 and 30 are: ");

    for (int i = 2; i <= 30; i++)
    {

        int flag = 1;

        if (i <= 1)
            flag = 0; 

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
                flag = 0; 
        }

        if (flag != 0)
        {
            printf("%d ", i);
        }
        //2 3 5 7
    }

    printf("\n");

    return 0;
}
