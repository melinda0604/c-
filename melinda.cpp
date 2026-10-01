// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int main() {
  string nama;
    string sekolah;
    string ulang;
    do{
    cout<<"masukan nama "<<endl;
        cin>> nama;
    cout<<"masukan sekolah mu"<<endl;
        cin>>sekolah;
            cout<<"namamu adalah "<<endl;
    cout<<nama  ;
    cout<<"sekolah mu adalah  ";
    cout<< sekolah  ;
    cout<<"tekan yes untuk ulang ,tekan no untuk tidak";
    cin>> ulang;
}
    while(ulang=="yes"||ulang=="no");
    system ("pause");

    return 0;
}
