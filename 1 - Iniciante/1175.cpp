#include <bits/stdc++.h>

using namespace std;

int main(){
    int vetor[20];

    for (int i = 0; i < 20; i++){
        int x; cin >> x;
        vetor[i] = x;
    }

    for (int i = 0, j = 19; i < 10; i++, j--){
        int temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
    }
    for (int i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << vetor[i] << "\n";
    }
}
