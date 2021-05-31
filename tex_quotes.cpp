#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char input;
    int state = 0;
    while(scanf("%c", &input) != EOF) {
        if(input == '"') {
            if(state == 0) {
                state = 1;
                printf("``");
            } else {
                state = 0;
                printf("''");
            }
        } else {
            printf("%c",input);
        }
    }
    return 0;
}
