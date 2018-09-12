#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void menggemaskanDanCantik(int n, string nama[], int gemas[], int cantik[])
{
    int best = 0, res = 0, a, b, c, d, e, f;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                for(int x = 0; x < n; x++){
                    for(int y = 0; y < n; y++){
                        for(int z = 0; z < n; z++){
                            if(!(i == j || i == k || i == x || i == y || i == z || j == k || j == x || j == y || j == z
                            || k == x || k == y || k == z || x == y || x == z || y == z)){
                                res = (gemas[i] * gemas[j] * gemas[k]) + (cantik[x] * cantik[y] * cantik[z]);
                                if(res > best){
                                    best = res;
                                    a = i; b = j; c = k; d = x; e = y; f = z;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << best << endl;
    cout << nama[a] << " " << nama[b] << " " << nama[c] << endl;
    cout << nama[d] << " " << nama[e] << " " << nama[f] << endl;
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
        
        for (int i = 0; i < n; i++) {
            cin >> nama[i] >> g[i] >> c[i];
        }

        menggemaskanDanCantik(n, nama, g, c);
    }
}