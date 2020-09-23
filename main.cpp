#include <iostream>
using namespace std;

int main() {
  int *p,ar[10],size;
  p=ar;
  cout<<"\nEnter size of array: ";
  cin>>size;
  cout<<"\nEnter elements in array: ";
  for(int i=0;i<size;i++){
    cin>>ar[i];
  }
  cout<<"Array elements are:-";
  for(int i=0;i<size;i++){
    cout<<"\n"<<*p;
    p++;
  }
}
