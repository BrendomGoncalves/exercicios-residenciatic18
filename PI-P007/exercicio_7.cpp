#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main(){

    char alfabeto[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int escolha=5, fim;

    cout << "Altura: ";
    //cin >> escolha;

    for(int i=1; i<=escolha; i++){
        for(int j=i-1; j<=i; j++){
            cout << alfabeto[j];
        }
        cout << endl;
    }
    
    return 0;
}
