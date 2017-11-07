#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float a, b, c, x;
printf("podaj współczynnik a = \n");
scanf("%f", &a);
printf("podaj współczynnik b = \n");
scanf("%f", &b);
printf("podaj współczynnik c = \n");
scanf("%f", &c);
if (a==0)
printf("równanie sprzeczne \n");
else
x=((c-b)/a); /*ax+b=c można zapisać jako ax=c-b -> x=c-b/a */
printf("x wynosi %f\n" ,x);
system("PAUSE");
return 0;
}

