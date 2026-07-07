/*
Time limit: 1.00 s
Memory limit: 512 MB

You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
Output
Print the missing number.
Constraints

2 <= n <= 2*10^5

Example
Input:
5
2 3 1 5

Output:
4
*/

#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // cout<<"Enter a number n";
    long long n;
    cin>>n;
    long long a[n-1];
    long long sum1=0,sum2=0;
    for(int i=0; i<n-1; i++){
        cin>>a[i];
        sum1+=a[i];
    };
    for(int i=1; i<=n; i++){
        sum2+=i;
    };
    cout<<sum2-sum1<<"\n";
    
    
    return 0;
}