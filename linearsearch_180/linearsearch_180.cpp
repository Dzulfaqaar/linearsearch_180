#include <iostream>
using namespace std;

int arr[20]; //array to the searched
int n; //number of element in the array
int i; //index of array element

void input()
{
	while (true)
	{
		cout << "enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	//accept array elements
	cout << "\n===============\n";
	cout << "enter array elements\n";
	cout << "==================\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void linearsearch()
{
	char ch;
	int comparison; //number of comparisons

	do
	{
		//accept the number to be searched
		cout << "\nenter the element you want to search: "; //langkah 1
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0;i < n;i++)								//langkah 2,3 dan 4
		{
			comparison++;
			if (arr[i] == item)								//langkah 5 a found
			{
				cout << "\n" << item << "found at position" << (i + 1) << endl;
				break;
			}
		}
		if (i == n)											// langkah 5 b not found
			cout << "\n" << item << "not found in the array\n";
		cout << "\nnumber of comparisons: " << comparison << endl;

		cout << "\ncontinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

