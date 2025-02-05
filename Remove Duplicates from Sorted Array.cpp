class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = 0;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[n] != nums[i]){
                nums[n+1] = nums[i];
                n++;
            }

        }
    return n+1;
    }  
};
