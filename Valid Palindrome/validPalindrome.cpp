class Solution {
public:
    bool isPalindrome(string s) {
        //Make string lowercase to ease palindrome check
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        //Erase-remove idioms to remove spaces and punctuation from s
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        s.erase(remove_if(s.begin(), s.end(), ::ispunct), s.end());
        
        //For loop to go through the entire string after it has been simplified
        for(int i = 0; i < s.length(); ++i) {
            //If one end does equal the other end, return false
            if(s[i] != s[s.length() - (i + 1)]) return false;
        }
        //If the function makes it through the for loop, then it should return true
        return true;
        
    }
};
