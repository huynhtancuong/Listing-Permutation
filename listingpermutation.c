#include <stdio.h>

int result[6];
int mark[6];
int counter = 1;

void f(int k)
{
    for (int i = 1; i<=5; i++)
    {
        if (mark[i] == 0)
        {
            result[k] = i;
            mark[i] = 1;
            if (k == 5) 
            {
                printf("Found #%d: %d%d%d%d%d \n", counter, result[1], result[2], result[3], result[4], result[5]);
                counter++;
            }
            else 
            {
                f(k+1);
            }
            mark[i] = 0;
        }

    }
}

int main() 
{
    f(1);

    return 0;
}