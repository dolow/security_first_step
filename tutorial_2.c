#include <stdio.h>
#include <string.h>

#define GET_FLAG q8x5_

void GET_FLAG(char* f) {
  f[0] = 112;
  f[1] = 106;
  f[2] = 102;
  f[3] = 113;
  f[4] = 101;
  f[5] = 120;
  f[6] = 114;
  f[7] = 107;
  f[8] = 104;
  f[9] = 45;
  f[10] = 92;
  f[11] = 97;
  f[12] = 94;
  f[13] = 46;
  f[14] = 112;
  f[15] = 114;
  f[16] = 104;
  f[17] = 46;
  f[18] = 122;
  
  for (int i = 0; i < 19; i++) {
    f[i] = f[i] + 3;
  }
}

int main(const int argc, const char** argv) {
    printf("%s\n", "Enter the password ?");
    char s[256];
    char f[256];
    scanf("%s", s);
    GET_FLAG(f);
    int ret = strcmp(f, s);
    if (ret == 0) {
        printf("correct! flag is %s\n", f);
    }
    else {
        printf("wrong!\n");
    }
    return 0;
}
