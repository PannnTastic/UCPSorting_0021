// No.1  Insertion berjalan dengan membagi list menjadi dua bagian yaitu bagin yg terurut  dan bagian yg belum terurut
// insert yang berarti memasukkan sesuai dengan namanya algoritma insertion sort mengurut dan membandingkan dengan cara
// menyediakan 1 variabel kosong atau temporary untukmenyimoan nilai setelah menaruh nilai dalam temporary maka akan 
// dibandingkan dengan nilai dalam indeks lainnya jika nilai temp lebih kecil dari nilai indeks yg dibandingkan maka nilai 
// yg lebih besar dari temp akan dipindahkan ke indeks tempat nilai temp tadi,setelah pembandingan selesai maka  nilai temp akan d taruh
// di indeks yang lebih besar darinya

// No. 2 Cara kerja Selection sort ialah dengan mencari nilai paling terkecil dalam array lalu menukarnya dengan nilai indeks yng lebih besar darinya,
// mencari nilai terkecil tersebut ialah dengan membandingkan dengan nilai nilai indeks lainnya
// jika sudah d temukan nilai terkecil dalam array setelah membandingkannya maka nilai tersebut akan d tukar dengan nilai indeks yg lebih besar darinya;
// jadi cara kerja selection sort ialah mencari dan menukar seperti namanya select yaitu memilih.

// No.3 Dalam algoritma sortir cara untuk mengetahui jumlah langkah nya ialah dengan cara n-1 dimana n adalah jumlah array atau jumlah indeks
// dalam array.

#include <iostream>
using namespace std;

int n;
int pannn[21];

void input() {//prosedur untuk input
    while (true) {
        cout << "Masukkan Banyak elemen Pada Array : ";//output ke layar
        cin >> n;//input ke pengguna
        if (n <= 21)//jika n kurang dari atau samadengan 21
            break;//keluar dari loop

        else {
            cout << "\nArray hanya dapat menampung 21 elemen\n";//output jikaelemen yang dimasukkan lebih dari 20
        }
    }

     cout << endl;//output baris kosong
     cout << "=================\n";
     cout << "Masukkan Elemen Array\n";//output ke layar
     cout << "================\n";

     for (int i = 0; i < n; i++) {//looping dengan i dimulai dari 0 hingga n-1
         cout << "Data ke-" << (i + 1) << ": ";//output ke layar
         cin >> pannn[i];//input pengguna
     }
}

void selection(){
    int pass =1;
    do{
        for(int j=0;j<=n-2;j++){    
        int min=j;
            for(int i=j+1;i<=n-1;i++){
                if(pannn[i]<pannn[min]){
                    min=i;
                }
             }
            if(min!=j){
                int temp = pannn[j];
                pannn[j] = pannn[min];
                pannn[min] = temp;
            }
            
            pass = pass + 1;
            cout << "\nPass " << pass - 1  << ": ";//output ke layar
            for (int k = 0; k < n; k++) {//lopping nilai k dari 0 hingga n-1
            cout << pannn[k] << " ";//output ke layar
            }
            cout << endl;
        }
    } while(pass<=n-1);
}

void display() {
    cout << endl;
    cout << "=================\n";
    cout << "Element Array yang telah tersusun\n";
    cout << "=================\n";
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << pannn[j];
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah Pass = " << n - 1 << endl;
    cout << endl;
}

int main (){
    input();
    selection();
    display();
}