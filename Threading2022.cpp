#include <iostream>
#include <thread>
using namespace std;

// #include <thread> harus dipanggil untuk menggunakan fitur threading pada visual studio

int i, j;

// dua variabel diatas digunakan untuk fungsi yang akan nge-print angka ganjil dan genap

void angkaGanjil()
{
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 != 0) 
        {
            cout << i << endl;
            this_thread::sleep_for(chrono::seconds(1));
        }
        
    }
    cout << "Menghitung Angka Ganjil Dari 1 Sampai 10 Sudah Selesai!" << endl;

    /*
    
    Berikut adalah fungsi untuk nge-print angka ganjil

    for diatas digunakan untuk membatasi jumlah angka yang ingin di print

    lalu, fungsi if diatas adalah untuk membuat syarat atau sistem agar codingan 
    diatas nge-print angka ganjil saja 
    --> i % 2 != 0 artinya jika sisa angka yang dibagi dengan 2 tidak sama dengan 0 maka angka itu ganjil,
    maka akan diprint

    lalu ditutup dengan cout << "Menghitung Angka Ganjil Dari 1 Sampai 10 Sudah Selesai!" << endl;
    agar kita bisa mengetahui bahwa proses debug bagian nge-print angka ganjil sudah selesai

    */
}

void angkaGenap()
{
    for (j = 1; j <= 10; j++)
    {
        if (j % 2 == 0)
        {
            cout << j << endl;
            this_thread::sleep_for(chrono::seconds(3));
        }
        
    }
    cout << "Menghitung Angka Genap Dari 1 Sampai 10 Sudah Selesai!" << endl;
    /*
    
    Berikut adalah fungsi untuk nge-print angka genap

    for diatas digunakan untuk membatasi jumlah angka yang ingin di print

    lalu, fungsi if diatas adalah untuk membuat syarat atau sistem agar codingan
    diatas nge-print angka genap saja
    --> i % 2 != 0 artinya jika sisa angka yang dibagi dengan 2 sama dengan 0 maka angka itu genap,
    maka akan diprint

    lalu ditutup dengan cout << "Menghitung Angka genap Dari 1 Sampai 10 Sudah Selesai!" << endl;
    agar kita bisa mengetahui bahwa proses debug bagian nge-print angka genap sudah selesai

    */
}


int main()
{
    thread thread1(angkaGanjil);
    thread thread2(angkaGenap);

    thread1.join();
    thread2.join();

    /*
    Lalu dibagian sini digunakan untuk mendeklarasi thread baru dan untuk memanggil fungsi - fungsi saja
    */

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file