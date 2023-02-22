class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<e) //If start equal to end and if element is not present we cannot get insert position so we stop when s==e
        {
            if(nums[mid]==target)
                return mid;
            else if(target>nums[mid])
                    s=mid+1;
            else
                e=mid-1;
            mid=s+(e-s)/2;
        }
        if(target>nums[s]) //ikf s==e that means element is not present and if element is greater than start then we need insert it after start so s+1
            return s+1;
        else
            return s;
    }
};
