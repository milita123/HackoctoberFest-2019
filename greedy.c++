#include<bits/stdc++.h>
using namespace std; 

//Sorting Jobs according to descending order of profit
static bool Compare(vector<int>& a,vector<int>& b){
    //Larger profit comes before the smaller in array
     return a[1] > b[1];
}

int main() {
    //Implementing an array of jobs with deadlines and its profit
        int n = 5;
        vector<vector<int>> jobs = {{2,100},{1,19},{2,27},{1,25},{1,15}};
    
    //Sorting Jobs according to profit because we want maximum profit so we sort in descending order for           larger profit comes first before smaller one.
        sort(jobs.begin(),jobs.end(),Compare);
        int done=0;     //For storing total number of jobs done
        int totalProfit = 0;       // For storing maximum Profit
        vector<bool> complete(n,0);    //For storing completed jobs on ith days
        
    //Iterating through jobs array
        for(int i=0;i<n;i++){
            int deadline = jobs[i][0];   // Deadline of ith job
            int profit = jobs[i][1];    // Profit of the ith job
            //Finding empty days to complete job before the deadline as it 0-based indexing we decrement                    deadline by 1 while iterating
            for(int j=deadline-1;j>=0;j--){
                if(complete[j]==false){   
                    done++;      //Incrementing the no.of jobs done
                    totalProfit += profit;    //Adding profit in total profit
                    complete[j] = true;     //Marking this day occupied
                    break;
                }
            }
        }
    
    //Printing answer of total no.of jobs done and its maximum profit
    cout<<"Total number of jobs done are : "<< done<<endl;
    cout<<"The maximum profit are : "<<totalProfit;
    
    return 0;
} 
