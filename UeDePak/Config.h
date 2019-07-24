#pragma once
#include "Selector.h"

EXTERN_C_START
void Fix_Jump_4_21();
// ....
EXTERN_C_END

const Config cfgs[] = {
  {"4.21", "\x48\x89\x5C\x24\x00\x0F\xB6\x42",  "xxxx?xxx", Fix_Jump_4_21},
  // ... 自己对着改
};
