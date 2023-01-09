#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (){
	int r=0,c=0;
	int flag =1 ;
	
	while (flag==1){
		printf("Enter the rows of the matrix ");
		scanf("%d",&r);
		printf("Enter the columns of the matrix ");
		scanf("%d",&c);
		
		if(c==r){
			flag=0;
		}
		else{
			printf("The matrix should be square in order to be transporse");
		}
	}
	
	int matrix[r][c];
	int transporse[r][c];
	
	int i=0,j=0;
	
	for(i=0;i<r;i++){
	 for(j=0;j<c;j++){
	 	printf("Enter thE value of the matrix for %d%d position",i+1,j+1);
	 	scanf("%d",&matrix[i][j]);
	 }
	}
	printf("The Matrix is \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			
			transporse[j][i] = matrix[i][j];
		}
	}
	printf("The Transporse Matrix is \n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",transporse[i][j]);
			
		}
		printf("\n");
	}
	int flag_1=0;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(matrix[i][j]==transporse[i][j]){
				flag_1= 1;
			}
			else{
				flag_1=0;
				break;
			}
		}
	}
	
	if(flag_1 == 1){
		printf("\n The matrix are symmetric");
	}
	else{
		printf("\n The matrix are Asymmetric");
	}
	
	
}