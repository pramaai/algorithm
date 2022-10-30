#include<iostream>
using namespace std;

int main(){
  int a,b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  cout<<"Numbers before swap: "<<a<<" "<<b<<endl;
  int temp=a;
  a=b;
  b=a;
  cout<<"Numbers after swap: "<<a<<" "<<b<<endl;
}
