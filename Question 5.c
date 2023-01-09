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
		int i=0,j=0,k=0,c2=0,c1=0;
		for(i=0;i<si;i++){
			c1=0;
			c2=0;
			for(j=0;j<i+1;j++){
				if(temp[i]==temp[j]){
					c1=c1+1;
					
				}
			}
			if(c1==1){
				for(k=0;k<si;k++){
					if(temp[i]==temp[k]){
						c2=c2+1;
					}
				}
				printf("\n%d occus %d times",temp[i],c2);
			}
			
		
		
	}
}