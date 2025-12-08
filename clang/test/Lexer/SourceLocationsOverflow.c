// RUN: %clang %s -S -o - 2>&1 | FileCheck %s
// 64-bit SourceLocation: 这个测试现在检查“不要再因为 source location 溢出而报错”。
// 只要编译过程中没有出现旧的诊断文本，就算通过。
// CHECK-NOT: translation unit is too large for Clang to process
// CHECK-NOT: ran out of source locations
// CHECK-NOT: Ran out of source locations
// CHECK-NOT: this include generates a translation unit too large for Clang to process.
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
#include "Inputs/inc1.h"
