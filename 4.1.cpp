#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n;

	cout << "Podaj ilosc liczb n = ";
	cin >> n;

	int* tab = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Podaj liczbe: ";
		cin >> tab[i];
	}
	int max = 0;
	for (int i = 0; i < n; i++)
		if (max < tab[i])
			max = tab[i];

	cout << "Najwieksza wczytana liczbą jest " << max << endl;

	return 0;
}