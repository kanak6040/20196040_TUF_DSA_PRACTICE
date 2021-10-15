#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

//WAY 1  inbuilt sort function
    /* int n; cin >> n;
    int a[n];
    for (int i =0; i< n; i++)
        cin >> a[i];
    sort(a,a+n); */




//WAY 2  hash table
    // int n; cin >> n;
    // int a[n],  hsh[3]={0,0,0};
    // for (int i =0; i< n; i++)
    // {
    //     cin >> a[i];
    //     hsh[a[i]]++;
    // }
    // int ct =0;
    // for( int i =0 ;i < 3; i++)
    // {
    //     while(hsh[i]--)
    //     {
    //         a[ct] = i;
    //         ct++;
    //     }
    // }
    // for (int i =0; i< n; i++)
    //     cout << a[i]<<" "; 




// WAY 3 using Maps
    // map<int, int> table;
    // int n; cin >>n;
    // for (int i =0; i< n; i++)
    // {
    //     int temp; 
    //     cin >> temp;
    //     table[temp]++;
    // }
    // int ar[n], j =0;
    // for(int i =0; i< table.size(); i++)
    // {
    //     while(table[i]--)
    //     {
    //         ar[j] = i;
    //         j++;
    //     }
    // }
    // for (int i =0; i< n; i++)
    //     cout << ar[i]<<" "; 



//using DNF sort
    int n, i; cin >> n;
    int a[n];
    for (i = 0; i < n ; i++ )
        cin >> a[i];
    int lo=0, mid =0, hi = n-1;
    while(mid <= hi)
    {
        switch(a[mid])
        {
            case 0: swap(a[lo++], a[mid++]); break;
            case 1: mid++; break;
            case 2: swap(a[mid], a[hi--]); break;
        }
    }
    for (i = 0; i < n ; i++ )
    cout<< a[i] <<" ";
}
