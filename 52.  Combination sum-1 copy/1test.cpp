#include <bits/stdc++.h>
using namespace std;

vector< vector <int>> ans;
void combination( int ind,  int target, vector< int> &a , vector< vector <int>> &ans ,vector< int> &ds)
{
    if(ind == a.size())
    {
        if( target == 0)
        {
            ans.push_back(ds);
        }
        return;
    } 

    if( a[ind] <= target)
    {
        ds.push_back( a[ind]) ;
        combination( ind, target -a[ind], a , ans,  ds);
        ds.pop_back();
    }
    combination( ind + 1, target -a[ind], a , ans,  ds);
    
}



int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
   
    int i, n;
    cin >> n;

    vector< int> a;
    for( i =0 ; i < n; i++)
    {
        int temp; cin  >> temp;
        a.push_back(temp);
    }

    int target ; 
    cin >> target;

    vector< int> ds;
    
    combination(0, target, a, ans, ds );

    

}



