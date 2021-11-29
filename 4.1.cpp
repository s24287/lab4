#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int tab[n];
		int n;
	cout << "Podaj ilość liczb n = ";
	cin >> n;
	max = tab[0]; 

	for (int i = 1; i < 10; i++) 
		if (max < tab[i])
			max = tab[i];

	cout << "Najwieksza wczytana liczbą jest " << max << endl;

	return 0;
}
