/*
Time limit: 1.00 s
Memory limit: 512 MB

You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
On each move, you may increase the value of any element by one. What is the minimum number of moves required?
Input
The first input line contains an integer n: the size of the array.
Then, the second line contains n integers x_1,x_2,\ldots,x_n: the contents of the array.
Output
Print the minimum number of moves.
Constraints

1 <= n <= 2*10^5
1 <= x(i) <= 10^9

Example
Input:
5
3 2 5 1 7

Output:
5
*/


#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    // cout<<"Enter number of elements: ";
    cin>>n; long long a[n];
    // cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>> a[i];
    };

    long long count = 0;
    for(int i=1; i<n; i++){
        if(a[i] < a[i-1]){
            count += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    };

    cout<<count<<"\n";

    return 0;
}