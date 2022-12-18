// wdp_pop_9.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <random>
#include <map>

using namespace std;

void wypisz(int n)
{
    cout << n << endl;
}

void wypisz(vector<int>tab)
{
    for (int i=0; i < tab.size(); i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}
void wypisz(map<int, int>m)
{
    for (auto& el : m)
    {
        cout << el.first << "->" << el.second << endl;
    }
}

int suma(vector<int>tab)
{
    int suma = 0;
    for (int i=0; i < tab.size(); i++)
    {
        suma += tab[i];
    }
    return suma;
}

int max(vector<int>tab)
{
    int max = tab[0];
    for (int i=0; i < tab.size(); i++)
    {
        if (max < tab[i])
        {
            max = tab[i];
        }
    }
    return max;
}

int index(vector<int>tab, int n)
{
    for (int i=0; i < tab.size(); i++)
    {
        if (tab[i] == n)
        {
            return i;
        }
    }
    return -1;
}

bool CzyNalezy(vector<int>tab, int n)
{
    return index(tab, n) > -1;
}

bool CzyZawiera(vector<int>tab, vector<int>tab2)
{
    for (int i =0; i < tab2.size(); i++)
    {
        if (!CzyNalezy(tab, tab2[i]))
        {
            return false;
        }
    }
    return true;
}

vector<int> podzielne(vector<int>tab, int dzielnik, int reszta = 0)
{
    vector<int>wynik;
    for (int i =0; i < tab.size(); i++)
    {
        if (tab[i] % dzielnik == reszta)
        {
            wynik.push_back(tab[i]);
        }
    }
    return wynik;
}

vector<int> generuj(int ilosc, int koniec)
{
    vector<int>wynik;
    for (int i=0; i < ilosc; i++)
    {
        wynik.push_back(rand() % koniec);
    }
    return wynik;
}

vector<int> unikalnosc(vector<int>tab)
{
    vector<int>wynik;
    for (int i = 0; i < tab.size(); i++)
    {
        if (!CzyNalezy(wynik, tab[i]))
        {
            wynik.push_back(tab[i]);
        }
    }
    return wynik;
}

/*
* O. Wiedzieć o co chodzi w zadaniu
1. Wymyslic przykład
2. Sprawdzic czy przykład jest kompletny
3. Sformalizować przykład
4. Nagłówek funkcji
5. Ciało funkcji
6. Nie wiesz co napisać? Wróć do przykładu
*/

bool CzyNalezyKlucz(map<int, int>m, int n)
{
    for (auto& item : m)
    {
        if (m.find(item.first) != m.end())
        {
            return true;
        }
    }
    return false;
}

map<int,int> czestosc(vector<int>tab)
{
    map<int, int> m;
    for (int i = 0; i < tab.size(); i++)
    {
        if (!CzyNalezyKlucz(m, tab[i]))
        {
            m.insert({ tab[i],1 });
        }
        else
        {
            m[tab[i]]++;
        }
    }
    return m;
}

int main()
{
    srand(time(NULL));
    vector<int>tab = { 1,2,3,4,5,6,1,2,3,3,2,1,2,5,5,4,3,3,2,3,4 };
    vector<int>tab2= {1,2};
   // wypisz(CzyNalezy(tab, 1));
   // wypisz(CzyZawiera(tab, tab2));
   // wypisz(unikalnosc(tab));
   // wypisz(suma(tab));
    //wypisz(max(tab));
    //wypisz(generuj(5, 10));
    //wypisz(podzielne(tab, 2));
    wypisz(czestosc(tab));
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
