#include <iostream>
#include <vector>
#include<algorithm>
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
    m=m%v.size();
    
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+m);
    reverse(v.begin()+m,v.end());

    
    cout << "Array after " << m << " rotations: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
