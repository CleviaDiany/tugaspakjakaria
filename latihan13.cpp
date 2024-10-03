#include<iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
         for (int j = 0; j < 5; j++) {
              for (int k = 0; k < 5; k++) {
                   cout << "Perulangan ke-" << i << "," << j << "," << k << endl;
              }
         }     
    }    
    return 0;
}