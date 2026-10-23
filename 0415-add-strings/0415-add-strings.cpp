class Solution {
public:
    string addStrings(string num1, string num2) {
        int index1 = num1.size() - 1;
        int index2 = num2.size() - 1;

        string ans;
        int carry = 0;
        int sum;

        while (index1 >= 0 || index2 >= 0) {
            
            int digit1 = 0;
            int digit2 = 0;

            if (index1 >= 0)
                digit1 = num1[index1] - '0';

            if (index2 >= 0)
                digit2 = num2[index2] - '0';

            sum = digit1 + digit2 + carry;

            carry = sum / 10;

            char c = '0' + sum % 10;
            ans += c;

            index1--;
            index2--;
        }

        if (carry)
            ans += '1';

        reverse(ans.begin(), ans.end());

        return ans;
    }
};