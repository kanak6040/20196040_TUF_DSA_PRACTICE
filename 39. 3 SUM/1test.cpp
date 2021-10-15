#include <bits/stdc++.h>
using namespace std;


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

// way 1: Brute foce Approach

    // int i, j, k, n; cin >>n;
    // int a[n]; 
    // for( i =0; i < n; i++)
    //     cin >> a[i];
    // int target; cin >> target;

    // vector <vector <int>> ans;

    // for( i =0; i< n; i++)
    // {
    //     for( j = i+1; j< n; j++)
    //     {
            
    //         for( k = j+1; j< n; j++)
    //         {
    //             if( (a[i] + a[j] + a[k]) == target)
    //             {
                    
                //    vector<int> sub;
                //     sub.push_back(a[i]);
                //     sub.push_back(a[j]);
                //     sub.push_back(a[k]);    
                //     ans.push_back(sub);
                    
    //                 // for( auto subs: sub) cout << subs<< " ";
    //                 // cout << a[i] << " " << a[j] << " " << a[k] << " "  <<" : Target: "<< target<<endl;
    //             }
    //         }
    //     }
    // }

    // for( auto value: ans)
    // {
    //     for( auto ele: value)
    //         cout << ele << " ";
    //     cout << endl;
    // }



// Way 2: Loop + Two Pointer

    // int i, j, k, n; cin >>n;
    // int a[n]; 
    // for( i =0; i < n; i++)
    //     cin >> a[i];
    // int target; cin >> target;

    // sort( a, a+n);
    // vector <vector <int>> ans;

    // for( i =0; i <n-2 ; i++)
    // {
    //     int l = i +1; 
    //     int r = n-1;
    //     int new_target = target - a[i];
    //     while(l<r)
    //     {
    //         if( new_target < ( a[l] + a[r]) )  r--;
    //         if( new_target > ( a[l] + a[r]) )  l++;
    //         if( new_target == ( a[l] + a[r]) )
    //         {
    //             vector<int> sub;
    //             sub.push_back(a[i]);
    //             sub.push_back(a[l]);
    //             sub.push_back(a[r]);    
    //             ans.push_back(sub);
    //             l++; r--;
    //         }
    //     }
        
    // }

    // for( auto value: ans)
    // {
    //     for( auto ele: value)
    //         cout << ele << " ";
    //     cout << endl;
    // }


//Way 3 : Hash Map 
    int i, j, k, n; cin >>n;
    int a[n]; 
    
    int hsh[256]= {0};

    for( i =0; i < n; i++)
    {
        cin >> a[i];
        hsh[a[i]]++;
    }
    int target, new_target; cin >> target;

    sort( a, a+n);
    vector <vector <int>> ans;

    for( i =0; i < n -2; i++)
    {
        hsh[a[i]]--;
        for( j = i+1; j < n; j++)
        {
            hsh[a[j]]--;
            new_target = target - a[i] - a[j];
            if( hsh[new_target -1]) cout << a[i] <<" " << a[j] << " " <<  new_target ;
        }
        cout << endl;
    }



}



