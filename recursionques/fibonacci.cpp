#include <iostream>

using namespace std;

int fibonacci(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recursive case: F(n) = F(n-1) + F(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = fibonacci(n);
    cout << "Result of fibonacci: " << result << endl;
   
    
//print all elements
    for(int i = 0; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
