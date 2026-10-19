#include <iostream>//comanda cum preprocesora
#include <cmath>
#include <list>
#include <vector>
using namespace std;
int zadacha7A()
{
    int Coordinate1;
    int Coordiante2;
    int lqva_Strana;
    int dqsna_Strana;
    int dolna_Strana;
    int gorna_Strana;
    cin >> Coordinate1;
    cin >> Coordinate1;
    return 0;
}
int zadacha6()
{
    cout << "Enter A coordinates:" << endl;
    int x1;
    int y1;
    cin >> x1;
    cin >> y1;
    cout << "Enter B coordinates:" << endl;
    int x2;
    int y2;
    cin >> x2;
    cin >> y2;
    cout << "Enter C coordinates:" << endl;
    int x3;
    int y3;
    cin >> x3;
    cin >> y3;

    int xm = (x1 + x2 + x3) / 3;
    int ym = (y1 + y2 + y3) / 3;
    cout << "M(" << xm << "," << ym << ")";
    return 0;
}
int zadacha4()
{
    
    int Va;
    int b;
    cin >> Va;
    cin >> b;
    Va = Va ^ b;
    b = Va ^ b;
    Va = Va ^ b;
    cout << Va << " " << b;
    return 0;
}
int zadacha3()
{
    int Va;
    int b;
    cin >> Va;
    cin >> b;

    Va += b;
    cout << "Operation: +=" << endl;
    cout << Va << endl;

    Va -= b;
    cout << "Operation: -=" << endl;
    cout << Va << endl;

    Va *= b;
    cout << "Operation: *=" << endl;
    cout << Va << endl;

    Va /= b;
    cout << "Operation: /=" << endl;
    cout << Va << endl;

    Va %= b;
    cout << "Operation: %=" << endl;
    cout << Va << endl;

    Va >>= b;
    cout << "Operation: >>=" << endl;
    cout << Va << endl;

    Va <<= b;
    cout << "Operation: <<=" << endl;
    cout << Va << endl;

    Va &= b;
    cout << "Operation: &=" << endl;
    cout << Va << endl;

    Va ^= b;
    cout << "Operation: ^=" << endl;
    cout << Va << endl;

    Va |= b;
    cout << "Operation: |=" << endl;
    cout << Va << endl;
    return 0;
}
int zadacha2()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    int c = a + b;
    int x = a - b;
    int y = a * b;
    int g = a / b;
    int h = a % b;
    cout << c << endl;
    cout << x << endl;
    cout << y << endl;
    cout << g << endl;
    cout << h << endl;
    return 0;
}
int zadacha1()
{
    int cqloChislo;
    char x;
    bool BulevaPromenliva;
    float b;
    double c;
    cout << "Vuvedete stojnosti:" << endl;
    cout << "Stojnost za INT:" << endl;
    cin >> cqloChislo;
    cout << "Stojnost za CHAR:" << endl;
    cin >> x;
    cout << "Stojnost za BOOL:" << endl;
    cin >> BulevaPromenliva;
    cout << "Stojnost za FLOAT:" << endl;
    cin >> b;
    cout << "Stojnost za DOUBLE:" << endl;
    cin >> c;
    cout << "Eto kakvo napisahte:";
    cout << "INT:" << cqloChislo << endl;
    cout << "CHAR:" << x << endl;
    cout << "BOOL:" << BulevaPromenliva << endl;
    cout << "FLOAT:" << b << endl;
    cout << "DOUBLE:" << c << endl;

    return 0;
}

int main() {

    zadacha6();
    return 0;
}