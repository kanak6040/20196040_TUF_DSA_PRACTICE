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
    //     if(ct >= (n/3))
    //     {
    //         cout << a[i];
    //         break;
    //     }  
    // }
    



//Way 2: Using hash table

    // int n, i, j, ct=0;
    // cin >>n;
    // int a[n], hsh[10];
    // for( i =0; i < 10; i++) hsh[i]=0;
    // for( i =0; i < n; i++)
    // {
    //     cin >>a[i];
    //     hsh[a[i]]++;
    //     if(hsh[a[i]]> (n/3)) 
    //         ct = a[i];
    // }
    // cout << ct;



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
    //     if( it.second > (n/3))
    //     {
    //         cout << it.first;
    //         break;
    //     }
    // }

//Way 5: Moore's Voting 

    int n, i, j, ct=0;
    cin >>n;
    int a[n];
    int num1 =-1 , num2 = -1, ct1 =0, ct2 =0;
    for( i =0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == num1 ) ct1++;
        else if( a[i] == num2) ct2++;
        else if( ct1==0) 
        {
            num1 = a[i];
            ct1=1;
        }
        else if( ct2 == 0)
        {
            num2 = a[i];
            ct2 = 1;
        }
        else
        {
            ct1--;
            ct2--;
        }
    }
    if(ct1 > (n/3)) cout<< num1<< endl;
    if(ct2 > (n/3)) cout<< num2<< endl;



}



