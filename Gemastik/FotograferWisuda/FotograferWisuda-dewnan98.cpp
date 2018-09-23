#include <iostream>
#include <math.h>
using namespace std;

string fotograferWisuda(float a, float b, float k)
{
    string hasil = "";

    float lakiMaksimalDempet = ceil(a / (b + 1));
    float perempuanMaksimalDempet = ceil(b / (a + 1));

    if (lakiMaksimalDempet > 2 || perempuanMaksimalDempet > k)
        return "mustahil";

    int laki = a;
    int pere = b;

    int counterLaki = 0;
    int counterPerempuan = 0;

    for (int i = 0; i < a + b; i++)
    {
        if (laki > 0 && counterLaki < 2 && laki > pere || counterPerempuan == k)
        {
            hasil += "L";
            laki--;
            counterLaki++;
            counterPerempuan = 0;
        }

        else
        {
            hasil += "P";
            pere--;
            counterPerempuan++;
            counterLaki = 0;
        }
    }
    return hasil;
}

main()
{
    int T;
    float A, B, K;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B >> K;
        cout << fotogragerWisuda(A, B, K) << endl;
    }
}
