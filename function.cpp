#include <iostream>
#include <cmath>
using namespace std;

int tambah(int a,int b){
    return a+b;
}
int kurang(int a,int b){
    return a-b;
}
int kali(int a,int b){
    return a*b;
}
float bagi(float a,float b){
    return a/b;
}

int main(){
    float x, y, hasil;
    int op;
    char ulang; 
do{
    cout<<"====================="<<endl;
    cout<<"KALKULATOR SEDERHANA"<<endl;
    cout<<"====================="<<endl;
    
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"Pilih operasi (1/2/3/4): ";
    cin>>op;
    cout<<"Masukkan angka pertama : ";
    cin>>x;
    cout<<"Masukkan angka kedua   : ";
    cin>>y;
    
    
    switch(op){
        case 1:
        hasil = tambah(x,y);
        cout<<"hasil : "<<hasil;
        break;
        case 2:
        hasil = kurang(x,y);
        cout<<"hasil : "<<hasil;
        break;
        case 3:
        hasil = kali(x,y);
        cout<<"hasil : "<<hasil;
        break;
        case 4:
        hasil = bagi(x,y);
        cout<<"hasil : "<<hasil;
        break;
        default:
        cout<<"Operasi tidak valid";
        break;
    }
    cout<<endl;
    cout<<"Apakah anda ingin mengulang (y/n) : ";
    cin>>ulang;
    cout<<endl;
    system("cls");
}while(ulang == 'y' || ulang == 'Y');

    return 0;
}