#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v(n);
  
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int m;
    cout << "Enter number of rotations: ";
    cin >> m;

    m = m % n; 

    for (int j = 0; j < m; j++) {
        int last = v[n - 1];
        for (int i = n - 1; i > 0; i--) {
            v[i] = v[i - 1];
        }
        v[0] = last;
    }

    cout << "Array after " << m << " rotations: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
