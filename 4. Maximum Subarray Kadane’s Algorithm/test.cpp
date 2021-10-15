#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


// Way 1 : Brute force
    // int n, i, j, sum= 0, maxsum= 0; 
    // cin >> n;
    // int a[n];
    // for( i =0 ; i < n ; i++) cin >> a[i];

    // for( i =0 ; i < n;  i++)
    // {
    //     sum =0;
    //     for( j = i+1; j < n; j++)
    //     {
    //         sum+= a[j];
    //         maxsum = max(sum, maxsum);
    //     }
    // }
    // cout << maxsum;


//Way 2: Kadane's Algorithm

    int n, i, j, sum =0, maxsum =0; 
    cin >> n;

    int a[n];
    for( i =0 ; i < n ; i++)
    {
        cin >> a[i];
        if( a[i] + sum > 0) 
        {
            sum += a[i];
            maxsum = max( maxsum, sum);
        }
        else if( a[i] + sum < 0)
        {
            maxsum = max( maxsum, sum);
            sum =0;
        }
    }
    cout << maxsum; 


    











}
