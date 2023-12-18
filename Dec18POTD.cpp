int maxProductDifference(vector<int>& nums) {
        int ma1=0,ma2=0,mi1=1e9,mi2=1e9,x=0,y=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>ma1)
            {
                ma1=nums[i];
                x=i;
            }
            if(nums[i]<mi1)
            {
                mi1=nums[i];
                y=i;
            }
        }
        nums[x]=-1;
        ma2=*max_element(nums.begin(),nums.end());
        nums[x]=1e9;
        nums[y]=1e9;
        mi2=*min_element(nums.begin(),nums.end());
        return ma1*ma2-mi1*mi2;
    }