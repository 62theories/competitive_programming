#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int H, U, D, F;
    while(true) {
        cin >> H >> U >> D >> F;
        if(H==0) {
            return 0;
        }
        float height = 0;
        float percent = float(F)/100;
        int day = 1;
        float climbingDistance = U;
        while(true) {
              if(day == 1) {
                  height += U;
              } else {
                  climbingDistance -= U*percent;
                  if(climbingDistance < 0) {
                      
                  } else {
                      height += climbingDistance;
                  }
              }
              if(height < 0) {
                  cout << "failure on day " << day << endl;
                  break;
              } else if(height > H) {
                  cout << "success on day " << day << endl;
                  break;
              } else {
                  height -= D;
                  if(height < 0) {
                      cout << "failure on day " << day << endl;
                      break;
                  } else if(height > H) {
                      cout << "success on day " << day << endl;
                      break;
                  }
                  day++;
              }
        }
    }
    exit(EXIT_SUCCESS);
}
