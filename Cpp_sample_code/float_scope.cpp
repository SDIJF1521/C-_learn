#include<iostream>
#include<float.h>
int main(void){
    int float_digits = FLT_DIG;
    int dbl_digits = DBL_DIG;
    int ldbl_digits = LDBL_DIG;
    std::cout << "float_digits: " << float_digits << std::endl;
    std::cout << "dbl_digits: " << dbl_digits << std::endl;
    std::cout << "ldbl_digits: " << ldbl_digits << std::endl;
    int float_mant = FLT_MANT_DIG;
    int dbl_mant = DBL_MANT_DIG;
    int ldbl_mant = LDBL_MANT_DIG;
    std::cout << "float_mant: " << float_mant << std::endl;
    std::cout << "dbl_mant: " << dbl_mant << std::endl;
    std::cout << "ldbl_mant: " << ldbl_mant << std::endl;
    int float_max = FLT_MAX_10_EXP;
    int dbl_max = DBL_MAX_10_EXP;
    int ldbl_max = LDBL_MAX_10_EXP;
    std::cout << "float_max: " << float_max << std::endl;
    std::cout << "dbl_max: " << dbl_max << std::endl;
    std::cout << "ldbl_max: " << ldbl_max << std::endl;
    int float_min = FLT_MIN_10_EXP;
    int dbl_min = DBL_MIN_10_EXP;
    int ldbl_min = LDBL_MIN_10_EXP;
    std::cout << "float_min: " << float_min << std::endl;
    std::cout << "dbl_min: " << dbl_min << std::endl;
    std::cout << "ldbl_min: " << ldbl_min << std::endl;

}