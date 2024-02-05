/*Question One (1) Remove Duplicates from Sorted Array

Given a sorted array nums, remove the duplicates in-place such that each element
appears only once and returns the new length.

Do not allocate extra space for another array, you must do this by
modifying the input array in-place with O(1) extra memory.*/

#include<bits/stdc++.h>
using namespace std;


int removeDuplicates(int arr[], int n)
{
	if (n==0 || n==1)
		return n;

	int j = 0;


	for (int i=0; i < n-1; i++)
		if (arr[i] != arr[i+1])
			arr[j++] = arr[i];

	arr[j++] = arr[n-1];

	return j;
}


int main()
{
	int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	// removeDuplicates() returns new length of array.
	n = removeDuplicates(arr, n);
	cout<<"The new length is : "<<n;

	return 0;
}

