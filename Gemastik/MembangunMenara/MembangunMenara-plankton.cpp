#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

vector<int> membangunMenara(int n, int a[], int b[], int c[]){
    vector<int> result;
    int hasil[2] = {0,0};
    for(int i = 0; i < n; i++){
        hasil[0] += minmax({a[i],b[i],c[i]}).first;
        hasil[1] += minmax({a[i],b[i],c[i]}).second;
    }
    result.push_back(hasil[0]);
    result.push_back(hasil[1]);
    return result;
}

main()
{
    int t;
    cin >> t;
    int n, a[t], b[t], c[t];
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i] >> c[i];
        }
        vector<int> hasil = membangunMenara(n,a,b,c);
        printf("%d %d\n", hasil[0], hasil[1]);
    }
}