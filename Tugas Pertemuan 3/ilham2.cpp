#include<iostream>
using namespace std;

int main(){
    //membuat variabel
    int nilaiSatu,nilaiDua,nilaiTiga;

    //menginput sebuah nilai yang akan disimpan di dalam variabel yang sudah kita buat
    cout<< "Masukan Nilai Pertama : ";
    cin>>nilaiSatu;
    cout<< "Masukan Nilai Kedua : ";
    cin>>nilaiDua;
    cout<< "Masukan Nilai Ketiga : ";
    cin>>nilaiTiga;

    //pengkondisian dimana jika nilaiSatu lebih dari sama dengan nilaiDua dan nilaiTiga maka nilaiSatu akan dipanggil karena memenuhi pengkondisian tersebut
    if(nilaiSatu>=nilaiDua && nilaiSatu>=nilaiTiga){
        cout<<nilaiSatu;
    }
    //pengkondisian dimana jika nilaiDua lebih dari sama dengan nilaiSatu dan nilaiTiga maka nilaiDua akan dipanggil karena memenuhi pengkondisian
    else if(nilaiDua>=nilaiSatu && nilaiDua>=nilaiTiga){
        cout<<nilaiDua;
    }
    //pengkondisian dimana jila nilaiTiga lebih dari sama dengan nilaiSatu dan nilaiDua maka nilaiTiga akan dipanggil karena memenuhi pengkondisian
    else if(nilaiTiga>=nilaiSatu && nilaiTiga>=nilaiDua){
        cout<<nilaiTiga;
    }
    return 0;
}
