#include <iostream>
// tenth question

using namespace std;

int main(){
    float winner1, winner2, winner3;
    const float total = 780000;

    winner1 = total * 0.46;
    winner2 = total * 0.32;
    winner3 = total - (winner1 + winner2);
    cout << "the winner 1 receive: " << winner1 << endl;
    cout << "the winner 2 receive: " << winner2 << endl;
    cout << "the winner 3 receive: " << winner3 << endl;

return 0;
}
