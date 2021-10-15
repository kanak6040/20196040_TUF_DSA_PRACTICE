#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int supply[9] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};

    int v;
    cin >> v;

    int count =0;

    while(v!=0)
    {
        for( int i =8; i>=0; i-- )
        {
            if( v >= supply[i])
            {
                cout<< supply[i] << " ";
                v = v - supply[i];
                count++;
                break;
            }
        }
    }
    cout << count;




}



