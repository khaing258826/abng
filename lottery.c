#include <stdio.h>
#include <stdlib.h>
int main(){
	int data;
	int ID;
	int money;
	int playmoney;
	int lottery;
	int total;
	int remain;
	int num;
	printf("####Welcome to Lottery Game###\n\n");
	printf("Enter your age :");
	scanf("%d",&data);
	
	if(data>17)
	{
	
		while(data>17)
		{
			printf("Enter your ID :");
			scanf("%d",&ID);
			while(ID==1111){
				printf("please enter your money:\n must be more than 5000ks :");
				scanf("%d",&money);
				
				while(money>4999)
				{
					printf("please enter your playing money:");
					scanf("%d",&playmoney);
					if(playmoney>999)
					{
						printf("please enter lottery number :");
						scanf("%d",&lottery);
						if(lottery==20)
						{
							printf("You won\n");
				
							if(lottery==20)
                                 {
                                   total=(playmoney*10)+(money-playmoney);
	                               printf("The total money is :%d\n\n",total);
	                         printf("If u want to play again press 1:\n");
                             printf("If u want to quit press 2:\n\n");
                                 	printf("Enter numuber :");        	scanf("%d",&num);
                               if(num==1){
                               	printf("U can play again now!\n\n");
                               	
                               	}
                                 else{
                               	printf("Good Bye");
                               	exit(0);
                               }
	                              
	                            money=total;
	
								
							}
						}
						else
						{
	                    	printf("You Lose\n");
							remain=money-playmoney;
							printf("Your remaining money :%d \n\n ###TRY AGAIN###\n\n ",remain);
							
	                         printf("If u want to play again press 1:\n");
                             printf("If u want to quit press 2:\n\n");
                                 	printf("Enter numuber :");        	scanf("%d",&num);
                               if(num==1){
                               	printf("U can play again now!\n\n");
                               	
                               	}
                                 else{
                               	printf("Good Bye");
                               	exit(0);
                               }
							money=remain;
							}
					
					}
				}
			}
	
	}
	
	}
	
	
	return 0;
	}
