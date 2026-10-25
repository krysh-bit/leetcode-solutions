class Solution {
public:

    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        if (n > m)
            return false;

        int count1[26] = {0};
        int count2[26] = {0};

        for (int i = 0; i < n; i++) {
            count1[s1[i] - 'a']++;
        }

        for (int i = 0; i < n; i++) {
            count2[s2[i] - 'a']++;
        }

        bool same = true;

        for (int i = 0; i < 26; i++) {
            if (count1[i] != count2[i]) {
                same = false;
                break;
            }
        }

        if (same)
            return true;

        int first = 0;
        int second = n;

        while (second < m) {

            count2[s2[first] - 'a']--;
            count2[s2[second] - 'a']++;

            first++;
            second++;

            same = true;

            for (int i = 0; i < 26; i++) {
                if (count1[i] != count2[i]) {
                    same = false;
                    break;
                }
            }

            if (same)
                return true;
        }

        return false;
    }
};