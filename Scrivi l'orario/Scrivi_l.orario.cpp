#include <iostream>
#include <ctime>
using namespace std;

int main() {
    string day;
    time_t currentTime;
    time(&currentTime);
    day=asctime(localtime(&currentTime)) << endl;
    if(day=="Tue"){
        cout<<Martedi<<(localtime(&currentTime))
    }
    return 0;
}