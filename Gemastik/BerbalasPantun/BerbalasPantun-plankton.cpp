#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

main()  
{
    int N;
    cin >> N;

    int A,B;
    long long tempA, tempB;

    for(int i = 0; i < N; i++){
        cin >> A;
        tempA += A;
    }
    
    for(int i = 0; i < N; i++){ 
        cin >> B;
        tempB += B;
    }

    cout << (tempA * N) + (tempB * N) << endl;
}