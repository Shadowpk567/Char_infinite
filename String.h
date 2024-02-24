#ifndef STRING_H

#define STRING_H

typedef struct String {
    char *value;
    int capacity;
    int length;

    void (*appendCharacter)(struct String *this, char character);
} String;

String _String();
String _StringV(char *string);

String *new_String();
String *new_StringV(char *string);

void appendCharacter(String *this, char character);

#endif
