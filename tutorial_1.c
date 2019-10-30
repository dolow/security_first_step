#include <stdio.h>
#include <string.h>

int main(const int argc, const char** argv) {
    printf("%s\n", "Enter the password ?");
    char s[256];
    char* f = "smith{1_l0ve_unko}";
    scanf("%s", s);
    int ret = strcmp(f, s);
    if (ret == 0) {
        printf("correct! flag is %s\n", f);
    }
    else {
        printf("wrong!\n");
    }
    return 0;
}
