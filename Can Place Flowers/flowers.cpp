class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        //Checking some simple cases before going into the for loop
        if(n == 0) return true;
        if(flowerbed.size() == 1 && flowerbed[0] == 0) return true;


        //For loop going through flowerbed to determine if we can place one or not
        for(int i = 0; i < flowerbed.size(); ++i) {
        
            //If statement to check if a flower is there or not
            if(flowerbed[i] == 0) {
                //Checks if it can put a flower at the beginning 
                if(i == 0 && (i + 1) < flowerbed.size() && flowerbed[i + 1] == 0) {
                    flowerbed[i] = 1;
                    n -= 1;
                    if(n == 0) return true;
                    continue;
                }
                
                //For a flower at the end
                if(i == (flowerbed.size() - 1) && (i - 1) > 0 && flowerbed[i - 1] == 0) {
                    flowerbed[i] = 1;
                    n -= 1;
                    if(n == 0) return true;
                    continue;
                }

                 //Checks to see if there is a flower next to the empty spot in the middle
                if((i + 1) < flowerbed.size() && flowerbed[i + 1] == 0 
                && (i - 1) > 0 && flowerbed[i - 1] == 0) {
                    //Adds the flower and decrements n
                    flowerbed[i] = 1;
                    n -= 1;
                    if(n == 0) return true;
                }

            //Else statement for if there is a flower
            } else continue;   
            
            //Allows for the for loop to end if function is able to place all flowers
            if(n == 0) return true;
        }
        
        //Returns false if code makes it out of for loop
        return false;
    }
};
