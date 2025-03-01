class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0;
        for(auto i: nums){
            if(i != val){
                nums[l] = i;
                l++;
            }
        }
        return l; 
    }
};
