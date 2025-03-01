class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        bool prime[101];
        prime[0] = false;
        prime[1] = false;
        prime[2] = true;
        for(int i=3; i<=100; i++){
            prime[i] = true;
            for(int y=2; y*y<=i; y++){
                if(i%y == 0){
                    prime[i] = false;
                    break;
                }
            }
        }
        int banyak = 0,n = nums.size();
        int  maks = -1,minim = 999;
        for(int i=0; i<n; i++){
            if(prime[nums[i]]){
                if(banyak == 0){
                    banyak++;
                    minim = i+1;
                }else{
                    banyak++;
                    maks = i+1;
                }
        }
        }
        if(banyak == 1) return 0;
        else return (maks-minim);
    }
};
