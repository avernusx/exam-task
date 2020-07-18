#include <iostream> 
using namespace std; 
 
int main() { 
    int maxOdd = 0;
    int maxEven = 0;
    int maxDivisible = 0; 
    int x = 0;
    int N = 0;

    cin >> N; 

    for (int i = 0; i < N; i++) { 
        cin >> x; 
        if (x % 35 == 0 && x > maxDivisible) {
            maxDivisible = x;
        } else if (x % 2 == 0 && x > maxEven) {
            maxEven = x;
        } else if (x % 2 != 0 && x > maxOdd) {
            maxOdd = x;
        }
    } 

    if (maxDivisible == 0) {
        cout << "Нет решения";
        return 0;
    }

    if (maxDivisible % 2 == 0 && maxEven != 0) {
        cout << maxDivisible << " " << maxEven;
        return 0;
    }

    if (maxDivisible % 2 != 0 && maxOdd != 0) {
        cout << maxDivisible << " " << maxOdd;
        return 0;
    }

    cout << "Нет решения";
    return 0;
}
