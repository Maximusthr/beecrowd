#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    string x;

    int soma = 0;
    while(getline(cin, x)){
        if (x == "--*") soma++;
        else if (x == "-*-") soma += 2;
        else if (x == "-**") soma += 3;
        else if (x == "*--") soma += 4;
        else if (x == "*-*") soma += 5;
        else if (x == "**-") soma += 6;
        else if (x == "***") soma += 7;

        if (x == "caw caw") {
            cout << soma << "\n";
            soma = 0;
        }
    }
}
