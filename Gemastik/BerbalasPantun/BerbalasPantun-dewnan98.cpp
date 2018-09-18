#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int random (int mins , int maxs)
{

    return (rand()%maxs)+mins;
}
long long berbalasPantun2(vector <int> A , vector <int> B)
{

    int n = A.size();
    long long total = 0;
    for(int a= 0 ; a<n;a++)
    {
        for(int b = 0 ;b<n;b++)
        {
            total+=A[a]+B[b];

        }
    }

    return total;
}

long long berbalasPantun3(vector <int> A , vector <int> B)
{

    int n = A.size();
    long long sumA=0;
    long long sumB=0;

    if(n==1) return A[0]+B[0];

    for(int a= 0 ; a<n/2;a++)
    {
        sumA+=A[a]+A[A.size()-1-a];
        sumB+=B[a]+B[B.size()-1-a];
    }

    if(n%2==1){
        sumA+=A[n/2];
        sumB+=B[n/2];
    }

    return ((sumA*n) + (sumB*n));
}


long long berbalasPantun(vector <int> A , vector <int> B)
{

    int n = A.size();
    long long sumA=0;
    long long sumB=0;
    for(int a= 0 ; a<n;a++)
    {
        sumA+=A[a];
        sumB+=B[a];
    }

    return ((sumA*n) + (sumB*n));
}

main ()
{
    srand( time( NULL ) );

    int n = 300000;
   // cin>>n;
    int m = n;
    vector <int> A;
    vector <int> B;

    while(n--)
    {
//        int v;
//        cin>>v;
        A.push_back(random(1,100));
        //cout<<A[A.size()-1]<<" ";
    }
    cout<<endl;
    while(m--)
    {
//        int v;
//        cin>>v;
        B.push_back(random(1,100));
       // cout<<B[B.size()-1]<< " ";
    }

cout<<endl;

    //cout<<berbalasPantun(A,B)<<endl;
    cout<<berbalasPantun3(A,B)<<endl;


}
