#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int main()
{
    int pilih;
    int top =0, i;
    int sisa;
    char nama[20][20],umur[20][20];
    do{
        system("cls");
        cout<<"+-----------------------------------+"<<endl;
        cout<<"+            Menu Pilihan           +"<<endl;
        cout<<"+-----------------------------------+"<<endl;
        cout<<"1.Tambah Stack"<<endl;
        cout<<"2.Keluarkan Stack"<<endl;
        cout<<"3.Cek Kosong / Isi ?"<<endl;
        cout<<"4.Bersihkan Data Stack"<<endl;
        cout<<"5.Lihat Data Stack"<<endl;
        cout<<"0.Selesai"<<endl;
        cout<<"+-----------------------------------+"<<endl;
        cout<<"Masukkan Pilihan : ";cin>>pilih;

        if(pilih<=6){
        switch(pilih)
        {case 1:
            if(top==4){
                cout<<"Maaf ,Tumpukan Penuh!"<<endl;
            }else{
            cout<<"Masukan Nama Pemain : ";cin>>nama[top+1];
            cout<<"Masukan Umur : ";cin>>umur[top+1];
            cout<<"Tumpukan Sudah Di Simpan"<<endl;
            top++;}
            break;
        case 2:
            if(top<1){
                cout<<"Tumpukan Sudah Kosong"<<endl;
            }else{
            cout<<"Tumpukan yang Dikeluarkan : "<<top<<"\n\n";
            cout<<"Nama : "<<nama[top]<<endl;
            cout<<"Umur : "<<umur[top]<<endl;
            top--;
            cout<<"Tumpukan Sudah Dikeluarkan"<<endl;}
            break;
        case 3:
            if(top==3){
                cout<<"Tumpukan Sudah Penuh,Anda Mempunyai"<<sisa<<"Ruang Data"<<endl;
            }else if(top==0){
            cout<<"Sekarang Tumpukan Kosong"<<endl;}
            break;
        case 4:
            top = 0;
            cout<<"Tumpukan Sudah Dihapus Semua"<<endl;
            break;
        case 5:
            cout<<"NO||Nama             ||Umur||\n";
            if(top==0)
                cout<<"Tumpukan Kosong"<<endl;
            else for(i=1;i<=top;i++){
                cout<<setiosflags(ios::left)<<setw(8)<<i;
                cout<<setiosflags(ios::left)<<setw(17)<<nama[i];
                cout<<setiosflags(ios::left)<<setw(10)<<umur[i]<<endl;}
                break;
        case 6:
            cout<<"---------Keluar--------";
            break;
        }}else{
        cout<<"Pilihan Salah,Silahkan Masukan 1-6"<<endl;}
        system("pause");
        }while(pilih!=6);
}
