#include <iostream>

using namespace std;

int centuryFromYear(int year){
    if(year % 100 == 0)
        return year / 100;
    else
        return (year / 100) + 1;
}

main(){
    int year;
    year = rand() % 2005 + 1;
    cout << "Year : " << year << endl;
    cout << "Century : " << centuryFromYear(year);
}