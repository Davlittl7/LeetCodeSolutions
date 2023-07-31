class Solution {
public:
    bool isPalindrome(int x) {
        string a = to_string(x);
        int start = 0; int end = a.length() - 1;
        while(start != a.length() - 1) {
            if(a[start] != a[end]) return false;
            ++start; --end;
        }
        return true;
    }
};
