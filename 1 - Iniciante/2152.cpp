#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    while(qtd--){
        int h, m, tipo;
        cin >> h >> m >> tipo;

        char h_zero = '0', m_zero = '0';
        
        if (h < 10 && m < 10) {
            if (tipo) cout << h_zero << h << ":" << m_zero << m << " - A porta abriu!\n";
            else cout << h_zero << h << ":" << m_zero << m << " - A porta fechou!\n";
        }
        else if (h < 10){
            if (tipo) cout << h_zero << h << ":" << m << " - A porta abriu!\n";
            else cout << h_zero << h << ":" << m << " - A porta fechou!\n";
        }
        else if (m < 10){
            if (tipo) cout << h << ":" << m_zero << m << " - A porta abriu!\n";
            else cout << h << ":" << m_zero << m << " - A porta fechou!\n";
        }
        else {
            if (tipo) cout << h << ":" << m << " - A porta abriu!\n";
            else cout << h << ":" << m << " - A porta fechou!\n";
        }
    }
}
