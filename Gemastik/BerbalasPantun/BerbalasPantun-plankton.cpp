#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

main()  
{
    int N;
    cin >> N;
    int A[N], B[N];

    long total = 0;

    for(int i = 0; i < N; i++) cin >> A[i];
    
    for(int i = 0; i < N; i++){ 
        cin >> B[i];
        for(int j = 0; j < N; j++)
            total += B[i] + A[j];
    }

    cout << total << endl;
}