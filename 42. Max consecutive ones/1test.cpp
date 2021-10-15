#include <bits/stdc++.h>
using namespace std;


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

// brute force
//binary array and have to find max length of consecutive ones

int n, i, count =0, maxsm= 0;  cin >> n;
int a[n];
// cin >>a[0];
for( i =0 ;i < n; i++)
{
    cin >>a[i];
    if( a[i] == 1) count++;
    else count =0;
    maxsm = max( maxsm, count);
    // cout << count;
}
cout << maxsm;





















}



