#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <math.h>

#define MAX 50

using namespace std;

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int saklarLhompatII(int r, int c, int n, int g[][MAX])
{
    int total = 0, meja = r * c, countMhs = 0;
    vector<int> getPosCol, getPosRow;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(g[i][j] < 0) {
                getPosCol.push_back(i);
                getPosRow.push_back(i);
                countMhs++;
            }
        }
    }
    int config = factorial(c + 1) / (factorial(c + 1) - factorial()) * factorial();
    return config;
    
}

main()
{
    int T, R, C, N;
    cin >> T;
    int G[MAX][MAX];
    for(int i = 0; i < T; i++){
        cin >> R >> C >> N;
        for(int r = 0; r < R; r++){
            for(int c = 0; c < C; c++)
                cin >> G[r][c];
        }
        cout << saklarLhompatII(R, C, N, G) << endl << endl;
    }
}