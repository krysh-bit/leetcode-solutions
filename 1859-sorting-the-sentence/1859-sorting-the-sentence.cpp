
class Solution {
public:
    string sortSentence(string s) {

        vector<string> words(10);

        string word = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] != ' ') {
                word += s[i];
            }
            else {
                int pos = word[word.size() - 1] - '0';

                word.pop_back();

                words[pos] = word;

                word = "";
            }
        }

        // Store the last word
        int pos = word[word.size() - 1] - '0';
        word.pop_back();
        words[pos] = word;

        string ans = "";

        for (int i = 1; i < 10; i++) {
            if (words[i] != "") {
                if (ans != "")
                    ans += " ";

                ans += words[i];
            }
        }

        return ans;
    }
};
