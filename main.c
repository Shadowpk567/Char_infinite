#include <stdio.h>

#include "String.h"

int main() {
    String s1 = _StringV("Esto es un String");
    String *s2 = new_StringV("Esto es otro string mas largo para alcanzar los 15 characteres");

    printf("%s\n", s1.value);

    printf("%s\n", s2->value);
    

    return 0;
}
