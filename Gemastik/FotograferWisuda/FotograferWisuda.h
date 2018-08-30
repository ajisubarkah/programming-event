#include <iostream>
#include <stdio.h>

using namespace std;

void easyVersion(int T, int A[], int B[], int K[])
{
    for (int t = 0; t < T; t++)
    {
        if ((A[t] == 0 && B[t] > K[t]) || (A[t] == 1 && B[t] > 2 * K[t]))
        {
            printf("mustahil");
        }
        else
        {
            int total = B[t] + A[t];
            int temp = 0, b = B[t];
            do
            {
                if (temp < K[t] && b != 0)
                {
                    printf("P ");
                    b--;
                    temp++;
                }
                else
                {
                    printf("L ");
                    temp = 0;
                }
                total--;
            } while (total > 0);
        }
        printf("\n");
    }
}

void hardVersion(int T, int A[], int B[], int K[])
{
}