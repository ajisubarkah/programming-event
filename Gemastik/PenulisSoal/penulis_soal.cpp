#include <iostream>
#include <vector>

using namespace std;

void printVector(vector <int> vec)
{

    cout<<"VECTOR : ";
       for (int a = 0 ; a<vec.size();a++)
    {

        cout<<vec[a]<<" | ";
    }
    cout<<endl;

}

bool vectorContain (vector<int>vec , int angka)
{
    for (int a = 0 ; a<vec.size();a++)
    {

        if(vec[a]==angka)
            return true;
    }

    return false;

}

int penyisihanSoal(int jumlahPenulis ,vector <int>soal , vector<vector<int>> perusahaan)
{
    vector <int> himpunan;
    int keragaman = 0;

    for (int a = 0 ; a<jumlahPenulis;a++)
    {
        keragaman++;


        cout<<soal[a]<<" SOAL dari penulis "<<a+1<<" dimiliki oleh {penulis "<<a+1;
        for(int b = 0 ; b<soal.size()-1;b++)
        {
            for(int c = 0 ; c<perusahaan[a].size();c++)
            {

                if(himpunan.empty() ||!vectorContain(himpunan ,perusahaan[a][c]) )
                {

                    himpunan.push_back(perusahaan[a][c]);
                    keragaman++;
                    cout<<",Perushaan "<<perusahaan[a][c];
                }

            }

        }
         cout<<"}"<<endl;






    }
    //printVector(himpunan);


    return keragaman;
}


main()
{

    int t;
    cin >>t;
    cout<<endl;
    int counter=0;

    do
    {
            vector <int> soals;
    vector<vector <int>> perusahaan;
    int penulis;

        cout<<"Masukan jumlah penulis : ";
        cin>>penulis;

        for(int a = 0 ;a<penulis;a++)
        {


            cout<<"Masukan Jumlah Soal dari penulus ["<<a+1<<"] : ";
            int soal;
            cin>>soal;
            soals.push_back(soal);
            cout<< " ";


        }
        cout<<endl;

        for(int a = 0 ;a<penulis;a++)
        {

            int jumlahPerusahaan;
            cout<<"Jumlah Perushaan penulis ke [ "<<a+1<<"]  : "  ;
            cin>>jumlahPerusahaan;

            perusahaan.push_back(std::vector<int>());
            for (int b= 0 ; b<jumlahPerusahaan;b++)
            {
                int p;
                cout<<"Masukan perushaan : ";
                cin>>p;
                perusahaan[a].push_back(p);

            }

        }


        int hasil = penyisihanSoal(penulis , soals,perusahaan);
        cout<<endl;
        cout<<"OUTPUT : "<<hasil;
        cout<<endl;

        counter++;
    }while(counter<t);

}

