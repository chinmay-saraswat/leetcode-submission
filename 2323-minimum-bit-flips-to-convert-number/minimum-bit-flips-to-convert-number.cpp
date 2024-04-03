class Solution {
public:
    int minBitFlips(int start, int goal) {
        int maxi = max(start,goal);
        int res=0;
        while(maxi!=0){
            if((start & 1)!=(goal & 1)){
                res++;
                }
            start=start>>1;
            goal=goal>>1;
            maxi=maxi>>1;

        }
        return res;
    }
};