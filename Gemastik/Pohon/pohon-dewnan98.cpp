#include <iostream>
#include <vector>
using namespace std;


bool checkGradient(vector<float>g ,int m)
{
    for (int v : g)
    {

        if(v==m)    return true;
    }

    return false;
}


main ()
{
    int n;
    int x;
    int y;


    vector <float> gradientLeft;
    vector <float> gradientRight;
    cin>>n;
    cin>>x;
    cin>>y;

    int c = 0;
    int x2,y2;
    for (int a= 0 ; a<n;a++)
    {

     cin>>x2;
     cin>>y2;
     float m = (y2-y)/(x2-x);
     if(x2>=x)
     {
        if(!checkGradient(gradientRight,m))
        {
            gradientRight.push_back(m);
            c++;
        }

     }
     else{
        if(!checkGradient(gradientLeft,m))
        {
            gradientLeft.push_back(m);
            c++;
        }
     }

    }
    cout<<c<<endl;
}
