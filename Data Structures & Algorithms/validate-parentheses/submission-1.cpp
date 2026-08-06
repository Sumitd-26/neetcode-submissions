class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto& it: s){
            if(st.empty() && (it == ')' || it == '}' || it == ']')) return false;
            if(st.empty() || it == '{' || it == '(' || it == '[') st.push(it);
            else if(it == '}' && st.top() == '{') st.pop();
            else if(it == ']' && st.top() == '[') st.pop();
            else if(it == ')' && st.top() == '(') st.pop();
            else return false;
        }
        if(st.empty()) return true;
        return false;
    }
};
