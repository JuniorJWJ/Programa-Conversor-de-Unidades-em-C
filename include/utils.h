#include <stdio.h>

typedef enum {
    INT,
    FLOAT,
    DOUBLE,
    CHAR
} DataType;

int input(void *value, DataType type, char *text) {
    printf("%s", text);
    
    const unsigned short MAX_INPUT_BUFFER_LENGTH = 256;
    char buffer[MAX_INPUT_BUFFER_LENGTH];
    
    if (fgets(buffer, MAX_INPUT_BUFFER_LENGTH, stdin) != NULL) {
        switch (type) {
            case INT:
                return sscanf(buffer, "%d", (int*)value);
            case FLOAT:
                return sscanf(buffer, "%f", (float*)value);
            case DOUBLE:
                return sscanf(buffer, "%lf", (double*)value);
            case CHAR:
                return sscanf(buffer, "%c", (char*)value);
            default:
                return 0;
        }
    }
    
    return 0;
}

float convert(char *inputText, char *inputUnity, char *outputText, char *outputUnity, float multiplier) {
    float i, o;
    input(&i, FLOAT, inputText);
    
    o = i * multiplier;
    printf("%f%s %s %f%s\n", i, inputUnity, outputText, o, outputUnity);
    
    return o;
}

void clearTerminal() {
    #ifdef _WIN32
        system("cls"); // Limpa o terminal no Windows
    #else
        system("clear"); // Limpa o terminal no Linux
    #endif
}
