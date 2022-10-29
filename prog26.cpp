#include<iostream>
using namespace std;

int main(){
    int n,k=1;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j>=n-i+1 && j<=n+i-1 && k){
                cout << "*";
                k=0;
            }
            else{
                cout << " ";
                k=1;
            }
        }
        cout << "\n";
    }
}

/*

    *    
   * *
  * * *
 * * * *
* * * * *




*/

