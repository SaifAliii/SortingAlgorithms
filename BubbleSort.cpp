#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 10, 6, 15, 9, 76, 10, 2, 18, 33, 20 };
	bubbleSort(arr, 10);
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[10 - 1];
	return 0;
}
