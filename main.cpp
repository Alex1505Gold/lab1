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
    double x_rez=3*x*x*x+2*x*x-1;
    std::cout << std::fixed;
    std::cout.precision(3);
    std::cout << x_rez << std::endl;
    //zada4a 2
    unsigned int a;
    std::cout << "vvedi a" << std::endl;
    std::cin >> a;
    int a_rez=4*abs(a)-sqrt(a+2);
    std::cout << std::showpos<< a_rez << std::endl;
    //zada4a 3
    bool m ,n ,l, k;
    std::cout << "vvedi k l m n" << std::endl;
    std::cin >> k >> l >> m >> n;
    bool rez_3 = m ^ n && (!l || k);
    std::cout << std::boolalpha << rez_3 << std::endl;
    //if (rez_3) std::cout << "true"<<std::endl ; else std::cout <<"false"<<std::endl; ce kostil
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
    std::cout <<std::hex << std::setw(2)<< std::showbase << rez_5 << std::endl;
    return 0;
}
