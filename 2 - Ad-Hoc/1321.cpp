#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, e;

    while(cin >> a >> b >> c >> d >> e && (a || b || c || d || e)){

        vector<int> tudo;
        tudo.push_back(a);
        tudo.push_back(b);
        tudo.push_back(c);
        tudo.push_back(d);
        tudo.push_back(e);

        vector<int> princ;
        princ.push_back(a);
        princ.push_back(b);
        princ.push_back(c);

        vector<int> boy;
        boy.push_back(d);
        boy.push_back(e);

        sort(princ.begin(), princ.end());
        sort(boy.rbegin(), boy.rend());

        int pontos_p = 0;

        int pos = 0;

        for (int i = 0, aux = 0, fim = 0; i < 3; i++){
            if (princ[i] > boy[aux]) {
                pontos_p++;
                if (pontos_p == 2) break;
                aux++;
                pos = i;
            } else {
                if (princ[i] > boy[fim+1] && fim == 0){
                    pontos_p++;
                    fim++;
                    pos = i;
                }
            }
        }
        
        princ.erase(princ.begin() + pos);

        int ans;
        sort(tudo.begin(), tudo.end());

        if (pontos_p == 2) cout << "-1";
        else if (pontos_p == 0) {
            ans = 1;
            for (int i = 0; i < 5; i++){
                if (ans == tudo[i]) ans++;
            }

            cout << ans;
        }
        else {
            int ponto_princesa = max(princ[0], princ[1]);

            ans = ponto_princesa+1;

            for (int i = 0; i < 6; i++){
                if (ans == tudo[i]) ans++;
            }
            if (ans > 52) cout << "-1";
            else cout << ans;
        }

        cout << "\n";
    }
}
