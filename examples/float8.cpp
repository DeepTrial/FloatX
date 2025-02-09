#include <float_dtype.hpp>
#include <iostream>


int main()
{
    FLOAT_DTYPE::float8_e4m3 fp8_data = FLOAT_DTYPE::float8_e4m3(449.0);

    std::cout << "float8 data " << fp8_data << std::endl;

    std::cout << fp8_data << ", precision = " << bitstring(fp8_data) << ")\n";

    return 0;
}