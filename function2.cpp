#include <iostream>
#include <cmath>
using namespace std;

int hasil(int a, int b, int c){
    return c = a * pow(a ,b - 1);
}

int main(){
    int a, b;
    char c;

    do{
    cout<<"======================"<<endl;
    cout<<"PANGKAT DENGAN FUNGSI"<<endl;
    cout<<"======================"<<endl;
    hasil(a, b, c);
    cout<<"Masukkan angka dasar  : ";
    cin>> a;
    cout<<"Masukkan angka pangkat: ";
    cin>> b;
    cout<<"========================"<<endl;
    cout<< a << " ^ " << b << " = "<< pow(a,b);

    cout<<endl;
    cout<<"Apakah anda ingin mengulang? (y/n) : ";
    cin>>c;
    cout<<endl;
    if(c != 'y' && c != 'n'){
        cout<<"salah coy, harap ulang"<<endl;
        cout<<"Apakah anda ingin mengulang? (y/n) : ";
        cin>>c;
    }
    cout<<endl;
    system("pause");
    system("cls");

    }while(c == 'y');
        cout<<"thank you"<<endl;



    return 0;
}