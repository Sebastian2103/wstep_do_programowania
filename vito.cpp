// rodzina vito.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
//counter185

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int max(vector<int>tab)
{
	int temp = tab[0];
	for (int i = 0; i > tab.size(); i++)
	{
		if (temp < tab[i])
		{
			temp = tab[i];
		}
	}
	return temp;
}
/*
void wypisz(vector<int>tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i] << endl;
	}
}
*/
/*
vector<int> odleglosc(vector<int>tab,int a)
{
	vector<int>temp;

	for (int i=0; i < tab.size(); i++)
	{
		temp.push_back(abs(tab[a] - tab[i]));
	}
	return temp;
}
*/
int rodzina_vito(vector<int>tab)
{
	int a = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		a += tab[i];
	}
	float srednia = a / tab.size();
	float min = abs(tab[0] - srednia);
	int min_libcza = tab[0];
	for (int i = 0; i < tab.size(); i++)
	{
		if (abs(tab[i] - srednia) < min)
		{
			min = abs(tab[i] - srednia);
			min_libcza = tab[i];
		}
	}
	return min_libcza;
}

int main()
{
	vector<int>tab = { 5,1,8,3,4,9 };
	
    cout << "Hello World!\n";
	cout << rodzina_vito(tab) << "\n";
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
