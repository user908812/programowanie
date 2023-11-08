/*
prawy przycisk myszy, set as startup project
*/


/*

                                                                       * ZADANIA *


* Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci kraw�dzi sze�cianu i obliczy jego obj�to��, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.

* Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.

* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb (a, b) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie trzech liczb (a, b, c) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

* Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych. Nast�pnie wykona operacje (+, -, *, /) i wy�wietli wyniki.

* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie wsp�rz�dnych (x1, y1) i (x2, y2) dw�ch punkt�w w uk�adzie kartezja�skim, a nast�pnie obliczy odleg�o�� mi�dzy nimi, wy�wietlaj�c wynik.


*/



#include <iostream>

int main() {
	setlocale(LC_CTYPE, "polish");
	//wiek();
	//metry();
	//pole();
	trojkat();
}

void wiek() 
{
	// napisz program, ktory wczyta od uzytkownika jego wiek a nastepnie wyswietli go na konsoli
	short wiek;
	std::cout << "Podaj swoj wiek. \n";
	std::cin >> wiek;
	std::cout << "masz " << wiek << " lat. \n";
}
void metry() 
{
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

void pole() 
{
	//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.
	float bok1, bok2;	
	std::cout << "Podaj bok a \n";
	std::cin >> bok1;	
	std::cout << "Podaj bok b \n";
	std::cin >> bok2;
	std::cout << "Pole prostokata wynosi: " << bok1 * bok2;
}

int trojkat()
{
	//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.
	float a, h;
	std::cout << "Podaj dlugosc podstawy trojkata";
	std::cin >> a;
	std::cout << "Podaj wysokosc trojkata";
	std::cin >> h;
	std::cout << "Pole trojkata wynosi: " << a / 2 * h;
}


















/*

 Algorytm -  sko�czony zbi�r instrukcji realizuj�cy postawione przed nim zadanie.
 Kolejno�� instrukcji w zbiorze jest okre�lona
 Sposoby zapisu:

 - W punktach
 - Opis s�owny
 - J�zyk programowania lub pseudokod
 - Zbi�r rysunk�w
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