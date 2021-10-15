#include <bits/stdc++.h>
using namespace std;
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
bool cmp(struct Job a, Job b)
{
    return a.profit > b.profit;
}


int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; 
    cin >> n;
    
    struct Job jobs[n];

    for( int i=0; i < n;i++)
    {
        cin >> jobs[i].dead >> jobs[i].profit;
        jobs[i].id = i+1;  
    }

    sort( jobs, jobs + n, cmp);

    int maxi = jobs[0].dead; 
    for( int i = 1; i < n; i++)
        maxi = max( maxi, jobs[i].dead );   
        
                                            //max deadline finding to make array
                                          //using max deadline to create an array as max we can these days
    
    int slot[maxi +1];        //hashtable to store deadline's work

    for( int i =0; i <= maxi ; i++) 
        slot[i] = -1;

    int countJobs = 0, jobProfit = 0;

    for( int  i=0; i<n; i++)         //iterating all job id's
    {
        for( int j = jobs[i].dead ; j> 0; j--)   //hashing here    //saw it's deadline and i want to do it as late as possible , so putting  it in  hash table
        {
            if( slot[j] == -1)
            {
                slot[j ] =i;
                countJobs++;
                jobProfit += jobs[i].profit;
                break; 
            }
        }
    }
    cout << countJobs << " "<< jobProfit;








}



