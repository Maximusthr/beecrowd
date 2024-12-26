#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    string x;

    while(cin >> x){
        if (x == "alemanha") cout << "Frohliche Weihnachten!";
        else if (x == "austria") cout << "Frohe Weihnacht!";
        else if (x == "brasil" || x == "portugal") cout << "Feliz Natal!";
        else if (x == "coreia") cout << "Chuk Sung Tan!";
        else if (x == "espanha" || x == "argentina" || x == "mexico" || x == "chile") cout << "Feliz Navidad!";
        else if (x == "grecia") cout << "Kala Christougena!";
        else if (x == "suecia") cout << "God Jul!";
        else if (x == "turquia") cout << "Mutlu Noeller";
        else if (x == "estados-unidos" || x == "inglaterra" || x == "australia" || x == "antardida" || x == "canada") cout << "Merry Christmas!";
        else if (x == "irlanda") cout << "Nollaig Shona Dhuit!";
        else if (x == "belgica") cout << "Zalig Kerstfeest!";
        else if (x == "italia" || x == "libia") cout << "Buon Natale!";
        else if (x == "siria" || x == "marrocos") cout << "Milad Mubarak!";
        else if (x == "japao") cout << "Merii Kurisumasu!";
        else cout << "--- NOT FOUND ---";

        cout << "\n";
    }
}
