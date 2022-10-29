#include<iostream>
using namespace std;

int main(){
    int n,k=-1,j;
    cin >> n;
    
    for(int i=0;i<2*n;i++){
       i<n?k++:k--;
        for(int j=0;j<2*n;j++){
            if(j>=n-k && j<=n+k){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

/*


     *    
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *    




*/