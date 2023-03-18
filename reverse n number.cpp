#include<iostream>
using namespace std;
 int main ()
 {
    int array [12] ,i;
    cout<<"Enter 12 elements";
    for(i=0; i< 12; i++)
    cin>>array[i];
    cout<<" the original 12 elements is:";
    for (i=0; i<12; i++)
     cout<< array[i];

     cout<<" the reverse of given 12 is:";
for(i=(12-1); i>=0; i--)
cout<<array[i]<<",";
 return 0;



 }