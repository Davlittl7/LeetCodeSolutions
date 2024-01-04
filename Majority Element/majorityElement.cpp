class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end()); //Sort numbers to make finding majority easier

        //Variable to hold curr majority number and its amount, and a tmp count and number
        //to track a different number to see if it will become the new majority num
        int currMajorityElem = nums[0], countForMajority = 1, tmpCount = 0, tmpNum = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            if(nums[i] == currMajorityElem) {
                ++countForMajority; //Increment current majority count
            } else { //Else statement if current index does not match majority number
                if(tmpNum == nums[i]) { //See if it matches w/ previous tmpNum 
                    ++tmpCount;
                    //If new tmpCount is greater than the count for majority
                    //Then current majority and count is changed
                    if(tmpCount > countForMajority) {
                        currMajorityElem = tmpNum;
                        countForMajority = tmpCount;
                    }
                }
                else { 
                    //Makes new tmpNum if the current index doesn't match previous
                    //And restarts tmpCount to 1
                    tmpNum = nums[i];
                    tmpCount = 1;
                    //If new tmpCount is greater than the count for majority
                    //Then current majority and count is changed
                    if(tmpCount > countForMajority) {
                        currMajorityElem = tmpNum;
                        countForMajority = tmpCount;
                    }
                }
            }
        }
        return currMajorityElem; //Returns the number w/ the most elements after for loop
    }
};
