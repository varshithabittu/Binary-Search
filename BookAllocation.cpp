class Solution {
public:
    int BooksAllocated(vector<int>& books, int students) {
        int sum=0;
        int ans=0;
        for(int i=0;i<books.size()-1;i++)
        {
            sum=sum+books[i]; // Search space of size sum of all pages
        }
        int e=sum;
        int s=0;
        int mid= s+(e-s)/2;
        while(s<=e)
        {
            if(isPossible(books,students,books.size()-1,mid)) //To check whether the solution from search space is possible or not
            {
                ans=mid; // if possible store it
                e=mid-1; // As we want minimum number of pages we decrease the search space to get less number
            }
            else
            {
                s=mid+1;
            }
        }
        return ans;
    }
    bool isPossible(vector<int>& books, int noofStudents,int n,int mid)
    {
        int studentCount=1; 
        int pagesSum=0;
        for(int i=0;i<n;i++)
        {
            if(pagesSum+books[i]<=mid)
            {
                pagesSum+=books[i]; // it is used to partition the array into noofstudents and find their sum
            }
            else
            {
                studentCount++;
                if(studentCount>noofStudents || books[i]>mid)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
