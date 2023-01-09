#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int mark_sheet[5][9];
	int i=0,j=0;
	float per=0,sum=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<9;j++){
			mark_sheet[i][j]=0;
		}
	}
	
	for(i=0;i<5;i++){
		printf("Enter your Student Id ");
		scanf("%d",&mark_sheet[i][0]);
	}
	
	for(i=0;i<5;i++){
		sum = 0;
		for(j=1;j<6;j++){
			printf("Enter the marks of Course %d of %d id student ",j,mark_sheet[i][0]);
			scanf("%d",&mark_sheet[i][j]);
			if(mark_sheet[i][j]<=100){
				
			sum = sum + mark_sheet[i][j];
			}
			else{
				j=j-1;
				printf("\nEnter the Correct number\n");
			}
		}
		mark_sheet[i][7] = sum;
		mark_sheet[i][6] = 500;
		per = (sum/500)*100;
		mark_sheet[i][8] = per;
	}
	printf("\nStd-Id   C1-marks   C2-Marks   C3-Marks   C4-Marks   C5-Marks   Total-Marks   Obt-Marks   Percentage    \n");
	for(i=0;i<5;i++){
		for(j=0;j<9;j++){
			printf("%d          ",mark_sheet[i][j]);
		}
		printf("\n");
	}
}