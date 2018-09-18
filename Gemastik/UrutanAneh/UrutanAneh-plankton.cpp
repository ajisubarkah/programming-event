#include <iostream>
#include <stdio.h>

using namespace std;

main(){
    int n;
    cin >> n;
    int x[n];
    
    for(int i = 0; i < n; i++) cin >> x[i];

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if((x[i] % 10 == x[j] % 10 && x[i] > x[j]) || x[i] % 10 > x[j] % 10)
                swap(x[i],x[j]);
        }
    }

    for(int i : x)
        cout << i << endl;
}