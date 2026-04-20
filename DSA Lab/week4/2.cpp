#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[100];
    // it is not string literal

    // for getting spaces in arr, we use cin.getline(arrNAme, size)

    cin.getline(str, 100);
    cout << strlen(str) << endl;
    cout << str << endl;
    str[0] = 'n';
    cout << str << endl;
    return 0;

}