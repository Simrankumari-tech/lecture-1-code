#include<iostream>
using namespace std;
int main(){
 int n, i ;
 cin >> n;
 i =2;
 while (i<= n){
    if (n % i == 0){
        break ;

    }
    i = i+1 ;
 }
 if ( n == i){
    cout << "prime" ;
 }
 else{
    cout << " not prime" ;
 }



return 0;
}
