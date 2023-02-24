class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        int l1=firstoccurance(nums,target);
        int l2=lastoccurance(nums,target);
        if(l1==-1)
          return res;
        for(int i=l1;i<=l2;i++)
          res.push_back(i)
         return res;
    }
    int firstoccurance(vector<int>& nums,int target)
    {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e)
        {
            if(nums[mid]==target)
            {
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]>target)
                e=mid-1;
            else
                s=mid+1;
            mid=s+(e-s)/2;
        }
        return ans;
    }
    int lastoccurance(vector<int>& nums,int target)
    {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e)
        {
            if(nums[mid]==target)
            {
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]>target)
                e=mid-1;
            else
                s=mid+1;
            mid=s+(e-s)/2;
        }
        return ans;
    }
};
