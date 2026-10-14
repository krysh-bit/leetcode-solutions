class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        for(int i=0;i<s.size();i=i+2*k){
            int start=i;
            int end=i+k-1;
            //if fewer than k are left
            if(end>=n)
            end=n-1;

            //now reverse
            while(start<end){
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }
        return s;
        
    }
};