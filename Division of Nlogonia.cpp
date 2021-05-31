#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int K;
    while(true) {
        cin >> K;
        if(K == 0) {
            return 0;
        }
        int M,N;
        cin >> M >> N;
        while(K--) {
            int X,Y;
            cin >> X >> Y;
            if(X == M || Y == N) {
                cout << "divisa" << endl;
            } else if(X > M && Y > N) {
                cout << "NE" << endl;
            }  else if(X < M && Y > N) {
                cout << "NO" << endl;
            }  else if(X > M && Y < N) {
                cout << "SE" << endl;
            } else {
                cout << "SO" << endl;
            }
        }
    }
    exit(EXIT_SUCCESS);
}
