#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        double ano_antigo, consumo_antigo, ano_novo, consumo_novo;
        cin >> ano_antigo >> consumo_antigo >> ano_novo >> consumo_novo;

        double diferenca = ano_novo - ano_antigo;
        double novo_valor = (consumo_novo-consumo_antigo)/diferenca;

        novo_valor *= 100;
        novo_valor = floor(novo_valor);

        long long valor_pos = ((long long)novo_valor % 100);
        novo_valor /= 100;
        
        string num_pos;
        if (valor_pos == 0) num_pos = "00";

        if (valor_pos == 0) cout << (long long)novo_valor << "," << num_pos << "\n";
        else cout << (long long) novo_valor << "," << valor_pos << "\n";
    }
}
