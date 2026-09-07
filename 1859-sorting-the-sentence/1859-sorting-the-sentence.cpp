class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10);

        for (string word; s.size(); ) {
            int pos = s.find(' ');
            word = s.substr(0, pos);
            s.erase(0, pos == -1 ? s.size() : pos + 1);

            int n = word.back() - '0';
            word.pop_back();
            words[n] = word;
        }

        string ans;
        for (int i = 1; i < 10; i++)
            if (words[i] != "") ans += words[i] + " ";

        ans.pop_back();
        return ans;
    }
};