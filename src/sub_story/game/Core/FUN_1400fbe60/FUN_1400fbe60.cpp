// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fbe60  size: 685 bytes
// Name:    FUN_1400fbe60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450b1080, FUN_144fd17e0, FUN_1450b0fe0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fbe60(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong auStack_288 [2];
  undefined1 (*pauStack_278) [16];
  undefined1 aauStack_268 [9] [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_b8 [16];
  
  aauStack_268[0][1] = DAT_14615968d;
  aauStack_268[0][0] = DAT_14615968d;
  aauStack_268[0][2] = DAT_14615968d;
  aauStack_268[0][3] = DAT_14615968d;
  aauStack_268[0][4] = DAT_14615968d;
  aauStack_268[0][5] = DAT_14615968d;
  aauStack_268[0][6] = DAT_14615968d;
  aauStack_268[0][7] = DAT_14615968d;
  aauStack_268[0][8] = DAT_14615968d;
  aauStack_268[0][9] = DAT_14615968d;
  aauStack_268[0][10] = DAT_14615968d;
  aauStack_268[0][0xb] = DAT_14615968d;
  aauStack_268[0][0xc] = DAT_14615968d;
  aauStack_268[0][0xd] = DAT_14615968d;
  aauStack_268[0][0xe] = DAT_14615968d;
  aauStack_268[0][0xf] = DAT_14615968d;
  auStack_288[0] = 4;
  pauStack_278 = aauStack_268;
  auStack_1d8 = aauStack_268[0];
  auStack_148 = aauStack_268[0];
  auStack_b8 = aauStack_268[0];
  FUN_1450b1080(auStack_288,*(undefined8 *)(*param_2 + 0x2a0),param_2[1]);
  FUN_1450b0fe0(*param_2);
  if (*(longlong *)(*param_2 + 0x298) != 0) {
    uVar1 = *(uint *)(param_1 + 0xa4);
    if ((ulonglong)uVar1 != 0) {
      lVar2 = 0;
      do {
        (**(code **)(**(longlong **)(param_1 + 0xa8 + lVar2) + 8))();
        lVar2 = lVar2 + 8;
      } while ((ulonglong)uVar1 << 3 != lVar2);
    }
    FUN_144fd17e0(param_1);
    uVar1 = *(uint *)(param_1 + 0xa4);
    if ((ulonglong)uVar1 != 0) {
      lVar2 = 0;
      do {
        (**(code **)(**(longlong **)(param_1 + 0xa8 + lVar2) + 0x20))();
        lVar2 = lVar2 + 8;
      } while ((ulonglong)uVar1 << 3 != lVar2);
    }
  }
  if ((auStack_288[0] & 0xffffffff) != 0) {
    lVar2 = 0;
    do {
      if (!SBORROW1('\0',(*pauStack_278)[lVar2])) {
        (*pauStack_278)[lVar2] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 1])) {
        (*pauStack_278)[lVar2 + 1] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 2])) {
        (*pauStack_278)[lVar2 + 2] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 3])) {
        (*pauStack_278)[lVar2 + 3] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 4])) {
        (*pauStack_278)[lVar2 + 4] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 5])) {
        (*pauStack_278)[lVar2 + 5] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 6])) {
        (*pauStack_278)[lVar2 + 6] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 7])) {
        (*pauStack_278)[lVar2 + 7] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 8])) {
        (*pauStack_278)[lVar2 + 8] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 9])) {
        (*pauStack_278)[lVar2 + 9] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 10])) {
        (*pauStack_278)[lVar2 + 10] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 0xb])) {
        (*pauStack_278)[lVar2 + 0xb] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 0xc])) {
        (*pauStack_278)[lVar2 + 0xc] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 0xd])) {
        (*pauStack_278)[lVar2 + 0xd] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 0xe])) {
        (*pauStack_278)[lVar2 + 0xe] = 0x80;
      }
      if (!SBORROW1('\0',(*pauStack_278)[lVar2 + 0xf])) {
        (*pauStack_278)[lVar2 + 0xf] = 0x80;
      }
      lVar2 = lVar2 + 0x90;
    } while ((auStack_288[0] & 0xffffffff) * 0x90 != lVar2);
  }
  auStack_288[0] = auStack_288[0] & 0xffffffff;
  if ((aauStack_268 != pauStack_278) && (pauStack_278 != (undefined1 (*) [16])0x0)) {
    func_0x000144d9c130();
  }
  return;
}

