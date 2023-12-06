#include <iostream>

/*

				if(x>y)
				{
				cout << "x wieksze od y";
				}

*/

/*

Operatory porównania:

> wiêkszosci
< mniejszosci
>= wieksze badz rowne
<= mniejsze badz rowne
== rowne
!= ró¿ne


*/

void task1()
{
	//Napisz program ktory pobierze liczbe od uzytkownika i wyswietli czy jest ona dodatnia czy nie
	using namespace std;
	int number;
	cout << "Podaj liczbe \n";
	cin >> number;

	if (number == 0) 
	{
		cout << "Liczba wynosi 0 \n";
	}
	else if (number > 0) 
	{
		cout << "Liczba wieksza od 0 \n";
	}
	else 
	{
		cout << "Liczba mniejsza od 0 \n";
	}
}
int main()
{
	task1();
}
