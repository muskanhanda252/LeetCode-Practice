class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> freq(1001);
unordered_map<int, int> mp;

    for(int i: arr){
        mp[i]++;
    }
    for(auto it: mp){
        freq[it.second]++;
        if(freq[it.second] > 1){
            return false;
        }
    }
    return true;
}
};