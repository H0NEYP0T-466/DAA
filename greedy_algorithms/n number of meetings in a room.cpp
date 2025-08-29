class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool comparator(pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    }
    int maxMeetings(vector<int>& start, vector<int>& end) {
        vector<pair<int,int>> v;
        
        for(int i=0;i<end.size();i++)
        {
            pair<int,int> p=make_pair(start[i],end[i]);
            v.push_back(p);
        }
        sort(v.begin(),v.end(),comparator);
        
        int totalmetings=1;
        int endtime=v[0].second;
        for(int i=1;i<v.size();i++)
        {
            if(v[i].first>endtime)
            {
                totalmetings++;
                endtime=v[i].second;
            }
        }
        return totalmetings;
        // Your code here
    }
};