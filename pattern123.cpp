#include <iostream> 
using namespace std;
int main(){
    int n, i, row , no;
    cin >> n ;
    row= 1;
    no =1;
    while( row <= n){
        i = 1;
     while ( i<= row){
    
        cout <<  no << "  ";
        no = no+1;
        i= i+1;
     }



     cout << "\n";
        row = row +1;
    }
        
    
return 0;
}
                            //one more way to write:

// int main(){
//     int row=1;
//     int n,num=1;
//     cin>>n;
//     while(row<=n){
//         int column=1;
//         while(column<=row){
//             cout<<num<< ' ';
//             num++;
//             column++;
//         }
//         cout<<'\n';
//         row++;
//     }
//     return 0;
// }


