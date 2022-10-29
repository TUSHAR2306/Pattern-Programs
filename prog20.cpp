#include<iostream>
using namespace std;

int main(){
    int n;
    char ch;
    cin >> n;

    for(int i=0;i<n;i++){
        ch='@';
        for(int j=0;j<2*n-1;j++){
            if(j>=n-i-1 && j<=n+i-1){
                j<=n-1?ch++:ch--;
                cout << ch;
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}