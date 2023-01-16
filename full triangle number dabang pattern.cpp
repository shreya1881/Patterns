/* n = 5 
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        
        //Print 1st tringle
        int col=1;
        while(col<=(n-row+1)){
            cout<<col<<" ";
            col++;
        }
        
        //Print 2nd triangle
        int start = row-1;
        while(start){
                cout<<"* ";
                start--;
            }
        
        //Print 3rd triangle
        int start2 = row-1;
        while(start2){
            cout<<"* ";
            start2--;
        }
        
        //Print 4th triangle
        int j = n-row+1;
        while(j){
            cout<<j<<" ";
            j--;
        }
        
        cout<<endl;
        row++;
    }
    return 0;
}