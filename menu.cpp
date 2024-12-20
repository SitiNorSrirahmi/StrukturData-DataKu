#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

mahasiswa sikc[30];
int pos = -1;

void tampilkanSemuaData() {
    system("cls");
    if (pos == -1) {
        cout << "Tidak ada data untuk ditampilkan." << endl;
    } else {
        for (int i = 0; i <= pos; i++) {
            cout << i + 1 << ". " << sikc[i].nim << " , " 
                 << sikc[i].nama << " , " 
                 << sikc[i].alamat << " , " 
                 << sikc[i].ipk << endl;
        }
    }
    getch();
}

void masukanData() {
system("cls");
if (pos >= 29){
  cout << "\nData sudah penuh." << endl;
  cin.get(); //menunggu enter ditekan agar kembali ke menu
        return;    
}

    pos++;
    cout << "\nMasukan Data Mu\n";
    cout << "-----------------\n";

    cout << "Masukan NIM: ";
    getline(cin, sikc[pos].nim);
    cout << "Masukan Nama: ";
    getline(cin, sikc[pos].nama);
    cout << "Masukan Alamat: ";
    getline(cin, sikc[pos].alamat);
    cout << "Masukan IPK: ";
    cin >> sikc[pos].ipk;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nData Berhasil Disimpan!\n";
    cout << "\nEnter Untuk Kembali ke Menu\n";
    cin.get();
    
}


void dMenu(){
system("cls");
cout<<"Aplikasi Pencatatan Data"<<"\n";       
cout<<"1. Masukan Data"<<"\n";            
cout<<"2. Tampilkan Data"<<"\n";            
cout<<"3. Update Data"<<"\n";           
cout<<"4. Hapus Data"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}


int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    masukanData();
    break;
   case '2':
    tampilkanSemuaData();
    /* code */ 
    break;  
   case '3':
    mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
    mPertama("ke- empat");
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}