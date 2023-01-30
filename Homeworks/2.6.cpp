#include <stdio.h>

int main()
{
	int day, month, year;
	printf("Day=");
	scanf_s("%i", &day);
	printf("Month=");
	scanf_s("%i", &month);
	printf("Year=");
	scanf_s("%i", &year);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		printf("Year is leap\n");
	}
	else {
		printf("Year is not leap\n");
	}
	
	switch (year%12-1)
	{
	case -1:
	{
		printf("Estern calendar: Monkey\n");
	}
	break;
	case 0:
	{
		printf("Estern calendar: Rooster\n");
	}
	break;
	case 1:
	{
		printf("Estern calendar: Dog\n");
	}
	break;
	case 2:
	{
		printf("Estern calendar: Pig\n");
	}
	break;
	case 3:
	{
		printf("Estern calendar: Rat\n");
	}
	break;
	case 4:
	{
		printf("Estern calendar: Bull\n");
	}
	break;
	case 5:
	{
		printf("Estern calendar: Tiger\n");
	}
	break;
	case 6:
	{
		printf("Estern calendar: Rabbit\n");
	}
	break;
	case 7:
	{
		printf("Estern calendar: Dragon\n");
	}
	break;
	case 8:
	{
		printf("Estern calendar: Snake\n");
	}
	break;
	case 9:
	{
		printf("Estern calendar: Horse\n");
	}
	break;
	case 10:
	{
		printf("Estern calendar: Goat\n");
	}
	break;
	case 11:
	{
		printf("Estern calendar: Monkey\n");
	}
	break;

	
	}
if ((month == 3 && day >= 21) || (month == 4 && day <= 20))
	printf ("Zodic sign: Aries");    
else
if ((month == 4 && day >= 21) || (month == 5 && day <= 20))
	printf ("Zodic sign: Taurus");    
else
if ((month == 5 && day >= 21) || (month == 6 && day <= 21))
	printf ("Zodic sign: Gemini");    
else
if ((month == 6 && day >= 22) || (month == 7 && day <= 22))
	printf ("Zodic sign: Cancer");    
else
if ((month == 7 && day >= 23) || (month == 8 && day <= 23))
	printf ("Zodic sign: Leo");    
else
if ((month == 8 && day >= 24) || (month == 9 && day <= 23))
	printf ("Zodic sign: Virgo");    
else
if ((month == 9 && day >= 24) || (month == 10 && day <= 22))
	printf ("Zodic sign: Libra");    
else
if ((month == 10 && day >= 23) || (month == 11 && day <= 22))
	printf ("Zodic sign: Scorpio");    
else
if ((month == 11 && day >= 23) || (month == 12 && day <= 21))
	printf ("Zodic sign: Saggitarius");    
else
if ((month == 12 && day >= 22) || (month == 1 && day <= 20))
	printf ("Zodic sign: Capricorn");    
else
if ((month == 1 && day >= 21) || (month == 2 && day <= 19))
	printf ("Zodic sign: Acquarius");    
else
if ((month == 2 && day >= 20) || (month == 3 && day <= 20))
	printf ("Zodic sign: Pisces");   
}