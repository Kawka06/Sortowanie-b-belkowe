#include <iostream>

using namespace std;

void show();

const int ile = 5;
int tab[ile];

int main()
{
    
    for (int i = 0; i < ile; i++)
    {
        cout << "Podaj " << i + 1 << " liczbe: " << endl;
        cin >> tab[i];
        cin.ignore();
    }
    show();

    int temp;

    for (int i = 0; i < ile; i++)
    {
        for (int j = 0; j < ile - 1; j++)
        {
            if (tab[j] > tab[j+1])
            {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j + 1] = temp;
            }
        }
    }

    show();

    
    return 0;
}

void show()
{
    cout << "Nasza tablica wyglada w kolejnosci nastepujaco: \n";
    for (int i = 0; i < ile; i++)
    {
        cout << i + 1 << ".= " << tab[i] << "\n";
    }
}

