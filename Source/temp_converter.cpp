#include "../Include/temp_converter.h"

double TempConverter::converter(double temp, char unit) {
    if (unit == 'F' || unit == 'f') {
        double res = temp*(9.0/5.0);
        res += 32;
        return res;
    }
    else if(unit == 'C' || unit == 'c'){
        double res = temp-32;
        res *= (5.0/9.0);
        return res;
    }
    else {
        throw std::invalid_argument("ERROR: Enter a valid temperature unit (F/C)");
    }
}
