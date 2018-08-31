#include "BerbalasPantun.h"
#include <cstdlib>

void inputKasus(int chooser)
{
    int n;
    cout << "N : ";
    cin >> n;
    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100 + 1;
        b[i] = rand() % 100 + 1;
    }

    system("clear");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n");

    switch (chooser)
    {
    case 1:
        printf("%d", easyVersion(n, a, b));
        break;
    case 2:
        printf("%d", hardVersion(n, a, b));
        break;
    }
}

main()
{
    int chooser;
    printf("1. Easy Version\n2. Hard Version\nChoose : ");

    cin >> chooser;

    switch (chooser)
    {
    case 1:
        printf("Batas Input :\n1. 1 ≤ A[i], B[i] ≤ 100\n2. N = 1\n");
        inputKasus(chooser);
        break;
    case 2:
        printf("Batas Input :\n1. 1 ≤ A[i], B[i] ≤ 100\n2. 1 ≤ N ≤ 100.000\n");
        inputKasus(chooser);
        break;
    default:
        printf("exit");
    }
}