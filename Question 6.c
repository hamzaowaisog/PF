#include<Stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct phone{
	int ac;
	int ex;
	int num;
};

int main(){
	struct phone n1,n2;
	
	n1.ac=212;
	n1.ex=767;
	n1.num=8900;
	n2.ac=0;
	n2.ex=0;
	n2.num=0;
	
	printf("Enter area code ");
	scanf("%d",&n2.ac);
	printf("Enter exchange ");
	scanf("%d",&n2.ex);
	printf("Enter number ");
	scanf("%d",&n2.num);
	
	printf("My number is (%d) %d-%d",n1.ac,n1.ex,n1.num);
	printf("\nYour number is (%d) %d-%d",n2.ac,n2.ex,n2.num);
}