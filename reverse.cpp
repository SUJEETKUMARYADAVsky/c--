#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"enter any number";
    cin>>number;
    int reminder=number%1000;
    cout<<number/1000<<endl;
    number=number%1000;
    cout<<number/100<<endl;
    number=number%100;
    cout<<number/10<<endl;
    number=number%10;
    cout<<number;
    
      
    
}