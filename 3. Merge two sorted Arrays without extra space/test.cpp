#include <bits/stdc++.h>
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    

//way 1: put all in set and get them in new array

    // int n1, n2, i, j;

    // cin >> n1 ;
    // int a1[n1]; 
    
    // multiset<int> sets;
    // for( i= 0 ; i < n1 ; i++)
    //     {
    //         cin >> a1[i];
    //         sets.insert(a1[i]);
    //     }
    
    // cin >> n2;
    // int a2[n2];
    // for( i =0; i < n2 ; i++)
    //     {
    //         cin  >> a2[i];
    //         sets.insert(a2[i]);
    //     }

    
    // multiset<int>::iterator itr;
    // // for (itr = sets.begin(); itr != sets.end(); itr++)
    // // {
    // //     cout<< *itr<< " ";
    // // }
    // // cout<< endl;

    // int a3[n1+n2] , num= 0;
    // for (itr = sets.begin(); itr != sets.end(); itr++)
    // {
    //     a3[num]= *itr;
    //     num++;
    // }

    // for( i =0; i< n1+ n2; i++)
    //     cout << a3[i] << " ";
    // cout << endl;




//Way 2: Using Vectors with inbuilt sort function

    // int n1, n2, i, j;

    // cin >> n1 ;
    // int a1[n1]; 
    
    // vector <int> a3;
    // for( i= 0 ; i < n1 ; i++)
    //     {
    //         cin >> a1[i];
    //         a3.push_back(a1[i]);
    //     }
    
    // cin >> n2;
    // int a2[n2];
    // for( i =0; i < n2 ; i++)
    //     {
    //         cin  >> a2[i];
    //         a3.push_back(a2[i]);
    //     }
    
    // sort(a3.begin(), a3.end());

    // for( auto  value: a3)
    // {
    //     cout << value << " ";
    // }


//Way 3: Comparing both arrays one by one and move accordingly

    // int n1, n2, i, j;

    // cin >> n1 ;
    // int a1[n1]; 
    // for( i= 0 ; i < n1 ; i++)
    //     cin >> a1[i];
    
    // cin >> n2;
    // int a2[n2];
    // for( i =0; i < n2 ; i++)
    //     cin  >> a2[i];

    // sort( a1, a1 + n1);
    // sort( a2, a2 + n2);

    // int hi=0, lo =0;

    // while(hi != n1)
    // {
    //     if( a1[hi] > a2[lo] )
    //     {
    //         swap(a1[hi], a2[lo]);
    //         sort(a2, a2+ n2);
    //     }
    //     hi++;
    // }
    
    // for( i= 0 ; i < n1 ; i++)
    //     cout<< a1[i] << " ";
    // for( i =0; i < n2 ; i++)
    //     cout << a2[i] << " ";



//Way 4 : GAP Method

    int n1, n2, i, j;

    cin >> n1 ;
    int a1[n1]; 
    for( i= 0 ; i < n1 ; i++)
        cin >> a1[i];
    
    cin >> n2;
    int a2[n2];
    for( i =0; i < n2 ; i++)
        cin  >> a2[i];

    sort( a1, a1 + n1);
    sort( a2, a2 + n2);

    // int gap = ( n1 + n2 ) / 2; 

    // while(gap)
    // {
    //     for( i =0 ; i < n1 + n2; i++)
    //     {
    //         int j = i + gap;
    //         if(j > n1) 
    //         {
    //             if(a1[i] > a2[ j - n1])
    //                 swap(a1[i], a2[ j - n1]);
    //         }
    //         else 
    //         {
    //             if
    //         }
    //     }
    //     gap/=2;
    // }



















}
