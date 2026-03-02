//library
#include <iostream>
using namespacestd;
//deklarasi variable global
int panjang, lebar;
//implementasi fungsi dan prosedur
void input(){
    cout << "Masukan Panjang : ";
    cin >> panjang;
    cout << "Masukan Lebar : ";
    cin >> lebar;
}
int luaspersegi(int a,int b){
    return a * b;
}
int jumlah(int x, int y, intz){
    return x+y+z;
}
void output(){
    cout << "Hasilnya : " << luaspersegi(panjang,lebar) << endl;
}
int main(){ //mulai
    input();
    output();
    cout <<"Hasilnya dari pejumlahan : " << jumlah(3,2,7);
}//selesai