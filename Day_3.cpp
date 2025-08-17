#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int find_dup(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};

int main() {
    vector<int> arr = {3, 1, 3, 4, 2};
    Solution s;
    cout << "Duplicate number is: " << s.find_dup(arr) << endl;
    return 0;
}
