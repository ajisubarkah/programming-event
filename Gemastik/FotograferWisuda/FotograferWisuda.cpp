#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace stack;

string fotogragerWisuda(int A, int B, int K)
{
    string tempString = "";

    if ((A == 0 && B > K) || (A > 0 && A * 2 > B && B > 2 * K))
    {
        tempString = "mustahil";
    }
    else
    {
        int total = B[t] + A[t];
        int temp = 0, b = B[t];
        while (total--)
        {

        }
    }
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