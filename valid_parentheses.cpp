#include <bits/stdc++.h>
using namespace std;

bool valid_parenthesis(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (st.empty()) {
            st.push(s[i]);
        } else if ((st.top() == '(' && s[i] == ')') ||
                   (st.top() == '[' && s[i] == ']') ||
                   (st.top() == '{' && s[i] == '}')) {
            st.pop();
        } else {
            st.push(s[i]);
        }
    }
    return st.empty();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << (valid_parenthesis(s) ? "true" : "false") << endl;
    }
    return 0;
}
