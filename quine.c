#include <stdio.h>

int main(void) {
  char *s="\
#include <stdio.h>\n\
int main(void) {\n\
  char *s=\n\
  printf(damn, s);\n\
  printf(damn, s);\n\
  printf(damn, s + 46);\n\
}";
  printf("%.47s", s);
  printf("%s", s);
  printf("%s", s + 46);
}
