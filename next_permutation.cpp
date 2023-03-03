//Approach 1
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size(), k, l;

        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(),nums.end());
        }else{
            for(l=n-1; l>k; l--){
                if(nums[l]>nums[k]){
                    break;
                }
            }
            swap(nums[k],nums[l]);
            reverse(nums.begin()+k+1, nums.end());
        }
    }
};

//Approach 2
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int nums){
    next_permutation(permutation.begin(),permutation.end());
    vector<int>v(permutation.begin(),permutation.end());
    return v;
    }
    