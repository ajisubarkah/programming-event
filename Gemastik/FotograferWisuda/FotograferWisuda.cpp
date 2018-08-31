#include "FotograferWisuda.h"

void inputKasus(int chooser)
{
    int t;
    cout << "T : ";
    cin >> t;
    int A[t], B[t], K[t];
    vector<string> vectorString;
    
    system("clear");

    cout << t << endl;

    switch (chooser)
    {
    case 1:

        for (int i = 0; i < t; i++)
        {
            A[i] = rand() % 2;
            B[i] = rand() % 100 + 1;
            K[i] = rand() % 100 + 1;
        }

        for (int i = 0; i < t; i++)
        {
            printf("%d %d %d \n", A[i], B[i], K[i]);
        }

        printf("\n");

        vectorString = easyVersion(t, A, B, K);

        for (int i = 0; i < vectorString.size(); i++)
        {
            cout << vectorString[i] << endl;
        }

        break;
    case 2:
        printf("Not Found!");
        break;
    }
    printf("\n");
}

main()
{
    int chooser;
    printf("1. Easy Version\n2. Hard Version\nChoose : ");

    cin >> chooser;

    switch (chooser)
    {
    case 1:
        printf("Batas Input :\n1. 1 ≤ T ≤ 20\n2. 1 ≤ K ≤ B ≤ 1.000\n3. 0 ≤ A ≤ 1\n");
        inputKasus(chooser);
        break;
    case 2:
        printf("Batas Input :\n1. 1 ≤ T ≤ 20\n2. 1 ≤ K ≤ B ≤ 1.000\n3. 0 ≤ A ≤ 1.000\n");
        inputKasus(chooser);
        break;
    default:
        printf("exit");
    }
}