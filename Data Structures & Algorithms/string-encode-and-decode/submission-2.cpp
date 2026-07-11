class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(auto& it: strs){
            int n = it.length();
            s+= to_string(n);
            s += "#";
            s += it;
        }
        return s;
    }

    vector<string> decode(string s) {
        int n = s.length();
        int i=0;
        vector<string> ans;
        while(i<n){
            string temp = "";
            while(s[i] != '#'){
                temp += s[i];
                i++;
            }
            int len = stoi(temp);
            i++;
            string curr = "";
        for (int j = 0; j < len; j++) {
            curr += s[i + j];
        }

        ans.push_back(curr);
        i += len;
    }

    return ans;
    }
};
