class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++)
        {
            pq.push(stones[i]);
        }
        while(pq.size()>1)
        {
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            int z=x>y?x-y:y-x;
            if(z!=0)
            {
                pq.push(z);
            }
        }
        if(pq.empty())
        {return 0;}
        return pq.top();
        
    }
};
