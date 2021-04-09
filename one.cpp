 int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i: nums)
            m[i]++;
        
        int cnt = 0;
        for(auto p: m) 
        {
            cnt += p.second * (p.second-1) / 2;
        }
        return cnt;
    }