#include<iostream>
using namespace std;

int main(){
    int n,k=1;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=i){
                cout << k << " ";
                k++;
            }
        }
        cout << "\n";
    }

}