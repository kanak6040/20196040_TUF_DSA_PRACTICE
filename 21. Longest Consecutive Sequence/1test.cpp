#include <bits/stdc++.h>
using namespace std;


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

// Way 1:  Brute Force, O(nlogn)+O(n)

    // int n,i, ct=1, maxm=1; cin >>n;
    // int a[n]; 
    // for(i =0;i< n; i++)
    //     cin >> a[i];

    // sort( a, a+n);
    // if( n ==0) cout << "0";

    // else
    // {
    //     for( i =0; i < n-1; i++)
    //     {
        
    //         while(a[i+1] == a[i]) i++;
    //         if( (a[i+1] - a[i]) ==1)
    //         {
    //             ct++;
    //             maxm = max( maxm, ct);
    //         }
    //         else ct=1;
    //     }
    //     cout<<maxm;
    // }


//Way 2: Using hashset and sets( to avoid duplicate value, and sort while insertion)
    
    int i, n; cin >>n;
    set<int> s;

    for( i =0; i < n; i++) 
    {
        int temp;  cin >>temp;
        s.insert(temp);
    }
    //automatically sorted

    int ct=1, maxct=1;

    auto it = s.begin();
    while( it!= (--s.end()))
    {
        int n = *(it);
        int m = *(++it);
        if(m -n == 1) 
        { 
            ct++; 
            maxct = max( maxct, ct);
        }
        else ct=1;
    }
    cout << maxct;










}



