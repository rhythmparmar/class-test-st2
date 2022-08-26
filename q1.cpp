// Name - Rhythm Parmar
//RollNo.- 20010990581
// group - G21
// Set no.-3
// Q1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    vector<int> arr(n);            // creating vector
    for(auto &i:arr){
        cin>>i;
    }
    sort(arr.begin(),arr.end());   //sorting the array
    int i=0;
    int j=n/2+n%2;             //choosing starting and mid index
    vector<int> solution;          // created vector
    while(i<n/2+n%2 || j<n){
        if(i<n/2+n%2) solution.push_back(arr[i++]);
        if(j<n)solution.push_back(arr[j++]);
    }
    for(auto&i:solution)
        cout<<i<<" ";
    cout<<endl;
}


