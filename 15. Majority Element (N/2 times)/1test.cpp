#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 


// Way 1: Brute Force
    // int n, i, j, ct=0;
    // cin >>n;
    // int a[n];
    // for( i =0; i < n; i++)
    //     cin >>a[i];

    // for( i =0; i < n; i++)
    // {    
    //     ct=0;
    //     for( j =i+1; j < n ;j++)
    //         if(a[i]==a[j])
    //             ct++;
    //     if(ct >= (n/2))
    //     {
    //         cout << a[i];
    //         break;
    //     }  
    // }
    




//Way 2: Using hash table

//Way 3: Using sorting Method

//Way 4: Using unordered_map(STL)

    // int n, i, j, ct=0;
    // cin >>n;
    // int a[n];
    // unordered_map<int, int> list;
    // for( i =0; i < n; i++)
    // {    
    //     cin >>a[i];
    //     list[a[i]]++;
    // }
    // for(auto it: list)
    // {
    //     if( it.second > (n/2))
    //     {
    //         cout << it.first;
    //         break;
    //     }
    // }



//Way 5: Moore's Voting Algorithm

    int n, i, j, ct=0, ele;
    cin >>n;
    int a[n];
    for( i =0; i < n; i++)
        cin >>a[i];
    for( i= 0; i< n-1; i++)
    {
        if(ct==0)
            ele = a[i];
        else
        {
            if(a[i] == ele) ct++;
            else ct--;
        }
    }
    cout << ele;



}



