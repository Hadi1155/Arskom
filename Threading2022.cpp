#include <iostream>
#include <thread>
using namespace std;

int i, j;

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
}


int main()
{
    thread thread1(angkaGanjil);
    thread thread2(angkaGenap);

    thread1.join();
    thread2.join();

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