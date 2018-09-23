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

    Mahasiswa(string nama, int gemas, int cantik)
    {
        this->nama = nama;
        this->gemas = gemas;
        this->cantik = cantik;
    }

  private:
};

//void menggemaskanDanCantik2(vector <Mahasiswa> m)
//{
//    int best = 0;
//    string nama [6];
//    int res;
//     do {
//
//
//        res = (m[0].gemas * m[1].gemas * m[2].gemas) + (m[3].cantik * m[4].cantik * m[5].cantik);
//            if(res > best){
//            best = res;
//                nama[0]=m[0].nama;
//                nama[1]=m[1].nama;
//                nama[2]=m[2].nama;
//                nama[3]=m[3].nama;
//                nama[4]=m[4].nama;
//                nama[5]=m[5].nama;
//                        }
//    } while (next_permutation(m.begin(), m.end()));
//
//
//    cout<<best<<endl;
//    cout<<nama[0]<< "  " <<nama[1]<<" "<<nama[2]<<endl;
//    cout<<nama[3]<< " " <<nama[4]<< " " <<nama[5]<<endl;
//}

void menggemaskanDanCantik(vector<Mahasiswa> m)
{
    long long best = 0, a, b, c, d, e, f;
    long long res;
    int n = m.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                for (int x = 0; x < n; x++)
                {
                    for (int y = 0; y < n; y++)
                    {
                        for (int z = 0; z < n; z++)
                        {
                            if (!(i == j || i == k || i == x || i == y || i == z || j == k || j == x || j == y || j == z || k == x || k == y || k == z || x == y || x == z || y == z))
                            {
                                res = (m[i].gemas * m[j].gemas * m[k].gemas) + (m[x].cantik * m[y].cantik * m[z].cantik);
                                if (res > best)
                                {
                                    best = res;
                                    a = i;
                                    b = j;
                                    c = k;
                                    d = x;
                                    e = y;
                                    f = z;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << best << endl;
    cout << m[a].nama << " " << m[b].nama << " " << m[c].nama << endl;
    cout << m[d].nama << " " << m[e].nama << " " << m[f].nama << endl;
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

            int gemas, cantik;
            cin >> nama >> gemas >> cantik;
            mahasiswa.push_back(Mahasiswa(nama, gemas, cantik));
        }

        // clock_t tStart = clock();

        vector<Mahasiswa> mahasiswa2 = mahasiswa;
        //   vector <Mahasiswa>copyOfMahasiswa = mahasiswa;
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

        vector<Mahasiswa> mhs;

        for (int a = 0; a < 6; a++)
        {
            bool same = false;
            for (int b = 0; b < mhs.size(); b++)
            {
                if (mahasiswa[a].nama == mhs[b].nama)
                {
                    same = true;
                    break;
                }
            }
            if (!same)
            {

                mhs.push_back(mahasiswa[a]);
            }
        }
        for (int a = 0; a < 6; a++)
        {
            bool same = false;
            for (int b = 0; b < mhs.size(); b++)
            {
                if (mahasiswa2[a].nama == mhs[b].nama)
                {
                    same = true;
                    break;
                }
            }
            if (!same)
            {
                mhs.push_back(mahasiswa2[a]);
            }
        }

        menggemaskanDanCantik(mhs);
    }
}
