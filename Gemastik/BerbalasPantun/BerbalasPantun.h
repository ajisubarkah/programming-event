#include <iostream>
#include <stdio.h>

using namespace std;

int easyVersion(int N, int A[], int B[])
{
    return A[0] + B[0];
}

int hardVersion(int N, int A[], int B[])
{
    int total = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            total = total + (A[i] + B[i]);
        }
    }
    return total;
}