#include "stack.h"

int main()
{
    Stack S;
    string kata,word;
    infotype x;
    int i = 1;

    createStack_1301213215(S);

    while (i <= 12){
        cout << "Masukkan Char: ";
        cin >> x;
        push_1301213215(S, x);
        i++;
    }
    cout << "Sebelum Pop: ";
    print_1301213215(S);
    cout << endl;

    i = 1;
    while ( i <= 8) {
        pop_1301213215(S);
        i++;
    }
    cout << "Sesudah Pop: ";
    print_1301213215(S);
    cout << endl;

    return 0;
}
