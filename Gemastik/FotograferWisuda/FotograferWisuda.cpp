#include "FotograferWisuda.h"

void inputKasus(int chooser)
{
    int t;
    cout << "Kasus : ";
    cin >> t;
    int A[t], B[t], K[t];
    for (int i = 0; i < t; i++)
    {
        printf("A [%d]: ", i);
        cin >> A[i];
        printf("B [%d]: ", i);
        cin >> B[i];
        printf("K [%d]: ", i);
        cin >> K[i];
    }

    system("clear");

    cout << t << endl;

    for (int i = 0; i < t; i++)
    {
        printf("%d %d %d \n", A[i], B[i], K[i]);
    }

    printf("\n");
    switch (chooser)
    {
        case 1:
            easyVersion(t, A, B, K);
            break;
        case 2:
            hardVersion(t, A, B, K);
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
            printf("Batas Input :\n1. 1 <= T <= 20\n2. 1 <= K <= B <= 1.000\n3. 0 <= A <= 1\n");
            inputKasus(chooser);
            break;
        case 2:
            printf("Batas Input :\n1. 1 <= T <= 20\n2. 1 <= K <= B <= 1.000\n3. 0 <= A <= 1.000\n");
            inputKasus(chooser);
            break;
        default :
            printf("exit");
    }
}