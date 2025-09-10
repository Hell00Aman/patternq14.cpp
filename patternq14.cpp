#include<bits/stdc++.h>
using namespace std;


void print14(int n){
    for(int i=1; i<=n; i++){                     // loop for rows
        for(char ch='A'; ch <= 'A' + i; ch++){   // loop for letters
            cout << ch;                          // print character
        }
        cout << endl;                            // new line after each row
    }
}

int main(){
    int n;
    cin >> n;     // input number of rows
    print14(n);   // print pattern
    return 0;
}
