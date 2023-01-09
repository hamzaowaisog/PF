#include<stdio.h>
#include<conio.h>

	int fact(int);

int main(){
	int a=0;
		int  x=0;
	 printf("Enter the number to find its factorial ");
  	 scanf("%d",&a);
  	  
  	    if(a==0){
  		    	printf("The factorial of %d is 1",a);
		  }
		     else{
			 	    x = fact(a);
					 printf("The factorial of %d is %d ",a,x);   	
			 }
}

	int fact(int a){
		int x=0;
	
	if(a==1){
		return(1);
	}
	else{
		x = a * fact(a-1);
		  return (x);
	}
}