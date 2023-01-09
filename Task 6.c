#include<stdio.h>
#include<conio.h>

int main ()
{
	char opt;
	
	printf("Are you sure you want to delete it ? \nPress [Y/y] / [N/n]\n");
	scanf("%c",&opt);
	
	switch (opt)
	{
		case'Y':
		case 'y':
			printf("Deleted Succssfully");
			break;
		case'n':
		case'N':
			printf("Delete cancelled");
			break;
		default:
			printf("Choose the right option..");
	}
	return 0 ;
	getch();
	
}