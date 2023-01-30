#include <iostream>
using namespace std;

int main() {
    int helloCount = 0;
    while (helloCount < 9)
    {
        printf("Hello\n");
        helloCount++;
    }

    int numberCount = 0;
    while (numberCount < 15)
    {
        cout << numberCount << endl;
        numberCount++;
    }

    int oddNumberCount = 0;
    while (oddNumberCount < 15)
    {
        if (oddNumberCount % 2) {
            cout << oddNumberCount << endl;
        }
        oddNumberCount++;
    }

    int start = 5;
    int end = 15;
    int i = 0;
    int sum = 0;
    while (i < (end - start))
    {
        sum += start + end;
        i += 2;
    }
    cout << "Сумма чисел = " << sum << endl;
    return 0;
}
