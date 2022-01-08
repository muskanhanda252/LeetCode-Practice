class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector <int> n;
        for(int i=1;i<=nums.size();i++)
        {
            sum=sum+nums[i-1];
            n.push_back(sum);
        }
        return {n};
    }
};