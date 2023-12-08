#include <iostream>
using namespace std;
char before(char letter){
    if(letter < 'Z' && letter > 'A'){
        return letter - 1;
    }
    else if(letter == 'A'){
        return 90;
    }
    else if(letter == 'Z'){
        return 89;
    }
    else{
        return 48;
    }
    return 0;
}