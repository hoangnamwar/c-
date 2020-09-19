#include <iostream>
using namespace std;

int main()
{ 
    uint64_t k, n, w, money;
    cin >> k >> n >> w;
    money = k * (w + 1) * w / 2;
    cout << money - n;
}