class Solution {
public:
    string reverseWords(string s) {
        stack<string> words;
        string word = "", result = "";
        
        for (char ch : s) {
            if (ch == ' ') {
                if (!word.empty()) {
                    words.push(word);
                    word = "";
                }
            } else {
                word += ch;
            }
        }
        
        if (!word.empty()) {
            words.push(word);
        }
        
        while (!words.empty()) {
            result += words.top();
            words.pop();
            if (!words.empty()) {
                result += " ";
            }
        }
        
        return result;
    }
};
