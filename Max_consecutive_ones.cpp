class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int count=0;
     int maxcount = INT_MIN;
     for(int i=0; i<nums.size(); i++){
        if(nums[i]==1){
            count++;
            if(count>maxcount){
                maxcount = count;
            }
        }
        else{
            
            count = 0;
        }
        
     }  
     if(maxcount == INT_MIN){
            return nums[0];
        } 
     return maxcount;
    }
};
