#include<stdio.h>
#include<conio.h>

int main (){
	int fsc = 0 , nts = 0;
	
	printf("Enter your Fsc and Nts marks to know the seat allocation in a university\n");
	scanf("%d",&fsc);
	scanf("%d",&nts);
	
	if(fsc>=70){
		if(nts>=70){
			printf("Seats can be allocated in Oxford University \n1)IT\n2)Electronice\n3)Telecommunication");
			printf("\nSeats can also be allocated in MIT University\n1)IT\n2)Chemical\n3)Computer");
		}
		else if (nts>=60){
			
			if(nts<70){
				printf("Seats can be allocated in Oxford University\n1)Electronics\n2)Telecommunication");
				printf("\nSeats can also be allocated in MIT University\n1)IT\n2)Chemical\n3)Computer");
		}
			}
			else if(nts>=50){
				if(nts<60){
					printf("Seats can be allocated in Oxford University\n1)Telecommunication");
					printf("\nSeats can also be allocated in MIT University\n1)IT\n2)Chemical\n3)Computer");
		}
				}
			
		}
		else if (nts>=50){
			if(fsc>=60){
				if(fsc<=70){
					printf("\nSeats can  be allocated in MIT University\n1)IT\n2)Chemical\n3)Computer");
		}
				}
				else if (fsc>=50){
					if(fsc<=59)
					{
						printf("\nSeats can  be allocated in MIT University\n1)Chemical\n2)Computer");
		}
				}
				else if (fsc>40){
					if(fsc<50){
						printf("\nSeats can be allocated in MIT University\n1)Computer");
		}
			}
			else{
				printf("Sorry try next year");
			}
		}
		else
		{
			printf("Sorry try next year");
		}
	}

