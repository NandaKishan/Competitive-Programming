/*
Time limit: 1.00 s
Memory limit: 512 MB

Your task is to divide the numbers 1,2,\ldots,n into two sets of equal sum.
Input
The only input line contains an integer n.
Output
Print "YES", if the division is possible, and "NO" otherwise.
After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.
Constraints

1 \le n \le 10^6

Example 1
Input:
7

Output:
YES
4
1 2 4 7
3
3 5 6
Example 2
Input:
6

Output:
NO
*/

#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    // cout<<"Enter a number: ";
    cin>>n;

    long long m = n/4 + 1;
    if(4*m-3 == n || 4*m-2 == n){
        cout<<"NO\n";
    }else if(n % 4 == 0){
        long long st=1, end=n;
        cout<<"YES\n";
        cout<<n/2<<"\n";
        for(long long i=0; i<n/2; i+=2){
            cout<<(st + i)<<" "<<(end - i)<<" ";
        }
        cout<<"\n";
        cout<<n/2<<"\n";
        for(long long i=1; i<n/2; i+=2){
            cout<<(st + i)<<" "<<(end - i)<<" ";
        }
        cout<<"\n";
    }else{
        cout<<"YES\n";
        cout<<(n/2 + 1)<<"\n";
        cout<<"1 2 ";
        long long st=4, end =n;
        for(long long i=0; i<((n-3)/2); i+=2){
            cout<<(st+i)<<" "<<(end - i)<<" ";
        }
        cout<<"\n";
        cout<<n/2<<"\n";
        cout<<"3 ";
        for(long long i=1; i<((n-3)/2); i+=2){
            cout<<(st+i)<<" "<<(end - i)<<" ";
        }
        cout<<"\n";
    };

    return 0;
}