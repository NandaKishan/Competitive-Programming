/*
Time limit: 1.00 s
Memory limit: 512 MB

You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
Input
The only input line contains a string of n characters.
Output
Print one integer: the length of the longest repetition.
Constraints

1 <= n <= 10^6

Example
Input:
ATTCGGGA

Output:
3
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    int currSum = 1, maxSum = 1;
    for(int i=1; i<s.length(); i++){
        if(s[i] == s[i-1]){
            currSum++;
        }else{
            currSum = 1;
        }
        maxSum = max(currSum, maxSum);

    }
    
    cout<<maxSum<<"\n";

    return 0;
}