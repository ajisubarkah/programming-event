#include <iostream>
#include <vector>

using namespace std;

class PasanganTerbaik
{
    private :
        vector <int> A;
        vector <int> B;
        vector <int> C;

        int hasilMinimum;

        int f (int i , int j)
        {
            int hasil = A[i]*B[j]+C[(A[i]*B[j])%C.size()];
            return hasil;
        }
        public :
        PasanganTerbaik(vector <int>A , vector <int> B , vector <int> C)
        {
            this->A = A;
            this->B = B;
            this->C = C;

        }

        void hitungMinimum()
        {
            int minimum = this->f(0,0);

            for(int a = 0 ; a<A.size() ; a++)
            {
                for (int b = 1 ; b<B.size();b++)
                {
                    if(this->f(a,b)<minimum)
                    {
                        minimum = f(a,b);
                    }

                }
            }
            this->hasilMinimum = minimum;
        }

        int getHasilMinimum()
        {
            return this->hasilMinimum;
        }
};


main()
{
    int n , m;



    vector  <PasanganTerbaik>  pt;

    int t;
    cin >> t;
    int counter =0;
    do
    {



    cin >>n;
    cin >>m;



    vector <int> A;
    vector <int> B;
    vector <int> C;

    for (int a = 0 ; a< n ; a++)
    {

        int x;
        cin>>x;
        A.push_back(x);
    }
    for (int b = 0 ; b<n;b++)
    {
        int x ;
        cin>>x;
        B.push_back(x);

    }

    for (int c = 0 ; c<m ; c++)
    {

        int x;
        cin>>x;
        C.push_back(x);
    }

    PasanganTerbaik pasanganTerbaik (A,B,C);

    pt.push_back(pasanganTerbaik);
    pt[counter].hitungMinimum();
//    cout<<"Berhasil ";
//    pasanganTerbaik.hitungMinimum();
//    cout<<" OUTPUT : ";
//    cout<<pasanganTerbaik.getHasilMinimum();

    counter++;
    }while(counter<t);

    cout<<" OUTPUT "<<endl;
    for (int a = 0 ; a<t ;a++)
    {
        cout<<pt[a].getHasilMinimum()<<endl;

    }


}
