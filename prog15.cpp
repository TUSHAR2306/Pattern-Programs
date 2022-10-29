#include<iostream>
using namespace std;

int main(){
    int n;
    char ch;

    cin >> n;

    for(int i=0;i<n;i++){
        ch='A';
        for(int j=0;j<n;j++){
            if(j<=i){
                cout << ch;
                ch++;
            }
        }
        cout << "\n";
    }

}

/*

A
AB
ABC
ABCD
ABCDE



*/