#include <stdio.h>
int a, b;
int main()
{
 	printf("podaj a \n");
	scanf("%d", &a);
	printf("podaj b \n");
	scanf("%d", &b);
		if (a>b) {
		printf("większe jest a %d", a);
		}
		else if (a<b){
		printf("większe jest b %d", b);
		}
		else if (a=b){
		printf("a i b jest równe %d", b);
		}

return 0;
}

