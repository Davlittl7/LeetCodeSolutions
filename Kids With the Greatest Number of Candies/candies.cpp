class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int highestCandyAmt = 0;
        //Determines the kid with the highest candy
        for(auto i: candies) {
            if(i > highestCandyAmt) highestCandyAmt = i;
        }
        //Set up the boolean vector we will return
        vector<bool> answer;

        //For loop that goes through candy vector 
        //and pushes true to answer if meets criteria and false if not 
        for(auto i: candies) {
            if(i + extraCandies >= highestCandyAmt) answer.push_back(true);
            else answer.push_back(false);
        }
        return answer;
    }
};
