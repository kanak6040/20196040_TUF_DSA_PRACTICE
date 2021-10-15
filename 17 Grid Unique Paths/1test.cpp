#include <bits/stdc++.h>
using namespace std;

// int ways( int i, int j, int n, int m)
// {
//     if( i==(n-1) && j==(m-1)) return 1;
//     if( i>=n || j>=m) return 0;
//     else return ways(i+1, j, n, m) + ways(i, j+1, n ,m);
// }


int countpaths( int i, int j, int n, int m, vector< vector <int> > &dp)
{
    if(i == (n-1) && j == (m-1) ) return 1;
    if( i>=n || j>=m ) return 0;
    
    if( dp[i][j]!= -1 ) return dp[i][j];
    
    else return countpaths(i, j+1, n, m, dp) +countpaths(i+1, j , n , m , dp);
}


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    //Brute Force Approach
    
    // int i1, j1 , i2, j2;
    // cin >>i1 >> j1 >>i2 >> j2;
    // cout<< ways(i1, j1, i2, j2);


    //Dynamic Programming

    int i1, j1 , i2, j2;
    cin >>i1 >> j1 >>i2 >> j2;
    vector< vector <int> > dp;
    cout<< countpaths(i1, j1, i2, j2,dp);
}



