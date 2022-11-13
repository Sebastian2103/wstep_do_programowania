#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int min(vector<int>tab)
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
void wypisz(vector<vector<int>>vec)
{
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
}



vector<vector<int>>odleglosc1(vector<int>tab, vector<int>tab2)
{
    vector<vector<int>>temp;

    for (int i = 0; i < tab.size(); i++)
    {
        vector<int>x1;
        for(int j = 0; j < tab2.size(); j++)
        { 
            x1.push_back(abs(tab[i] - tab2[j]));
        }
        temp.push_back(x1);
    }
    return temp;
}

int rodzina_vito1(vector<vector<int>>vec)
{
    vector<int>temp;
    for (int i = 0; i < vec.size(); i++) 
    {
        temp.push_back(vec[i][0]);
        for (int j = 0; j < vec[i].size(); j++)
        {
            if (temp[i] < vec[i][j])
                temp[i] = vec[i][j];
        }
    }
    int x = min(temp);
    for (int i = 0; i < temp.size(); i++)
        if (x == temp[i])
            return i+1;
}



int main()
{
    vector<int>tab = { 5,1,8,3,4,9 };
    wypisz(odleglosc1(tab, tab));
    
    cout <<"\n"<< rodzina_vito1(odleglosc1(tab, tab)) << "\n";
}
