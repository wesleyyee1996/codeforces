#include <iostream>
#include <string>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


string val_str;

cin >> val_str;
int val = stoi(val_str);

if (val % 2 == 0 && val != 2) {
    cout << "YES";
}
else {
    cout << "NO";
}

return 0;
}