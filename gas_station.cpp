class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int current=0;
        int total_cost=0;
        int total_gas=0;
        int start=0;
        for(int i=0;i<gas.size();i++){
            total_gas+=gas[i];
        }
        
        for(int i=0;i<gas.size();i++){
            total_cost+=cost[i];
        }
        if(total_gas<total_cost){
            return -1;
        }
        for(int i=0;i<gas.size();i++){
            current+=(gas[i]-cost[i]);
            if(current<0){
                current=0;
                start=i+1;
            }
        }
        return start;

    }
};