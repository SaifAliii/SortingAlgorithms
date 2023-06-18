#include<iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
	int smallest;
	int smallestIndex = -1;
	int temp;
	for (int i = 0; i < n; i++)
	{
		smallest = arr[i];
		smallestIndex = -1;
		int j = i;
		for (; j < n; j++)
		{
			if (arr[j] <= smallest)
			{
				smallest = arr[j];
				smallestIndex = j;
			}
		}
		cout << arr[i] << endl;
		temp = arr[i];
		arr[i] = arr[smallestIndex];
		arr[smallestIndex] = temp;
		cout << i << " " << smallestIndex<< " " << smallest << " " << arr[i] << " " << arr[smallestIndex] << endl;

	}
}
int main()
{
	/*int a = 17;
	int b = 51;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << ":" << b << endl;*/
	int arr[10] = { 10, 6, 15, 9, 76, 34, 2, 18, 33, 20 };
	selectionSort(arr, 10);
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[10 - 1];
	return 0;
}