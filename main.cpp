#include <iostream>
#include "email.h" //import header yang dibuat diawal
#include "function.cpp" //import file yang berisikan fungsi - fungsi

int main()
{
   int end = 0; //variable nilai awal untuk looping
   char pilihan;
   while (end == 0){
        mainMenu(); //menampilkan main menu
        cin >> pilihan;
        switch(pilihan) { //switch digunakan untuk pemilihaan fungsi yang ingin di jalankan
            case '1': Register();
                    break;
            case '2': semuaData();
                    break;
            case '3': cout << "Keluar\n";
                    end = 1;  //mengganti nilai ke 1 untuk memberhenti kan looping
                    break;
            default:  cout << "Pilih yang benar!\n";
        }
   }
   return 0;
}
  
