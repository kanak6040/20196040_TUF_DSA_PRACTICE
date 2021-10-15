#include <bits/stdc++.h>
using namespace std;

vector< vector <int> > subsets;

// void generate(vector<int> &subset, int i, vector<int> &nums)    //by recursion, subset generation
// {
//     if( i==nums.size() ) 
//         subsets.push_back(subset);
//     else
//     {
//         generate(subset, i+1, nums);  //ith element not taken
//         subset.push_back(nums[i]);    //taken
//         generate(subset, i+1, nums);
//         subset.pop_back();
//     }
// }

// vector<vector <int>> subsets(vector<int> &nums)   //by bit manipulation, subset generation
// {
//     int n = nums.size() ;
//     int subset_ct = (1<<n) ;
//     vector< vector<int>> subsets ;
//     for( int mask =0 ; mask < subset_ct ; mask++)
//     {
//         vector<int> subset;
//         for( int i =0; i< n; i++)
//         {
//             if(mask&(1<<i) != 0) 
//                 subset.push_back(nums[i]);
//         }
//         subsets.push_back(subset);
//     }
//     return subsets;
// }

void generatesum(int ind, int sum, vector<int > &nums, int N, vector<int> &sumsubset)
{
    if( ind == N)
    {
        sumsubset.push_back(sum);
        return;
    }

    generatesum( ind+1, sum , nums, N, sumsubset);
    generatesum( ind+1, sum + nums[ind], nums, N, sumsubset);
}


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif



    //Way 1: Brute Force Approach, generate all and sum them up
    // int n; cin >>n;

    // vector<int> nums;

    // for(int i=0; i< n; i++)
    // {
    //     int temp; 
    //     cin >> temp; 

    //     nums.push_back(temp);
    // }

    // vector<int> subset;
    // generate(subset,0, nums);

    // vector<int> ans;

    // for(auto value:subsets)
    // {
    //     int count =0;
    //     for(auto ele:value)
    //     {
    //         count= count + ele;
    //     }
    //     ans.push_back(count);
    // }
    
    // for(  auto value: ans)
    //     cout << value << " ";


// Way 2: instead of making subset, directly take on sum and go ahead

    int n; cin >>n;

    vector<int> nums;

    for(int i=0; i< n; i++)
    {
        int temp; 
        cin >> temp; 

        nums.push_back(temp);
    }

    vector<int> sumsubset;
    generatesum(0,0, nums, n, sumsubset);

    for( auto value: sumsubset)
        cout<< value << " ";
    















}



