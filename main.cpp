#include <iostream>

using namespace std;

int main() {
        int  count;

        cin >> count;

        int index, array[count];

        for (index = 0; index < count; index++) {
            cin >> array[index];
        }

        for (int i = 0; i < count - 1; i++) {
            if (array[i] < array[i + 1]) {
                cout << array[i+1] << " ";
            }
        }

    return 0;
}
