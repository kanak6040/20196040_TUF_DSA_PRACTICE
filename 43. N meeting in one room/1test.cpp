#include <bits/stdc++.h>
using namespace std;
struct meeting
{
    int start;
    int finish;
    int pos;
};

bool cmp( struct meeting m1, meeting m2)
{
    if( m1.finish < m2.finish) return true;
    else if( m1.finish > m2.finish ) return false;
    else if( m1.pos < m2.pos) return true;
    else return false;
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >>n ;

    struct meeting meetings[n];

    for( int i =0; i < n; i++)
    {
        cin >> meetings[i].start >>meetings[i].finish ;
        meetings[i].pos = i+1;
    }

    sort( meetings, meetings +n, cmp);

    vector <int> ans;
    int count=0;
    int limit =-1;

    for( int i=0; i < n; i++)
    {
        if( meetings[i].start > limit )
        {
            ans.push_back( meetings[i].pos);
            count++;
            limit = meetings[i].finish;
        }
    }
    for(int i =0; i < ans.size(); i++)
        cout<< ans[i]<< " ";
    cout<< "\n" << count ;





















}



