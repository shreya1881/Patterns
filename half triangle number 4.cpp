/* n =4 
1 2 3 4
  5 6 7
    8 9
      10
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    int value=1;
    while(row<=n){
        int space = row-1;
        while(space){
            cout<<" ";
            space--;
        }
        int col=1;
      
        while(col<=(n-row+1)){
            cout<<value<<" ";
            col++;
            value++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}