#include  <stdio.h>
int  mnoz(int a, int b) {
	printf ( " wynik mnozenia: %i \n " , a * b);
	return a * b;
}
int  dodaj(int a, int b) {
	printf ( " dodawanie wynik: %i \n " , a + b);
	return a + b;
}
int  odejmij(int a, int b) {
	printf ( " Wynik odejmowania: %i \n " , a - b);
	return a - b;
}
int  dziel(int a, int b) {
	printf ( " dzielenie: %i i reszty: %i \n " , a / b, a% b);
	return a / b;
}

int  licznik( int a, int b, char wybor) {
	if (wybor  == '*' ) {
		mnoz (a, b);
	} else  if (wybor  == '+' ) {
		dodaj (a, b);
	} else  if (wybor == '-' ) {
		odejmij (a, b);
	} else  if (wybor == '/' ) {
		dziel (a, b);
	} else {
		printf ( " Nie znam dzialania! " );
		return  0 ;
	}
	return  1 ;
}

int  main ( void )
{
	int a, b;
	char wybor;
	int czy_dalej = 1 ;

	while  (czy_dalej == 1 ) {
		printf ( "Podaj wartosc argumentu a:" ); 
		scanf ( "%i" , &a);
		printf ( " Podaj dzialanie:" );
		scanf ( "%c" ,  wybor);
		printf ( " Podaj wartosc argumentu b:" ); 
		scanf ( "%i" , &b);

		licznik (a, b, wybor);

		printf ( " Czy dalej chcesz liczyc? (1 - tak / 0 - nie) " );
		scanf ( "%d" , &czy_dalej);
	}
	return  0 ;
}


