#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    
    char str[100];

    gets_s(str);

    cout << str[1] << endl;


    char str1[100];

    gets_s(str1);

    cout << str[strlen(str)-1] << endl;

    char q = str1[0];
    str1[0] = str1[1];
    str1[1] = q;

    cout << str1 << endl;


    char str2[100];
    gets_s(str2);
    int i, j;
    
    char a;
    cout << "Введите символ для удаления ";
    cin >> a;
    for (i = 0,j = 0;i < strlen(str2);i++)
    {
        if (str2[i] != a)
        {
            str2[j++] = str2[i];
        }
    }
    str2[j] = '\0';
    cout << str2 << endl;


}
