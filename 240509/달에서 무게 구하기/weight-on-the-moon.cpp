#include <iostream>

using namespace std;

    
int main() {
        cout << fixed;
        
        int a = 13;
        cout.precision(6);
        double b = 0.165;
        cout.precision(6);
        cout << a <<" * " << b << " = " << a * b;

    // 여기에 코드를 작성해주세요. 추의 무게 = 13, 달에서 중력의 비율 = 0.165
    return 0;
}