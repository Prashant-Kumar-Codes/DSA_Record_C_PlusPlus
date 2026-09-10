class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        
        for (const string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                // Pop two operands (note the order matters for - and /)
                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();
                
                long long result;
                if (token == "+") {
                    result = a + b;
                } else if (token == "-") {
                    result = a - b;
                } else if (token == "*") {
                    result = a * b;
                } else { // token == "/"
                    result = a / b;  // Truncates toward zero in C++11 and later
                }
                
                st.push(result);
            } else {
                // It's a number, push it onto the stack
                st.push(stoll(token));
            }
        }
        
        return st.top();
    }
};