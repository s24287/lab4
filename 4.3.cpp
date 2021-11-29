#include <iostream>

using namespace std;

int main()

{

    int s0, s1;

    int tab[10][10];



    for (int i = 0; i < 10; i++)

    {

        tab[0][i] = i;

        s0 = s0 + i;

    }

    for (int i = 0; i < 10; i++)

    {

        tab[1][i] = i + i;

        s1 = s1 + (i + i);

    }


    cout << endl;

    cout << "Suma kolumna druga: " << s1 << endl;

    return 0;

}


