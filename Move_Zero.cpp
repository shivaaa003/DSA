//Move Zeros to end.
#include <bits/stdc++.h>
using namespace std;

void move_zero(vector<int>& nums) {
    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    int t;
    cin >> t; // number of test cases
    while (t--) {
        int n; 
        cin >> n; // size of vector
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        
        move_zero(nums);

        for (int i = 0; i < n; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
