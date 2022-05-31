#include <iostream>
#include <string>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


string num_tests_str;

cin >> num_tests_str;
int num_tests = stoi(num_tests_str);

string word;
int len;

for (int i=0; i<num_tests; i++) {
    
    cin >> word;
    len = word.length();
    if (len > 10) {
        printf("%c%d%c\n", word[0], len-2, word[len-1]);
    }
    else {
        cout << word << endl;
    }
}

return 0;
}