class Solution {
public:

    vector<int> buildLPS(string s) {

        int n = s.size();
        vector<int> ans(n, 0);

        int prefix = 0;
        int suffix = 1;

        while (suffix < n) {

            if (s[prefix] == s[suffix]) {

                ans[suffix] = prefix + 1;
                prefix++;
                suffix++;
            }

            else {

                if (prefix != 0) {
                    prefix = ans[prefix - 1];
                }

                else {
                    ans[suffix] = 0;
                    suffix++;
                }
            }
        }

        return ans;
    }


    int strStr(string haystack, string needle) {

        int n = haystack.size();
        int m = needle.size();

        if (m > n)
            return -1;

        vector<int> lps = buildLPS(needle);

        int i = 0;  // haystack pointer
        int j = 0;  // needle pointer

        while (i < n) {

            if (haystack[i] == needle[j]) {

                i++;
                j++;

                if (j == m)
                    return i - j;
            }

            else {

                if (j != 0) {
                    j = lps[j - 1];
                }

                else {
                    i++;
                }
            }
        }

        return -1;
    }
};