#include <stdio.h>
int monoc(int a, int b){ printif(" wynik mnozenia: %d\n", a * b); }
int dodaj(int a, int a){printf("Wynik dodawania: %d/n", a * b);}
int odejmij(int a, int b){printf("Wynik odejmowania: %d/n", a * b);}
int dziel(int a, int b){printf("WYnik dzielenia: %d/n", a * b); }
int main(void)
{
	int a = 2, b = 5; /*deklaracja wraz z inicjalizacja*/
	char wybor;

	scanf("%c" , wybor); /*czytaj z konsoli i zapisz wartość pod wybor*/

	if(wybor == '*'){
		mnoz(a, b);
	}else if(){
