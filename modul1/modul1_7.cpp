#include <iostream>
using namespace std;

int  n[4], pangkat[3];

int main(){
    cout << "Y = 5x^4 + 3x^3 - x^2 + 7" << endl;
    n[1] =5; n[2] =3; n[3] =-1; 
    pangkat[1] = 4; pangkat[2] = 3; pangkat[3] = 2;
    
for (int i = 1; i <= 3; i++){
    cout << n[i]*pangkat[i] << ".X^" << pangkat[i] - 1 ;
    if (i < 3) cout << " + ";
    else cout << endl;
    }
}
