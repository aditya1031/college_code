// made by --> Aditya kumar
// date    --> 3.04.2022
// UID     -->21BCS9520
#include<iostream>
 using namespace std;
 
 class cube{
     public:
     int cubic(int x){
        return x*x*x;
     }
     double cubic(double x1){
        return x1*x1*x1;
     }
 };
 
 int main(){
     cube cub;
     cout<<"21BCS9520 \t ADITYA KUMAR"<<endl;
     cout<<"Cube of side=5 is "<<cub.cubic(3)<<endl;
     cout<<"Cube of side=5.0 is "<<cub.cubic(5.6)<<endl;
  //   return 0;
 }