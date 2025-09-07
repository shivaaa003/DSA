#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int>& v, int target) {
    vector<int> ans;
    for(int i=0; i<v.size(); i++) {
        for(int j=i+1; j<v.size(); j++) {
            if(v[i] + v[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans; // stop after finding first pair
            }
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v;
        for(int i=0; i<n; i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int target;
        cin >> target;
        vector<int> ans = twosum(v, target);
        for(int i=0; i<ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
