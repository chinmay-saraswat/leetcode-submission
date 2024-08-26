class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalCost = accumulate(cost.begin(),cost.end(),0);
        int totalGas = accumulate(gas.begin(),gas.end(),0);

        if(totalCost>totalGas){
            return -1;
        }

        int currentGas=0;
        int startingIndex=0;
        for(int i = 0;i<gas.size();i++){
            currentGas+=gas[i]-cost[i];
            if(currentGas<0){
                currentGas=0;
                startingIndex=i+1;
            }
        }
        return startingIndex;
    }
};