/*kialkulator*/

#include <stdio.h>
int main ()
{
int a,c,wynik;
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
wynik=a/c;
break;

}
printf("Wynik dzialania to %d\n",wynik);


return 0;
} 


