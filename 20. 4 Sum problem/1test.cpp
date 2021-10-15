#include <bits/stdc++.h>
using namespace std;

vector< vector <int> > foursum( vector<int> &num, int target)
{
    vector<vector<int>> res;

    if(num.empty() ) return res;

    int n= num.size();
    sort(num.begin(), num.end());

    for( int i =0; i < n; i++)
    {
        for(int j =i+1; j < n; j++)
        {
            int target_2 = target - num[j] -num[i];
            int front = j +1;
            int back = n-1;

            while( front < back)
            {
                int two_sum = num[front] + num[back];

                if( two_sum < target_2) front++;
                else if( two_sum >target_2) back--;
                else
                {
                    vector<int> quadruplet(4, 0);

                    quadruplet[0] = num[i];
                    quadruplet[1] = num[j];
                    quadruplet[2] = num[front];
                    quadruplet[3] = num[back];

                    while( front < back && num[front]==quadruplet[2])  ++front;  //To avoid Duplication
                    while( front < back && num[front]==quadruplet[3])  --back;  //To avoid Duplication

                    res.push_back(quadruplet);
                }
            }

            while( j+1 < num[j+1] == num[j] ) ++j; //To avoid Duplication
        }
        while( i+1 < num[i+1] == num[i] ) ++i; //To avoid Duplication   
    }
    return res;
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 


//way 1: Brutal Force Approach ( 3 loops + one variable to search in remaining array)
    // int n, i, j, k, target; 
    // cin >> n;

    // int a[n];
    // for( i =0; i< n; i++)
    //     cin >> a[i];
    // cin >> target;

    // sort(a, a+n);

    // for(i =0; i< n-2; i++)
    // {
    //     // cout<< i<<"lp1"<< endl;
    //     for( j= i+1; j< n-1 ; j++)
    //     {
    //         // cout<< i<<"lp2"<< endl;
    //         for(k =j +1; k< n; k++)
    //         {
    //             // cout<< i<< "lp3"<<endl;
    //             int sum = target - a[i] - a[j] - a[k] ;
    //             for(int l =k+1; l< n ; l++)          // i have used linear search for code simplicity, but prefer binary search for it.
    //             {
    //                 // cout<< i<< "lp4"<< endl;
    //                 if( a[l] == sum)   //searching for sum in last right most part    /
    //                     cout << a[i] << " " << a[j] << " " << a[k] << " " << a[l] <<" : Target: "<< target<<endl;
                    
    //             }

    //         }
    //     }
    // }


// Way 2: Two Loops + (2 pointer Approach for the remaining element (2 sum))
//using external function named as foursum

     int n, i, j, k, target; 
    cin >> n;

    vector<int> num;
    while( n--)
    {
        int tmp;
        cin >> tmp;
        num.push_back(tmp);
    }
    cin >> target;

    vector< vector <int> > ans = foursum(num, target);

    for( auto value: ans)
    {
        for( auto ele: value)
            cout<< ele;
    }







}



