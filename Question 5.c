#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int find(int[],int,int);

int main(){
	int array[10]={5,4,3,2,1,6,10,9,7,8};
	int num = 0,c=0;
	
	printf("Enter the number to search from the array ");
	scanf("%d",&num);
	
	c=find(array,num,0);
	
	if(c<0){
		printf("The element is not present");
	}
	else{
		printf("The element is present at %d position",c+1);
	}
}
	int find(int b[],int a,int x){
		if (b[x]==a)
		   {
		   	   	return(x);
		   }
		   	   else if(x>=9){
			   		   		    	return(-1);
				  }
			else{
				  	return(find(b,a,x+1));
			} 
	}