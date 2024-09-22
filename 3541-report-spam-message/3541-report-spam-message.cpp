class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_set<string> banned(bannedWords.begin(), bannedWords.end());
        int spamCount = 0;

        for (size_t i = 0; i < message.size(); ++i) {
            if (banned.count(message[i])) {
                spamCount++;
                if (spamCount >= 2) {
                    return true;
                }
            }
        }
        return false;
    }
};
