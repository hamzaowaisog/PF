#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main (){
	char c1,c2,c3,c4,c5;
	char u_f,p_f;
	char p1,p2,p3,p4,p5,p6;
	char u1,u2,u3,u4,u5;
	char a1,a2,a3,a4,a5,a6;
	int i=0,num=0,cap=0,small=0;
	
	printf("**********************************USER-REGISTRATION SYSTEM*************************************");
	for(i=0;i<5;i++)
	{
		printf("\nEnter the %d character of your username\n",i+1);
		if(i==0){
			scanf(" %c",&c1);
		}
		else if (i==1){
			scanf(" %c",&c2);
		}
		else if (i==2){
			scanf(" %c",&c3);
		}
		else if (i==3){
			scanf(" %c",&c4);
		}
		else if (i==4){
			scanf(" %c",&c5);
		}
		u_f = 't';
		
	}
	for(i=0;i<6;i++){
		printf("\nEnter the %d character of your password\n",i+1);
		if(i==0){
			scanf(" %c",&p1);
			if(p1>='0'&&p1<='9'){
				num++;
			}
			else if (p1>='a'&& p1<='z'){
				small++;
			}
			else if (p1>='A' && p1<='Z'){
				cap++;
			}
			continue;
		}
		else if (i==1){
			scanf(" %c",&p2);
			if(p2>='0'&& p2<='9'){
				num++;
			}
			else if (p2>='a'&& p2<='z'){
				small++;
			}
			else if (p2>='A' && p2<='Z'){
				cap++;
			}
			continue;
		}
		else if (i==2){
			scanf(" %c",&p3);
			if(p3>='0'&&p3<='9'){
				num++;
			}
			else if (p3>='a'&& p3<='z'){
				small++;
			}
			else if (p3>='A' && p3<='Z'){
				cap++;
			}
			continue;
		}
		else if (i==3){
			scanf(" %c",&p4);
			if(p4>='0'&&p4<='9'){
				num++;
			}
			else if (p4>='a'&& p4<='z'){
				small++;
			}
			else if (p4>='A' && p4<='Z'){
				cap++;
			}
			continue;
		}
		else if (i==4){
			scanf(" %c",&p5);
			if(p5>='0'&&p5<='9'){
				num++;
			}
			else if (p5>='a'&& p5<='z'){
				small++;
			}
			else if (p5>='A' && p5<='Z'){
				cap++;
			}
			continue;
		}
		else if (i==5){
			scanf(" %c",&p6);
			if(p6>='0'&&p6<='9'){
				num++;
			}
			else if (p6>='a'&& p6<='z'){
				small++;
			}
			else if (p6>='A' && p6<='Z'){
				cap++;
			}
				if(num>=1 && cap>=1 && small>=1){
		p_f = 't';
		
	}
	else{
		printf("\nEnter the character of password again");
		i=-1;
	}
	}

}
	if(p_f=='t' && u_f=='t'){
		printf("\nAccount Created Successfully");
	}
	
	p_f='f';
	u_f='f';
	printf("\t\t\t\t\t\nLOGIN PAGE\n");
	printf("\nWe need your username and password for verifications");
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter the %d character of your username\n",i+1);
		if(i==0){
			scanf(" %c",&u1);
			continue;
		}
		else if (i==1){
			scanf(" %c",&u2);
			continue;
		}
		else if (i==2){
			scanf(" %c",&u3);
			continue;
		}
		else if (i==3){
			scanf(" %c",&u4);
			continue;
		}
		else if (i==4){
			scanf(" %c",&u5);
			break;
		}
	}
	if(c1==u1 && c2==u2 && c3==u3 && c4==u4 && c5==u5){
		u_f = 't';
	}
	for(i=0;i<6;i++){
		printf("\nEnter the %d character of your password\n",i+1);
		if(i==0){
			scanf(" %c",&a1);
			continue;
		}
		else if (i==1){
			scanf(" %c",&a2);
			continue;
		}
		else if (i==2){
			scanf(" %c",&a3);
			continue;
		}
		else if (i==3){
			scanf(" %c",&a4);
			continue;
		}
		else if (i==4){
			scanf(" %c",&a5);
			continue;
		}
		else if (i==5){
			scanf(" %c",&a6);
			break;
			
	}

}
	if(p1==a1 && p2==a2 && p3==a3 && p4==a4 && p5==a5 && p6==a6){
		p_f='t';
	}
	
	if(p_f=='t'&& u_f =='t'){
		printf("\nWelcome %c%c%c%c%c , you are now logged in!!\n",u1,u2,u3,u4,u5);
		exit(0);
	}
	else{
		printf("\nEnter correct username or password\n");
	}
	
	
}