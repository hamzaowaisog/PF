#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main (){
	int num=0,ans=1,i=0;
	
	printf("Enter the num to find its factorial\n");
	scanf("%d",&num);
	if(num>=0){
		if(num==0){
			printf("The factorial %d is 1",num);
		}
		else
		{
			for(i=num;i>=1;i--){		//I used this loop because  I know the amount iteration it should have by getting input of number .
							//while loop is used when the number of iteration is unknown and do while is post increment loop it works one more time even the condition is false.
			ans = ans*i;
		}
		printf("The factorial of %d is %d",num,ans);
		}
		
	}
	else {
		exit(0);
	}
	return 0 ;
}