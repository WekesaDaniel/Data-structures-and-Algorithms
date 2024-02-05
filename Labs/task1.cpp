/*Task One (1) 
    Define two functions: summation and maximum both of which take an integer array of length 
    0<= n<= ∞. The summation function gets the sum of the integers while the maximum function 
    obtains the largest integer in the array. 
    Within the main function; declare an array of length n, obtain the n from the user,
    then allow the user to enter these n integers storing them in the array.
    Call the two functions in turns and display their outputs.*/
    
#include <iostream>
using namespace std;

// Function to calculate the sum of integers in an array
int summation(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Function to find the maximum integer in an array
int maximum(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Invalid array length!" << endl;
        return 1;
    }
    
    int arr[n];
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // Calculate and display sum
    cout << "Sum of integers in the array: " << summation(arr, n) << endl;
    
    // Find and display maximum
    cout << "Maximum integer in the array: " << maximum(arr, n) << endl;

    return 0;
}
