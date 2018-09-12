#include <iostream>
#include <string.h>

using namespace std;

int kodeKeras(int n, string s[], string e[])
{

    for (int i = 0; i < n; i++) {
        char sArray[s[i].size() + 1];
        char eArray[e[i].size() + 1];
        strcpy(sArray, s[i].c_str());
        strcpy(eArray, e[i].c_str());
    }
}

main()
{
    int t;
    cin >> t;
    int n;
    while (t--) {
        cin >> n;
        string s[n], e[n];
        for (int i = 0; i < n; i++) {
            cin >> s[i] >> e[i]
        }
        cout << kodeKeras(n, s, e) << endl;
    }
}