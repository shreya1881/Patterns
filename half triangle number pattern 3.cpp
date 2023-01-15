/* n=3
1
2 3
3 4 5
*/

#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;
  int count=1;
  while(i<=n){
       int j=1;
       count=i;
       while(j<=i){
      cout<<count<<" ";
      count++;
      j++;
    }
    cout<<endl;
    i++;
   
  }
  return 0;
}