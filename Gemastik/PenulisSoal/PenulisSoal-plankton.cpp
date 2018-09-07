#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#define MAX 50
using namespace std;

int penulisSoal(int n, int s[], int p[], int c[][MAX])
{
    int hasil = 0;
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < p[i]; j++)
        {
            bool free = true;
            for (int n : temp)
            {
                if (n == c[i][j])
                {
                    free = false;
                    break;
                }
            }
            if (free == true)
            {
                hasil++;
                temp.push_back(c[i][j]);
            }
        }
        hasil++;
    }

    return hasil;
}

main()
{
    int t;
    cin >> t;

    int hasil[t], n, s[MAX], p[MAX], c[MAX][MAX];

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> s[i];
        }

        for (int j = 0; j < n; j++)
        {
            cin >> p[j];
            for (int l = 0; l < p[j]; l++)
            {
                cin >> c[j][l];
            }
        }
        cout << penulisSoal(n, s, p, c) << endl;
    }
}