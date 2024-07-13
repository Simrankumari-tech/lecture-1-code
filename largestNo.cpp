#include<iostream>
#include<climits>
using namespace std;
int main(){
int n, i , largest , no ; // smallest nikalne k liye comment ka code hai
cin>> n;
// smallest = INT_MAX;
largest = INT_MIN;
i= 1;
while (i<= n){
  cin >> no ;
  if (no > largest){
    largest = no;
  }
  // else if( no< smallest ){
  //   smallest = no;
  i = i+ 1;
}
  
  cout << "largest number is :" << largest << endl;
  // cout << "smallest number is :" << smallest << endl;
  

return 0;
}