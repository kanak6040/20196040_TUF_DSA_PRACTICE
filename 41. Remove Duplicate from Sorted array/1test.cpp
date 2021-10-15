#include <bits/stdc++.h>
using namespace std;


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 


// Way1 : Brute Force
 
    // int i, j,  n; 
    // cin >> n;

    // set <int> s;
    // for( i =0; i < n; i++)
    // {
    //     int temp; cin >> temp;
    //     s.insert(temp);
    // }
    // for( auto value: s)
    //     cout << value<< " ";


//Given: Array is sorted already
//Way 2: Smart Approach, just getting all unique elements in frot of array by swapping
    int i, j,  n; 
    cin >> n;

    int a[n]; 
    for( i = 0; i < n ; i++)
     cin  >> a[i];

    i=0;
    for( j =1; j < n; j++)
    {
        if( a[j] != a[i]) {
            i++;
            a[i] = a[j];
        }
    }

    for( i = 0; i < n ; i++)
     cout << a[i] << " ";

//Our main in it was to move unique lements in forward of array PS: it was sorted already

    






















}



