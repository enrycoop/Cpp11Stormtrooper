#include <iostream>

using namespace std;

int main() {
    /*
    const significa "prometto di non cambiare questo valore"
    constexpr significa "da valutare al momento della compilazione"
    consteval significa "da valutare solo al momento della compilazione"
    */
   const int i = 2; // costante con nome
   constexpr int DIM = 10 * i;
   cout << DIM << endl;

   int j = 0;
   cin >> j;
   cout << "reded: " << j << endl;
}