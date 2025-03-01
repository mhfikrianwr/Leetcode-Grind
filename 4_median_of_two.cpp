class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1 = 0, l2 = 0, x = nums1.size(), y = nums2.size();
        int b = x + y;
        int elemen = 1, z = (b/2) + 1,t = 0;
        double sum = 0;
        while(elemen <= z){
            if(l1 != x && l2 != y){
                if(nums1[l1] <= nums2[l2]){
                    if(elemen == (z-1)){
                        if(b%2 == 0) sum += nums1[l1];
                        l1++;
                    }else if(elemen == z){
                        sum += nums1[l1];
                        l1++;
                    }else{
                        l1++;
                    }
                }else{
                    if(elemen == (z-1)){
                        if(b%2 == 0) sum += nums2[l2];
                        l2++;
                    }else if(elemen == z){
                        sum += nums2[l2];
                        l2++;
                    }else{
                        l2++;
                    }
                }
            }else if(l1 == x && l2 != y){
                if(elemen == (z-1)){
                    if(b%2 == 0) sum += nums2[l2];
                    l2++;
                }else if(elemen == z) {
                    sum += nums2[l2];
                    l2++;
                }else{
                    l2++;
                }
            }else if(l1 != x && l2 == y){
                if(elemen == (z-1)){
                    if(b%2 == 0) sum += nums1[l1];
                    l1++;
                }else if(elemen == z) {
                    sum += nums1[l1];
                    l1++;
                }else{
                    l1++;
                }
            }
            elemen++;
        }
        if(b%2 == 0)return sum/2;
        else return sum;
    }
};
