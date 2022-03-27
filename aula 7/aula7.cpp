#include <iostream>

using namespace std;

int main(){

    float x , y, m;

        cout << "digite suas notas: " << endl;
        cin >> x >> y;
        m = (x + y)/2;
        cout << endl << "sua media: " << m << endl;
        if (m >= 7)
        {
            cout << "voce passou";
        }
        else
        {
            cout << "reprovado";
        }

return 0;
}
