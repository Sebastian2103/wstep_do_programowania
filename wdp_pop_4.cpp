// wdp_pop_4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>

using namespace std;

int max(vector<int>tab)
{
    int temp = tab[0];
    for (int i = 0; i < tab.size(); i++)
    {
        if (temp < tab[i])
        {
            temp = tab[i];
        }
    }
    return temp;
}

int index(int a, vector<int>tab)
{
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] == a)
        {
            return i;
        }
    }
    return -1;
}
bool czy_nalezy(int a, vector<int>tab)
{
    return index(a, tab) > -1;
}

//bool Czy_Zawiera(vector<int>tab, vector<int>tab2)
//{
//    for (int i = 0; i < tab.size(); i++)
//    {
//       if (!czy_nalezy(tab[i], tab2))
//           {
//                return false;
//           }
//    }
//    return true;
//}
int suma(vector<int>tab)
{
    int temp = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        temp += tab[i];
    }
    return temp;
}

int odleglosc(vector<int>tab,int ktory_dom)
{

    int temp = 0;

    for(int i = ktory_dom+1; i < tab.size(); i++)
    {
        tab[ktory_dom] - tab[i];
    }

}

int domy(vector<int>tab)
{
    int temp = 0;

    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] - tab[i + 1] < temp)
        {
        
        }
    }

}


int main()
{
    //zrobic to zadnie co na lekcji
    // 5,1,8,3,4,9
    vector<int>tab = { 1,3,4,5,8,9 };
    vector<int>tab2 = {2};
    tab[0] = 6;
    tab.push_back(8);
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << endl;
    }

    cout << "maximum wynosi:"<<max(tab);

    if (Czy_Zawiera(tab, tab2) == true)
    {
        cout << "Vector 1 zawiera vektor 2";
    }
    else
    {
        cout << "Nie zawiera";
    }
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
