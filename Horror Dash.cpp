#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    int origi = cases;
    while(cases--) {
        int N;
        cin >> N;
        int MaxCount = -1;
        while(N--) {
            int input;
            cin >> input;
            if(input > MaxCount) {
                MaxCount = input;
            }
        }
        cout << "Case " << origi - cases << ": " << MaxCount << endl;
    }
    exit(EXIT_SUCCESS);
}
