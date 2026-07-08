/*
Time limit: 1.00 s
Memory limit: 512 MB

A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

Your task is to find out the number in row y and column x.
Input
The first input line contains an integer t: the number of tests.
After this, there are t lines, each containing integers y and x.
Output
For each test, print the number in row y and column x.
Constraints

1 <= t <= 10^5
1 <= y,x <= 10^9

Example
Input:
3
2 3
1 1
4 2

Output:
8
1
15
*/

#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    // cout<<"Enter number of tests: :";
    cin>>t;
    long long a[t][2];
    for(long long i=0; i<t; i++){
        cin>>a[i][0]>>a[i][1];
    };

    for(long long i=0; i<t; i++){
        if(a[i][0]%2 != 0){
            if(a[i][1] <= a[i][0]){
                cout<<(a[i][0] -1)*(a[i][0] - 1) + a[i][1]<<"\n";
            }else{
                if(a[i][1]%2 != 0){
                    cout<<a[i][1]*a[i][1] - (a[i][0] - 1)<<"\n";
                }else{
                    cout<<(a[i][1]*a[i][1] - 2*a[i][1] + a[i][0] + 1)<<"\n";
                }
            }
        }else{
            if(a[i][1] <= a[i][0]){
                cout<<a[i][0]*a[i][0] - (a[i][1] - 1)<<"\n";
            }else{
                if(a[i][1]%2 != 0){
                    cout<<a[i][1]*a[i][1] - (a[i][0] - 1)<<"\n";
                }else{
                    cout<<(a[i][1]*a[i][1] - 2*a[i][1] + a[i][0] + 1)<<"\n";
                }
            }
        }
    };


    return 0;
}