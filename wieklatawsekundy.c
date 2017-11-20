#include <stdio.h> /*bibloteka stanadrowa języka c, posiada zestaw instrukcji włąściwy tylko jej */
#include <stdlib.h> /*j/w c */
#include <math.h> /* j/w c */

float main() /* main t główna funkcja a float zmienna - przechowuje liczby zmiennoprzecinkowe. Gdy chcemy w naszym programie wykorzystać ułamki */ 
{ /*klamra mówiąca zmiennej main o tym, że trzeba wykonać to co znajduje się w {...}*/
float a, x; /*precyzujemy maszynie, że wynikiem może być liczba zmiennoprzecinkowa. Inaczej gdyby było "int",wtedy od 0 wzwyż)*/
printf("Podaj wiek a = \n"); /*printf - z ang drukuj..f . , w nawiasie podajemy opis jak też można zawrzeć polecenie 
jak w tym przypadku a = czyli podaj a oraz \n czyli akapit niżej*/
scanf("%f", &a); /* zmienna float i & czyli podaj w tym przypadku zmienną a*/

if (a==0) /* jeżeli to if a == czyli a równe licznbie w tym przypadku 0 */
{ /*klamra mówiąca zmiennej main o tym, że trzeba wykonać to co znajduje się w {...}*/
printf("wiek wynosi 0 \n");  /*printf - z ang drukuj..f . , w nawiasie podajemy opis,
w tym przypadku 0 i \n czyli akapit niżej*/
}
else /*można wytłumaczyć "w przeciwnym wypadku - else- to co poniżej wykonaj*/
x=(a * 3,156000); /* z opisu j.w wynika ,że x = podana liczba razy podana/wcześniej ustalona wartość*/
printf("Twój wiek w sekundach to: %f\n" ,x); /*twój wiek w sekundach = wiek ilość sekund w roku i \n czyli akapit niżej */
system("PAUSE"); /*Wstrzymuje prace programu i czeka na wcisniecie klawisza*/
return (0); /*oznacza że funkcja skończyła się powodzeniem.*/
}


