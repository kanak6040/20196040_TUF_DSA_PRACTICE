#include <bits/stdc++.h>
using namespace std;
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, i, j;  cin >>n;

    int start[n], end[n];
    for( i =0; i < n; i++)
        cin >> start[i];
    for( i =0; i < n; i++)
        cin >> end[i];

    sort( start, start+ n);
    sort( end, end + n);

    // for( i =0; i < n; i++)
    //     cout << start[i] << " ";

    // cout<<"\n";

    // for( i =0; i < n; i++)
    //     cout << end[i] << " ";

    // cout<<"\n";

    int  platform =1, result= 1;


    //2 pointer approach
    i =1;
    j=0;

    while( i< n && j<n)
    {
        if( start[i] <= end[j])
        {
            platform++;
            i++;
        }
        else if( start[i] > end[j] )
        {
            platform--;
            j++;
        }
        result = max(result, platform);
    }
    cout << result;








}



