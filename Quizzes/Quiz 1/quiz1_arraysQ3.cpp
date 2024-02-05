/*Question Three (3) - Contains Duplicate

Given an array of integers, find if the array contains any duplicates.
Your function should return true if any value appears at least twice in the array,
and it should return false if every element is distinct.*/

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            // Duplicate found
            return true;
        }
        seen.insert(num);
    }
    // No duplicates found
    return false;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {1, 2, 2, 3, 3, 4, 5}; 

    cout << "Array 1 :  " << boolalpha << containsDuplicate(arr1) << endl;
    cout << "Array 2 :  " << boolalpha << containsDuplicate(arr2) << endl;

    return 0;
}
