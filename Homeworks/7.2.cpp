#include <iostream>
using namespace std;

void mas(int arr[],int size)
{
	cout << "������� �������� �������\n";

	for (int i = 0;i < size;i++)
	{
		cin >> arr[i];
	}
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	setlocale(LC_ALL, "ru");

	int arr1[100],size1;
	int arr2[100],size2;

	cout << "������� ������ ������� �������\n";
	
	cin >> size1;

	cout << "������� ������ ������� �������\n";

	cin >> size2;

	mas(arr1, size1);
	mas(arr2, size2);
	
}