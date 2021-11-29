#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "Podaj rozmiar tablicy: ";
	cin >> n;

	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Podaj element " << i << " tablicy: ";
		cin >> a[i];
	}

	int* b = new int[n];

	for (int i = 0; i < n; i++)
	{
		int licznik = 0;
		for (int k = 0; k < n; k++)
		{
			if (a[i] == a[k])
				licznik++;
		}

		b[i] = licznik;
	}

	int max = 0;
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (b[i] > max)
		{
			index = i;
		}
	}

	cout << endl << "Najczesciej wystepujacy element: " << a[index];

	return 0;
}