class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int countNewTotal = 0;
        int replacementNum = val + 1;
        int i = 0;
        int numSize = nums.size();
        while(i < numSize) {
            if(nums[i] != val) {
                ++countNewTotal;
                ++i;
            }
            else {
                nums.push_back(replacementNum);
                nums.erase(nums.begin() + i);
                --numSize;
            }
        }
        return countNewTotal;
    }
}; 
