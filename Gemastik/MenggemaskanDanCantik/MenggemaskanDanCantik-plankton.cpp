#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void menggemaskanDanCantik(int n, string nama[], int g[], int c[])
{
    int totalNilai, tempG, tempC;
    string tempNama;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(g[i] < g[j] && g[j] >= c[j]){
                swap(g[i],g[j]);
                swap(c[i],c[j]);
                swap(nama[i],nama[j]);
            }
            else if(c[i] < c[j] && c[j] >= g[j]){
                swap(g[i],g[j]);
                swap(c[i],c[j]);
                swap(nama[i],nama[j]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << nama[i] << " " << g[i] << " " << c[i] << endl;
    }
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string nama[n];
        int g[n], c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> nama[i] >> g[i] >> c[i];
        }
        menggemaskanDanCantik(n, nama, g, c);
        //cout << result[0] << endl << result[1] << endl << result[2] << endl;
    }
}