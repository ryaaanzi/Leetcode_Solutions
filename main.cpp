#include <iostream>
#include <vector>
#include "solution.cpp"
using namespace std;

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    cout << "Indices: ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}