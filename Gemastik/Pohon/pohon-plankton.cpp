#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int pohon(int n, int x, int y, float a[], float b[]){
    
    vector<float> tempLeft, tempRight;
    int totalPohon = 0;

    for(int i = 0; i < n; i++){

        bool isFound = false;
        float  m = (b[i] - y) / (a[i] - x);

        if(x > a[i]){
            for(float  f : tempRight){
                if(m == f){
                    isFound = true;
                    break;
                }
            }

            if(!isFound){
                totalPohon++;
                tempRight.push_back(m);
            }
        } else {
            for(float  f : tempLeft){
                if(m == f){
                    isFound = true;
                    break;
                }
            }

            if(!isFound){
                totalPohon++;
                tempLeft.push_back(m);
            }
        }
    }
    return totalPohon;
}

main(){
    int n, x, y;

    cin >> n >> x >> y;

    float a[n], b[n];

    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    
    cout << pohon(n,x,y,a,b) << endl;
}