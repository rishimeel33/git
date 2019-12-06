
#include <iostream>
using namespace std;


main()
{
    char op;
    float n1, n2;

    cin >> op;
    cin >> n1 >> n2;

    switch (op) {
        case '+':
            cout << n1 + n2;
            break;
        case '-':
            cout << n1 - n2;
            break;
        case '*':
            cout << n1 * n2;
            break;
        case '/':
            cout << n1 / n2;
            break;
        default:
            cout << "Error! operator is not correct";
            break;
    }
    return 0;
}
