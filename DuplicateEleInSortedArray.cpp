/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int duplicate(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    while(s<=e)
    {
        if (arr[mid] == arr[mid + 1] || arr[mid] == arr[mid - 1]) {
            cout << arr[mid];
            break;
        }
        if((arr[s]+arr[e])/2==arr[mid])
        {
            s=mid+1;
        }
        else
            e=mid-1;
        mid= s+(e-s)/2;
    }
    return -1;
}
int main()
{
    int arr[6]={2,3,4,5,5,5};
    duplicate(arr,sizeof(arr));
    return 0;
}
