class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies,candies+N);
        int min=0;
        int buy=0;
        int free=N-1;
        while(buy<=free)
        {
            min += candies[buy];
            buy++;
            free=free-K;
        };
        
        int max=0;
        int buyy=N-1;
        int freee=0;
        while(freee<=buyy)
        {
            max += candies[buyy];
            buyy--;
            freee=freee+K;
        }
        vector<int> res;
        res.push_back(min);
        res.push_back(max);
        return res;
        
    }
};
