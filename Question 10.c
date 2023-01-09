#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (){
	
	int acc=0,i=0,al_credit=0,j=0;
	float bal=0,n_bal=0,total=0,amount=0,credit=0,n_amm=0;
	
	printf("\nWELCOME\n");
	printf("\nEnter your account number\n");
	scanf("%d",&acc);
	
	if(acc<0){
		printf("\nEnter the correct account number\n");
		exit(0);
	}
	
	printf("\nEnter the balance at the beginning of the month\n");
	scanf("%f",&bal);
	
	printf("\nHow many products you would like to enter\n");
	scanf("%d",&i);
	
	if(i>=1){
		for(j=0;j<i;j++){
			printf("\nEnter the charges for item %d\n",j+1);
			scanf("%f",&amount);
			total = total+amount;
		}
	}
	else{
		printf("\nYou should have atleast one purchase\n");
		exit(0);
	}
	
	printf("\nYour total is %.2f\n",total);
	
	printf("\nEnter your credit limt\n");
	scanf("%d",&al_credit);
	
	printf("\nEnter your total credits\n");
	scanf("%f",&credit);
	
	n_bal = bal+total-credit;
	
	if(n_bal > al_credit){
		n_amm = n_bal-al_credit;
		printf("\nAccount Number %d\n",acc);
		printf("\nCredit limit %d\n",al_credit);
		printf("\nNew Balance is %.2f\n",n_bal);
		printf("\nCredit limit exceeded by %.2f\n",n_amm);
		
	}
	else{
		printf("\nAccount Number %d\n",acc);
		printf("\nCredit limit %d\n",al_credit);
		printf("\nNew Balance is %.2f\n",n_bal);
		
	}

	
	
	
}