/*
sorgente1 -> [compilatore] -> oggetto1 -> [LINK] -> Eseguibile
sorgente2 -> [compilatore] -> oggetto2 ->
*/

#include <iostream>
#include <vector>

/*
 TIPI:
 bool  : 1 byte
 char  : 1 byte
 int   : 4 byte
 double: 8 byte

 OPERATORI ARITMETICI:
 x+y  piu'
 +x   piu' unario
 x-y  meno
 -x   meno unario
 x*y  moltiplica
 x/y  divide
 x%y  resto (modulo) per interi

 OPERATORI DI CONFRONTO
 x==y   uguale a
 x!=y   non uguale
 x<y    minore di
 x>y    maggiore di
 x<=y   minore uguale a
 x>=y   maggiore uguale a

 MODIFICATORI
 x+=y;   x = x + y
 x-=y;   x = x - y
 ++x;    incremento di 1
 --x;    decremento di 1
 x*=y;   x = x * y
 x/=y;   x = x / y
 x%=y;   x = x % y
*/


// conversioni automatiche
void some_function() {
    double d = 2.2;
    int i = 7;
    d = d + i;
    i = d * i;
}

int main()
{
    using namespace std;
    // inizializzazione
    double d = 2.3;

    //la forma generale di lista consente di
    //dare errori in caso di narrowing conversion
    double d2{2.5};

    vector<int> v {1,2,3,4,5};


    //utilizzo di auto per dichiarazione automatica
    auto b = true;
    auto ch = 'h';
    auto i = 123;
    auto d4 = 1.5;
    //auto z = sqrt(i);


    for(auto& x : v)
        cout << x*20 << endl;
    return 0;
}


// TEST E CICLI
