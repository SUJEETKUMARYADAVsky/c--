#include <iostream>
using namespace std;

int main() {
   int L1,L2,L3,circumference;
   cout<<"enter the side of triangle ";
   cin>>L1;
   cin>>L2;
   cin>>L3;
   circumference=L1+L2+L3;
   if((L1+L2>=L3)&&(L2+L3>=L1)&&(L1+L3>=L2))
   {
     cout<<"circumference of triangle is" <<circumference; 
   }
   else
   {
       cout<<"wrong triangle";
   }
   
   
    
}