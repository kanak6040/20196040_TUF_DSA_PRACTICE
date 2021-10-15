#include <bits/stdc++.h>
using namespace std;


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

//  Way 1: Longest Substring without repeating characters
    // int i, j, k, n;
    // cin >>n;
    
    // int a[n];
    // for(i =0; i< n; i++)
    //     cin >> a[i];
    
    // vector<vector <int>> ans;

    // for( i=0; i <n; i++)
    // {
    //     for( j=i ; j< n; j++)
    //     {
    //         vector <int> temp ;
    //         for( k=i; k<= j ; k++)
    //         {
    //             temp.push_back(a[k]);
    //         }
    //         ans.push_back(temp);
    //     }
    // }

    // for( auto value: ans)
    // {
    //     for( auto ele: value)
    //         cout << ele << " ";
    //     cout << "\n";
    // }

    //create hashtable amd find the count of maximum substring without repetition



//way 2:  Left & right operator , hash to store length
// Sliding WIndow

    // int i, j, k, n;
    // cin >>n;
    
    // int a[n];
    // for(i =0; i< n; i++)
    //     cin >> a[i];

    // int l = 0, r = 0, ct =0, maxm =1;
    // unordered_set <int> s;

    // while( r<n && l<n)
    // {
    //     if(s.find( a[r]) == s.end())
    //     {
    //         s.insert(a[r]);
    //         r++;
    //         ct++;
    //     }

    //     if(s.find( a[r]) != s.end())
    //     {
    //         l++;
    //         r++;
    //         ct =1;
    //     }
    //     maxm = max( ct , maxm);
    // }
    // cout <<maxm;


// Way 3: Advanced Sliding Window


    int i, j, k, n;
    cin >>n;
    
    string a;
    for(i =0; i< n; i++)
        cin >> a[i];
    
    vector <int> mpp(256, -1);
    int left=0, right =0;

    n = a.size();

    int len =0;

    while( right < n)
    {
        if( mpp[a[right]] != -1 )
            left = max( mpp[a[right]]+ 1, left);

        mpp[a[right]] = right;

        len = max( len, right - left +1) ;
        right++;
    }
    cout << len;
















}



