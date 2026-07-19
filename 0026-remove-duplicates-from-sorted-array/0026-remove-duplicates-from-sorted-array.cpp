class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){return 0;}

        int unq_pos = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != nums[unq_pos]){unq_pos++; nums[unq_pos] = nums[i];}
        }
        return unq_pos+1;
    }
};