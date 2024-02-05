/*Question Two (2) - Rotate Array
Given an array, rotate the array to the right by k steps, where k is non-negative.*/

#include <iostream>
using namespace std;

void RightRotate(int a[], int n, int k)
{
	k = k % n;

	for(int i = 0; i < n; i++)
	{
	if(i < k)
	{
		cout << a[n + i - k] << " ";
	}
	else
	{
		cout << (a[i - k]) << " ";
	}
	}
	cout << "\n";
}

int main()
{
	int Array[] = { 4, 6, 3, 3, 8, 9, 4, 1 };
	int N = sizeof(Array) / sizeof(Array[0]);
	int K = 4;

	RightRotate(Array, N, K);
	return 0;
}
