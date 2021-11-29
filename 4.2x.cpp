#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Podaj element " << i << " tablicy: ";
        cin >> a[i];
    }

    int licznik, k = 0, m = 0, b[n], c[n], maxL, maxW, ;

    do
    {
        licznik = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[k])
                licznik++;
        }

        b[m] = licznik;
        c[m] = a[k];

        m++;
        k++;

    } while (k < n);

    maxL = b[0];
    for (int i = 0; i < m; i++)
    {
        if (b[i] > maxL)
        {
            maxL = b[i];
            maxW = c[i];

        }


    }

    cout << endl << "Najczesciej wystepujacy element: " << maxW;

    return 0;
}