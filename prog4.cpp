#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=i){
                cout << i+1 ;
            }
        }
        cout << "\n";
    }
}

/*

1
22
333
4444
55555

*/