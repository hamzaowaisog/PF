#include<Stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void SortFunction(int *, int * ,int);

int main(){
	int num =0,i=0;
	int od =0 , *ptr , *se;
	
	printf("\nEnter the size of array you want ");
	scanf("%d",&num);
	
	int arr[num];
	
	for (i=0;i<num;i++){
		printf("\nEnter the %d number ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter 1)For Ascending Order \n 2) For Desceding Order ");
	scanf("%d",&od);
	
	se = &num;
	ptr = &arr[0];
	
	SortFunction(ptr,se,od);
	
}
void SortFunction (int *a , int *b , int d){
	
	int temp = 0,i=0,j=0;
	if(d==1){
		for(i=0;i<*b;i++){
			for(j=0;j<=i;j++){
				if(*(a+i)<*(a+j)){
					temp = *(a+i);
					*(a+i) = *(a+j);
					*(a+j) = temp;
				}
			}
		}
		for(i=0;i<*b;i++){	
	printf("\n%d",a[i]);
}
	}
	else if(d==2){
		for(i=0;i<*b;i++){
			for(j=0;j<=i;j++){
				if(*(a+i)>*(a+j)){
					temp = *(a+i);
					*(a+i) = *(a+j);
					*(a+j) = temp;
				}
			}
		}
				for(i=0;i<*b;i++){	
	printf("\n%d",a[i]);
}
	}
	
	
}