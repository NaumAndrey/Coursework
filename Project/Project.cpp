
#include <iostream>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <set>
#include <numeric>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;
using namespace chrono;

const int gl_SIZESHORTINTBITS = 8 * sizeof(signed short int);


void binary() 
{
    cout << "Memory in byte on the your computer !\n";
    cout << " " << endl;
    bool bool_1;
    char char_1;
    signed char signed_char;
    //signed short int ssi;
    unsigned char unsigned_char;
    wchar_t wchar_t_1;
    char16_t char16;
    char32_t char32;
    short short_1; //short int
    unsigned short unsigned_short; //unsigned short int
    int int_1;
    unsigned int unsigned_int;
    long long_1;
    unsigned long unsigned_long; //unsigned long int
    long long long_long; // long long int, signed long long int и signed long long.
    unsigned long long unsigned_long_long; //unsigned long long int
    float float_1;
    double d_2;
    long double long_double;

    signed short int x; // переменная служит для ввода целых чисел!

    //void: тип без значения

    cout << "1) " << endl;
    cout << "bool: " << sizeof(bool_1) << " bytes" << endl;
    cout << "char: " << sizeof(char_1) << " bytes" << endl;
    cout << "signed char: " << sizeof(signed_char) << " bytes" << endl;
    cout << "unsigned char: " << sizeof(unsigned_char) << " bytes" << endl;

    cout << "wchar_t: " << sizeof(wchar_t_1) << " bytes" << endl;
    cout << "char16_t: " << sizeof(char16) << " bytes" << endl;
    cout << "char32_t: " << sizeof(char32) << " bytes" << endl;
    cout << "short: " << sizeof(short_1) << " bytes" << endl;

    cout << "unsigned short: " << sizeof(unsigned_short) << " bytes" << endl;
    cout << "int: " << sizeof(int_1) << " bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned_int) << " bytes" << endl;
    cout << "long: " << sizeof(long_1) << " bytes" << endl;
    cout << "unsigned long: " << sizeof(unsigned_long) << " bytes" << endl;

    cout << "long long: " << sizeof(long_long) << " bytes" << endl;
    cout << "unsigned long long: " << sizeof(unsigned_long_long) << " bytes" << endl;
    cout << "float: " << sizeof(float_1) << " bytes" << endl;
    cout << "double: " << sizeof(d_2) << " bytes" << endl;
    cout << "long double: " << sizeof(long_double) << " bytes" << endl;
    cout << "ssi: " << sizeof(x) << " bytes" << endl;
    cout << " " << endl;
    cout << "=====================================================================" << endl;
    cout << " " << endl;
    cout << "2) " << endl;


    cout << "Enter the number: ";
    cin >> x;

    int numbit = 0;
    cout << "Enter the number byte: ";
    cin >> numbit;

    int bits[gl_SIZESHORTINTBITS];

    if (x < 0)
    {
        bits[gl_SIZESHORTINTBITS - 1] = 1;
    }

    //цикл для получения числа
    for (int i = 0; i < gl_SIZESHORTINTBITS - 1; ++i)
    {
        if (x % 2 == 0)
        {
            bits[i] = 0;
        }

        else
        {
            bits[i] = 1;
        }

        x = x / 2;
    }

    //циклы для инверсии

    for (int i = 0; i < gl_SIZESHORTINTBITS - 1; ++i)
    {
        if (bits[i] == 1)
        {
            bits[i] = 0;
        }
        else
        {
            bits[i] = 1;
        }
    }


    //bool carrier = true;
    for (int i = 0; i < gl_SIZESHORTINTBITS; ++i)
    {
        if (bits[i] == 1)
        {
            bits[i] = 0;
        }

        else
        {
            bits[i] = 1;
            //carrier = false;
            //break;
        }
    }


    for (int i = gl_SIZESHORTINTBITS - 1; i >= 0; --i)
    {
        cout << bits[i];
    }

    cout << endl;
    cout << "Number bits " << numbit << " : " << bits[numbit] << endl;
    cout << endl;
}
void bubbleSort(int a[]) 
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                //swap(a[j] , a[j+1]);
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

            }
        }
    }
}
void sort() 
{
    const int SIZE = 10;
    int N[SIZE], min, max, midle;



    srand(time(NULL)); // инициализация генерации случайных чисел


    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        N[i] = (rand() % 100 - 35);
    }

    cout << "Before Sorting: " << " ";
    for (int i = 0; i < 10; i++)
    {
        cout << N[i] << " ";
    }

    cout << endl;
    cout << endl;

    bubbleSort(N);


    cout << "After Sorting: " << " ";
    for (int i = 0; i < 10; i++)
    {
        cout << N[i] << " ";
    }

    system_clock::time_point start = system_clock::now();

    cout << "\n";

    system_clock::time_point end = system_clock::now();
    duration<double> sec = end - start;

    cout << endl;



    cout << "seconds: " << sec.count() << endl;
    /*
    cout << "Task 3" << endl;
    N[SIZE];
    int size1 = sizeof(N[SIZE] / sizeof(int));
    int summ = accumulate(&N[0], &N[size1], 0);
    int mean = summ / size1;

    cout << mean << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << N[i] << " ";
    }
    */
    /*
    int a1[5];
    for (int i = 0; i < 5; i++)
    {
        if (a1[i] == N[i]);
    }

    cout << endl;

    int b1[5];
    for (int i = 0; i < 5; i++)
    {
        if (b1[i] == N[i+1])
    }
    */

    cout << endl;
    cout << endl;

    int a;
    cout << "Insert the number: " << " ";
    cin >> a;
    cout << "less than a : " << " ";
    for (int i = 0; i < 10; ++i)
    {
        if (a < N[i]) { cout << N[i] << " "; }
    }

    cout << endl;
    cout << endl;

    int b;
    cout << "Insert the number: " << " ";
    cin >> b;
    cout << "number more a : " << " ";
    for (int i = 0; i < 10; ++i)
    {
        if (b > N[i]) { cout << N[i] << " "; }
    }

    cout << endl;
    cout << endl;




    cout << endl;
    cout << "-----------------------------------------------------" << endl;

    min = N[0];
    max = N[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (N[i] < min) { min = N[i]; }
        if (N[i] > max) { max = N[i]; }
    }

    midle = N[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (N[i] = max / min) { midle = N[i]; }
    }


    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    cout << "Midle: " << midle << endl;

    cout << endl;



    //cout << "Number a: " << a << endl;

    cout << endl;
}
void mySwap(int& value1, int& value2)
{
    int temp = value1;
    value1 = value2;
    value2 = temp;
}
void matrixReflection(int** a, int n)
{
    int** ab = new int* [n]; // Создаем массив указателей
    for (int i = 0; i < n; i++)
    {
        ab[i] = new int[n]; // Создаем элементы
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ab[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            mySwap(ab[i][j], ab[i][j + n / 2]);
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(4) << ab[i][j] << ' ';
        }
        cout << '\n';
    }
}
void matrixReflectionTwo(int** a, int n) 
{
    int** ab1 = new int* [n]; // Создаем массив указателей
    for (int i = 0; i < n; i++)
    {
        ab1[i] = new int[n]; // Создаем элементы
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ab1[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            mySwap(ab1[i][j], ab1[i + n / 2][j + n / 2]);
        }
    }

    for (int i = n / 2; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            mySwap(ab1[i][j], ab1[i - n / 2][j + n / 2]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(4) << ab1[i][j] << ' ';
        }
        cout << '\n';
    }
}
void matrixReflectionThree(int** a, int n)
{
    int** ab2 = new int* [n]; // Создаем массив указателей
    for (int i = 0; i < n; i++)
    {
        ab2[i] = new int[n]; // Создаем элементы
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ab2[i][j] = a[i][j];
        }
    }


    for (int i = n / 2; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mySwap(ab2[i][j], ab2[i - n / 2][j]);
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(4) << ab2[i][j] << ' ';
        }
        cout << '\n';
    }
}
void matrixRound(int** a, int n) 
{
    int** ab3 = new int* [n]; // Создаем массив указателей
    for (int i = 0; i < n; i++)
    {
        ab3[i] = new int[n]; // Создаем элементы
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ab3[i][j] = a[i][j];
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            mySwap(ab3[i][j], ab3[i][j + n / 2]);
        }
    }

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            mySwap(ab3[i][j], ab3[i + n / 2][j + n / 2]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(4) << ab3[i][j] << ' ';
        }
        cout << '\n';
    }
}
void matrixPointers(int** a, int n) {

    int** ab = new int* [n]; // Создаем массив указателей
    for (int i = 0; i < n; i++)
    {
        ab[i] = new int[n]; // Создаем элементы
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ab[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(4) << ab[i][j] << ' ';
        }
        cout << '\n';
    }

}
void pointers() 
{
    const int N = 10;
    int n;

    cout << "Enter matrix size: ";
    cin >> n;

    int a[N][N];

    int k = 1;
    int i = 0;
    int j = 0;

    while (k <= n * n) {

        a[i][j] = k; //дейсвтие заполняет массив


        if (i <= j + 1 && i + j < n - 1)
            ++j;
        else if (i < j && i + j >= n - 1)
            ++i;
        else if (i >= j && i + j > n - 1)
            --j;
        else
            --i;
        ++k;
    }


    cout << "Before\n";


    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n; ++j)
        {
            //a[i][j] = 0;
            cout << setw(4) << a[i][j];

        }
        cout << endl;
    }

    cout << "======================================================\n";

    int** a1 = new int* [n]; // Создаем массив указателей
    for (int i = 0; i < n; i++)
    {
        a1[i] = new int[n]; // Создаем элементы
    }

    int** sort = new int* [n]; // Создаем массив указателей
    for (int i = 0; i < n; i++)
    {
        sort[i] = new int[n]; // Создаем элементы
    }

    while (k <= n * n)
    {
        a1[i][j] = k; //дейсвтие заполняет массив


        if (i <= j + 1 && i + j < n - 1)
            ++j;
        else if (i < j && i + j >= n - 1)
            ++i;
        else if (i >= j && i + j > n - 1)
            --j;
        else
            --i;
        ++k;
    }



    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n; ++j)
        {
            a1[i][j] = rand() % 50;
            cout << setw(4) << a1[i][j];

        }

        cout << endl;
    }

    cout << "======================================================\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a1[j] > a1[j + 1])
            {
                swap(a1[j], a1[j + 1]);
                /*int t = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = t;*/

            }
        }
    }

    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n; ++j)
        {
            cout << setw(4) << a1[i][j];
        }
        cout << endl;
    }

    //cout << "===========================Variant2==========================\n";


    //for (int i = 0; i < n; ++i) {

    //    for (int j = 0; j < n; ++j)
    //    {
    //        a1[i][j] = rand() % 100;
    //        cout << setw(4) << a1[i][j];

    //    }

    //    cout << endl;
    //}

    //cout << "=============================================================\n";


    //

    //for (int i = 0; i < n; i++)
    //{
    //    int maxi = 0;
    //    int maxj = 0;

    //    for (int j = 0; j < n; j++)
    //    {
    //        if (a1[i][j] > a1[maxi][maxj]) {

    //            maxi = i;
    //            maxj = j;
    //            
    //        }
    //    }

    //    if (a[0][0] != a1[maxi][maxj])
    //    {
    //        int tmp;
    //        if (maxi != 0)
    //            for (int j = 0; j < n; j++)
    //            {
    //                tmp = a1[maxi][j];
    //                a1[maxi][j] = a1[0][j];
    //                a1[0][j] = tmp;
    //             
    //            }

    //        if (maxj != 0)
    //            for (int i = 0; i < n; i++)
    //            {
    //                tmp = a1[i][maxj];
    //                a1[i][maxj] = a1[i][0];
    //                a1[i][0] = tmp;
    //             

    //            }
    //    }

    //}

    //cout << endl;

    //cout << "|";
    //for (int i = 0; i < n; ++i) {

    //    for (int j = 0; j < n; ++j)
    //    {
    //        //a1[i][j] = rand() % 50;
    //        cout << setw(4) << a1[i][j] << "|";
    //    }

    //    cout << endl;
    //}


    //cout << "===========================Variant2==========================\n";

    cout << "======================================================\n";

    matrixReflection(a1, n);

    cout << "======================================================\n";


    //matrixReflectionTwo(a1,n);

    cout << "======================================================\n";

    matrixReflectionThree(a1, n);

    cout << "======================================================\n";

    //matrixPointers(a1,n);

    //matrixRound(a1,n);
}

