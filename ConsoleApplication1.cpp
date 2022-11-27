// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

double x1, x2, k, n;
void check1()
{
    if (cin.fail())
    {
        throw "incorect!";
           
    }
 
}
void check2(double x1, double x2)
{
    if (x1 > x2) 
    {
        throw"incorect x1>x2";
         
    }
}
void check3(int n)
{
    if (n < 0)
    {
        throw "incorect n";
    }
}
void check4(int k)
{
    if (k < 0)
    {
        throw "incorect k";
    }
}
void check5(int n, double x2)
{
    if (n < 1 && x2<0)
    {
        throw "incorect n and x2";
    }
}
void check6(double x1, double x2)
{
    if (x1 < 0 && x2>0)
    {
        throw"incorect x1 and x2";  
    }
}
double result(double x1, double x2, int k, int n,double x, double y, double y1)
{   
    if (x1 > 0)
    {
        y = 1;
        for (int i = 1, x = x1; i <= n && x < x2; i++, x += k)
        {
            y *= ((1 / x) - (1 / i));
        }
    }
    if (x2 <= 0)
    {
        for (int i = 0,x=x1; i <= (n - 1)&& x<x2; i++,x=x+k)
        {
            y1 = 0;
            for (int j = 0, x = x1; j <= (n - 1) && x < x2; j++, x += k)
            {
                y1 += (1 / (x + j - i));
            }
            y += y1;
        }
    }
    return y;
}
int main()
{
    int n;
    double y=0, y1=0, x1, x2, x=0, k;
    try {
        cout << "please write x1 and x2 ";
        cin >> x1 >> x2;
        check1();
        check2((x1), (x2));
        check6((x1), (x2));

        cout << "please write n";
        cin >> n;
        check1();
        check3((n));
        check5((n), (x2));
        
        cout << "please write k";
        cin >> k;
        check1();
        check4(k );
        cout << "x1=" << x1 << endl << "x2=" << x2 << endl;
        cout << "y=" << result((x1), (x2), (k), (n), (x), (y), (y1)) << endl;
    } 
    catch (const char* ex)
    {
        cout << ex << endl;
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
