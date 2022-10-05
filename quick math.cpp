#include <iostream>
using namespace std;

int main(){

    float bilangan, tambah, kurang,bagi, kali;
    cin >> bilangan;
    
    tambah = (bilangan + bilangan);
    kurang = tambah - 1;
    kali = kurang * 3;
    bagi = kali / 2;

    cout << bilangan << " plus " << bilangan <<" is " << tambah << endl;
    cout << "Minus one is " << kurang << endl;
    cout << "Multiple three is " << kali << endl;
    cout << "divide two is " << bagi << endl; 
    return 0;
}
