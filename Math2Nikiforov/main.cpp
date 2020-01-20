#include <iostream>
#include <vector>
#include <memory>
#include <cmath>
#include <iomanip>
using namespace std;
template <typename T>
T sum(T eps) {
    unsigned long long n = 1;
    T s = 1.5;
    T a;
    T factorial = 1;
    T r = 1;
    while (abs(r) > eps) {
        n++;
        factorial *= n;
        a = (n + 2) / (n + factorial);
        s += a;
        r *= 0.5;
    };
    return  s;
}
int main() {
    double eps = 0;
    cout << "Введите эпсилон: ";
    cin >> eps;
    cout << "Результат" << endl;
    if (eps < 10e-7) {
        cout << fixed << setprecision(abs(log10(eps))) << sum(float(eps));
    }
    else {
        cout << fixed << setprecision(abs(log10(eps)))  << sum(double(eps));
    }
    cout << endl;
    return 0;
}