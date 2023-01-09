#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

	void sparse(int ,int ,int);
	
	int main(){
		int r=0,c=0,count=0;
		int i=0,j=0;
		
		printf("Enter the row of the matrix ");
		scanf("%d",&r);
		
		printf("Enter the column of the matrix");
		scanf("%d",&c);
		
		int matrix[r][c];
		
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("Enter the element for %d%d position\n",i+1,j+1);
				scanf("%d",&matrix[i][j]);
				
				if(matrix[i][j]==0){
					count = count +1;
				}
			}
		}
		printf("\nThe Matrix is\n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
		
		sparse(count,r,c);
	}
	
	void sparse(int i ,int j ,int k){
		int a =0;
		a = (j*k)/2;
		
		if(i>=a){
			printf("The Matrix is sparse");
		}
		else{
			printf("The matrix is not sparse");
		}
	}