#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

// Reverse Pair 
// 1) i < j
// 2) nums[i]> 2*nums[j]

// Way 1 : Brute force
    int n, i, j , ct=0;
    cin >> n;

    int a[n];
    for(i=0 ; i < n ; i++)
        cin >> a[i];

    for(i= 0 ; i < n ; i++)
        for( j = i+1 ; j < n; j++)
            if( a[i] > 2*a[j])
                ct++;
    cout << ct;
    









}



