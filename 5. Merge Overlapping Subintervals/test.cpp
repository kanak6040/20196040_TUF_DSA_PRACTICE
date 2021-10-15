#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    int start, end;
};
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}

void mergeIntervals(Interval arr[], int n)
{
    if (n <= 0)
        return;

    stack<Interval> s;
    sort(arr, arr+n, compareInterval);
    
    s.push(arr[0]);
    for (int i = 1 ; i < n; i++)
    {
        Interval top = s.top();

        if (top.end < arr[i].start)
            s.push(arr[i]);

        else if (top.end < arr[i].end)
        {
            top.end = arr[i].end;
            s.pop();
            s.push(top);
        }
    }
    
    while (!s.empty())
    {
        Interval t = s.top();
        cout << "[" << t.start << "," << t.end << "] ";
        s.pop();
    }
    return;
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

// Way 1: Using Vectors and sorting
    // int n,i,j;
    // cin >> n;

    // vector<vector<int> > a;
    // for(i =0; i < n; i++)
    // {
    //     int temp1, temp2; cin >> temp1 >> temp2;
    //     vector <int> temp;
    //     temp.push_back(temp1);
    //     temp.push_back(temp2);  
    //     a.push_back(temp);
    // }

    // sort(a.begin(), a.end());

    // vector<vector<int>> vecstack;

    // for( i =0 ; i < n; i++)
    // {
    //     if(vecstack.empty() || vecstack.back()[1] < a[i][0])
    //     {
    //         vecstack.push_back(a[i]);
    //     }
    //     else
    //     {
    //         vecstack.back()[1] = max(vecstack.back()[1], a[i][1]);
    //     }
    // }
    // for( auto value: vecstack)
    // {
    //     for( auto ele: value)
    //     {
    //         cout<< ele<< " ";
    //     }
    //     cout<< endl;
    // }

// Way 2: Using Arrays
// Way 3: Using Connected component















///////////////////////////////////////////////////////////////////////////// to check input 
        // for( auto value: a)
    // {
    //     for( auto ele: value)
    //     {
    //         cout<< ele<< " ";
    //     }
    // cout<< endl;
    // }


}



















//     vector< pair < int, int >> list;
//     int n, i; 
//     cin >> n;

//     for( i =0; i <  n ; i++)
//     {
//         int temp1, temp2; cin >> temp1 >> temp2;
//         list.push_back(make_pair(temp1, temp2) );
//     }

//     while(i!= n)
//     {
//         if( list[i].second > list[i+1].first)
//         {
//             if(list[i+1].second > list[i].second)
//             {
//                 list[i].second = list[i+1].second;
//                 list.erase( list.begin() + i+1);
//             }
//             else{
//                 list.erase( list.begin() + i+1);
//             }
            
//         }
//         i++;
//     }
    
//     for( auto value: list)
//     {
//         cout<< value.first<< " " << value.second << endl; 
//     }

// }

// else( list[i+1].second < list[i].second )
// {
//    list.erase( list.begin() + i+1);
// }

//         i++;