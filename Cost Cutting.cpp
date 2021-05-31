#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int loop = T;
    while(loop--) {
        int arr[3];
        for(int i=0;i<3;i++) {
            cin >> arr[i];
        }
        int n = sizeof(arr)/sizeof(arr[0]);
        sort(arr, arr+n);
        cout << "Case " << T-loop << ": " << arr[1] << endl;
    }
    exit(EXIT_SUCCESS);
}
