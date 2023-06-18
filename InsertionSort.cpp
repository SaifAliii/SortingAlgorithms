#include<iostream>
using namespace std;
void selectionSort(int arr[], int n)
{										// [9, 6, 10, 15, 10, 76, 2, 18, 33, 20]
	int temp;							//   0, 1, 2, 3,  4,  5, 6,  7,  8,  9 					      
	for (int i = 0; i  < n - 1; i++)	//i = 4, j = 4, j+1 = 5, arr[j] = 76, arr[j+1] = 10
	{
		int j = i;
		while(j >= 0 && arr[j] > arr[j + 1])
		{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			j--;
		}
	}
}
int main()
{
	int arr[10] = { 10, 6, 15, 9, 76, 10, 2, 18, 33, 20 };
	selectionSort(arr, 10);
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[10 - 1];
	return 0;
}