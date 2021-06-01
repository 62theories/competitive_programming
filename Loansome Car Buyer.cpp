#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int month, loop;
    float down, loan;
    while(true) {
        cin >> month >> down >> loan >> loop;
        if(month < 0) {
            return 0;
        }
        float pon = loan / month;
        float priceLeft = loan;
        float priceDown = loan + down;
        int a[loop];
        float b[loop];
        for(int i=0;i<loop;i++) {
            cin >> a[i] >> b[i];
        }
        //
        int monthCount = 0;
        priceDown = priceDown - (priceDown * b[0]);
        bool finishLoop = false;
        if(priceLeft < priceDown) {
            if(monthCount == 1) {
                cout << monthCount << " month" << endl;
            } else {
                cout << monthCount << " months" << endl;
            }
            continue;
        }
        //
        for(int i=1;i<loop;i++) {
            for(int j=a[i-1]+1;j<a[i];j++) {
                monthCount++;
                priceLeft -= pon;
                priceDown = priceDown - (priceDown * b[i-1]);
                if(priceLeft < priceDown) {
                    finishLoop = true;
                    if(monthCount == 1) {
                        cout << monthCount << " month" << endl;
                    } else {
                        cout << monthCount << " months" << endl;
                    }
                }
                if(finishLoop == true) {
                    break;
                }
            }
            if(finishLoop == true) {
                break;
            }
            monthCount++;
            priceLeft -= pon;
            priceDown = priceDown - (priceDown * b[i]);
            if(priceLeft < priceDown) {
                finishLoop = true;
                if(monthCount == 1) {
                    cout << monthCount << " month" << endl;
                } else {
                    cout << monthCount << " months" << endl;
                }
            }
            if(finishLoop == true) {
                break;
            }
        }
        if(finishLoop == true) {
            continue;
        }
        for(int i=a[loop-1]+1; i<= month;i++) {
            monthCount++;
            priceLeft -= pon;
            priceDown = priceDown - (priceDown * b[loop-1]);
            if(priceLeft < priceDown) {
                finishLoop = true;
                if(monthCount == 1) {
                    cout << monthCount << " month" << endl;
                } else {
                    cout << monthCount << " months" << endl;
                }
            }
            if(finishLoop == true) {
                break;
            }
        }
    }
    exit(EXIT_SUCCESS);
}
