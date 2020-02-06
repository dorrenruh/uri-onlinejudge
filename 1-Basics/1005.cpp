#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    float x, y, media;

    cin >> x >> y;
    cout << "MEDIA = ";

    media = (x * 3.5 + y * 7.5) / 11 ;

    cout << fixed << setprecision(5) << media << endl;

    return 0;
}
