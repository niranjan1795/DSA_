class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }
        
        
        vector<string> result(words.size());
        
        
        for (auto &w : words) {
            int pos = w.back() - '0'; 
            result[pos - 1] = w.substr(0, w.size() - 1); 
        }
        
        
        string ans;
        for (int i = 0; i < result.size(); i++) {
            ans += result[i];
            if (i != result.size() - 1) ans += " ";
        }
        return ans;
    }
};