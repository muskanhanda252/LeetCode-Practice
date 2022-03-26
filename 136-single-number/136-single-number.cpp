class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        // O(N) solution -> intuition XOR of two same element is zero
        
        int num = nums[0];
        
        for(int i=1; i<nums.size(); i++){
            num = num^nums[i];
        }
        
        return num;
    }
};