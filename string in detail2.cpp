#include<stdio.h>

main()
{
	char email[100]="abcd@gmail.com";
	char email1[100];
	char pass[100]="abcd1234";
	char pass1[100];
	int n,i;
	
	printf("please enter the email = ");
	gets(email1);
	printf("please enter the password = ");
	gets(pass1);
	
	
	if(strcmp(email,email1)==0)
	{
		if(strcmp(pass,pass1)==0)
		{
			printf("login is done ");
		}
		else
		{
			printf("please Right Password ");
		}
	}
	else
	{
		printf("please enter the right email ");
	}		
}