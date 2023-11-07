/*
prawy przycisk myszy, set as startup project
*/
#include <iostream>

// napisz program, ktory wczyta od uzytkownika jego wiek a nastepnie wyswietli go na konsoli

void zadanie() {
	short wiek;
	std::cout << "Podaj swoj wiek. \n";
	std::cin >> wiek;                               // std::cin >> (zmienna);  -  pobiera zmienn¹
	std::cout << "masz " << wiek << " lat. \n";
}
void zadanie2() {
	float m;
	std::cout << "Podaj dlugosc w metrach \n";
	std::cin >> m;


	float cm = m * 100;
	float mm = cm * 10;
	float km = m / 1000;


	std::cout << "Metry: " << m << "\n";
	std::cout << "Centymetry: " << cm << "\n";
	std::cout << "Milimetry: " << mm << "\n";
	std::cout << "Kilometry: " << km << "\n";
}
void test() {
	short liczba1 = 30/2;
	short liczba2;
	std::cout << "Podaj liczbe \n";
	std::cin >> liczba2;
	std::cout << liczba1 + liczba2;
}

int main()
{
	//zadanie();
	//test();
	//zadanie2();
}

/*

 Algorytm -  skoñczony zbiór instrukcji realizuj¹cy postawione przed nim zadanie.
 Kolejnoœæ instrukcji w zbiorze jest okreœlona
 Sposoby zapisu:

 - W punktach
 - Opis s³owny
 - Jêzyk programowania lub pseudokod
 - Zbiór rysunków
 - Schemat blokowy

 Zmienna - jest to pewien obszar w pamieci, sluzacy do przechowywania danych. Te dane mozna modyfikowac.
 Zmienna pozwala przechowac tylko 1 wartosc w danym momencie czasu.

 Deklaracja zmiennej - moment jej utworzenia.

 typ_zmiennej nazwa_zmiennej;

 Typ zmiennej - mowi o wielkosci obszaru pamieci i o rodzaju przechowywanych danych np.     short, int/long, long long, float, double, long double.



 --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 short         liczby calkowite ze znakiem       2 bajty      <-32 768; 32 767>
 int/long      liczby calkowite ze znakiem       4 bajty      <-2 147 483 648; 2 147 483 647>
 long long     liczby calkowite ze znakiem       8 bajtow     <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

 --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------





  /\                                                   /\                                                        /\
 Jezeli przed powyzszymi typami dodamy slowo "unsigned" to zakres jest od zera do podwojonego zakresu gornego plus 1.

 void zadanie3() {
	short liczba1 = 90;
	short liczba2;
	std::cout << "Podaj liczbe \n";
	std::cin >> liczba2;
	std::cout << liczba1 + liczba2;
}



 --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 float          liczby rzeczywiste ze znakiem       4 bajty
 double         liczby rzeczywiste ze znakiem       8 bajtow
 long double    liczby rzeczywiste ze znakiem       12 bajtow

 --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Nazwa zmiennej - nazwa obszaru w pamieci. Poprzez ta nazwe odwolujemy sie do tego obszaru.



 Wymagania kompilatora wzgledem nazwy:
 * uzycie tylko dozwolonych znakow
 - alfabet angielski a-z oraz A-Z
 -cyfry arabskie 0-9
 -podloga _
 * pierwszym znakiem nie moze byc cyfra
 * nie moze to byc slowo kluczowe danego jezyka programowania
 * musi byc unikalna w danej widocznosci



 Wymagania programistow:
 * jesli nazwa sklada sie z wielu wyrazow to zamiast spacji:
 - uzywamy znaku podkreslenia
 - stosujemy camel case, czyli piszemy wszystko razem a slowa (zaczynamy od drugiego)
 zaczynamy z duzej litery, np. firstNumberFromUser
 * nazwa zmiennej musi oddawac charakter przechowywanych danych, czyli miec znaczenie
 * nazwy po angielsku!! */