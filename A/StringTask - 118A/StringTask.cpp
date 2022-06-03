#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <iomanip>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

string w;
cin >> w;

char o;
char c;
for (int i=0; i<w.length(); i++) {
    c = tolower(w[i]);
    // printf("%c\n", c);
    if (c == 'a' || c=='e' || c=='i' || c=='o' || c=='u'||c=='y') {
        continue;
    }
    else {
        cout << '.' << c;
    }
}

return 0;
}