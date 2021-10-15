#include <bits/stdc++.h>
using namespace std;


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

//Way 1: Brute Force Approach

    // int n, i, j;  cin >> n;
    // int a[n];
    // for( i = 0; i < n; i++)
    //     cin >> a[i];

    // int sum =0, maxct =0, ct=0; 

    // for( i =0 ; i < n;  i++)
    // {
    //     sum = 0;
    //     ct = 0;
    //     for( j = i; j < n; j++)
    //     {
    //         sum = sum + a[j];
    //         ct++;
    //         if( sum == 0)
    //             maxct = max( maxct, ct);
    //     }
    // }
    // cout << maxct;



//Way 2: kadane's Way
//WOW Method

    int n, i, j;  cin >> n;
    int a[n];
    for( i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<int, int> mpp;
    int maxi = 0;
    int sum = 0;
    
    for( int i =0; i < n ; i++)
    {
        sum += a[i];
        if( sum == 0)
            maxi = i+ 1;
        else
        {
            if( mpp.find(sum) != mpp.end())
                maxi = max( maxi, i - mpp[sum]);
            else
                mpp[sum] =i;
        }
    }
    cout << maxi;
















}



