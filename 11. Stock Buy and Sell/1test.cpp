#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

//way 1: 2 Pointer approach

    // int n, i, left, right, min1 =INT_MAX, max1=0; 

    // cin >>n;
    // int a[n]; 
    // for( i =0; i< n; i++)
    //     cin >> a[i];

    // left =0; right = n-1;

    // while( left <= right)
    // {
    //     min1 = min( min1, left++);
    //     max1 = max( max1, right--);
    // }
    // cout << max1 - min1;


//Way 2: Brute Force Approach

    // int n,i,j, max1 =0;
    // cin >>n;
    // int a[n]; 
    // for( i =0; i< n; i++)
    //     cin >> a[i];

    // for( i =0; i < n; i++)
    //     for( j=i+1; j< n; j++)
    //         max1 = max( max1, a[j] -a[i]);
    // cout << max1;


//Way 3: Linear Traverse from left side get min and try to maximise profit

    int n,i,j, min1 =INT_MAX, profit =0;
    cin >>n;
    int a[n]; 
    for( i =0; i< n; i++)
        cin >> a[i];

    for( i =0; i < n; i++)
    {
        min1 = min( min1, a[i]);
        profit = max( a[i] - min1, profit);
    }
    cout << profit;








}



