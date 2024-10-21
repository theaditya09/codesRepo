#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How Many Digits : " << endl;
    cin >> n;
    
    int arr[n]; // Declare an array of size 'n'
    
    cout << "Enter elements:" << endl;
    for(int z = 0; z < n; z++) {
        cout << "Enter element " << z << " : ";
        cin >> arr[z];
    }

    cout << "Number of elements in the array is : " << n << endl;

    for(int i = 0; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for(int k = 0; k < i; k++) {
            sum1 += arr[k];
        }
        for(int j = i + 1; j < n; j++) {
            sum2 += arr[j];
        }
        if(sum1 == sum2) {
            cout << "Element at index " << i << " (" << arr[i] << ") has equal sums before and after." << endl;
        }
    }

    return 0;
}