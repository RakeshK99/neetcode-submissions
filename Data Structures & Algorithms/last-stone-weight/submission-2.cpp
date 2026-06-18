class Solution {
private: 
priority_queue<int, vector<int>> maxHeap;

public:
    
    int lastStoneWeight(vector<int>& stones) {
        maxHeap.push(0);
        int diff = 0;
        for(int stone : stones){
            maxHeap.push(stone);
        }
        while(maxHeap.size()>=2){
            int stone1 = maxHeap.top();
            maxHeap.pop();
            int stone2 = maxHeap.top();
            maxHeap.pop();
        
            if(stone1 == stone2){
                break;
            }
            else{
                diff = stone1 - stone2;
                maxHeap.push(diff);
            }
        }
        return maxHeap.top();
    }
};
