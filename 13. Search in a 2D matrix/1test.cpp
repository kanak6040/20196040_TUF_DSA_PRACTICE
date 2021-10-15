#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

//2D matrix prperty:
//1) Integers in each row are sorted fron left to right
//2) The first integer of each row is greater than last integer of previous row.



//Way 1: Brute force

    // int n, i, j, ct =0 , findme; 
    // cin >>n ;
    // int a[n][n];

    // for( i= 0; i < n; i++)
    //     for( j =0; j < n; j++)
    //         cin >> a[i][j];

    // cin >> findme;

    // for( i= 0; i < n; i++)
    //     for( j =0; j < n; j++)
    //         if( a[i][j] == findme)
    //         {
    //             ct++;
    //             break;
    //         }

    // if(ct) cout << "Element Found";
    // else cout << "Element not found";



// Way 2:Checking each rows first element

    // int  n, i, j, findme, ct =0; 
    // cin >>n ;
    // int a[n][n];

    // for( i= 0; i < n; i++)
    //     for( j =0; j < n; j++)
    //         cin >> a[i][j];

    // cin >> findme;  

    // for( i =0; i < n; i++)
    // {
    //     int lo = 0, hi = n-1;                 //binary search
    //     while( lo<=hi)
    //     {
    //         int mid = (lo + hi)/2;
    //         if( a[i][mid] == findme)
    //         { 
    //             ct =1; break;
    //         }
    //         if( a[i][mid] > findme ) hi =mid -1;
    //         if( a[i][mid] < findme ) lo = mid+1;
    //     }
    // }
    // if(ct) cout << "Element Found";
    // else cout << "Element not found";


//BEST WAY
//Way 3: By Moving pointer from top left corner
//element at left side  will be less, and at down will be more.
//if findme < it, move left, if findme> it, move down;

    // int  n, i, j, findme, ct =0; 
    // cin >>n ;
    // int a[n][n];

    // for( i= 0; i < n; i++)
    //     for( j =0; j < n; j++)
    //         cin >> a[i][j];
    
    // cin >> findme;

    // i = 0, j = n -1;

    // while( i < n && j >=0)
    // {
    //     if(a[i][j] == findme) 
    //     {
    //         ct =1;
    //         break;
    //     };
    //     if( a[i][j] > findme) j--;
    //     if( a[i][j] < findme) i++;
    // }
    // if(ct) cout << "Element Found";
    // else cout << "Element not found";




//WAY 4 : Using Array to put all values and sort it & find the value

    // int  n, i, j, findme, ct =0; 
    // cin >>n ;
    // int a[n][n];

    // for( i= 0; i < n; i++)
    //     for( j =0; j < n; j++)
    //         cin >> a[i][j];
    
    // cin >> findme;

    // vector< int> v;
    // for( i= 0; i < n; i++)
    //     for( j =0; j < n; j++)
    //         v.push_back(a[i][j]);

    // auto it = find(v.begin(), v.end(), findme);
    // if(it!=v.end())  cout << "Element Found";
    // else cout << "Element not found";



//Way 5: Considering matrix as an array
// mid/ n = row,   mid%m = column


    int  n, i, j, findme,lo, hi, ct=0; 
    cin >>n ;
    int a[n][n];  

    for( i= 0; i < n; i++)
        for( j =0; j < n; j++)
            cin >> a[i][j];

    lo = 0; 
    hi = (n*n) -1;

    while(lo <= hi)
    {
        int mid = (lo +(hi - lo) /2 );
        if( a[mid/n][mid%n] == findme)
        {
            ct =1;
            break;
        }
        if( a[mid/n][mid%n] > findme) hi = mid -1;
        if( a[mid/n][mid%n] < findme) lo =mid + 1;
    }

    if(ct) cout << "Element Found";
    else cout << "Element not found";







}



