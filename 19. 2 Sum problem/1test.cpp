#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

//2 sum, exactly one solution, not use same element twice

//way1 : Brute force

    // int n, i, j; 
    // cin >>n ;

    // int a[n];
    // for(i=0; i < n; i++)
    //     cin >> a[i];

    // int target; cin >> target;
    // for(i =0; i < n; i++)
    //     for( j= i+1; j< n; j++)
    //         if((a[i] + a[j]) == target)
    //             cout<< a[i]<< " " << a[j];



//Way 2: Two Pointer Approach

    // int n, i, j; 
    // cin >>n ;

    // int a[n];
    // for(i=0; i < n; i++)
    //     cin >> a[i];
    // sort(a, a+n);

    // int target; 
    // cin >> target;

    // int lo=0, hi= n-1;
    // while( lo<=hi)
    // {
    //     if( (a[lo]+ a[hi]) == target )
    //     {
    //         cout <<a[lo] <<" "<< a[hi];
    //         break;
    //     } 
    //     if( (a[lo]+ a[hi]) > target )  hi--;
    //     if( (a[lo]+ a[hi]) < target ) lo++;
    // }


//Way 3: Using HashTable

    // int n, i, j; 
    // cin >>n ;

    // int a[n];
    // for(i=0; i < n; i++)
    //     cin >> a[i];

    // int target; 
    // cin >> target;

    // int tmp1, tmp2;
    // unordered_map<int, int> p;

    // for(i =0; i < n ; i++)
    // {
    //     int check = target -a[i];
    //     auto it = p.begin();
    //     while(it!= p.end())
    //     {
    //         if((*it).first == check)
    //         {
    //             tmp1 = a[i];
    //             tmp2 = (*it).first;
    //             break;
    //         }
    //         it++;
    //     }
    //     p.insert(pair<int, int>(a[i], i) );
    // }
    // cout << tmp2 << " "<< tmp1;


//Way 4 : Using Vector and find STL func

//Way 5: Sort the Array




}



