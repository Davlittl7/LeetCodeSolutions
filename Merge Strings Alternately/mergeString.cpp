class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        //Get total size of both words together 
        int mergeSize = word1.length() + word2.length();

        //String variable to hold the merge word in
        string mergedWord;

        //For loop that continues until the end of the size of the merged word
        for(int i = 0; i < mergeSize; ++i) {
            //Adds letter from 1st word if there is still more to it
            if(i < word1.length()) mergedWord += word1[i];
            
            //Adds letter from 2nd word if there is still more to it
            if(i < word2.length())  mergedWord += word2[i];
        }

        //Returns word at the end 
        return mergedWord;
    }
};
