#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

 float volumeCalu(int,int);
 float getdata(int ,int );
 
 int main(){
 	int a =0 ;
 	int h = 0;
 	float vol=0;
 	
 	printf("Enter the height ");
 	scanf("%d",&h);
 	
 	printf("Enter the base ");
 	scanf("%d",&a);
 	
 	vol = getdata(a,h);
 	
 	printf("The volume is %.2f",vol);
 	
 }
 
 float volumeCalu(int a ,int h){
 	float v=0;
 	
 	v = pow(a,2)*(h/3);
 	
 	return (v);
 	
 }
 
 float getdata( int a ,int h){
 	
 	float vol;
 	
 	vol = volumeCalu(a,h);
 	
 	return (vol);
 }