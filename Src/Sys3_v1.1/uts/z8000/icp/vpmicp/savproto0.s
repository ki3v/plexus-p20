.globl  _proto0inst
.globl  _proto0data
.globl  _proto0stksize

_proto0inst:
#include "proto0code.s"
_proto0data: . = . + SSTACK
_proto0stksize:
.word SSTACK
