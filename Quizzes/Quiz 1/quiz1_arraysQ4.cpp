/*Question Four (4) - Single Number

Given a non-empty array of integers nums, every element appears twice
except for one. Find that single one.*/

#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    return result;
}

int main() {
    vector<int> nums = {6, 6, 5, 5, 2, 1, 1, }; 
    int single = singleNumber(nums);
    cout << "The single number is: " << single << endl;
    return 0;
}

