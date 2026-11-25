// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018ac00  size: 112 bytes
// Name:    FUN_14018ac00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd9c90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001452cdb20) */
/* WARNING: Removing unreachable block (ram,0x0001452cdb7d) */
/* WARNING: Removing unreachable block (ram,0x0001452cdb84) */
/* WARNING: Removing unreachable block (ram,0x0001452cdb36) */
/* WARNING: Removing unreachable block (ram,0x0001452cdb8b) */
/* WARNING: Removing unreachable block (ram,0x0001452cdba1) */
/* WARNING: Removing unreachable block (ram,0x0001452cdba5) */
/* WARNING: Removing unreachable block (ram,0x0001452cdbab) */
/* WARNING: Removing unreachable block (ram,0x0001452cdb3c) */
/* WARNING: Removing unreachable block (ram,0x0001452cdb44) */
/* WARNING: Removing unreachable block (ram,0x0001452cdb5b) */
/* WARNING: Removing unreachable block (ram,0x0001452cdb64) */
/* WARNING: Removing unreachable block (ram,0x0001452cdb70) */
/* WARNING: Removing unreachable block (ram,0x0001452cdb4a) */
/* WARNING: Removing unreachable block (ram,0x0001452cdb56) */
/* WARNING: Removing unreachable block (ram,0x0001452cda9b) */
/* WARNING: Removing unreachable block (ram,0x0001452cdb0f) */

longlong * FUN_14018ac00(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong *in_RAX;
  longlong lVar5;
  longlong *plVar6;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  
  if (param_2 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_2 + 0x168))(param_2);
    in_RAX = (longlong *)FUN_144dd9c90(lVar5,*(undefined4 *)(param_1 + 0x8c));
    if (param_4 == '\0') {
      if (in_RAX != (longlong *)0x0) {
        plVar6 = (longlong *)in_RAX[1];
        if ((*plVar6 & 0x100000000) == 0) {
          bVar3 = *(byte *)((longlong)in_RAX + 0x1d);
          if ('\0' < (char)bVar3) {
            bVar3 = bVar3 - 1;
            *(byte *)((longlong)in_RAX + 0x1d) = bVar3;
          }
          plVar6 = (longlong *)(ulonglong)bVar3;
          if (bVar3 == 0) {
            uVar1 = *(ushort *)((longlong)in_RAX + 0x1e);
            plVar6 = (longlong *)(ulonglong)uVar1;
            if ((uVar1 & 0x20) == 0) {
              *(ushort *)((longlong)in_RAX + 0x1e) = uVar1 & 0xfedc;
              lVar5 = *in_RAX;
              if (lVar5 != 0) {
                lVar2 = *(longlong *)(lVar5 + 0x48);
                lVar5 = func_0x0001452cda10(*(undefined8 *)(lVar5 + 0x40));
                uVar1 = *(ushort *)(lVar2 + 0x1e);
                plVar6 = (longlong *)(ulonglong)uVar1;
                if ((uVar1 & 4) == 0) {
                  plVar6 = (longlong *)(ulonglong)(uVar1 | 4);
                  *(short *)(lVar2 + 0x1e) = (short)(uVar1 | 4);
                  *(byte *)(lVar5 + 0x46) = *(byte *)(lVar5 + 0x46) | 4;
                }
                return plVar6;
              }
              plVar6 = (longlong *)(ulonglong)(uVar1 & 0xfed0);
              *(short *)((longlong)in_RAX + 0x1e) = (short)(uVar1 & 0xfed0);
            }
          }
        }
        return plVar6;
      }
    }
    else if (in_RAX != (longlong *)0x0) {
      plVar6 = (longlong *)0x1;
      if ((in_RAX[1] != 0) && ((*(byte *)(in_RAX[1] + 4) & 1) == 0)) {
        uVar1 = *(ushort *)((longlong)in_RAX + 0x1e);
        *(ushort *)((longlong)in_RAX + 0x1e) = uVar1 | 0x101;
        if (*(char *)((longlong)in_RAX + 0x1d) != '\x7f') {
          *(char *)((longlong)in_RAX + 0x1d) = *(char *)((longlong)in_RAX + 0x1d) + '\x01';
        }
        uVar1 = uVar1 & 0xc;
        if (((lVar5 != 0) && (uVar1 != 8)) && (lVar2 = *(longlong *)(lVar5 + 0x48), lVar2 != 0)) {
          cVar4 = FUN_144f3d4b0(in_RAX,lVar2,lVar2,1,unaff_RBX,unaff_RDI,unaff_RSI);
          if (cVar4 != '\0') {
            func_0x0001404cba90(in_RAX,lVar5);
          }
        }
        plVar6 = (longlong *)0x1;
        if (uVar1 != 8) {
          plVar6 = (longlong *)(ulonglong)((*(byte *)((longlong)in_RAX + 0x1e) & 2) >> 1);
        }
      }
      return plVar6;
    }
  }
  return in_RAX;
}

