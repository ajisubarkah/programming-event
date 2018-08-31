#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

vector<string> easyVersion(int T, int A[], int B[], int K[])
{
    vector<string> printOutString;

    for (int t = 0; t < T; t++)
    {
        string tempString = "";

        if ((A[t] == 0 && B[t] > K[t]) || (A[t] == 1 && B[t] > 2 * K[t]))
        {
            tempString = "mustahil";
        }
        else
        {
            int total = B[t] + A[t];
            int temp = 0, b = B[t];
            do
            {
                if (temp < K[t] && b != 0)
                {
                    tempString += "P ";
                    b--;
                    temp++;
                }
                else
                {
                    tempString += "L ";
                    temp = 0;
                }
                total--;
            } while (total > 0);
        }
        printOutString.push_back(tempString);
    }
    return printOutString;
}

vector<string> hardVersion(int T, int A[], int B[], int K[])
{
}