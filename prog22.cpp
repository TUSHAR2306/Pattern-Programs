#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=0;j<=2*n;j++){
            if(j>=n-i+1 && j<=2*n-i+1){
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

     ******
    ******
   ******
  ******
 ******




*/