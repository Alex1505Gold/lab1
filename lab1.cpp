#include <iostream>
#include <iomanip>
#include <cmath>
//Golenkov lab 1

int main()
{
    std::cout << "Hello" << std::endl;
    //zada4a 1
    double x;
    std::cout << "vvedi x" << std::endl;
    std::cin >> x;
    double x_rez = 3 * pow(x, 3) + 2 * pow(x,2) - 1;
    std::cout << std::fixed;
    std::cout.precision(3);
    std::cout << x_rez << std::endl;
    //zada4a 2
    int a;
    std::cout << "vvedi a" << std::endl;
    std::cin >> a;
    int a_rez = 4 * abs(a) - sqrt(a + 2);
    std::cout << std::showpos << a_rez << std::endl;
    //zada4a 3
    bool m, n, l, k;
    std::cout << "vvedi k l m n" << std::endl;
    std::cin >> k >> l >> m >> n;
    bool rez_3 = m xor n && (!l || k);
    std::cout << std::boolalpha << rez_3 << std::endl;
    //zada4a 4
    short int b;
    std::cout << "vvedi b" << std::endl;
    std::cin >> b;
    int b_rez = pow(2, b);
    std::cout << std::dec << std::noshowpos << b_rez << std::endl;
    std::cout << std::oct << b_rez << std::endl;
    //zada4a 5
    unsigned short int c, d, e, f;
    std::cout << "vvedi c d e f" << std::endl;
    std::cin >> c >> d >> e >> f;
    unsigned short int rez_5 = f | ~e & (~c ^ d);
    //int r = 10;
    std::cout  << std::setw(6) << std::setfill('0') << std::internal << std::hex << std::showbase << rez_5 << std::endl;
    //std::cout << std::setw(6) << std::setfill('0') << std::internal << std::hex << std::showbase << r << std::endl;
    return 0;
}