void print(const string& item)
{
    cout << item << endl;
}




void file() 
{
    string path = "string.txt";
    fstream fs; // хедер функция для считывания данных из файла
    fs.open(path, fstream::in | fstream::out | fstream::app);
    // in Файл открыт для чтения: буфер внутреннего потока поддерживает операции ввода.
    // out Файл открыт для записи: внутренний буфер потока поддерживает операции вывода.
    // app Все операции вывода происходят в конце файла, добавляя к его существующему содержимому.

    // метод проверки открыт ли файл 
    if (!fs.is_open()) {
        cout << "Eror!";
    }

    else {


        string msg;
        int size = 0;

        int value;
        cout << "File is open \n";
        cout << "========================================================================" << endl;
        cout << "Enter the number 1 for write text to file or 2 our text from file: ";
        cin >> value;


        if (value == 1) {

            cout << "Enter the size of an array: ";
            cin >> size;
            cin.ignore();

            

            for (int i = 0; i < size; i++)
            {
                
                cout << "Enter the text: ";
                cin >> msg;
                
                for (int i = 1; i < msg.length(); i++)
                {
                    if (msg[i] == ' ') {
                        msg.erase(i--, 1);
                    }

                    if (ispunct(msg[i])) {
                        msg.erase(i++, 1);
                    }

                    if (ispunct(msg[i])) {
                        msg.erase(i++, 1);
                    }

                    if ('a' <= msg[i] && msg[i] <= 'z') {
                        msg[i] = char(((int)msg[i]) - 32);
                    }

                    if ('A' <= msg[i] && msg[i] <= 'Z') {
                        msg[i] = char(((int)msg[i]) + 32);
                    }               
                    

                    /*for (int i = 0; i < msg.length() - 1; i++)
                    {
                        for (int j = 1; j < msg.length() - i; j++)
                        {
                            if ((msg[j-1], msg[j]) == 1)
                            {
                                string temp = msg[j - 1];
                                msg[j - 1] = msg[j];
                                msg[j] = temp;
                            }
                        }
                    }*/

                    /*string temp;
                    bool yes = true;
                    while (yes) 
                    {
                        yes = false;
                        
                    for (int i = 0; i < msg.length(); i++)
                    {
                        for (int j = i + 1; j < msg.length(); j++)
                        {
                            if (strcmp(msg[i], msg[j]) > 0)
                            {
                                strcpy(temp, msg[i]);
                                strcpy(msg[i], msg[j]);
                                strcpy(msg[j], temp);
                                yes = true;
                            } 
                            
                        }
                    }*/

                    string temp;
                    bool yes = true;
                    while (yes)
                    {
                        yes = false;

                        for (int i = 0; i < msg.length() - 1; i++)
                        {
                            for (int j = i + 1; j < msg.length() - i; j++)
                            {
                                if ((msg[i], msg[j]) > 0)
                                {
                                    (temp, msg[i]);
                                    (msg[i], msg[j]);
                                    (msg[j], temp);
                                    yes = true;
                                }

                            }
                        }

                    }

                }


                fs << msg << " ";
            }

        }

        if (value == 2) {

            cout << "Reading data from a file";
            while (!fs.eof()) {
                msg = "";
                fs >> msg;
                cout << msg << " ";
            }

        }
    }

    fs.close();
}

void mattttttrixxxx() 
{
    /*
        Заполните матрицу случайными числами от 1 до N^2 
        Создайте еще одну матрицу порядка N. Заполните ее случайными числами от 1 до N^2 
        Вычислите первую матрицу из второй при этом отобразите все промежуточные выводы 
    */
}

int main()
{

    int value;
    cout << "Select application: [1]::[2]::[3]::[4] \n";
    cout << "-> ";
    cin >> value;
    
    if (value == 1) 
    {
        binary();
    }
    
    if (value == 2) 
    {
        sort();
    }

    if (value == 3)
    {
        pointers();
    }

    if (value == 4) 
    {
        file();
    }

    else 
    {
        cout << "error";
    }

    system("pause");
}

