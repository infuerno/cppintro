//((r1 - a (r1 - a)) , ((r2-a) x (r2-a)), ..., ((rN - a) x (rN - a))
#include <cmath>

float average(float r1) {
    return r1;
}

float average(float r1, float r2) {
    return (r1 + r2) / 2;
}

float average(float r1, float r2, float r3) {
    return (r1 + r2 + r3) / 3;
}

float average(float r1, float r2, float r3, float r4) {
    return (r1 + r2 + r3 + r4) / 4;
}

float standard_deviation(float r1) {
    return 0;
}

float standard_deviation(float r1, float r2) {
    int a = average(r1, r2);
    float sd = sqrt(average(((r1 - a) * (r1 - a)), ((r2 - a) * (r2 - a))));
    return sd;
}

float standard_deviation(float r1, float r2, float r3) {
    int a = average(r1, r2, r3);
    float sd = sqrt(average(((r1 - a) * (r1 - a)), ((r2 - a) * (r2 - a)), ((r3 - a) * (r3 - a))));
    return sd;
}

float standard_deviation(float r1, float r2, float r3, float r4) {
    int a = average(r1, r2, r3, r4);
    float sd = sqrt(average(((r1 - a) * (r1 - a)), ((r2 - a) * (r2 - a)), ((r3 - a) * (r3 - a)), ((r4 - a) * (r4 - a))));
    return sd;
}
