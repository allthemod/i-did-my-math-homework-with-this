#include <iostream>
using namespace std;

int main()
{
    double var[3][2] = {{5, 10}, {0.5, 1}, {0, 0.2}};
    int len = sizeof(var) / sizeof(var[0]);
    cout << len << endl;
    int i;
    int x;
    double a;
    double b;
    for (i = 0; i < len + 1 ; i++) 
    {
        cout << "loop number is " << i << endl <<endl <<endl <<endl;
        if (i == 0) {
            for (x = 0; x < len; x++) {
                a = var[x][0];
                b = var[x][1];
                cout << "the eqesion is " << i << ", ";
                cout << "the var number " << x << endl;
                cout << "the results " << 5 * a + 5 * b << endl;
            }
        }
        else if (i == 1) {
            for (x = 0; x < len; x++) {
                a = var[x][0];
                b = var[x][1];
                cout << "the eqesion is " << i << ", ";
                cout << "the var number " << x << endl;
                cout << "the results " << 2 * a + 2 * b << endl;
            }
        }
        else if (i == 2) {
            for (x = 0; x < len; x++) {
                a = var[x][0];
                b = var[x][1];
                cout << "the eqesion is " << i << ", ";
                cout << "the var number " << x << endl;
                cout << "the results " << 2 * a + 5 * b << endl;
            }
        }
        else
        {
            for (x = 0; x < len; x++) {
                a = var[x][0];
                b = var[x][1];
                cout << "the eqesion is " << i << ", ";
                cout << "the var number " << x << endl;
                cout << "the results " << 5 * a + 2 *b << endl;
            }
        }
    }
}
