#include "String.h"
#include <stdlib.h>

String _String() {
    String string;

    string.capacity = 16;
    string.length = 0;
    string.value = calloc(string.capacity, sizeof(char));

    string.appendCharacter = appendCharacter;

    return string;
}

String _StringV(char *string) {
    String result = _String();
    
    for(int i = 0; string[i] != '\0'; i++) {
        result.appendCharacter(&result, string[i]);
    }

    return result;
}

String *new_String() {
    String *string = malloc(sizeof(String));

    string->capacity = 16;
    string->length = 0;
    string->value = calloc(string->capacity, sizeof(char));

    string->appendCharacter = appendCharacter;

    return string;
}

String *new_StringV(char *string) {
    String *result = new_String();
    
    for(int i = 0; string[i] != '\0'; i++) {
        result->appendCharacter(result, string[i]);
    }

    return result;
}

void appendCharacter(String *this, char character) {
    if (this->length + 1 >= this->capacity) {
        this->capacity *= 2;
        this->value = realloc(this->value, this->capacity);
    }

    this->value[this->length] = character;
    this->value[this->length + 1] = '\0';

    this->length++;
}

