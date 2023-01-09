#include<stdio.h>
#include<conio.h>

int main (){
	float num = 0;
	float array[6]={3.14,3.24,3.96,3.44,3.0,3.64};
	
	int i=0,j=0;
	for(i=0;i<6;i++){
		for(j=i;j<6;j++){
			if(array[j]>array[i]){
				num = array[i];
				array[i]=array[j];
				array[j]=num;
			}
		}
	}
	
	for(i=0;i<6;i++){
		printf("%.2f\n",array[i]);
	}
	
}