#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Lawan
{
    int A;
    int B;

};
int  pertandingan( vector<Lawan> arr, int M )
{
     std::sort(arr.begin(),
                      arr.end(),
                      [](const Lawan& lhs, const Lawan& rhs)
            {
                return lhs.A < rhs.A;
            });


    for(int a = 0; a<arr.size();a++)
    {

        if(arr[a].A<=M)
        {

            M+=arr[a].B;
        }
    }

    return M;



}
main ()
{

    int n;
    cin>>n;

    int m;
    cin>>m;

    vector <Lawan>arr;
    for (int a = 0 ; a<n;a++) { int x ; cin>>x;
    Lawan l ;arr.push_back(l);
    arr[a].A=x;}
    for (int a = 0 ; a<n;a++) { int x ; cin>>x; arr[a].B=x;}

    cout<<pertandingan(arr,m)<<endl;
}
