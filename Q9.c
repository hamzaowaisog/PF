#include<conio.h>
#include<stdio.h>

int main ()
{
	int q1 = 0, q2 = 0 , q3 = 0 , q4 = 0 , total = 0 ;
	int type = 0 ;
	int b_pr = 200 , f_pr =50, p_pr=500, s_pr = 150 ;
	char choice ,choice1,choice2,choice3 ;
	
	printf("		ABC Restaurant Online Order Placement");
	printf("\n				WELCOME!");
	printf("\n\nPlease select from the following Menu");
	printf("\nB= Burger");
	printf("\nF= French Fries");
	printf("\nP= Pizza");
	printf("\nS= Sandwiches");
	printf("\nThe choice should be between 1 till 4");
	printf("\nHow many types of snacks you need to order:");
	scanf("%d",&type);
	if (type >= 1)
	{
		if (type<=4)
		{
	
	
	if(type == 1){
		printf("\nEnter the snack you want to order:");
		scanf(" %c",&choice);
		switch(choice){
			case'b':
			case'B':
				printf("please provide with the quantity:");
				scanf("%d",&q1);
				b_pr = b_pr * q1;
				total = b_pr;
				break;
			case'F':
			case 'f':
				printf("please provide with the quantity:");
				scanf("%d",&q1);
				f_pr = f_pr * q1;
				total = f_pr;
				break;
			case'p':
			case'P':
			printf("please provide with the quantity:");
				scanf("%d",&q1);
				p_pr = p_pr * q1;
				total = p_pr;
				break;
			case'S':
			case's':
			printf("please provide with the quantity:");
				scanf("%d",&q1);
				s_pr = s_pr * q1;
				total = s_pr;		
				break;
			default:
			printf("\nEnter valid choice");	
			break;
		}
		
	printf("\n------------------------------");
		printf("\nYou have ordered!");
		if (choice=='B'|| choice=='b'){
			printf("\n%d Burger (s) value %d PKR",q1,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice =='F'|| choice =='f')
		{
						printf("\n%d French Frie (s) value %d PKR",q1,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice == 'P' || choice == 'p'){
						printf("\n%d Pizza (s) value %d PKR",q1,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice == 'S'|| choice == 's'){
					printf("\n%d Sandwich (s) value %d PKR",q1,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
	}
	else if(type == 2)
	{
		printf("\nEnter the first snack you want to order:");
		scanf(" %c",&choice);
		switch(choice){
			case'b':
			case'B':
				printf("please provide with the quantity:");
				scanf("%d",&q1);
				b_pr = b_pr * q1;
				total = b_pr;
				break;
			case'F':
			case 'f':
				printf("please provide with the quantity:");
				scanf("%d",&q1);
				f_pr = f_pr * q1;
				total = f_pr;
				break;
			case'p':
			case'P':
			printf("please provide with the quantity:");
				scanf("%d",&q1);
				p_pr = p_pr * q1;
				total = p_pr;
				break;
			case'S':
			case's':
			printf("please provide with the quantity:");
				scanf("%d",&q1);
				s_pr = s_pr * q1;
				total = s_pr;		
				break;
			default:
			printf("\nEnter valid choice");	
			break;
		}
		printf("Enter Second snack you want to order:");
		scanf(" %c",&choice1);
		switch (choice1){
			case'b':
			case'B':
				printf("please provide with the quantity:");
				scanf("%d",&q2);
				b_pr = b_pr * q2;
				total = total + b_pr;
				break;
			case'F':
			case 'f':
				printf("please provide with the quantity:");
				scanf("%d",&q2);
				f_pr = f_pr * q2;
				total = total + f_pr;
				break;
			case'p':
			case'P':
			printf("please provide with the quantity:");
				scanf("%d",&q2);
				p_pr = p_pr * q2;
				total = total + p_pr;
				break;
			case'S':
			case's':
			printf("please provide with the quantity:");
				scanf("%d",&q2);
				s_pr = s_pr * q2;
				total = total + s_pr;		
				break;
			default:
			printf("\nEnter valid choice");	
			break;
			
		}
		
	printf("\n------------------------------");
		printf("\nYou have ordered!");
		if (choice=='B'|| choice=='b'){
			printf("\n%d Burger (s) value %d PKR",q1,b_pr);
			if(choice1 == 'F'|| choice1 == 'f')
			{
			printf("\n%d French Frie (s) value %d PKR",q2,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice1 == 'S'|| choice1 == 's')
		{
			printf("\n%d Sandwich (s) value %d PKR",q2,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice1 == 'p' || choice1 == 'P'){
			printf("\n%d pizza (s) value %d PKR",q2,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice =='F'|| choice =='f')
		{
						printf("\n%d French Frie (s) value %d PKR",q1,f_pr);
			if(choice1 == 'B'|| choice1 == 'b')
			{
			printf("\n%d Burger (s) value %d PKR",q2,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice1 == 'S'|| choice1 == 's')
		{
			printf("\n%d Sandwich (s) value %d PKR",q2,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice1 == 'p' || choice1 == 'P'){
			printf("\n%d pizza (s) value %d PKR",q2,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice == 'P' || choice == 'p'){
						printf("\n%d Pizza (s) value %d PKR",q1,p_pr);
			if(choice1 == 'F'|| choice1 == 'f')
			{
			printf("\n%d French Frie (s) value %d PKR",q2,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice1 == 'S'|| choice1 == 's')
		{
			printf("\n%d Sandwich (s) value %d PKR",q2,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice1 == 'b' || choice1 == 'B'){
			printf("\n%d pizza (s) value %d PKR",q2,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice == 'S'|| choice == 's'){
					printf("\n%d Sandwich (s) value %d PKR",q1,s_pr);
					if(choice1 == 'F'|| choice1 == 'f')
			{
			printf("\n%d French Frie (s) value %d PKR",q2,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice1 == 'b'|| choice1 == 'B')
		{
			printf("\n%d Sandwich (s) value %d PKR",q2,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice1 == 'p' || choice1 == 'P'){
			printf("\n%d pizza (s) value %d PKR",q2,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
	}
	else if(type == 3)
	{
		printf("\nEnter the first snack you want to order:");
		scanf(" %c",&choice);
		switch(choice){
			case'b':
			case'B':
				printf("please provide with the quantity:");
				scanf("%d",&q1);
				b_pr = b_pr * q1;
				total = b_pr;
				break;
			case'F':
			case 'f':
				printf("please provide with the quantity:");
				scanf("%d",&q1);
				f_pr = f_pr * q1;
				total = f_pr;
				break;
			case'p':
			case'P':
			printf("please provide with the quantity:");
				scanf("%d",&q1);
				p_pr = p_pr * q1;
				total = p_pr;
				break;
			case'S':
			case's':
			printf("please provide with the quantity:");
				scanf("%d",&q1);
				s_pr = s_pr * q1;
				total = s_pr;		
				break;
			default:
			printf("\nEnter valid choice");	
			break;
		}
		printf("Enter Second snack you want to order:");
		scanf(" %c",&choice1);
		switch (choice1){
			case'b':
			case'B':
				printf("please provide with the quantity:");
				scanf("%d",&q2);
				b_pr = b_pr * q2;
				total = total + b_pr;
				break;
			case'F':
			case 'f':
				printf("please provide with the quantity:");
				scanf("%d",&q2);
				f_pr = f_pr * q2;
				total = total + f_pr;
				break;
			case'p':
			case'P':
			printf("please provide with the quantity:");
				scanf("%d",&q2);
				p_pr = p_pr * q2;
				total = total + p_pr;
				break;
			case'S':
			case's':
			printf("please provide with the quantity:");
				scanf("%d",&q2);
				s_pr = s_pr * q2;
				total = total + s_pr;		
				break;
			default:
			printf("\nEnter valid choice");	
			break;
			
		}
		
		printf("Enter Third snack you want to order:");
		scanf(" %c",&choice2);
		switch (choice2){
			case'b':
			case'B':
				printf("please provide with the quantity:");
				scanf("%d",&q3);
				b_pr = b_pr * q3;
				total = total + b_pr;
				break;
			case'F':
			case 'f':
				printf("please provide with the quantity:");
				scanf("%d",&q3);
				f_pr = f_pr * q3;
				total = total + f_pr;
				break;
			case'p':
			case'P':
			printf("please provide with the quantity:");
				scanf("%d",&q3);
				p_pr = p_pr * q3;
				total = total + p_pr;
				break;
			case'S':
			case's':
			printf("please provide with the quantity:");
				scanf("%d",&q3);
				s_pr = s_pr * q3;
				total = total + s_pr;		
				break;
			default:
			printf("\nEnter valid choice");	
			break;
		}
		
	printf("\n------------------------------");
		printf("\nYou have ordered!");
		if (choice=='B'|| choice=='b'){
			printf("\n%d Burger (s) value %d PKR",q1,b_pr);
			if(choice1 == 'F'|| choice1 == 'f')
			{
			printf("\n%d French Frie (s) value %d PKR",q2,f_pr);
			if (choice2 =='S'|| choice2 == 's'){
			printf("\n%d Sandwich (s) value %d PKR",q3,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'p'|| choice2 == 'P')
		{
			printf("\n%d Pizza (s) value %d PKR",q3,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'S'|| choice1 == 's')
		{
			printf("\n%d Sandwich (s) value %d PKR",q2,s_pr);
			if (choice2 =='F'|| choice2 == 'f'){
			printf("\n%d french frie (s) value %d PKR",q3,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'p'|| choice2 == 'P')
		{
			printf("\n%d Pizza (s) value %d PKR",q3,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'p' || choice1 == 'P'){
			printf("\n%d pizza (s) value %d PKR",q2,p_pr);
			if (choice2 =='S'|| choice2 == 's'){
			printf("\n%d Sandwich (s) value %d PKR",q3,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'f'|| choice2 == 'F')
		{
			printf("\n%d French Frie (s) value %d PKR",q3,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		}
		else if (choice =='F'|| choice =='f')
		{
						printf("\n%d French Frie (s) value %d PKR",q1,f_pr);
			if(choice1 == 'B'|| choice1 == 'b')
			{
			printf("\n%d Burger (s) value %d PKR",q2,b_pr);
			if (choice2 =='S'|| choice2 == 's'){
			printf("\n%d Sandwich (s) value %d PKR",q3,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'p'|| choice2 == 'P')
		{
			printf("\n%d Pizza (s) value %d PKR",q3,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'S'|| choice1 == 's')
		{
			printf("\n%d Sandwich (s) value %d PKR",q2,s_pr);
			if (choice2 =='B'|| choice2 == 'b'){
			printf("\n%d Burger (s) value %d PKR",q3,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'p'|| choice2 == 'P')
		{
			printf("\n%d Pizza (s) value %d PKR",q3,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'p' || choice1 == 'P'){
			printf("\n%d pizza (s) value %d PKR",q2,p_pr);
			if (choice2 =='S'|| choice2 == 's'){
			printf("\n%d Sandwich (s) value %d PKR",q3,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'B'|| choice2 == 'b')
		{
			printf("\n%d Burger (s) value %d PKR",q3,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		}
		else if (choice == 'P' || choice == 'p'){
						printf("\n%d Pizza (s) value %d PKR",q1,p_pr);
			if(choice1 == 'F'|| choice1 == 'f')
			{
			printf("\n%d French Frie (s) value %d PKR",q2,f_pr);
			if (choice2 =='S'|| choice2 == 's'){
			printf("\n%d Sandwich (s) value %d PKR",q3,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'b'|| choice2 == 'B')
		{
			printf("\n%d Burger (s) value %d PKR",q3,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'S'|| choice1 == 's')
		{
			printf("\n%d Sandwich (s) value %d PKR",q2,s_pr);
			if (choice2 =='B'|| choice2 == 'b'){
			printf("\n%d Burger (s) value %d PKR",q3,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'f'|| choice2 == 'F')
		{
			printf("\n%d french frie (s) value %d PKR",q3,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'b' || choice1 == 'B'){
			printf("\n%d pizza (s) value %d PKR",q2,b_pr);
			if (choice2 =='S'|| choice2 == 's'){
			printf("\n%d Sandwich (s) value %d PKR",q3,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'f'|| choice2 == 'F')
		{
			printf("\n%d French Frie (s) value %d PKR",q3,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		}
		else if (choice == 'S'|| choice == 's'){
					printf("\n%d Sandwich (s) value %d PKR",q1,s_pr);
					if(choice1 == 'F'|| choice1 == 'f')
			{
			printf("\n%d French Frie (s) value %d PKR",q2,f_pr);
			if (choice2 =='B'|| choice2 == 'b'){
			printf("\n%d Burger (s) value %d PKR",q3,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'p'|| choice2 == 'P')
		{
			printf("\n%d Pizza (s) value %d PKR",q3,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'b'|| choice1 == 'B')
		{
			printf("\n%d Sandwich (s) value %d PKR",q2,b_pr);
			if (choice2 =='F'|| choice2 == 'f'){
			printf("\n%d French Fire (s) value %d PKR",q3,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'p'|| choice2 == 'P')
		{
			printf("\n%d Pizza (s) value %d PKR",q3,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'p' || choice1 == 'P'){
			printf("\n%d pizza (s) value %d PKR",q2,p_pr);
			if (choice2 =='B'|| choice2 == 'b'){
			printf("\n%d Burger (s) value %d PKR",q3,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'F'|| choice2 == 'f')
		{
			printf("\n%d French Frie (s) value %d PKR",q3,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		}
	}
	else if(type == 4)
	{
		printf("\nEnter the first snack you want to order:");
		scanf(" %c",&choice);
		switch(choice){
			case'b':
			case'B':
				printf("please provide with the quantity:");
				scanf("%d",&q1);
				b_pr = b_pr * q1;
				total = b_pr;
				break;
			case'F':
			case 'f':
				printf("please provide with the quantity:");
				scanf("%d",&q1);
				f_pr = f_pr * q1;
				total = f_pr;
				break;
			case'p':
			case'P':
			printf("please provide with the quantity:");
				scanf("%d",&q1);
				p_pr = p_pr * q1;
				total = p_pr;
				break;
			case'S':
			case's':
			printf("please provide with the quantity:");
				scanf("%d",&q1);
				s_pr = s_pr * q1;
				total = s_pr;		
				break;
			default:
			printf("\nEnter valid choice");	
			break;
		}
		printf("Enter Second snack you want to order:");
		scanf(" %c",&choice1);
		switch (choice1){
			case'b':
			case'B':
				printf("please provide with the quantity:");
				scanf("%d",&q2);
				b_pr = b_pr * q2;
				total = total + b_pr;
				break;
			case'F':
			case 'f':
				printf("please provide with the quantity:");
				scanf("%d",&q2);
				f_pr = f_pr * q2;
				total = total + f_pr;
				break;
			case'p':
			case'P':
			printf("please provide with the quantity:");
				scanf("%d",&q2);
				p_pr = p_pr * q2;
				total = total + p_pr;
				break;
			case'S':
			case's':
			printf("please provide with the quantity:");
				scanf("%d",&q2);
				s_pr = s_pr * q2;
				total = total + s_pr;		
				break;
			default:
			printf("\nEnter valid choice");	
			break;
			
		}
		
		printf("Enter Third snack you want to order:");
		scanf(" %c",&choice2);
		switch (choice2){
			case'b':
			case'B':
				printf("please provide with the quantity:");
				scanf("%d",&q3);
				b_pr = b_pr * q3;
				total = total + b_pr;
				break;
			case'F':
			case 'f':
				printf("please provide with the quantity:");
				scanf("%d",&q3);
				f_pr = f_pr * q3;
				total = total + f_pr;
				break;
			case'p':
			case'P':
			printf("please provide with the quantity:");
				scanf("%d",&q3);
				p_pr = p_pr * q3;
				total = total + p_pr;
				break;
			case'S':
			case's':
			printf("please provide with the quantity:");
				scanf("%d",&q3);
				s_pr = s_pr * q3;
				total = total + s_pr;		
				break;
			default:
			printf("\nEnter valid choice");	
			break;
		}
		printf("Enter Fourth snack you want to order:");
		scanf(" %c",&choice3);
		switch (choice3){
			case'b':
			case'B':
				printf("please provide with the quantity:");
				scanf("%d",&q4);
				b_pr = b_pr * q4;
				total = total + b_pr;
				break;
			case'F':
			case 'f':
				printf("please provide with the quantity:");
				scanf("%d",&q4);
				f_pr = f_pr * q4;
				total = total + f_pr;
				break;
			case'p':
			case'P':
			printf("please provide with the quantity:");
				scanf("%d",&q4);
				p_pr = p_pr * q4;
				total = total + p_pr;
				break;
			case'S':
			case's':
			printf("please provide with the quantity:");
				scanf("%d",&q4);
				s_pr = s_pr * q4;
				total = total + s_pr;		
				break;
			default:
			printf("\nEnter valid choice");	
			break;
		}
		
	printf("\n------------------------------");
		printf("\nYou have ordered!");
		if (choice=='B'|| choice=='b'){
			printf("\n%d Burger (s) value %d PKR",q1,b_pr);
			if(choice1 == 'F'|| choice1 == 'f')
			{
			printf("\n%d French Frie (s) value %d PKR",q2,f_pr);
			if (choice2 =='S'|| choice2 == 's'){
			printf("\n%d Sandwich (s) value %d PKR",q3,s_pr);
			printf("\n%d Pizza (s) value %d PKR",q4,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'p'|| choice2 == 'P')
		{
			printf("\n%d Pizza (s) value %d PKR",q3,p_pr);
			printf("\n%d Sandwich(s) value %d PKR",q4,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'S'|| choice1 == 's')
		{
			printf("\n%d Sandwich (s) value %d PKR",q2,s_pr);
			if (choice2 =='F'|| choice2 == 'f'){
			printf("\n%d french frie (s) value %d PKR",q3,f_pr);
			printf("\n%d Pizza (s) value %d PKR",q4,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'p'|| choice2 == 'P')
		{
			printf("\n%d Pizza (s) value %d PKR",q3,p_pr);
			printf("\n%d French Fries (s) value %d PKR",q4,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'p' || choice1 == 'P'){
			printf("\n%d pizza (s) value %d PKR",q2,p_pr);
			if (choice2 =='S'|| choice2 == 's'){
			printf("\n%d Sandwich (s) value %d PKR",q3,s_pr);
			printf("\n%d French Frie (s) value %d PKR",q4,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'f'|| choice2 == 'F')
		{
			printf("\n%d French Frie (s) value %d PKR",q3,f_pr);
			printf("\n%d Sandwich (s) value %d PKR",q4,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		}
		else if (choice =='F'|| choice =='f')
		{
						printf("\n%d French Frie (s) value %d PKR",q1,f_pr);
			if(choice1 == 'B'|| choice1 == 'b')
			{
			printf("\n%d Burger (s) value %d PKR",q2,b_pr);
			if (choice2 =='S'|| choice2 == 's'){
			printf("\n%d Sandwich (s) value %d PKR",q3,s_pr);
			printf("\n%d Pizza (s) value %d PKR",q4,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'p'|| choice2 == 'P')
		{
			printf("\n%d Pizza (s) value %d PKR",q3,p_pr);
			printf("\n%d Sandwich (s) value %d PKR",q4,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'S'|| choice1 == 's')
		{
			printf("\n%d Sandwich (s) value %d PKR",q2,s_pr);
			if (choice2 =='B'|| choice2 == 'b'){
			printf("\n%d Burger (s) value %d PKR",q3,b_pr);
			printf("\n%d Pizza (s) value %d PKR",q4,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'p'|| choice2 == 'P')
		{
			printf("\n%d Pizza (s) value %d PKR",q3,p_pr);
			printf("\n%d Burger (s) value %d PKR",q4,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'p' || choice1 == 'P'){
			printf("\n%d pizza (s) value %d PKR",q2,p_pr);
			if (choice2 =='S'|| choice2 == 's'){
			printf("\n%d Sandwich (s) value %d PKR",q3,s_pr);
			printf("\n%d Burger (s) value %d PKR",q4,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'B'|| choice2 == 'b')
		{
			printf("\n%d Burger (s) value %d PKR",q3,b_pr);
			printf("\n%d Sandwich (s) value %d PKR",q4,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		}
		else if (choice == 'P' || choice == 'p'){
						printf("\n%d Pizza (s) value %d PKR",q1,p_pr);
			if(choice1 == 'F'|| choice1 == 'f')
			{
			printf("\n%d French Frie (s) value %d PKR",q2,f_pr);
			if (choice2 =='S'|| choice2 == 's'){
			printf("\n%d Sandwich (s) value %d PKR",q3,s_pr);
			printf("\n%d Burger (s) value %d PKR",q4,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'b'|| choice2 == 'B')
		{
			printf("\n%d Burger (s) value %d PKR",q3,b_pr);
			printf("\n%d Sandwich (s) value %d PKR",q4,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'S'|| choice1 == 's')
		{
			printf("\n%d Sandwich (s) value %d PKR",q2,s_pr);
			if (choice2 =='B'|| choice2 == 'b'){
			printf("\n%d Burger (s) value %d PKR",q3,b_pr);
			printf("\n%d French frie (s) value %d PKR",q4,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'f'|| choice2 == 'F')
		{
			printf("\n%d french frie (s) value %d PKR",q3,f_pr);
			printf("\n%d Burger (s) value %d PKR",q4,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'b' || choice1 == 'B'){
			printf("\n%d pizza (s) value %d PKR",q2,b_pr);
			if (choice2 =='S'|| choice2 == 's'){
			printf("\n%d Sandwich (s) value %d PKR",q3,s_pr);
			printf("\n%d French Frie (s) value %d PKR",q4,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'f'|| choice2 == 'F')
		{
			printf("\n%d French Frie (s) value %d PKR",q3,f_pr);
			printf("\n%d Sandwich (s) value %d PKR",q4,s_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		}
		else if (choice == 'S'|| choice == 's'){
					printf("\n%d Sandwich (s) value %d PKR",q1,s_pr);
					if(choice1 == 'F'|| choice1 == 'f')
			{
			printf("\n%d French Frie (s) value %d PKR",q2,f_pr);
			if (choice2 =='B'|| choice2 == 'b'){
			printf("\n%d Burger (s) value %d PKR",q3,b_pr);
			printf("\n%d Pizza (s) value %d PKR",q4,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'p'|| choice2 == 'P')
		{
			printf("\n%d Pizza (s) value %d PKR",q3,p_pr);
			printf("\n%d Burger (s) value %d PKR",q4,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'b'|| choice1 == 'B')
		{
			printf("\n%d Sandwich (s) value %d PKR",q2,b_pr);
			if (choice2 =='F'|| choice2 == 'f'){
			printf("\n%d French Fire (s) value %d PKR",q3,f_pr);
			printf("\n%d Pizza (s) value %d PKR",q4,p_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'p'|| choice2 == 'P')
		{
			printf("\n%d Pizza (s) value %d PKR",q3,p_pr);
			printf("\n%d French Frie (s) value %d PKR",q4,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		else if (choice1 == 'p' || choice1 == 'P'){
			printf("\n%d pizza (s) value %d PKR",q2,p_pr);
			if (choice2 =='B'|| choice2 == 'b'){
			printf("\n%d Burger (s) value %d PKR",q3,b_pr);
			printf("\n%d French Frie (s) value %d PKR",q4,f_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		else if (choice2 == 'F'|| choice2 == 'f')
		{
			printf("\n%d French Frie (s) value %d PKR",q3,f_pr);
			printf("\n%d Burger (s) value %d PKR",q4,b_pr);
			printf("\nTotal: %d",total);
			printf("\nThank you for your order have a nice day");
		}
		}
		}
	}
}
else {
	printf("\n Enter the correct option");
}
}
else {
	printf("\nEnter the correct option");
}
}