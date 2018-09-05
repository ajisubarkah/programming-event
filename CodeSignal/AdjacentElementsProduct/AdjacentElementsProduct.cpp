#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int adjacentElementsProduct(vector<int> inputArray) {
    int temp = inputArray[0] * inputArray[1];
    for(int i = 0; i < inputArray.size() - 1; i++){
        if(temp < (inputArray[i] * inputArray[i+1]))
            temp = inputArray[i] * inputArray[i+1];
    }
    return temp;
}

main(){
    int length;
    vector<int> inputArray;

    cin >> length;
    
    int input;
    for(int i = 0; i < length; i++){
        cin >> input;
        inputArray.push_back(input);
    }

    cout << adjacentElementsProduct(inputArray) << endl;
}