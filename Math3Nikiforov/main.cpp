#include <iostream>
#include <vector>
#include <memory>
#include <cmath>
#include <iomanip>
using namespace std;
template <typename T>
T sum(T e) {
    unsigned long long n = 1;
    T s = -0.5;
    T a = -0.5;
    while (abs(a) > e) {
        n++;
        a = pow(-1, n) * n / pow(2, n);
        s += a;
    };
    return  s;
}
int main() {
    double e = 0;
    cout << "Введите эпсилон: ";
    cin >> e;
    cout <<  "Результат: " << "\n";
    if (e < 10e-7) {
        cout << fixed << setprecision(abs(log10(e)))  << sum(float(e));
    }
    else {
        cout << fixed << setprecision(abs(log10(e))) << sum(double(e));
    }
    cout << endl;
    return 0;
}