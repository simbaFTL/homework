#include <iostream>
using namespace std;

int main()
{
	char str[100];
    	gets_s(str);

    for (int i = 0;i < strlen(str);i++)
    {
        str[i] = str[i+1];
        
    }
    cout << str << endl;


    char str1[100];
    char str2[100];
    int i;
    gets_s(str1);

    for (i =0;i<strlen(str1);i++)
    {
        str2[i] = str1[strlen(str1)-i-1];
        
    }
    str2[i] = '\0';
    cout << str2 << endl;

}