#include <bits/stdc++.h>
using namespace std;
struct knapsack
{ 
    int weight;
    int profit;
    float profitratio;
};
bool cmp( struct knapsack a, knapsack b)
{
    return a.profitratio > b.profitratio ;
}



int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; 
    cin >> n;
    
    struct knapsack knapsacks[n];

    for( int i=0; i < n;i++)
    {
        cin >> knapsacks[i].weight;
    }

    for( int i=0; i < n;i++)
    {
        cin >> knapsacks[i].profit;
        knapsacks[i].profitratio = (knapsacks[i].profit)/knapsacks[i].weight;
    }

    // for( int  i =0; i < n; i++)
    // {
    //     cout << knapsacks[i].profitratio << " ";
    // }
    // cout << "\n";

    // for( int  i =0; i < n; i++)
    // {
    //     cout << knapsacks[i].profit << " " ;
    // }
    // cout << "\n";

    // for( int  i =0; i < n; i++)
    // {
    //     cout << knapsacks[i].weight << " ";
    // }
    // cout << "\n";


    sort( knapsacks, knapsacks + n, cmp);

    // for( int  i =0; i < n; i++)
    // {
    //     cout << knapsacks[i].profitratio << " ";
    // }
    // cout << "\n";

    // for( int  i =0; i < n; i++)
    // {
    //     cout << knapsacks[i].profit << " " ;
    // }
    // cout << "\n";

    // for( int  i =0; i < n; i++)
    // {
    //     cout << knapsacks[i].weight << " ";
    // }
    // cout << "\n";


    int m, num; 
    cin >>m ;

    int max_profit = 0 ;
    int i =0;

    while( m > 0 )
    {
        if( m  > knapsacks[i].weight )
        {
            m -= knapsacks[i].weight;
            max_profit += knapsacks[i].profit; 
        }
        else
        {
            max_profit += (knapsacks[i].profitratio)*m;
            m=0;
        }
        // cout<< max_profit << " ";
        i++;
    }
    cout << max_profit;



}



