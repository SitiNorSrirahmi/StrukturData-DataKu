#include <iostream>
#include <conio.h>
using namespace std;


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
    mPertama("pertama");
    break;
   case '2':
    mPertama("ke- dua");
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