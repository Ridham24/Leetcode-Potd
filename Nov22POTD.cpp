#include<bits/stdc++.h>
using namespace std;
vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<vector<int>> v(100001);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                v[i+j].push_back(nums[i][j]);
            }
        }
        vector<int> ans;
        for(int i=0;i<v.size();i++)
        {
            for(int j=v[i].size()-1;j>=0;j--)
            ans.push_back(v[i][j]);
        }
        return ans;
    }
int main(){

return 0;
}