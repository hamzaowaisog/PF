#include<stdio.h>
#include<conio.h>

int main (){
	char type , size ;
	float w_pt = 15 , w_s = 15 , w_mw = 20 , w_ac = 2 , w_am = 4 ;
	float b_pt = 20 , b_s = 20 , b_mw = 25 , b_ac = 15 ;
	
	printf("Enter the type of coffee you want .\nPress B for black and W for white\n");
	scanf("%c",&type);
	
	printf("Enter the Size you want .\nPress S for small and D for double\n");
	scanf(" %c",&size);
	
	switch(type){
		case'B':
			case'b':
			switch(size){
				case'S':
					case's':
						printf("\nPUT WATER %.2f MINS ",b_pt);
						printf("\nSUGAR %.2f MINS",b_s);
						printf("\nMIX WELL %.2f MINS",b_mw);
						printf("\nADD COFFEE %.2f MINS",b_ac);
						printf("\nMIX WELL %.2f MINS",b_mw);
						break;
				case'D':
				case'd':
					printf("\nPUT WATER %.2f MINS ",b_pt*1.5);
						printf("\nSUGAR %.2f MINS",b_s*1.5);
						printf("\nMIX WELL %.2f MINS",b_mw*1.5);
						printf("\nADD COFFEE %.2f MINS",b_ac*1.5);
						printf("\nMIX WELL %.2f MINS",b_mw*1.5);
						break;
				default:
				printf("INVALID INPUT");		
			}
			break;
			
			case'W':
			case'w':
				switch(size){
					case's':
					case'S':
							printf("\nPUT WATER %.2f MINS ",w_pt);
						printf("\nSUGAR %.2f MINS",w_s);
						printf("\nMIX WELL %.2f MINS",w_mw);
						printf("\nADD COFFEE %.2f MINS",w_ac);
						printf("\nADD MILK %.2f MINS",w_am);
						printf("\nMIX WELL %.2f MINS",w_mw);
						break;
					
					case'D':
					case'd':
							printf("\nPUT WATER %.2f MINS ",w_pt*1.5);
						printf("\nSUGAR %.2f MINS",w_s*1.5);
						printf("\nMIX WELL %.2f MINS",w_mw*1.5);
						printf("\nADD COFFEE %.2f MINS",w_ac*1.5);
						printf("\nADD MILK %.2f MINS",w_am*1.5);
						printf("\nMIX WELL %.2f MINS",w_mw*1.5);
						break;
					default :
					printf("INVALID INPUT");	
				}
			break;
			
			default:
			printf("INVALID INPUT");
				
			}
			
	}

