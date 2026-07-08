/*
Time limit: 1.00 s
Memory limit: 512 MB

Your task is to count for k=1,2,...,n the number of ways two knights can be placed on a k * k chessboard so that they do not attack each other.
Input
The only input line contains an integer n.
Output
Print n integers: the results.
Constraints

1 <= n <= 10000

Example
Input:
8

Output:
0
6
28
96
252
550
1056
1848
*/

#include<iostream>
using namespace std;

long long ans(long long n){
    long long ans = (n*n)*(n*n - 1)/2 - (2*(n-2)*(n-1) + 2*(n-3)*(n-2) + (4*n)-8);
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    // cout<<"Enter a number: ";
    cin>>n;

    for(long long i = 1; i<=n; i++){
        cout<<ans(i)<<"\n";
    };


    return 0;
}