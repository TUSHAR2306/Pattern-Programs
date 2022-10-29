#include<iostream>
using namespace std;

int main(){
    int n;
    char ch;

    cin >> n;

    for(int i=0;i<n;i++){
        ch='A';
        for(int j=0;j<n;j++){
            if(j<=n-i-1){
                cout << ch;
                ch++;
            }
        }
        cout << "\n";
    }
}

/*

ABCDE
ABCD
ABC
AB
A



*/