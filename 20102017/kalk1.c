#include <stdio.h>
int main ()
{
int a,c,wynik;
int dzielenie_przez_zero=0;
char b;
scanf("%d%c%d",&a,&b,&c);
switch(b)
{
case '+':
wynik=a+c;
break;
case '-':
wynik=a-c;
break;
case '*':
wynik=a*c;
break;
case '/':
if (c==0)
{
printf("Dzialanie niewykonalne");
dzielenie_przez_zero=1;
} else
wynik=a/c;
break;

}
if (dzielenie_przez_zero==0) printf("Wynik dzialania to %d\n",wynik);

return 0;
} 

