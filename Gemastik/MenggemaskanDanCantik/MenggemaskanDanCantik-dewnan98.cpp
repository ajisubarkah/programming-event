#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <time.h>
using namespace std;

class Mahasiswa
{
  public:
    string nama;
    int gemas;
    int cantik;
    int skill;

    Mahasiswa(string nama, int gemas, int cantik)
    {
        this->nama = nama;
        this->gemas = gemas;
        this->cantik = cantik;
    }
};

int getMaxG(vector<Mahasiswa> m)
{
    int maxG = 1;
    for (int a = 0; a < 3; a++)
    {
        maxG *= m[a].gemas;
    }
}

void swapMahasiswa(vector<Mahasiswa> &m, vector<Mahasiswa> &m2)
{
    int next = 1;
    for (int a = 0; a < 3; a++)
    {

        for (int b = 0; b < 3; b++)
        {
            if (m[a].nama == m2[b].nama)
            {

                m[a] = m[2 + next];
                a--;
                next++;
            }
        }
    }
}

int getMaxC(vector<Mahasiswa> m)
{

    int maxC = 1;
    for (int a = 0; a < 3; a++)
    {

        maxC *= m[a].cantik;
    }
}

main()
{

    int t;
    cin >> t;

    vector<int> hasil;
    while (t--)
    {
        int n;
        cin >> n;

        vector<Mahasiswa> mahasiswa;
        //input
        while (n--)
        {
            string nama;
            cin >> nama;
            int gemas, cantik;
            cin >> gemas >> cantik;
            mahasiswa.push_back(Mahasiswa(nama, gemas, cantik));
        }

        // clock_t tStart = clock();

        vector<Mahasiswa> mahasiswa2 = mahasiswa;

        std::sort(mahasiswa.begin(),
                  mahasiswa.end(),
                  [](const Mahasiswa &lhs, const Mahasiswa &rhs) {
                      return lhs.gemas > rhs.gemas;
                  });

        std::sort(mahasiswa2.begin(),
                  mahasiswa2.end(),
                  [](const Mahasiswa &lhs, const Mahasiswa &rhs) {
                      return lhs.cantik > rhs.cantik;
                  });

        //           cout<<"Berhasil sorting";

        //            cout<<"MAX GEMAS : "<<maxG<<endl;
        //            cout<<"MAX CANTK : "<<maxC<<endl;

        vector<Mahasiswa> mhs = mahasiswa;
        vector<Mahasiswa> mhs2 = mahasiswa2;

        swapMahasiswa(mhs, mhs2);

        int power = getMaxG(mhs) + getMaxC(mhs2);

        mhs = mahasiswa;
        mhs2 = mahasiswa2;

        swapMahasiswa(mhs2, mhs);

        if (power >= getMaxG(mhs) + getMaxC(mhs2))
        {

            swapMahasiswa(mahasiswa, mahasiswa2);
        }
        else
        {
            swapMahasiswa(mahasiswa2, mahasiswa);
        }

        cout << getMaxG(mahasiswa) + getMaxC(mahasiswa2) << endl;

        for (int a = 0; a < 3; a++)
        {
            cout << mahasiswa[a].nama << " ";
        }
        cout << endl;
        for (int a = 0; a < 3; a++)
        {
            cout << mahasiswa2[a].nama << " ";
        }
        cout << endl;

        //  printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
}
