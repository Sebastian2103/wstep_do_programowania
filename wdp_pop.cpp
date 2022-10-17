

#include <iostream>
#include <math.h>
using namespace std;

void wypisz(int w)
{
	cout << w << "\n";
}
//int pierwiastki_równania(int a, int b, int c)
//{

//}

int main()
{
    cout << "Hello World!\n";
	int a = 2;
	int b = -8;
	int c = 4;
	cout << a << "^2" << " + "<< b << " + " << c<< "\n";
	int delta = b * b - (4 * a * c);
	if(delta <0)
	{
		cout << "Delta ="<< delta<<"\n";
		cout << "Gdy delta jest ujemna trójmian kwradratowy nie ma pierwiastków rzeczywistych"<<"\n";
	}
	else
	{
		double pierwiastek_delty = sqrt(delta);

		double x1 = (-b - pierwiastek_delty) / (2 * a);
		double x2 = (-b + pierwiastek_delty) / (2 * a);

		cout << "x1 = " << x1 << "\n";
		cout << "x2 = " << x2;
	}

}
