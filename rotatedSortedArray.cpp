class Solution {
public:
    int search(vector<int>& nums, int target) {
       
        int pivot= pivotele(nums); // index of first element in not rotated ele in rotated array
        if(target<=nums[nums.size()-1] && target>=nums[pivot]) 
            return binarysearch(nums,pivot,nums.size()-1,target); // Apply binary search for array of first set
        else
            return binarysearch(nums,0,pivot-1,target);
        
    }
    int binarysearch(vector<int>& nums,int s,int e,int k)
    {
        int mid;
        while(s<=e)
        {
             mid= s+(e-s)/2;
            if(nums[mid]==k)
                return mid;
            else if(nums[mid]>k)
                    e=mid-1;
            else
                s=mid+1;
        }
        return -1;
    }
    int pivotele(vector<int>& nums) //Find where the array is rotated and search accordingly
    {
        int s=0;
        int e=nums.size()-1;
        int mid= s+(e-s)/2;
        while(s<=e)
        {
            if(nums[mid]>nums[0]) //if element is in first set
            {
                s=mid+1; // so update to next set
            }
            else
            {
                e=mid; 
            }
            mid= s+(e-s)/2;
        }
        return mid; //returns the index of first element in not rotated element
    }
};
