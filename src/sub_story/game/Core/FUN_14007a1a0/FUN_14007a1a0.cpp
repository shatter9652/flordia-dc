// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007a1a0  size: 415 bytes
// Name:    FUN_14007a1a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007a1a0(longlong param_1,int *param_2,longlong param_3)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((((DAT_149a62eda == '\x01') && (*(char *)((longlong)param_2 + 0x86) == '\x04')) &&
      ((*(byte *)(param_2 + 0x32) & 1) != 0)) && ((float)param_2[0x13] < _DAT_149a62ed4)) {
    *(undefined1 *)((longlong)param_2 + 0x87) = 3;
  }
  uVar1 = *(ushort *)((longlong)param_2 + 0xc2);
  if ((uVar1 >> 0xc & 1) != 0) {
    if (*(byte *)((longlong)param_2 + 0x85) < DAT_149a62e8a) {
      *(undefined1 *)(param_2 + 0x1e) = *(undefined1 *)((longlong)param_2 + 0x79);
      bVar3 = *(byte *)((longlong)param_2 + 0x85);
    }
    else {
      bVar3 = DAT_149a62e8a;
      if (DAT_149a62e8a < (byte)param_2[0x1e]) {
        bVar3 = (byte)param_2[0x1e];
      }
      *(byte *)(param_2 + 0x1e) = bVar3;
      bVar3 = DAT_149a62e8a;
      if (DAT_149a62e8a < (byte)param_2[0x21]) {
        bVar3 = (byte)param_2[0x21];
      }
    }
    *(byte *)(param_2 + 0x21) = bVar3;
  }
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_2 + 0x32) = *(byte *)(param_2 + 0x32) | 8;
  }
  if ((uVar1 & 6) != 0) {
    bVar3 = 4;
    if (*(byte *)(param_3 + 0x7a) < 4) {
      bVar3 = *(byte *)(param_3 + 0x7a);
    }
    if (((uVar1 & 4) != 0) && ((byte)param_2[0x1e] < bVar3)) {
      bVar3 = (byte)param_2[0x1e];
    }
    *(byte *)(param_2 + 0x1e) = bVar3;
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    auVar2 = vminss_avx(ZEXT416(_DAT_145fc6ed8),ZEXT416(*(uint *)(param_3 + 0x80)));
    auVar5 = vcmpss_avx(ZEXT416(*(uint *)(param_3 + 0x80)),auVar5,1);
    auVar4._0_4_ = ~auVar5._0_4_ & auVar2._0_4_;
    auVar4._4_4_ = ~auVar5._4_4_ & auVar2._4_4_;
    auVar4._8_4_ = ~auVar5._8_4_ & auVar2._8_4_;
    auVar4._12_4_ = ~auVar5._12_4_ & auVar2._12_4_;
    param_2[0x20] = auVar4._0_4_;
    if (*(char *)(param_1 + 0xc) == '\x01') {
      auVar5 = vminss_avx(auVar4,ZEXT416((uint)param_2[0x23]));
      auVar4._0_4_ = auVar5._0_4_;
      if (*(byte *)((longlong)param_2 + 0x89) <= bVar3) {
        bVar3 = *(byte *)((longlong)param_2 + 0x89);
      }
    }
    *(byte *)((longlong)param_2 + 0x89) = bVar3;
    param_2[0x23] = auVar4._0_4_;
  }
  if ((uVar1 & 0x18) != 0) {
    bVar3 = 4;
    if (*(byte *)(param_3 + 0x86) < 4) {
      bVar3 = *(byte *)(param_3 + 0x86);
    }
    if (((uVar1 & 0x10) != 0) && ((byte)param_2[0x21] < bVar3)) {
      bVar3 = (byte)param_2[0x21];
    }
    *(byte *)(param_2 + 0x21) = bVar3;
  }
  if (((*(byte *)(param_2 + 0x33) & 2) != 0) && (DAT_149a62edb == '\x01')) {
    *(undefined1 *)(param_2 + 0x1e) = *(undefined1 *)((longlong)param_2 + 0x79);
    *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x85);
  }
  if ((((~*(byte *)((longlong)param_2 + 0xcb) & 0xa0) == 0) && (*param_2 == 1)) &&
     ((char)param_2[0x1e] == *(char *)(param_1 + 0xb))) {
    *(char *)(param_2 + 0x1e) = (char)param_2[0x1e] + -1;
  }
  return;
}

