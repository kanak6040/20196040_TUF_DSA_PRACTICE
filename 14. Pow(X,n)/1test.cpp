#include <bits/stdc++.h>
using namespace std;

// int exprecur( int x , int n)
// {
//     if( n== 1) return x;

//     else return x*(exprecur(x, n-1));
// }


int exprecurluv( int a, int b)
{
    if(b==0) return 1;
    int res = exprecurluv(a, b/2);
    if(b&1) return (a * res * res);
    else return (res * res);
}

int binExpIter( int a, int b)
{
    int ans =1;
    while(b){
        if(b&1){
            ans = ans*a;
        }
        a = a*a;
        b= b>>1; 
    }
    return ans;
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

// Way 1, 2 : Brute FOrce(itertive) & STL FUnction
    // long long x, n, pow1=1;;
    // cin >> x >> n;
    // while(n--)
    // {
    //     pow1 = x*pow1;
    // }
    // cout << pow1 << "\n";

    // long long x, n, pow1=1;;
    // cin >> x >> n;
    // cout << pow(x, n) << "\n";


//Way3: Recursion function
    // long long x, n, pow1=1;;
    // cin >> x >> n;
    // cout << exprecur(x, n)<< " ";

//Way 4, 5: Smart Appraoach 1 & 2 (Luv Video bin Expo)

    long long x, n, pow1=1;;
    cin >> x >> n;
    cout << exprecurluv(x, n)<< " ";
    cout << binExpIter(x, n)<< " ";







}



