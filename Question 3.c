#include <stdio.h>
#include <conio.h>
int main()
{
	int a =0;
	int b =0;
	int c = 0;
	printf("enter the value of A\n");
	scanf("%d",&a);
	printf("enter the voalue of B\n");
	scanf("%d",&b);
	
	c=b;
	b=a;
	a=c;
	printf("the swapped value are\n %d \n %d", a,b);
	getch();
	return 0;
	
}
