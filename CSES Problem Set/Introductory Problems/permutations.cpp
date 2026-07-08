/*
Time limit: 1.00 s
Memory limit: 512 MB

A permutation of integers 1,2,...,n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.
Input
The only input line contains an integer n.
Output
Print a beautiful permutation of integers 1,2,...,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".
Constraints

1 <= n <= 10^6

Example 1
Input:
5

Output:
4 2 5 3 1
Example 2
Input:
3

Output:
NO SOLUTION
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    // cout<<"Enter a positive integer: ";
    cin>>n;
    vector<long long> v;
    if(n!=3 && n!= 2){

    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            v.push_back(i);
        }
    };

    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            v.push_back(i);
        }
    };

    

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    };
    cout<<"\n";
    }else{
        cout<<"NO SOLUTION \n";
    };
    cout<<endl;

    return 0;
}