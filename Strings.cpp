#include "Strings.hpp"
#include <stdlib.h>

String::String() {
    String string;

    string.capacity = 15;
    string.length = 0;
    string.value = (char *) calloc(string.capacity, sizeof(char));
}
