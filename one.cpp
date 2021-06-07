int numIdenticalPairs(vector<int>& nums) 
    {
        int arr[101]={0};
        int count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(arr[nums[i]]!=0) 
                count=count+arr[nums[i]];
            

             arr[nums[i]]++;
        }
        return count;
    }
