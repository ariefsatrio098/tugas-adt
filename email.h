#ifndef EMAIL_H_INCLUDED
#define EMAIL_H_INCLUDED

//membuat tipe data baru yang bernama email yang menampung variabel email dan pass bertipe data char
typedef struct{
    char email[50];
    char pass[50];

} email;

// variabel untuk perhitungan besar/panjang dari variabel list dibawah
int d = 0;

//membuat array yang bernama list (max 10 element) dengan tipe data email 
email list[10];

//deklarasi dari semua fungsi yang ingin di dibuat
void Register();
void displayData(email mail);
void listAdd(email mail);
void select(email &mail ,int i);
void mainMenu();
void semuaData();

#endif //EMAIL_H_INCLUDED
