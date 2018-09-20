#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

string fotogragerWisuda(int A, int B, int K)
{
    string tempString = "";

    if (A / (B + 1) > 2 || K < B / (A + 1))
    {
        return "mustahil";
    } else {
        int total = A + B;
        int countA = 0, countB = 0;
        while (total--) {
            if (A > 0 && countA < 2 && A > B || countB == K) {
                tempString += "L";
                A--;
                countA++;
                countB = 0;
            } else {
                tempString += "P";
                B--;
                countB++;
                countA = 0;
            }
        }
    }
    return tempString;
}

main()
{
    int T, A, B, K;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B >> K;
        cout << fotogragerWisuda(A, B, K) << endl;
    }
}