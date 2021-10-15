#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

//way 1: use sorting
    // int n, i, missing, repeating; cin >> n;
    // int a[n];
    // for( i=0; i <n; i++)
    //     cin >> a[i];
    // sort(a, a+n);
    // for( i =0 ; i < n-1; i++)
    // {
    //     if(a[i] == a[ i+1])
    //     {
    //         repeating = a[i];
    //     }
    //     if(a[ i+1] - a[i] ==2 )
    //         missing = ( a[ i+1] + a[i] )/2;
    // }
    // cout << "Missing: "<< missing << " Repeating: " << repeating ;


//Way 2: using hash table
    // int n, i, missing, repeating; 
    // cin >> n;
    // int hsh[10]= {-1};
    // int a[n];
    // for( i=0; i <n; i++)
    // {
    //     cin >> a[i];
    //     hsh[a[i]]++;
    //     cout<< a[i]<< " ";
    // }
    // int maxm = *max_element(a, a+n);
    // cout<< endl;
    // for( i =0 ; i <= 9; i ++)
    //      cout << hsh[i]<< " ";
    // cout<< endl;
    // for(i =0; i< maxm ; i++)
    // {
    //     if(hsh[i] == 2)
    //         repeating = i;
    //     if(hsh[i] == 0)
    //         missing  =i ;
    // }
    // cout << "Missing: "<< missing << " Repeating: " << repeating ;



// Using addition rules

//Using XORs










}
