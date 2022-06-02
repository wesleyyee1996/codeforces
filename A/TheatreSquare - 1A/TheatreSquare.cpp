#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

long long int m, n, a;
scanf("%lld%lld%lld", &m, &n, &a);
long long int x, y;
if (m%a == 0) {
    x = m/a;
}
else {
    x = (m/a)+1;
}
if (n%a == 0) {
    y = n/a;
}
else {
    y = (n/a)+1;
}

printf("%lld", x*y);

return 0;
}