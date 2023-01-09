#include<stdio.h>
#include<conio.h>

int main ()
{
	int day = 0 ;
	
	printf("Write week day number\n");
	scanf("%d",&day);
	
	switch(day)
	{
	case 1 :
		printf("First day of the week is Monday");
		break;
	case 2 :
		printf("Second day of the week is Tuesday");
		break;
	case 3 :
		printf("Third day of the week is Wednesday");
		break;
	case 4 :
		printf("Fourth day of the week is Thursday");
		break ;
	case 5 :
		printf("Fifth day of the week is Friday");
		break ;
	case 6 :
		printf("Sixth day of the week is Saturday");
		break;
	case 7 :
		printf("Seventh day of the week is Sunday");
		break;
	default :
		printf("Enter the correct week number");
	}
	
	return 0 ;
	getch();
}