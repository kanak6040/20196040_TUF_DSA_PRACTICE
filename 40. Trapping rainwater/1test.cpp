#include <bits/stdc++.h>
using namespace std;


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

//water stored: min( max(left), max(right)) -a[i]

// Way 1: Brute Force
    // int n;
    // cin >> n;
    // int a[n]; 
    // for( int i =0; i < n; i++)
    //     cin >> a[i];
    // int water_count = 0;
    // for( int i =1;  i< n-1; i++)
    // {
    //     int left_max= 0, right_max =0;
    //     for( int j =0; j< i; j++)
    //         left_max = max( left_max, a[j]);
    //     for( int j =i+1; j< n; j++)
    //         right_max = max( right_max, a[j]);
    //     if( (min(left_max, right_max) - a[i]) >=0) water_count = water_count+min(left_max, right_max) - a[i];
    // }
    // cout << water_count;


// Way 2: Prefix and Suffix Array
    // int n, i, j;
    // cin >> n;
    // int a[n]; 
    // for( int i =0; i < n; i++)
    //     cin >> a[i];
    // int water_count = 0;

    // int prefix[n], suffix[n];

    // int left_max =0 , right_max = 0;

    // for( i =0; i < n; i++)
    // {
    //     left_max = max( left_max, a[i]);
    //     prefix[i] = left_max;
    //     // cout << prefix[i]<< " \n";
    // }
    // for(j=n-1; j>=0 ; j--)
    // {
    //     right_max = max( right_max, a[j]);
    //     suffix[j] = right_max;
    //     // cout << suffix[j]<< " \n";
    // }

    // for( i = 0 ; i < n; i++)
    // {
    //     if( (min(prefix[i], suffix[i]) - a[i]) >=0) 
    //     water_count = water_count + (min(prefix[i], suffix[i]) - a[i]);
    // }
    // cout << water_count;



//Way 3: 






















}



