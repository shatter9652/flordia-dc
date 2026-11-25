// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401881b0  size: 66 bytes
// Name:    FUN_1401881b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401881b0(longlong param_1,byte *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  ulonglong in_RAX;
  ulonglong uVar9;
  undefined8 unaff_RBX;
  uint uVar10;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  bool bVar15;
  undefined1 auVar16 [16];
  byte bVar14;
  
  if ((*(longlong **)(param_1 + 8) == (longlong *)0x0) ||
     (in_RAX = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(), (char)in_RAX != '\0')) {
    return in_RAX;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  *(uint *)(plVar2 + 9) = *(uint *)(plVar2 + 9) & 0xffffffef | (param_3 & 0xff) << 4;
  uVar12 = *(uint *)(plVar2[1] + 8);
  if (uVar12 != 0) {
    if (*(int *)(_DAT_14ab73ae8 + 0x20) != 0) {
      lVar3 = *(longlong *)(_DAT_14ab73ae8 + 0x28);
      bVar14 = (byte)uVar12;
      bVar13 = bVar14 & 0x7f;
      uVar11 = uVar12 >> 7;
      auVar16._0_8_ =
           CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(bVar14,CONCAT13(bVar14,CONCAT12(
                                                  bVar14,CONCAT11(bVar14,bVar14))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar16[8] = bVar13;
      auVar16[9] = bVar13;
      auVar16[10] = bVar13;
      auVar16[0xb] = bVar13;
      auVar16[0xc] = bVar13;
      auVar16[0xd] = bVar13;
      auVar16[0xe] = bVar13;
      auVar16[0xf] = bVar13;
      while( true ) {
        uVar11 = uVar11 & *(int *)(_DAT_14ab73ae8 + 0x20) - 1U;
        auVar1 = *(undefined1 (*) [16])(lVar3 + (ulonglong)uVar11 * 0x110);
        auVar4 = vpcmpeqb_avx(auVar1,auVar16);
        uVar5 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
        if (uVar5 != 0) {
          uVar10 = (uint)uVar5;
          do {
            uVar6 = 0;
            for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            if (*(uint *)((ulonglong)uVar11 * 0x110 + lVar3 + 0x10 + (ulonglong)(uVar6 << 4)) ==
                uVar12) {
              uVar11 = uVar11 << 4 | uVar6;
              if (uVar11 == 0xffffffff) goto code_r0x000140188331;
              uVar9 = (ulonglong)(uVar11 >> 4);
              cVar8 = FUN_140244f40((ulonglong)((uVar6 & 0xf) << 4) + 0x14 + lVar3 + uVar9 * 0x110,0
                                    ,uVar9,uVar12,unaff_RBX,unaff_RDI,unaff_RSI);
              if (cVar8 != '\0') {
                *param_2 = 1;
                return 0;
              }
              uVar12 = *(uint *)(plVar2 + 9);
              if (iRam000000014ab5cde0 != 2) {
                *(uint *)(plVar2 + 9) = uVar12 & 0xfffffff1;
                uVar12 = (**(code **)(*plVar2 + 0x40))
                                   (plVar2,param_2,0,uVar12 & 0xfffffff1,unaff_RSI);
                uVar9 = (ulonglong)uVar12;
                *param_2 = (byte)uVar12 ^ 1;
                goto code_r0x000140242846;
              }
              uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
              if ((uVar12 & 4) != 0) goto code_r0x000140242846;
              uVar11 = uRam00000001492d7af4;
              if ((uVar12 & 1) == 0) goto code_r0x0001402427e5;
              if ((uVar12 & 2) == 0) goto code_r0x000140242846;
              uVar12 = uVar12 & 0xfffffff9;
              goto code_r0x000140242842;
            }
            uVar10 = uVar10 - 1 & uVar10;
          } while (uVar10 != 0);
        }
        auVar1 = vpsignb_avx(auVar1,auVar1);
        if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar1 >> 0x17,0) & 1) != 0) || (SUB161(auVar1 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar1 >> 0x27,0) & 1) != 0) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar1 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar1 >> 0x3f,0) & 1) != 0) || (SUB161(auVar1 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar1 >> 0x4f,0) & 1) != 0) || (SUB161(auVar1 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar1 >> 0x5f,0) & 1) != 0) || (SUB161(auVar1 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar1 >> 0x6f,0) & 1) != 0) || (SUB161(auVar1 >> 0x77,0) & 1) != 0) ||
            auVar1[0xf] < '\0') break;
        uVar11 = uVar11 + 1;
      }
    }
code_r0x000140188331:
    *param_2 = 1;
  }
  return 0;
code_r0x0001402427e5:
  do {
    if (uVar11 == uRam00000001492d7af0) goto code_r0x000140242813;
    LOCK();
    bVar15 = uVar11 != uRam00000001492d7af4;
    uVar10 = uVar11 + 1;
    if (bVar15) {
      uVar11 = uRam00000001492d7af4;
      uVar10 = uRam00000001492d7af4;
    }
    uRam00000001492d7af4 = uVar10;
    UNLOCK();
  } while (bVar15);
  *(longlong **)(lRam00000001492d7af8 + (ulonglong)uVar11 * 8) = plVar2;
  uVar12 = *(uint *)(plVar2 + 9);
  if (uVar11 == uRam00000001492d7af0) {
code_r0x000140242813:
    uVar12 = uVar12 | 4;
  }
  else {
    uVar12 = (uVar12 & 0xfffffff4) + 1;
  }
code_r0x000140242842:
  *(uint *)(plVar2 + 9) = uVar12;
code_r0x000140242846:
  return uVar9 & 0xffffffff;
}

