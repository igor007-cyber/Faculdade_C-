#include <iostream>
// questao 7
using namespace std;

int main(){

    int n1,n2,n3,n4,total;

        cout << "digite n1: " << endl;
        cin >> n1;
        cout << "digite n2: " << endl;
        cin >> n2;
        n2 = n2 + n1;
        cout << "digite n3: " << endl;
        cin >> n3;
        n3 = n3 + n2;
        cout << "digite n4: " << endl;
        cin >> n4;
        n4 = n4 + n3;
        cout << "digite n5: " << endl;
        cin >> total;
        total = total + n4;
        cout << endl << "n1: " << n1;
        cout << endl << "n2: " << n2;
        cout << endl << "n3: " << n3;
        cout << endl << "n4: " << n4;
        cout << endl << "total: " << total;

return 0;
}
