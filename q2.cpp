// Name - Rhythm Parmar
//RollNo.- 20010990581
// group - G21
// Set no. - 3
// Q2

#include <bits/stdc++.h>
using namespace std;

// function taking array, array size, sum
int PairSum(int arr[],int size,int s){
   int count = 0;                        // taking count = 0
   for (int i=0;i<size;i++){
      for (int j=i+1;j<size;j++){
         int total=arr[i]+arr[j];
         if (total==s){
            count++;
         }
      }
   }
   return count;
}
int main(){
   int arr[]={19,44,23,56,1,3} ;      // array initialized
   int s;
   cout<<"Enter target value: ";     //taking target value
   cin>>s;
   int size = sizeof(arr)/sizeof(arr[0]);
   cout<<"Pair: "<<s<<PairSum(arr,size,s);
   return 0;
}
