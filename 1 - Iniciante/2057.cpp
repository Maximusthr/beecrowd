#include <bits/stdc++.h>

using namespace std;

int main(){
    int s, t, f; cin >> s >> t >> f;

    int horario = s+t+f;
    if (horario >= 24) horario -= 24;
    if (horario < 0) horario += 24;

    cout << horario << "\n";
}
