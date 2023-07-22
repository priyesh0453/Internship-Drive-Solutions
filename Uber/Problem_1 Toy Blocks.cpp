/*
Problem: "Toy Blocks" (https://codeforces.com/contest/1452/problem/B)
*/

//Solution

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int calcExtraBlocks();

int main()
{
    int noOfTestCases;
    cin >> noOfTestCases;
    
    while(noOfTestCases--) calcExtraBlocks();
    
    return 0;
}

int calcExtraBlocks()
{
    int noOfBoxes, i = 0, maxBlocks = 0;
    long long totalNoOfBlocks = 0, maxInABox;
    
    cin >> noOfBoxes;
    
    vector <int> arr(noOfBoxes);
    
    for(; i < noOfBoxes; i++)
    {
        cin >> arr[i];
        
        totalNoOfBlocks += arr[i];
        maxBlocks = max(maxBlocks, arr[i]);
    }
    
    maxInABox = max(maxBlocks, (int)ceil((double)totalNoOfBlocks / (noOfBoxes - 1)));
    
    cout << maxInABox * (noOfBoxes - 1) - totalNoOfBlocks << endl;
    
    return 0;
}