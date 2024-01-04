class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniqueNumCount = 1, currDupNumber = nums[0], numSize = nums.size(), i = 1;

        while(i < numSize) {
            //If number is a duplicate, erase it and put replacement in the back
            //Also decrease the amount of numbers to go through to ensure proper count
            if(nums[i] == currDupNumber) {
                nums.push_back(nums[i] + 1);
                nums.erase(nums.begin() + i);
                --numSize;
            //If not duplicate, increment total unique num count 
            //and change duplicate check number to current number and move on in vector
            } else {
                ++uniqueNumCount;
                currDupNumber = nums[i];
                ++i;
            }
        }

        //Return total unique number count after while loop
        return uniqueNumCount;
    }
};
