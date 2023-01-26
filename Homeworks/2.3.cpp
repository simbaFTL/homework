#include <stdio.h>


int main()
{
	long long int login, password;
	printf("login=");
	scanf_s("%lli", &login);

	printf("password=");
	scanf_s("%lli", &password);

	if (((login == 123) && (password == 321)) || ((login == 456) && (password == 654)) || ((login == 300) && (password == 777)))
	{
		printf("Access approved");
	}
	else
	{
		printf("You shall not pass");
	}
	
}
