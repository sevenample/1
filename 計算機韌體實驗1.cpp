#include <iostream>

using  namespace std;
int main() {
    char c;
    bool flag = true;
    while (cin.get(c)){
        if (c == '"')
        {
            if (flag)
                cout <<"``";
            else
                cout <<"''";
            flag = !flag ;
        }
        else
            cout << c;
    }

    return 0;
}