/*
prawy przycisk myszy, set as startup project
*/


/*

                                                                       * ZADANIA *


* Napisz program, który poprosi u¿ytkownika o podanie promienia ko³a i obliczy pole tego ko³a, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci krawêdzi szeœcianu i obliczy jego objêtoœæ, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.

* Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb (a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Napisz program, który poprosi u¿ytkownika o podanie trzech liczb (a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych. Nastêpnie wykona operacje (+, -, *, /) i wyœwietli wyniki.

* Napisz program, który poprosi u¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie wspó³rzêdnych (x1, y1) i (x2, y2) dwóch punktów w uk³adzie kartezjañskim, a nastêpnie obliczy odleg³oœæ miêdzy nimi, wyœwietlaj¹c wynik.


*/



#include <iostream>

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
	//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta. /  jsbhfisi
	float bok1, bok2;	
	std::cout << "Podaj bok a \n";
	std::cin >> bok1;	
	std::cout << "Podaj bok b \n";
	std::cin >> bok2;
	std::cout << "Pole prostokata wynosi: " << bok1 * bok2;
}

void trojkat()
{
	//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.
	float a, h;
	std::cout << "Podaj dlugosc podstawy trojkata \n";
	std::cin >> a;
	std::cout << "Podaj wysokosc trojkata \n";
	std::cin >> h;
	std::cout << "Pole trojkata wynosi: " << a / 2 * h;
}















int main() {
	setlocale(LC_CTYPE, "polish");
	//wiek();
	//metry();
	//pole();
	trojkat();
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
