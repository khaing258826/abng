#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int data;
	int num;
	int a;
	int b;
	int c;
	int add;
	int subtract;
	int mulply;
	int divide;
	double d,e,hyp;
	
	
	printf(">>>###Calculator###<<<\n\n");
	
	printf("Please Enter password :");
	scanf("%d",&data);
	if(data==123)
	{
		while(data==123)
		{
			
    printf("Press 1 to add :\n");
	printf("Press 2 to subtract :\n");
	printf("Press 3 to mulply :\n");
	printf("Press 4 to divide :\n");
	printf("Press 5 to know square root :\n");
	printf("Press 6 to know sine vale :\n");
	printf("Press 7 to know sinh vale :\n");
	printf("Press 8 to know power value :\n");
	printf("Press 9 to know hypotenuse :\n");	
	printf("Press 0 to exit :\n");
	
	printf("Enter A Number for calculation :>>");
	scanf("%d",&num);
	if(num==1)
	{
		printf("ADDING\n\n");
		printf("Enter first number :");
		scanf("%d",&a);
		printf("Enter second number :");
		scanf("%d",&b);
		add=a+b;
		printf("The adding value is : %d \n\n",add);
		}
	else if(num==2)
		{
		printf("SUBTRACTING\n\n");
		printf("Enter first number :");
		scanf("%d",&a);
		printf("Enter second number :");
		scanf("%d",&b);
		subtract=a-b;
		printf("The subtracting value is : %d \n\n ",subtract);
	
	
		}
	else if(num==3)
	{
		printf("MULPLYING\n\n");
		printf("Enter first number :");
		scanf("%d",&a);
		printf("Enter second number :");
		scanf("%d",&b);
		mulply=a*b;
		printf("The mulplying value is : %d\n\n",mulply);
	}
	
	else if(num==4)
	{
		printf("DIVIDING\n\n");
		printf("Enter first number :");
		scanf("%d",&a);
		printf("Enter second number :");
		scanf("%d",&b);
		divide=a/b;
		printf("The dividing value is : %d\n\n ",divide);
		}
	else if(num==5)
	{
		printf("Square Root\n\n");
		printf("Enter The Number :");
		scanf("%d",&c);
		printf("The Square Root of %d is : %lf\n\n ",c,sqrt(c));
		}
		
	else if(num==6)
	{
		printf("Sine Value\n\n");
		printf("Enter The Number :");
		scanf("%d",&c);
		printf("The Sine Value of %d is : %lf\n\n ",c,sin(c*3.141593/180));
		}
		else if(num==7)
	{
		printf("Sinh Value\n\n");
		printf("Enter The Number :");
		scanf("%d",&c);
		printf("The Sinh Value of %d is : %lf\n\n ",c,sinh(c*3.141593/180));
		}
		
	else if(num==8)
	{
		printf("POWER\n\n");
		printf("Enter first number :");
		scanf("%d",&a);
		printf("Enter second number :");
		scanf("%d",&b);
		printf("The %d power %d is : %lf\n\n ",a,b,pow(a,b));
		}
	else if(num==9)
	{
		printf("HYPOTENUSE\n\n");
		printf("Enter first number :");
		scanf("%lf",&d);
		printf("Enter second number :");
		scanf("%lf",&e);
		hyp=hypot(d,e);
		printf("The hypotenuse value is : %lf\n\n ",hyp);
		}
	else if(num==0){
		exit(0);
		}
	
	else
	{
		printf("Default Number\n");
		printf("Try Again\n\n");
	}
	
	}
	
	
	}
	while(data!=123)
	{
		printf("Your password is wrong\n\n");
		printf("Enter your password again :");
		scanf("%d",&data);
	if(data==123)
	{
		while(data==123)
		{
			
    printf("Press 1 to add :\n");
	printf("Press 2 to subtract :\n");
	printf("Press 3 to mulply :\n");
	printf("Press 4 to divide :\n");
	printf("Press 5 to know square root :\n");
	printf("Press 6 to know sine vale :\n");
	printf("Press 7 to know sinh vale :\n");
	printf("Press 8 to know power value :\n");
	printf("Press 9 to know hypotenuse :\n");	
	printf("Press 0 to exit :\n");
	
	
	printf("Enter A Number for calculation :>>");
	scanf("%d",&num);
	if(num==1)
	{
		printf("ADDING\n\n");
		printf("Enter first number :");
		scanf("%d",&a);
		printf("Enter second number :");
		scanf("%d",&b);
		add=a+b;
		printf("The adding value is : %d \n",add);
		}
	else if(num==2)
		{
		printf("SUBTRACTING\n\n");
		printf("Enter first number :");
		scanf("%d",&a);
		printf("Enter second number :");
		scanf("%d",&b);
		subtract=a-b;
		printf("The subtracting value is : %d\n ",subtract);
	
	
		}
	else if(num==3)
	{
		printf("MULPLYING\n\n");
		printf("Enter first number :");
		scanf("%d",&a);
		printf("Enter second number :");
		scanf("%d",&b);
		mulply=a*b;
		printf("The mulplying value is : %d\n",mulply);
	}
	
	else if(num==4)
	{
		printf("DIVIDING\n\n");
		printf("Enter first number :");
		scanf("%d",&a);
		printf("Enter second number :");
		scanf("%d",&b);
		divide=a/b;
		printf("The dividing value is : %d\n ",divide);
		}
		else if(num==5)
	{
		printf("Square Root\n\n");
		printf("Enter The Number :");
		scanf("%d",&c);
		printf("The Square Root of %d is : %lf\n ",c,sqrt(c));
		}
		
				
	else if(num==6)
	{
		printf("Sine Value\n\n");
		printf("Enter The Number :");
		scanf("%d",&c);
		printf("The Sine Value of %d is : %lf\n ",c,sin(c*3.141593/180));
		}
	else if(num==7)
	{
		printf("Sinh Value\n\n");
		printf("Enter The Number :");
		scanf("%d",&c);
		printf("The Sinh Value of %d is : %lf\n ",c,sinh(c*3.141593/180));
		}
		else if(num==8)
	{
		printf("POWER\n\n");
		printf("Enter first number :");
		scanf("%d",&a);
		printf("Enter second number :");
		scanf("%d",&b);
		printf("The %d power %d is : %lf\n ",a,b,pow(a,b));
		}
	else if(num==9)
	{
		printf("HYPOTENUSE\n\n");
		printf("Enter first number :");
		scanf("%lf",&d);
		printf("Enter second number :");
		scanf("%lf",&e);
		hyp=hypot(d,e);
		printf("The hypotenuse value is : %lf\n\n ",hyp);
		}
		
	else if(num==0){
		exit(0);
		}
	
	else
	{
		printf("Default Number\n");
		printf("Try Again\n\n");
	}
	
	}
	
	
	}
		
	}
	return 0;
	}
