#include <stdlib.h>
#include <stdio.h>

#include "lsample.h"

static int func1() {
  printf("Call func1.\n");
  return 0;
};

static int func2() {
  printf("Call func2.\n");
  return 0;
};

static const luaL_Reg funcs[] = {
  {"func1", func1},
  {"func2", func2},
  {NULL, NULL}
};

int luaopen_lsample(lua_State *L) {
  luaL_newlib(L, funcs);
  return 1;
};
