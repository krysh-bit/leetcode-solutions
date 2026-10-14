class Solution {
public:
    bool isPalindrome(string s) {
        int start=0,end=s.size()-1;
        while(start<end){
            //skipping non alphanumeric
            while(start<end && !isalnum(s[start]))
            start++;

            while(start<end && !isalnum(s[end]))
            end--;
            //compare after converting to lowercase
            if(tolower(s[start])!=tolower(s[end]))
            return false;
            
            //if same
            start++;
            end--;
        }
           
            
          return true;

        }
    
};