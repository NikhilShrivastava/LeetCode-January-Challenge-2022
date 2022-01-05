class Solution {
public:
    bool isPalin(string s)
    {
            string s1 = s;
            reverse(s1.begin(),s1.end());
            if(s == s1)
                    return true;
          return false;
    }
    void solve(string s,vector<vector<string>> &res,vector<string> temp)
    {
            
            if(s.length() == 0)
                    res.push_back(temp);
            
            
            for(int i = 0;i<s.length();i++)
            {
                    if(isPalin(s.substr(0,i+1)))
                    {
                            temp.push_back(s.substr(0,i+1));
                            solve(s.substr(i+1),res,temp);
                            temp.pop_back();
                    }
                    
            }
    }
    vector<vector<string>> partition(string s) {
       vector<vector<string>> res;
            vector<string> temp;
            solve(s,res,temp);
return res;
            
    }
};
