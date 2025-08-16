#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMissing(vector<int>& arr, int n) {
        int total = n * (n + 1) / 2;   
        int sum = 0;
        for (int num : arr) {
            sum += num;
        }
        return total - sum;  
    }
};

int main() {
    vector<int> arr = {1, 2, 4, 5}; 
    int n = 5;  

    Solution s;
    cout << "Missing number is: " << s.findMissing(arr, n) << endl;

    return 0;
}
