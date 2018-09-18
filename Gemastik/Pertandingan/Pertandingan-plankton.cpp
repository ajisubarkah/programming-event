#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[n];
    
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < n-1; i++){
        int min_idx = i;
        for (int j = i+1; j < n; j++)
          if (a[j] < a[min_idx])
            min_idx = j;
 
        swap(a[min_idx], a[i]);
        swap(b[min_idx], b[i]);
    }
    
    for(int i = 0; i < n; i++){
        if(m >= a[i]) m += b[i];
    }

    cout << m << endl;
}