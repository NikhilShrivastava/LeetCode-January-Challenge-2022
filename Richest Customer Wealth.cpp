class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0;
        vector<int> v;
        for(int i=0;i<accounts.size();i++)
        {
            sum = 0;
            for(int j=0;j<accounts[0].size();j++)
            {
                sum+=accounts[i][j];
            }
            v.push_back(sum);
        }
        return *max_element(v.begin(),v.end());
    }
};
