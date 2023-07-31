class Solution {
public:
    bool isPalindrome(int x) {
        //Convert int number into a string to traverse it 
        string a = to_string(x);

        //Variables to represent the start and end of the string 
        int start = 0; int end = a.length() - 1;

        //While loop that continues until the start reaches the end of the string
        while(start != a.length() - 1) {
            //Checks to see if the current start character is equal to current end character
            //Returns false if not 
            if(a[start] != a[end]) return false; 
            ++start; --end; //Moves start and end to continue comparisons 
        }
        //Returns true if code makes it out of the while loop
        return true;
    }
};
