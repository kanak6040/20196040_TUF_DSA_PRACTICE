#include <bits/stdc++.h>
using namespace std;


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


// Way 1: Brute Force Approach
    // int n, i , j, k;
    // cin >> n;
    // int a[n][n];
    // for(i =0; i< n; i++)
    //     for( j=0; j< n; j++)
    //     {
    //         cin >> a[i][j];
    //         if(a[i][j] == 0) a[i][j] = -1;
    //     }
    
    // for(i =0; i< n; i++)
    //     for( j=0; j< n; j++)
    //     {
    //         if(a[i][j] == -1)
    //         {
    //             for(k= 0; k < n; k++)
    //             {
    //                 if(a[i][k] == -1){}
    //                 else a[i][k]=0;
    //             }
    //             for(k= 0; k < n; k++)
    //             {
    //                 if(a[k][j] == -1){}
    //                 else a[k][j]=0;
    //             }
    //         }
    //     }
    // for(i =0; i< n; i++)
    //     for( j=0; j< n; j++)
    //         if(a[i][j] == -1)
    //             a[i][j] = 0;


    // for(i =0; i< n; i++)
    // {
    //     for( j=0; j< n; j++)
    //         cout << a[i][j]<< " ";
    //     cout << endl;
    // }
        



// Way 2, 3: Brute Better Approach using two dummy arrays;
    //two dummy arrays can be used externally or internally in matrix[one index]

    // int n, i , j, k;
    // cin >> n;
    // int a[n][n], top[n]={1}, side[n]={1};
    
    // for(i =0; i< n; i++)
    // {
    //     top[i] = side[i] = 1;
    // }
    // for(i =0; i< n; i++)
    //     for( j=0; j< n; j++)
    //     {
    //         cin >> a[i][j];
    //         if(a[i][j] == 0) 
    //         {
    //             side[i]= 0;
    //             top[j] = 0;
    //         }
    //     }
    
    // for(i =0; i< n; i++)
    //     for( j=0; j< n; j++)
    //     {
    //         if( side[i]==0  || top[j]==0 )
    //             a[i][j]=0;
    //     }

    // for(i =0; i< n; i++)
    // {
    //     for( j=0; j< n; j++)
    //         cout << a[i][j]<< " ";
    //     cout << endl;
    // }

}