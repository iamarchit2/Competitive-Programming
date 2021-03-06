//
// Created by sark2 on 18-06-2019.
//

#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

// -----------------------------------------------------
// This is a functional problem. Only this function has to be written.
// This function takes as input the head of the linked list.
// It should return the head of the modified list.


int fourSumCount(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D)
{
    int n = A.size();


    unordered_map<int,int>freq;
    for(int i = 0; i<n; i++){
        for(int j = 0; j< n; j++){
            freq[A[i] + B[j]]++;
        }
    }

    int ans = 0;
    for(int i = 0; i<n ; i++){
        for(int j = 0; j<n; j++){
            if(freq.find(-1*(C[i]+D[j])) != freq.end())
                ans += freq[-1*(C[i] + D[j])];
        }
    }
    return  ans;


}

int main(int args, char **argv)
{
    int n;
    cin >> n;
    vector<int> A(n, 0);
    vector<int> B(n, 0);
    vector<int> C(n, 0);
    vector<int> D(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> C[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> D[i];
    }

    cout << fourSumCount(A, B, C, D);
}