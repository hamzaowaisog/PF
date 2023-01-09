// IT CAN NOT BE HANDLE BY A SWITCH STATEMENT BECAUSE SWITCH STATEMENT DOESNOT WORK ON STATEMENT HAVING RANGES. IT ONLY WORKS TOWARDS SINGLE INPUT ONLY KNOWN INPUT AND CAN TEST ONLY EUQALITY.

#include<conio.h>
#include<stdio.h>

int main () {
	
	float r_reading = 0 ;
	printf("Enter the ritcher scale reading of EarthQuake\n");
	scanf("%f",&r_reading);
	
	if ( r_reading < 5.0){
		printf("LITTLE OR NO DAMAGE");	
	}
	 if (r_reading>= 5.0){
		if (r_reading < 5.5){
			printf("SOME DAMAGE");
		}
	}
	 if (r_reading>= 5.5){
		if(r_reading< 6.5){
			printf("SERIOUS DAMAGE : WALLS MAY CRACK OR FALL");
		}
	}
	 if (r_reading>=6.5){
		if(r_reading < 7.5){
			printf("DISASTER : HOUSE AND BUIDINGS MAY COLLAPSE");
		}
	}
	if(r_reading>=7.5)
	{
		printf("CATASTROPHE : MOST BUILDINGS DESTROYED");
	}


}

