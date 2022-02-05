#include <iostream>
#include "email.h" //import header yang dibuat tadi(email.h)

using namespace std;

//fungsi untuk input dan memasukkan data kedalam tipe data email 
void Register(){
    email mail;

    cout << endl;
    cout << "Masukkan alamat Email: "; cin >> mail.email;
    cout << "Masukkan Password: "; cin >> mail.pass;

    listAdd(mail); /*menjalankan fungsi listData untuk memasukkan data yang barusan di buat ke dalam list(array) ke 1 atau ke 2 sampai seterusnya 
                    misal : | email ke - 1 | email ke - 2 | email ke - 3| <- ini list(array)*/
}
//fungsi untuk print out(menampilkan) hasil dari data yang dimasukkan
void displayData(email mail, int i){
    cout << endl;
    cout << i + 1 << ".)" << endl;
    cout << "Email: " << mail.email << endl;
    cout << "Pass: " << mail.pass << endl;
}

//fungsi untuk memilih tipe data email di dalam array berdasarkan alamat dimemory
void select(email &mail, int i){
    if (i<d){
        mail = list[i]; //alamat yang di kirim dari parameter akan di isi oleh list(array) index i
   }    
}

//fungsi untuk menampilkan semua data yang tersedia menggunakan looping
void semuaData(){
    email mail;
    int i;

    for (i = 0 ; i < d ; i++){ //looping yang dijalankan jika variabel d(jumlah list) lebih dari variabel i
        select(mail, i);
        displayData(mail, i);
    }
}

// fungsi untuk menambahkan data email yang diinput ke dalam list(array) yang indexnya berdasarkan nilai awal d
void listAdd(email mail){
    list[d++] = mail;
}

//fungsi untuk menampilkan menu untuk memudahkan user menggunakannya
void mainMenu(){
    cout << endl;
    cout << "#########################\n";
    cout << "   1.) Register\n";
    cout << "   2.) Tampilkan Data\n";
    cout << "   3.) Keluar\n";
    cout << "#########################\n";
    cout << "Masukkan pilihan: ";
}
