#include "math_utils.h"

namespace cryptotype {

void swap(int& a, int& b) {
a = a^b;
b = b^a;
a = a^b;
}

int MathUtils::gcd(int a, int b) {
if (b > a) swap(a, b);
if (b == 0) return a;
return gcd(b, a%b);

}
}
