/*kialkulator*/
#include

int main() {


   printf("Prosty kalkulator\n

           -------------------------------------------------------------\n\n

           Wpisz działanie: ");

   float a,b;

   char znak;

   float wynik;

   scanf("%f",&a);

   scanf("%c",&znak);

   scanf("%f",&b);

   switch(znak)

   {

    case '+':

     {

      wynik=a+b;

      printf("Wynik dzialania: %f",wynik);

      break;

     }

    case '-':

     {

      wynik=a-b;

      printf("Wynik dzialania: %f",wynik);

      break;

     }

    case '*':

     {

      wynik=a*b;

      printf("Wynik dzialania: %f",wynik);

      break;

     }

    case '/':

    {

      wynik=a/b;

      printf("Wynik dzialania: %f",wynik);   

      break;

     }

    default:     

    {

      printf("Nieznane dzialanie!");

      break;

    }

   }


   return 0;

}
