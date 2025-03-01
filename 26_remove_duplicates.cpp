class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int b = nums.size();
        vector<int> p;
        p.push_back(nums[0]);
        for(int i=1; i<b; i++){
            if(nums[i] != nums[i-1]) p.push_back(nums[i]);
        }
        for(int i=0; i<p.size(); i++){
            nums[i] = p[i];
        }
        return p.size();
    }
};
