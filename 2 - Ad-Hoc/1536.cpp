#include <bits/stdc++.h>

using namespace std;

typedef struct{
    int fora = 0;
    int marcados = 0;
    int sofridos = 0;
} criterios;


int main(){
    int qtd; cin >> qtd;

    map<int, pair<criterios, int>> time_1;
    map<int, pair<criterios, int>> time_2;

    for (int i = 0; i < qtd*2; i++){
        int mandante, visitante;
        scanf("%d x %d", &mandante, &visitante);


        if (i % 2 == 0){
            if (mandante > visitante) {
                time_1[0] = {{0, mandante, visitante}, 3};
                time_2[0] = {{visitante, visitante, mandante}, 0};
            }
            else if (mandante < visitante){
                time_1[0] = {{0, mandante, visitante}, 0};
                time_2[0] = {{visitante, visitante, mandante}, 3};
            }
            else if (mandante == visitante){
                time_1[0] = {{0, mandante, visitante}, 1};
                time_2[0] = {{visitante, visitante, mandante}, 1};
            }
        }

        if (i % 2 == 1){
            if (mandante > visitante) {
                time_2[1] = {{0, mandante, visitante}, 3};
                time_1[1] = {{visitante, visitante, mandante}, 0};
            }
            else if (mandante < visitante){
                time_2[1] = {{0, mandante, visitante}, 0};
                time_1[1] = {{visitante, visitante, mandante}, 3};
            }
            else if (mandante == visitante){
                time_2[1] = {{0, mandante, visitante}, 1};
                time_1[1] = {{visitante, visitante, mandante}, 1};
            }


            if (time_1[0].second + time_1[1].second > time_2[0].second + time_2[1].second) cout << "Time 1";
            else if (time_1[0].second + time_1[1].second < time_2[0].second + time_2[1].second) cout << "Time 2";
            else if (time_1[0].second + time_1[1].second == time_2[0].second + time_2[1].second){
               if ((time_1[0].first.marcados+time_1[1].first.marcados-time_1[0].first.sofridos-time_1[1].first.sofridos) 
               >
               (time_2[0].first.marcados+time_2[1].first.marcados-time_2[0].first.sofridos-time_2[1].first.sofridos)){
                    cout << "Time 1";
               }
               else if ((time_1[0].first.marcados+time_1[1].first.marcados-time_1[0].first.sofridos-time_1[1].first.sofridos)
               <
               (time_2[0].first.marcados+time_2[1].first.marcados-time_2[0].first.sofridos-time_2[1].first.sofridos)){
                cout << "Time 2";
               }
               else if ((time_1[0].first.marcados+time_1[1].first.marcados-time_1[0].first.sofridos-time_1[1].first.sofridos) 
               ==
               (time_2[0].first.marcados+time_2[1].first.marcados-time_2[0].first.sofridos-time_2[1].first.sofridos)){
                    if (time_1[0].first.fora+time_1[1].first.fora > time_2[0].first.fora+time_2[1].first.fora) cout << "Time 1";
                    else if (time_1[0].first.fora+time_1[1].first.fora < time_2[0].first.fora+time_2[1].first.fora) cout << "Time 2";
                    else if (time_1[0].first.fora+time_1[1].first.fora == time_2[0].first.fora+time_2[1].first.fora) cout << "Penaltis";
               }
            }
            cout << "\n";
            time_1.clear();
            time_2.clear();
        }
    }
}

