#include <iostream>

using namespace std;

int main()

{

    int s0, s1;

    int tab[10][10];



     for (int i = 0; i < 10; i++)

    {
      
         cout << "\t" << (tab[0][i] = i);

        s0 = 0;

    } cout << endl;

    for (int i = 0; i < 10; i++)
        
    {
        
        cout << "\t" << (tab [1][i] = i + i);

        s1 = 0;

    } cout << endl;


    cout << endl;
   
    cout << "Suma kolumna druga: " << s1 << endl;

    return 0;

}