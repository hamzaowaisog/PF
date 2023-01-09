#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


struct comp{
	int real;
	int imag;
};

struct comp read(void);
void write(struct comp);
struct comp add(struct comp,struct comp);
struct comp multi(struct comp,struct comp);
int main(){
	struct comp c1,c2,a1,m1;
	printf("Reading a complex number \n");
	c1 = read();
	c2 = read();
	//c3 = read();
	printf("Writing a complex number\n");
	write(c1);
	write(c2);
	//write(c3);
	printf("Adding complex numbers\n");
	a1 = add(c1,c2);
	//a2 = add(c1,c3);
	//a3 = add(c2,c3);
	write(a1);
	//write(a2);
	//write(a3);
	printf("Multipication of complex numbers \n");
	m1  =multi(c1,c2);
	//m2 = multi(c1,c3);
	//m3 = multi(c2,c3);
	write(m1);
	//write(m2);
	//write(m3);
}
struct comp multi(struct comp a,struct comp b){
	struct comp c;
	c.real = ((a.real*b.real)-1*(a.imag*b.imag));
	c.imag = ((a.real*b.imag)+(a.imag*b.real));
	
	return (c);
}
struct comp add(struct comp a,struct comp b){
	struct comp c;
	c.real = a.real+b.real;
	c.imag = a.imag+b.imag;
	
	return(c);
}
struct comp read (void){
	struct comp t1;
	printf("Enter the real part of the complex number ");
	scanf("%d",&t1.real);
	
	printf("Enter the imaginary part of the complex number ");
	scanf("%d",&t1.imag);
	
	return (t1);
}
void write(struct comp a){
	
	if(a.imag<0){
		printf("%d %di\n",a.real,a.imag);
	}
	
	else{
		printf("%d + %di\n",a.real,a.imag);
	}
	
}