#include <bits/stdc++.h>
using namespace std;


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

// Way 1: Simple in vector approach via indexing (Not Working)
    // int A = 10, i, j; 
    // vector<vector<int>>r;

    // for( i = 0; i < A; i++){
    //     r[i].resize(i+1);
    //     r[i][0] = r[i][i] =1;

    //     for( j = 1; j < i; j++)
    //         r[i][j] = r[i-1][j-1] + r[i-1][j] ;
    // }

    // for( auto value:r)
    // {
    //     for(auto ele: value)
    //         cout<< ele << " ";
    //     cout << endl;
    // }

//Way 2: Using temp Variable

    // int A = 10, i, j; 
    // vector<vector<int>>v;
    // for(int i=0;i<A;i++)
    // {
    //     vector<int>tmp(i+1);
    //     for(int j=0;j<i+1;j++)
    //     {
    //         tmp[j]=(j==0 || j==i?1:v[i-1][j-1]+v[i-1][j]);
    //     }
    //     v.push_back(tmp);
    // }

    // for( auto value:v)
    // {
    //     for(auto ele: value)
    //         cout<< ele << " ";
    //     cout << endl;
    // }




// Way3 : Using Mathematics
    int n = 10, i, j; 
    vector<vector<int>>r;

    int fact[n]; 
    fact[0] = 1;
    fact[1] = 1;
    for( i =2; i<= n+10 ; i++)
        fact[i] = fact[i-1]*i;

    for(int i=1;i<n+1;i++)
    {
        vector<int>tmp(i);
        for( int j=1; j<i+1 ; j++)
            tmp[j-1] =(fact[i]/(fact[i-j]*fact[j]));

        r.push_back(tmp);
    }
    
    for( auto value:r)
    {
        for(auto ele: value)
            cout<< ele << " ";
        cout << endl;
    }


}