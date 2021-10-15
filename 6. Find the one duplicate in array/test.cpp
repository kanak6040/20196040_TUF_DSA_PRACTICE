#include <bits/stdc++.h>
using namespace std;


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

// Way1 : Brute Force
    // int n, i,j, dupli =0;
    // cin >> n;
    // int a[n];
    // for(i = 0; i < n; i++ )
    //     cin >> a[i];

    // for( i = 0; i < n-1; i++)
    //     for( j =i+1; j< n; j++)
    //         if(a[i] == a[j])
    //             dupli = a[i];
    // cout << dupli;




//Way 2: Sorting
    // int n, i,j, dupli =0;
    // cin >> n;
    // int a[n];
    // for(i = 0; i < n; i++ )
    //     cin >> a[i];
    // sort(a, a+n);
    // for( i = 0; i < n ; i++)
    //     if(a[i] == a[i+1])
    //     {
    //         dupli = a[i];
    //         break;
    //     }
    // cout<< dupli;





// Way 3 : Hashing Method
    // int n, i,j, dupli =0;
    // cin >> n;
    // int a[n], hsh[10]={0};
    // for(i = 0; i < n; i++ )
    // {
    //     cin >> a[i];
    //     hsh[a[i]]++;
    // }
    // /* for(i = 0; i < 10; i++ ) cout<< hsh[i]<< " "; */
    // for( i =0; i <10 ; i++)
    //     if( hsh[i] >1)
    //     {
    //         dupli = i;
    //         break;
    //     }
    // cout << dupli;




//Way 4: Hare and tortoise Method
    int n, i,j, dupli =0;
    cin >> n;
    int a[n];

    for(i = 0; i < n; i++ )
        cin >> a[i];

    int slow = a[0], fast = a[0];

    do
    {
        slow = a[slow];
        fast = a[a[fast]];      
    } 
    while (slow!=fast);

    fast = a[0];

    while(slow!= fast)
    {
        slow = a[slow];
        fast = a[fast];
    }
    
    cout << slow;
    
}