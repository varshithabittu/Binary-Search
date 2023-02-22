class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l1= firstoccurance(nums,target);
        int l2= lastoccurance(nums,target);
        vector<int> res;
        res.push_back(l1);
        res.push_back(l2);
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
                e=mid-1; //if the element is found inorder to get first occurance we search that element again in left side to get least index
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
                s=mid+1;
                ans=mid;  //if the element is found inorder to get last occurance we search that element again in right side to get max index
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
