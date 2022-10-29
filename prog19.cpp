#include<iostream>
using namespace std;

int main(){
    int n;
    char ch='F',ch1;

    cin >> n;

    for(int i=0;i<n;i++){
        ch--;
        ch1=ch;
        for(int j=0;j<n;j++){
            if(j<=i){
                cout << ch1;
                ch1++;
            }
        }
        cout << "\n";
    }

}