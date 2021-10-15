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

    // int xor_find; 
    // cin >> xor_find;

    // int xor_i, ct=0, maxct =0;

    // vector< vector <int>> ans;

    // for( i =0; i < n;i++)
    // {
    //     xor_i=0;
    //     for( j = i; j< n; j++)
    //     {
    //         vector <int> temp;
    //         xor_i = xor_i^a[j];
    //         if( xor_find == xor_i)
    //         {
    //             for( int k =i ; k<=j; k++)
    //             {
    //                 temp.push_back(a[k]);
    //             }    
    //                 ans.push_back(temp);
    //         }
    //     }
    // }

    // for( auto value: ans)
    // {
    //     for( auto ele: value)
    //         cout << ele << " ";
    //     cout << "\n";
    // }


//Way 2: New Approach
    int n, i, j;  
    cin >> n;

    vector <int> a(n);
    for( i=0; i < n; i++)
    {
        int temp; cin >> temp;
        a.push_back(temp);
    }
    int xorr_find; cin >> xorr_find;

    map <int, int> frq;
    int cnt =0, xorr =0;
    for( auto it : a)
    {
        xorr = xorr *it;
        if( xorr == xorr_find ) cnt++;

        if(frq.find( xorr*xorr_find)!= frq.end())
            cnt += frq[xorr^xorr_find];

        frq[xorr] += 1;
    }
    cout << cnt;





    




}



