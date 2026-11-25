// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ed9a0  size: 663 bytes
// Name:    FUN_1400ed9a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400edc40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_1400ed9a0(uint param_1,longlong param_2,float param_3,int param_4,longlong param_5,
                 longlong param_6,longlong param_7)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ushort *puVar14;
  undefined1 auVar15 [64];
  int iStack_188;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  iVar3 = 0;
  if ((0 < param_4) && (0 < (int)param_1)) {
    auVar15 = ZEXT464((uint)(param_3 * param_3));
    iVar9 = 0;
    do {
      lVar13 = 0;
      iStack_188 = 0;
      puVar14 = (ushort *)(param_2 + 0xe);
      do {
        if ((*(byte *)(param_6 + lVar13) & 1) == 0) {
          lVar4 = (ulonglong)puVar14[-7] * 0x10;
          uStack_d8 = *(undefined8 *)(param_5 + lVar4);
          uStack_d0 = ((undefined8 *)(param_5 + lVar4))[1];
          uStack_158 = *(undefined8 *)(param_7 + lVar4);
          uStack_150 = ((undefined8 *)(param_7 + lVar4))[1];
          lVar10 = (ulonglong)puVar14[-6] * 0x10;
          uStack_c8 = *(undefined8 *)(param_5 + lVar10);
          uStack_c0 = ((undefined8 *)(param_5 + lVar10))[1];
          uStack_148 = *(undefined8 *)(param_7 + lVar10);
          uStack_140 = ((undefined8 *)(param_7 + lVar10))[1];
          lVar5 = (ulonglong)puVar14[-5] * 0x10;
          uStack_b8 = *(undefined8 *)(param_5 + lVar5);
          uStack_b0 = ((undefined8 *)(param_5 + lVar5))[1];
          uStack_138 = *(undefined8 *)(param_7 + lVar5);
          uStack_130 = ((undefined8 *)(param_7 + lVar5))[1];
          lVar7 = (ulonglong)puVar14[-4] * 0x10;
          uStack_a8 = *(undefined8 *)(param_5 + lVar7);
          uStack_a0 = ((undefined8 *)(param_5 + lVar7))[1];
          uStack_128 = *(undefined8 *)(param_7 + lVar7);
          uStack_120 = ((undefined8 *)(param_7 + lVar7))[1];
          lVar11 = (ulonglong)puVar14[-3] * 0x10;
          uStack_98 = *(undefined8 *)(param_5 + lVar11);
          uStack_90 = ((undefined8 *)(param_5 + lVar11))[1];
          uStack_118 = *(undefined8 *)(param_7 + lVar11);
          uStack_110 = ((undefined8 *)(param_7 + lVar11))[1];
          lVar6 = (ulonglong)puVar14[-2] * 0x10;
          uStack_88 = *(undefined8 *)(param_5 + lVar6);
          uStack_80 = ((undefined8 *)(param_5 + lVar6))[1];
          uStack_108 = *(undefined8 *)(param_7 + lVar6);
          uStack_100 = ((undefined8 *)(param_7 + lVar6))[1];
          lVar12 = (ulonglong)puVar14[-1] * 0x10;
          uStack_78 = *(undefined8 *)(param_5 + lVar12);
          uStack_70 = ((undefined8 *)(param_5 + lVar12))[1];
          uStack_f8 = *(undefined8 *)(param_7 + lVar12);
          uStack_f0 = ((undefined8 *)(param_7 + lVar12))[1];
          lVar8 = (ulonglong)*puVar14 * 0x10;
          uStack_68 = *(undefined8 *)(param_5 + lVar8);
          uStack_60 = ((undefined8 *)(param_5 + lVar8))[1];
          uStack_e8 = *(undefined8 *)(param_7 + lVar8);
          uStack_e0 = ((undefined8 *)(param_7 + lVar8))[1];
          cVar2 = FUN_1400edc40(&uStack_d8,&uStack_158,auVar15._0_8_);
          if (cVar2 != '\0') {
            iStack_188 = iStack_188 + 8;
            *(undefined8 *)(lVar4 + param_7) = uStack_158;
            ((undefined8 *)(lVar4 + param_7))[1] = uStack_150;
            *(undefined8 *)(lVar10 + param_7) = uStack_148;
            ((undefined8 *)(lVar10 + param_7))[1] = uStack_140;
            *(undefined8 *)(lVar5 + param_7) = uStack_138;
            ((undefined8 *)(lVar5 + param_7))[1] = uStack_130;
            *(undefined8 *)(lVar7 + param_7) = uStack_128;
            ((undefined8 *)(lVar7 + param_7))[1] = uStack_120;
            *(undefined8 *)(lVar11 + param_7) = uStack_118;
            ((undefined8 *)(lVar11 + param_7))[1] = uStack_110;
            auVar1._8_8_ = uStack_f0;
            auVar1._0_8_ = uStack_f8;
            *(undefined8 *)(lVar6 + param_7) = uStack_108;
            ((undefined8 *)(lVar6 + param_7))[1] = uStack_100;
            *(undefined1 (*) [16])(lVar12 + param_7) = auVar1;
            *(undefined8 *)(lVar8 + param_7) = uStack_e8;
            ((undefined8 *)(lVar8 + param_7))[1] = uStack_e0;
          }
        }
        lVar13 = lVar13 + 0x80;
        puVar14 = puVar14 + 0x16;
      } while ((ulonglong)param_1 << 7 != lVar13);
      iVar3 = iVar3 + 1;
      iVar9 = iVar9 + iStack_188;
    } while (iVar3 < param_4 && 0 < iStack_188);
    iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),iVar9 != 0);
  }
  return iVar3;
}

