/*
Your task is to calculate the number of bit strings of length n.
For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.
Input
The only input line has an integer n.
Output
Print the result modulo 10^9+7.
Constraints

1 \le n \le 10^6

Example
Input:
3

Output:
8
*/

#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    long long x = 2;
    long long ans = 1;
    const long long MOD = 1000000007;


    while(n>0){
        if(n%2==1){
            ans = (ans*x)%MOD;
        }
        x=(x*x)%MOD;
        n /= 2;
    }

    cout<<ans<<"\n";

    return 0;
}