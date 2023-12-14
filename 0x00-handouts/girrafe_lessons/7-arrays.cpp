#include <iostream>
using namespace std;

int main (){
    int luckynumbers[] = {3, 4, 6, 7, 10, 20, 40};
    luckynumbers[0] = 70;

    cout << luckynumbers[0] << endl;
    cout << luckynumbers[6];

    return 0;
}