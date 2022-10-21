#include <iostream>

using namespace std;

int main(){

       int angka1;

       int angka2;//deklarasi

       char operasi;

       int hasil;

 

       cout<<"Masukkan angka pertama: ";//input angka

       cin>>angka1;

       cout<<"Masukkan angka kedua:";

       cin>>angka2;

       cout<<"Masukkan operator(+-*/):";//input operator

       cin>>operasi;

 

       switch(operasi){//memulai switch

              case '+':

              hasil = angka1 + angka2;

              cout<<"Hasil Dari " << angka1<<" + " <<angka2          << " adalah " <<hasil;

              break;

              case '-':

              hasil = angka1 - angka2;

              cout<<"Hasil Dari " << angka1<<" - " <<angka2 << " adalah " <<hasil;

              break;

              case '*':

              hasil = angka1 * angka2;

              cout<<"Hasil Dari " << angka1<<" * " <<angka2 << " adalah " <<hasil;

              break;

              case '/':

              hasil = angka1 / angka2;

              cout<<"Hasil Dari " << angka1<<" / " <<angka2 << " adalah " <<hasil;

              break;

              default:

              cout<< "Operator Yang Anda Masukkan Tidak Ditemukan "<<endl;

       }

  cin.get();

       return 0;

}
