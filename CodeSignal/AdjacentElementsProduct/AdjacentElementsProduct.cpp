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
    int length = rand() % 11 + 2;
    vector<int> inputArray;

    for(int i = 0; i < length; i++){
        inputArray.push_back(rand() % 1001 + (-1000));
    }

    cout << "inputArray : [ ";
    for(int n : inputArray) {
        cout << n << " ";
    }
    cout << "] \n" << "Output : " << adjacentElementsProduct(inputArray);
}