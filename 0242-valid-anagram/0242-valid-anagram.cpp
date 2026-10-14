class Solution {
public:
    bool isAnagram(string s, string t) {
        //to store frequency of each letter
        int counts[26]={0};
        int countt[26]={0};

        for(int i=0;i<s.size();i++){
            counts[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            countt[t[i]-'a']++;
        }
        int i=0;
        while(i<26){
            if(counts[i]!=countt[i])
            return false;
            i++;
        
        }

       return true;


        
        
    }
};