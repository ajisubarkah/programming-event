#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void urutanAneh(vector<int> arr)
{


            std::sort(arr.begin(),
                      arr.end(),
                      [](const int& lhs, const int& rhs)
            {
                    if(lhs%10== rhs%10)
                    {
                        return lhs <rhs;
                    }
                return lhs%10 < rhs%10;
            });


            for (int x : arr)
            {

                cout<<x<<endl;
            }
}

main ()
{

    int n;
    cin>>n;
    vector<int> arr;
    while(n--)
    {
        int v;
        cin>>v;
        arr.push_back(v);
    }

    urutanAneh(arr);

}
