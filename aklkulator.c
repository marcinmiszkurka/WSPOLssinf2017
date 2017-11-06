# include  <stdio.h>
int  mnoz ( int a, int b) {
	printf ( " wynik mnozenia: %i \n " , a * b);
	zwróć a * b;
}
int  dodaj ( int a, int b) {
	printf ( " dodawanie wynik: %i \n " , a + b);
	return a + b;
}
int  odejmij ( int a, int b) {
	printf ( " Wynik odejmowania: %i \n " , a - b);
	return a - b;
}
int  dziel ( int a, int b) {
	printf ( " dzielenie: %i i reszty: %i \n " , a / b, a% b);
	powrót a / b;
}

int  licznik ( int a, int b, char wybor) {
	if (choices == ' * ' ) {
		mnoz (a, b);
	} else  if (choices == ' + ' ) {
		dodaj (a, b);
	} else  if (choices == ' - ' ) {
		odejmij (a, b);
	} else  if (choices == ' / ' ) {
		dziel (a, b);
	} else {
		stawia ( " Nie znam dzialania! " );
		powrót  0 ;
	}
	powrót  1 ;
}

int  main ( void )
{
	int a, b;
	char wybor;
	int czy_dalej = 1 ;

	podczas gdy (czy_dalej == 1 ) {
		printf ( " Podaj wartosc argumentu a: " ); scanf ( " %i " , & a);
		printf ( " Podaj dzialanie: " ); scanf ( "  % c " , i wybór);
		printf ( " Podaj wartosc argumentu b: " ); scanf ( " %i " , & b);

		licznik (a, b, wybór);

		printf ( " Czy dalej chcesz liczyc? (1 - tak / 0 - nie) " );
		scanf ( " % d " , & czy_dalej);
	}
	powrót  0 ;
}


