#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.\n";
    for (int i = 1; i <= 3; ++i) {
        cin.ignore(); }
    cout << "You will get " ;
    srand(time(0));
    int G = rand()%9;
    if (G == 0) cout << "A";
    else if (G == 1) cout << "B+";
    else if (G == 2) cout << "B";
    else if (G == 3) cout << "C+";
    else if (G == 4) cout << "C";
    else if (G == 5) cout << "D+";
    else if (G == 6) cout << "D";
    else if (G == 7) cout << "W";
    else cout << "F";
    cout << " in this 261102.";
}
