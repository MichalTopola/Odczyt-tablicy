// ConsoleApplication16.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int losowanie(int tab[]) {
	for (int i = 0; i < 10; i++) {
		tab[i] = (rand() % 21) + 10;
	}return 0;

}

void wypisywanieOdPoczatku(int tabl[]){
	for (int n = 0; n < 10; n++)
		cout << "Tablice wypisywana od poczatku. NR: " << n + 1 << ": " << tabl[n] << endl;
	cout << "" << endl;
	return ;
}
void wypisywanieOdTylu(int tabl[]) {
	for (int k = 9; k > -1; k--) {
		cout << "Tablice wypisywana od konca. NR: " << k + 1 << ": " << tabl[k] << endl;
	}
	return ;
}
int szukanieMaks(int tab[]) {
	 int maks = tab[0];
	for (int i = 1; i < 10; i++) {
		if (tab[i] > maks)
			maks = tab[i];
	}
		return maks;
}
int szukanieMin(int tab[]) {
	int min = tab[0];
	for (int i = 1; i < 10; i++) {
		if (tab[i] < min)
			min = tab[i];
	}
	return min;
}

int main()
{
	
	srand(time(NULL));
	int tablica[10];
	losowanie(tablica);
	int maks= szukanieMaks(tablica); 
	int min= szukanieMin(tablica);
	wypisywanieOdPoczatku(tablica);
	wypisywanieOdTylu(tablica);
	cout << "Maks: " << maks <<endl;
	cout << "Min: " << min << endl;


		
	
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
