class Solution {
public:
    int arrangeCoins(int n) {
        //Search space will be from 1 to n because we can only fill that no.of coins
        //so
        int s=1;
        int e=n;
        while(s<=e)
        {
            long long noofRows= s+(e-s)/2;
            long long coinsUsed= noofRows*(noofRows+1)/2; // This is formulae derived to know the no.of coins that can be filled by thatrow by this we get 1,3,6,10,15------- for first row 1*2/2=2 second row 2*3/2=3 coins likewise
            if(n==coinsUsed)
                return noofRows;
            else if(coinsUsed>n)
                    e=noofRows-1; //If we are using more no.of coins than required then we decrease our search space
            else
                s=noofRows+1;
        }
        return e; //This gives no.of completed rows
        
    }
};
