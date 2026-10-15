class Solution {
public:
    bool checkIfPangram(string sentence) {
        //creating the frequency storing array
        int count[26]={0};
        
        //storing all characters in particular indexes of that arr
        for(int i=0;i<sentence.size();i++){
            count[sentence[i]-'a']++;
        }
        //verifying if panagram
        int i=0;
        while(i<26){
            if(count[i]==0)
            return false;
            i++;
        }
        return true;
    }
};