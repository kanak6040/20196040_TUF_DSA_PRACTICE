#include <bits/stdc++.h>
using namespace std;

struct activity
{
    int start;
    int end;
};

bool cmp( struct activity a, activity b)
{
    return a.end < b.end;
}



int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n;  cin >> n;
    int i, j;

    activity job[n];

    for( i = 0;  i < n ; i++)
        cin >> job[i].start >> job[i].end;

    sort( job, job+ n, cmp);

    int count = 1;

    for( i = 0; i < n-1; i++)
    {
        if( job[i].end < job[i+1].start)
            count++;
    }
    cout << count;


}



