#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int berbalasPantun(int N, int A[], int B[])
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

main()  
{
    int N;
    cin >> N;
    int A[N], B[N];
    
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];

    cout << berbalasPantun(N, A, B) << endl;
}