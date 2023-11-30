#include<iostream>
using namespace std;

int main(){
//membuat variabel
    int nilai;
//menginput sebuah nilai yang akan disimpan di variabel yang sudah di buat
        cout<< "Masukan Nilai:";
        cin>>nilai;
//pengkondisian dimana nilai sama dengan 90 atau lebih makan akan masuk ke kondisi if ini
    if(nilai>=90){
        cout<< "Selamat! Anda mendapatkan nilai A"<<endl;
    }
//pengkondisian dimana nilai yang tidak masuk di kondisi pertama, jika terpenuhi maka akan masuk ke kondisi ini
    else if(nilai>=80){
        cout<< "Anda mendapatkan nilai B"<<endl;
    }
//pengkondisian dimana nilai yang tidak masuk di kondisi kedua, jika terpenuhi maka akan masuk ke kondisi ini
    else if(nilai>=70){
        cout<< "Anda mendapatkan nilai C"<<endl;
    }
//pengkondisian dimana nilai yang tidak masuk di kondisi ketiga, jika terpenuhi maka akan masuk ke di kondisi ini
    else if(nilai>=60){
        cout<< "Anda mendapatkan nilai D"<<endl;
    }
//pengkondisian dimana jika nilai tidak memenuhi kondisi diatas maka akan masuk ke kondisi else ini
    else {
//,melakukan sebuah tindakan saat kondisi tidak memenuhi kondisi if diatas
        cout<< "Anda mendapatkan nilai E"<<endl;
    }
    return 0;
}
