#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int N,B,H,W;
    while(scanf("%d %d %d %d", &N, &B, &H, &W) != EOF){
        int minCost = -1;
        while(H--) {
            int P;
            cin >> P;
            for(int i=0;i<W;i++) {
                int a;
                cin >> a;
                if(a >= N){
                    if( P*N <= B ) {
                        if(minCost == -1) {
                            minCost = P*N;
                        } else if(P*N < minCost) {
                            minCost = P*N;
                        }
                    }
                }
            }
        }
        if(minCost == -1) {
            cout << "stay home" << endl;
        } else {
            cout << minCost << endl;
        }
    }
    exit(EXIT_SUCCESS);
}
