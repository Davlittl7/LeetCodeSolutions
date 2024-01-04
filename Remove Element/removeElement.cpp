class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int countNewTotal = 0; //Hold total nums that are not equal to val
        int replacementNum = val + 1; //What a number will be replaced with if it is equal to val
        int i = 0; //Indexing purposes in while loop
        int numSize = nums.size(); //Holds size of vector in modifiable format
        while(i < numSize) {
            if(nums[i] != val) { //Increments if current num isn't the val
                ++countNewTotal;
                ++i;
            }
            //Erases val element and pushes back a new replacement num and shrinks numSize 
            //so that they are not counted to countNewTotal var
            else { 
                nums.push_back(replacementNum);
                nums.erase(nums.begin() + i);
                --numSize;
            }
        }
        return countNewTotal;
    }
}; 
