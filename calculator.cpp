
#include <iostream>
using namespace std;


main()
{
    char oper;
    float n1, n2;

    cout << "Enter Operator + or - or * or /";
    cin >> oper;
    cin >> n1 >> n2;
    switch (oper) {
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