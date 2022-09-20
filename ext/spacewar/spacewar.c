#include "spacewar.h"

VALUE rb_mSpacewar;

void
Init_spacewar(void)
{
  rb_mSpacewar = rb_define_module("Spacewar");
}
