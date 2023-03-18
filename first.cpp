#include<iostream>
using namespace std;

 int main ()
 {
    int s1,s2,s3;
    cout<<" please enter three side of triangle";
    cin>> s1>>s2>>s3;
    if ( s1+s2>s3 && s2+s3>s1 && s1+s3>s2)
        {
             cout<< "valid triangle";
        }
        else
        cout<<" not valid triangle";
        return 0;
    
 }