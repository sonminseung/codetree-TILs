#include <iostream>
using namespace std;
int main() {
    cout.fixed;
    double ft = 30.48;
    double mi = 160934;
    cout.precision(4);
    cout << "9.2ft = " << 9.2*ft << "cm" << endl;
    cout.precision(9);
    cout << "1.3mi = " << mi*1.3 << "cm";
    /* 여기에 코드를 작성해주세요.9.2ft = 280.4cm
1.3mi = 209214.2cm*/
    return 0;
}