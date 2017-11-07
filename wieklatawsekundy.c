#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float main()
{
float a, x;
printf("Podaj wiek a = \n");
scanf("%f", &a);

if (a==0)
{
printf("wiek wynosi 0 \n");
}
else
x=(a * 3,156000);
printf("Twój wiek w sekundach to: %f\n" ,x); /*twój wiek w sekundach = wiek ilość sekund w roku*/
system("PAUSE");
return 0;
}
