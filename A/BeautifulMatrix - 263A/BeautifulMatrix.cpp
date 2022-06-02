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

int m, n;
int v;
for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
        cin >> v;
        if (v == 1) {
            m = i; n = j;
            break;
        }
    }
}

int x = abs(m-2);
int y = abs(n-2);

printf("%d", x+y);

return 0;
}