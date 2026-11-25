// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14550ebe0  size: 680 bytes
// Name:    audAmbisonics::PrintDecoder
// Subsystem: audio
// Class:   audAmbisonics
//
// Evidence:
//   GTAVSRC: audAmbisonics::PrintDecoder  (rage/base/src/audioengine/ambisonics.cpp)
//   literal: %.3ff}, //FR
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14133d5d0, FUN_140f12920
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/audAmbisonics.h"


void audAmbisonics__PrintDecoder(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 auStack_188 [2];
  undefined1 aauStack_178 [5] [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_88 [16];
  
  aauStack_178[0][1] = DAT_146159519;
  aauStack_178[0][0] = DAT_146159519;
  aauStack_178[0][2] = DAT_146159519;
  aauStack_178[0][3] = DAT_146159519;
  aauStack_178[0][4] = DAT_146159519;
  aauStack_178[0][5] = DAT_146159519;
  aauStack_178[0][6] = DAT_146159519;
  aauStack_178[0][7] = DAT_146159519;
  aauStack_178[0][8] = DAT_146159519;
  aauStack_178[0][9] = DAT_146159519;
  aauStack_178[0][10] = DAT_146159519;
  aauStack_178[0][0xb] = DAT_146159519;
  aauStack_178[0][0xc] = DAT_146159519;
  aauStack_178[0][0xd] = DAT_146159519;
  aauStack_178[0][0xe] = DAT_146159519;
  aauStack_178[0][0xf] = DAT_146159519;
  auStack_188[0] = 4;
  auStack_128 = aauStack_178[0];
  auStack_d8 = aauStack_178[0];
  auStack_88 = aauStack_178[0];
  FUN_140f12920(param_2,param_3,auStack_188);
  uVar5 = (uint)auStack_188[0] << 4;
  if (uVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar2 = uVar4;
      if (!SBORROW1('\0',aauStack_178[(ulonglong)(uVar4 >> 4) * 5][uVar4 & 0xf])) break;
      uVar4 = uVar4 + 1;
      uVar2 = uVar5;
    } while (uVar5 != uVar4);
  }
  uVar4 = (uint)auStack_188[0] << 4;
  lVar3 = (ulonglong)(uVar2 >> 4) * 0x50;
  if (lVar3 + (ulonglong)(uVar2 & 0xf) * 4 != (ulonglong)uVar4 * 5) {
    lVar3 = lVar3 + 0x10 + (ulonglong)(uVar2 & 0xf) * 4;
    do {
      FUN_14133d5d0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(aauStack_178[0] + lVar3));
      uVar1 = uVar2;
      while (uVar2 = uVar5, uVar1 != uVar5) {
        while (uVar2 = uVar1 + 1, uVar1 = uVar2, uVar2 < uVar5) {
          if (!SBORROW1('\0',aauStack_178[(ulonglong)(uVar2 >> 4) * 5][uVar2 & 0xf]))
          goto LAB_14550edb3;
        }
      }
LAB_14550edb3:
      lVar3 = (ulonglong)(uVar2 >> 4) * 0x50 + 0x10 + (ulonglong)(uVar2 & 0xf) * 4;
    } while (lVar3 != (ulonglong)uVar4 * 5 + 0x10);
  }
  if ((uint)auStack_188[0] != 0) {
    lVar3 = 0;
    do {
      if (!SBORROW1('\0',aauStack_178[0][lVar3])) {
        aauStack_178[0][lVar3] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 1])) {
        aauStack_178[0][lVar3 + 1] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 2])) {
        aauStack_178[0][lVar3 + 2] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 3])) {
        aauStack_178[0][lVar3 + 3] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 4])) {
        aauStack_178[0][lVar3 + 4] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 5])) {
        aauStack_178[0][lVar3 + 5] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 6])) {
        aauStack_178[0][lVar3 + 6] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 7])) {
        aauStack_178[0][lVar3 + 7] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 8])) {
        aauStack_178[0][lVar3 + 8] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 9])) {
        aauStack_178[0][lVar3 + 9] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 10])) {
        aauStack_178[0][lVar3 + 10] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 0xb])) {
        aauStack_178[0][lVar3 + 0xb] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 0xc])) {
        aauStack_178[0][lVar3 + 0xc] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 0xd])) {
        aauStack_178[0][lVar3 + 0xd] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 0xe])) {
        aauStack_178[0][lVar3 + 0xe] = 0x80;
      }
      if (!SBORROW1('\0',aauStack_178[0][lVar3 + 0xf])) {
        aauStack_178[0][lVar3 + 0xf] = 0x80;
      }
      lVar3 = lVar3 + 0x50;
    } while ((ulonglong)(uint)auStack_188[0] * 0x50 != lVar3);
  }
  return;
}

