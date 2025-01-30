#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;

    while(cin >> num && num){
        int maior = num;

        while(num != 1){
            if (num % 2 == 0){
                num /= 2;
                if (maior < num) maior = num;
            }
            else {
                num = (3*num) + 1; 
                if (maior < num) maior = num;
            }
        }

        cout << maior << "\n";
    }
}
