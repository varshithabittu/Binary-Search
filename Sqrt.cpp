class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return x;
        int s=1;
        int e=x; //As sqrt of a given number will be less than the number given we choose search space as 1 to x
        int mid=s+(e-s)/2;
        while(s<=e)
        {
            if(mid==x/mid)
                return mid;
            else if(mid<x/mid)
                s=mid+1;
            else
                e=mid-1;
            mid=s+(e-s)/2;
        }
        return e; //Returning end because this is the last element in the search space nearer to sqrt
    }
};
