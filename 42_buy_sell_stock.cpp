#include<iostream>
using namespace std;
void maxprofit(int *prices,int n)
{       
    int bestbuy[10000];
    bestbuy[0]=__INT_MAX__;
    for(int i=1;i<n;i++)
    {   
        bestbuy[i]=min(bestbuy[i-1],prices[i-1]);
        cout<<"best buy=  ";
        cout<<bestbuy[i]<<",";
    } 
    cout<<endl;
    int maxprofit=0;
    for(int i=0;i<n;i++)
    {
        int currprofit= prices[i]-bestbuy[i];
        maxprofit=max(maxprofit,currprofit);
    }
    cout<<"max profit = " <<maxprofit<<endl;
}  
int main()
{ 
    int prices[6]={7,1,5,3,6,4};
    int n=sizeof(prices)/sizeof(int);
    maxprofit(prices,n);
    return 0;
}
/* time comp => 1st loop= o(n)
   time comp => 2nd loop= o(n)
   1st+2nd => o(n+n) => o(2n) => o(n){ ignores constants}*/