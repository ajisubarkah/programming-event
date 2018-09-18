#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

vector<int> membangunMenara(int n, int a[], int b[], int c[]) {
    vector<int> result;
    int hasil[2] = {0,0};
    for(int i = 0; i < n; i++){
        hasil[0] += min({a[i],b[i],c[i]});
        hasil[1] += max({a[i],b[i],c[i]});
    }
    result.push_back(hasil[0]);
    result.push_back(hasil[1]);
    return result;
}

int main(){
    int t;
    cin >> t;
    int n, a[t], b[t], c[t];
    for(int i = 0; i < t; i++) {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i] >> c[i];
        }
        vector<int> hasil = membangunMenara(n,a,b,c);
        cout << hasil[0] << " " << hasil[1] << endl;
    }
}