#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 


//way 1 : Brute force Approach

    int n, i, j;
    cin >>n;

    int a[n];
    for( i =0; i< n; i++)
        cin >> a[i];

    for( i =0; i < n; i++)
        for( j =i+1; j< n; j++)
            if(a[i] > a[j] )
                cout << a[i] << " " <<  a[j] << endl;
    


// Way 2: Merge Sort Approach










}



