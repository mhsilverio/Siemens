// NOT FINISHED 
#include <iostream>
using namespace std;

void ConcatERemove(string s, string t, int k){
    int menor, maior;
    int movimentos;

    // PRIMEIRAMENTE É NECESSÁRIO OBSERVAR O TAMANHO DAS STRINGS EXISTENTES
    if (s.size() > t.size()){
        menor = t.size();
        maior = s.size();
        cout << "\nMenor string: " << t << endl;
        cout << "Maior string: " << s << endl;
    }
    else if (s.size() < t.size()){
        menor = s.size();
        maior = t.size();
        cout << "\nMenor string: " << s << endl;
        cout << "Maior string: " << t << endl;
    } 
    else if (maior = menor = t.size()){
        cout << "\nAs strings contem os mesmos tamanhos" << endl;
    }
    
    movimentos = (s.size() - t.size());

    for (int i = 0; i < menor; i++){
        if (s[i] != t[i]){
            if(i == 0 || maior <= (k - menor)){
                movimentos = movimentos + ((menor - i));
                while (movimentos != k){
                    ++movimentos;
                }
            } else movimentos = movimentos + ((menor - i));
        }
    }
    if (movimentos == k){
        cout << "\nSIM"<< endl;
    } else cout << "\nNAO" << endl;
}

int main() {
    string s, t;
    int k = 0;

    cout << "\nString s: " ; cin >> s;
    cout << "String t: "; cin >> t;
    cout << "Movimentos de k: "; cin >> k;

    ConcatERemove(s, t, k);

    return 0;
}