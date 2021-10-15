#include <bits/stdc++.h>
using namespace std;
vector< vector<int>> ans;
vector<int> ds;

void finduniquesubset( int ind, vector<int> &nums, vector<int> &ds, vector<vector<int> > &ans )
{
    ans.push_back(ds);
    for( int i =ind ; i < nums.size() ; i++ )
    {
        if( i!= ind && nums[i] == nums[i-1])
            continue;
        
        ds.push_back(nums[i]);
        finduniquesubset( i+1 , nums, ds, ans);
        ds.pop_back();
    }   
}


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // Make non duplicate(unique) subsets 

//Way 1: Brute FOrce Approach (Make all subsets, and put them in set to make them all unique)










// Way 2: Finding unique subset at the same time of subset creation by using another data structure
    int n; cin >>n;

    vector<int> nums;

    for(int i=0; i< n; i++)
    {
        int temp; 
        cin >> temp; 

        nums.push_back(temp);
    }

    sort( nums.begin(), nums.end());
    finduniquesubset( 0, nums, ds, ans);

    for( auto value: ans)
    {
        for( auto  ele: value)
            cout<< ele;
        cout << endl;
    }

}



