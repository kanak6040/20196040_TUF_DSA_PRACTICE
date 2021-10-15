#include <bits/stdc++.h>
using namespace std;


//func for way2;
// vector<string> ans;
// void permuteme( string a, int l, int r  )
// {
//     if( l == r)
//         ans.push_back(a);

//     else
//     {
//         for( int i=l; i <= r; i ++)
//         {
//             swap(a[l], a[i]);   //push
//             permuteme(a, l+1, r);   
//             swap(a[l], a[i]);   //backtrack
//         }
//     } 
// }

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


//Way 1: Using STL function

    // int n, i, j; 
    // cin >> n;

    // int a[n]; 
    // for( i =0; i < n; i++)
    //     cin >> a[i];
    // i =1;
     
    // while (next_permutation(a, a+n) && i)
    // {
    //     for( j=0; j< n; j++)
    //         cout<< a[j];
    //     i--;
    // }
 
    
//Way 2: Making permutation and put them in set to get sorted order;
// then getting address of given string and printing string one ahead of it.

    // string str;
    // cin >> str;

    // permuteme(str, 0, str.size()-1);

    // sort( ans.begin(), ans.end() );

    // auto itr = find( ans.begin(), ans.end(), str);  //itr mein adddress hai is vakat
    // itr = ++itr;
    // if( itr == ans.end()) cout << *ans.begin();
    // else cout << *itr;



//Way 3: by comparing and getting element while traversing from end such that a more signinficant digit is less than less significant digit
// get its index as i, then again start from end, and check if any integer less than saved index value present, save it as index j
//swap them and then reverse the array

    string s;
    cin >> s;

    int index1 ,index2,i, j;

    for( i = s.size()-2; i>=0; i--)
    {
        if(s[i] < s[i+1])
        {
            break;
        }
    }
    if( i < 0)
        reverse( s.begin(), s.end());   //Last element
    else
    {
        for( j = s.size() -1; j > i; j--)
        {
            if( s[i] > s[j])
                break;
        }
        swap( s[i], s[j]);
        reverse(s.begin(), s.end());
    }   


    cout<< s;



}