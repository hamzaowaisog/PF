#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

	void countfreq(int [], int);
	
	int main(){
		int size=0 ,i=0;
		
		printf("Enter the size of ARRAY you want ");
		scanf("%d",& size);
		
		int array1[size];
		
		srand(time(0));
		
		for(i=0;i<size;i++){
			array1[i] = rand()%10;
			printf(" %d ",array1[i]);
		}
		
		countfreq(array1,size);
	}
	void countfreq(int temp[],int si){
		int i=0,c[10];
		for(i=0;i<10;i++){
			c[i]=0;
		}
		for(i=0;i<si;i++){
			if(temp[i]==0){
				c[0]++;
			}
			else if(temp[i]==1)
			{
				c[1]++;
			}
						else if(temp[i]==2)
			{
				c[2]++;
			}
						else if(temp[i]==3)
			{
				c[3]++;
			}
						else if(temp[i]==4)
			{
				c[4]++;
			}
						else if(temp[i]==5)
			{
				c[5]++;
			}
						else if(temp[i]==6)
			{
				c[6]++;
			}
						else if(temp[i]==7)
			{
				c[7]++;
			}
						else if(temp[i]==8)
			{
				c[8]++;
			}
						else if(temp[i]==9)
			{
				c[9]++;
			}
		}
			
			for(i=0;i<10;i++){
				printf("\n%d occurs %d times",i,c[i]);
			}
		
		
	}