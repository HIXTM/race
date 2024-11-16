#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    setlocale(0, "");

    srand(time(0));
    const int size = 60;

    cout << "Введите вашу букву(a-z) \n ";
    char x; 
    cin >> x;

    int position = size / 2;

    while (true) {
        cout << "|START|";
        for (int i = 0; i < size; i++) {
            if (i == position)
                cout << x;
            else cout << " ";
        }
        cout << "|FINISH|" << endl;

        int move = rand() % 3 - 1;
        position = position + move;
        if (position < 1) { 
            cout << "Вы не смогли финишировать в этой гонке!" << endl; 
            break; 
        }
        if (position > size - 1) { 
            cout << "Вау! Ты финишировал в этой гонке" << endl; 
            break; 
        }
        for (int sleep = 0; sleep < 1000000; ++sleep);
    }
    return 0;
}
