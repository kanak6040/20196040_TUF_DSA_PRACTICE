#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

//Way 1 : R otate the matrix(image)
//Transopse, reverse row wise

    int n, i, j; cin >>n;
    int a[n][n];

    for( i= 0; i < n; i++)
        for( j =0; j < n; j++)
            cin >> a[i][j];


    for(i =0; i < n; i++ )
        for( j =0; j < i; j++)
                swap( a[i][j] , a[j][i]);


    for(i =0; i < n; i++ )
        for( j =0; j < n/2; j++)
            swap( a[i][j] , a[i][n-j-1]);


    for(i =0; i < n; i++ )
    {
        for( j =0; j < n; j++)
            cout << a[i][j] << " ";
        cout << "\n";

    }

}



