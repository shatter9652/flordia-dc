// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140145ca0  size: 2528 bytes
// Name:    FUN_140145ca0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401467f0, FUN_141daf440, FUN_141f8a7a0, FUN_141d2ddc0, FUN_140145400, FUN_141f8a5e0, FUN_14500a600, FUN_1455ae5a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140145ca0(longlong param_1)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  byte bVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  undefined1 auStack_58 [16];
  
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar18 = *(int *)(param_1 + 0x24);
  uVar27 = (ulonglong)iVar18;
  if (0 < (longlong)uVar27) {
    FUN_141daf440(param_1 + 0x48,iVar18 * iVar18);
    auStack_58._0_12_ = ZEXT812(0);
    auStack_58._12_4_ = 0;
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)(**(longlong **)(param_1 + 0x28) + 0xf0) + 0x80) + 0xb8);
    FUN_141d2ddc0(auStack_58,iVar18);
    uVar16 = auStack_58._8_8_;
    lVar24 = 0x3c;
    lVar26 = 0;
    do {
      lVar20 = *(longlong *)(param_1 + 0x28);
      lVar29 = *(longlong *)(*(longlong *)(lVar20 + -0x3c + lVar24) + 0xf0);
      if (*(char *)(lVar20 + lVar24) == '\x01') {
        lVar19 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar29 + 0x80) + 0x20),
                                     *(undefined4 *)(lVar29 + 0x88));
        if (((((*(longlong *)(lVar19 + 0x100) == 0) && (*(longlong *)(lVar19 + 0x108) == 0)) &&
             (*(longlong *)(lVar19 + 0x110) == 0)) &&
            ((((*(longlong *)(lVar19 + 0x118) == 0 && (*(longlong *)(lVar19 + 0x120) == 0)) &&
              ((*(longlong *)(lVar19 + 0x128) == 0 &&
               ((*(longlong *)(lVar19 + 0x130) == 0 && (*(longlong *)(lVar19 + 0x138) == 0)))))) &&
             (*(longlong *)(lVar19 + 0x280) == 0)))) &&
           ((((((*(longlong *)(lVar19 + 0x288) == 0 && (*(longlong *)(lVar19 + 0x290) == 0)) &&
               (*(longlong *)(lVar19 + 0x298) == 0)) &&
              ((*(longlong *)(lVar19 + 0x2a0) == 0 && (*(longlong *)(lVar19 + 0x2a8) == 0)))) &&
             ((*(longlong *)(lVar19 + 0x2b0) == 0 &&
              ((*(longlong *)(lVar19 + 0x2b8) == 0 && (*(longlong *)(lVar19 + 0x400) == 0)))))) &&
            (((((*(longlong *)(lVar19 + 0x408) == 0 &&
                (((((*(longlong *)(lVar19 + 0x410) == 0 && (*(longlong *)(lVar19 + 0x418) == 0)) &&
                   (*(longlong *)(lVar19 + 0x420) == 0)) &&
                  ((*(longlong *)(lVar19 + 0x428) == 0 && (*(longlong *)(lVar19 + 0x430) == 0)))) &&
                 (*(longlong *)(lVar19 + 0x438) == 0)))) &&
               (((*(longlong *)(lVar19 + 0x580) == 0 && (*(longlong *)(lVar19 + 0x588) == 0)) &&
                ((*(longlong *)(lVar19 + 0x590) == 0 &&
                 (((*(longlong *)(lVar19 + 0x598) == 0 && (*(longlong *)(lVar19 + 0x5a0) == 0)) &&
                  (*(longlong *)(lVar19 + 0x5a8) == 0)))))))) &&
              (((*(longlong *)(lVar19 + 0x5b0) == 0 && (*(longlong *)(lVar19 + 0x5b8) == 0)) &&
               (*(longlong *)(lVar19 + 0x700) == 0)))) &&
             ((((*(longlong *)(lVar19 + 0x708) == 0 && (*(longlong *)(lVar19 + 0x710) == 0)) &&
               ((*(longlong *)(lVar19 + 0x718) == 0 &&
                (((*(longlong *)(lVar19 + 0x720) == 0 && (*(longlong *)(lVar19 + 0x728) == 0)) &&
                 (*(longlong *)(lVar19 + 0x730) == 0)))))) && (*(longlong *)(lVar19 + 0x738) == 0)))
             ))))) {
          *(undefined1 *)(lVar20 + lVar24) = 0;
        }
        else {
          *(undefined1 *)(lVar20 + lVar24) = 2;
LAB_140145f36:
          lVar20 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar29 + 0x80) + 0x20),
                                       *(undefined4 *)(lVar29 + 0x88));
          uVar8 = *(undefined8 *)(lVar20 + 0x780);
          uVar9 = *(undefined8 *)(lVar20 + 0x788);
          uVar11 = *(undefined8 *)(lVar20 + 0x790);
          uVar12 = *(undefined8 *)(lVar20 + 0x798);
          uVar13 = *(undefined8 *)(lVar20 + 0x7a8);
          uVar14 = *(undefined8 *)(lVar20 + 0x7b0);
          uVar15 = *(undefined8 *)(lVar20 + 0x7b8);
          puVar3 = (undefined8 *)(uVar16 + 0x180 + lVar26);
          puVar4 = (undefined8 *)(uVar16 + 0x300 + lVar26);
          puVar5 = (undefined8 *)(uVar16 + 0x480 + lVar26);
          puVar6 = (undefined8 *)(uVar16 + 0x600 + lVar26);
          puVar3[-0x2c] = *(undefined8 *)(lVar20 + 0x7a0);
          puVar3[-0x2b] = uVar13;
          puVar3[-0x2a] = uVar14;
          puVar3[-0x29] = uVar15;
          puVar3[-0x30] = uVar8;
          puVar3[-0x2f] = uVar9;
          puVar3[-0x2e] = uVar11;
          puVar3[-0x2d] = uVar12;
          uVar8 = *(undefined8 *)(lVar20 + 0x7c0);
          uVar9 = *(undefined8 *)(lVar20 + 0x7c8);
          uVar11 = *(undefined8 *)(lVar20 + 2000);
          uVar12 = *(undefined8 *)(lVar20 + 0x7d8);
          uVar13 = *(undefined8 *)(lVar20 + 0x7e8);
          uVar14 = *(undefined8 *)(lVar20 + 0x7f0);
          uVar15 = *(undefined8 *)(lVar20 + 0x7f8);
          puVar3[-0x24] = *(undefined8 *)(lVar20 + 0x7e0);
          puVar3[-0x23] = uVar13;
          puVar3[-0x22] = uVar14;
          puVar3[-0x21] = uVar15;
          puVar3[-0x28] = uVar8;
          puVar3[-0x27] = uVar9;
          puVar3[-0x26] = uVar11;
          puVar3[-0x25] = uVar12;
          uVar8 = *(undefined8 *)(lVar20 + 0x800);
          uVar9 = *(undefined8 *)(lVar20 + 0x808);
          uVar11 = *(undefined8 *)(lVar20 + 0x810);
          uVar12 = *(undefined8 *)(lVar20 + 0x818);
          uVar13 = *(undefined8 *)(lVar20 + 0x828);
          uVar14 = *(undefined8 *)(lVar20 + 0x830);
          uVar15 = *(undefined8 *)(lVar20 + 0x838);
          puVar3[-0x1c] = *(undefined8 *)(lVar20 + 0x820);
          puVar3[-0x1b] = uVar13;
          puVar3[-0x1a] = uVar14;
          puVar3[-0x19] = uVar15;
          puVar3[-0x20] = uVar8;
          puVar3[-0x1f] = uVar9;
          puVar3[-0x1e] = uVar11;
          puVar3[-0x1d] = uVar12;
          uVar8 = *(undefined8 *)(lVar20 + 0x840);
          uVar9 = *(undefined8 *)(lVar20 + 0x848);
          uVar11 = *(undefined8 *)(lVar20 + 0x850);
          uVar12 = *(undefined8 *)(lVar20 + 0x858);
          uVar13 = *(undefined8 *)(lVar20 + 0x868);
          uVar14 = *(undefined8 *)(lVar20 + 0x870);
          uVar15 = *(undefined8 *)(lVar20 + 0x878);
          puVar3[-0x14] = *(undefined8 *)(lVar20 + 0x860);
          puVar3[-0x13] = uVar13;
          puVar3[-0x12] = uVar14;
          puVar3[-0x11] = uVar15;
          puVar3[-0x18] = uVar8;
          puVar3[-0x17] = uVar9;
          puVar3[-0x16] = uVar11;
          puVar3[-0x15] = uVar12;
          uVar8 = *(undefined8 *)(lVar20 + 0x880);
          uVar9 = *(undefined8 *)(lVar20 + 0x888);
          uVar11 = *(undefined8 *)(lVar20 + 0x890);
          uVar12 = *(undefined8 *)(lVar20 + 0x898);
          uVar13 = *(undefined8 *)(lVar20 + 0x8a8);
          uVar14 = *(undefined8 *)(lVar20 + 0x8b0);
          uVar15 = *(undefined8 *)(lVar20 + 0x8b8);
          puVar3[-0xc] = *(undefined8 *)(lVar20 + 0x8a0);
          puVar3[-0xb] = uVar13;
          puVar3[-10] = uVar14;
          puVar3[-9] = uVar15;
          puVar3[-0x10] = uVar8;
          puVar3[-0xf] = uVar9;
          puVar3[-0xe] = uVar11;
          puVar3[-0xd] = uVar12;
          uVar8 = *(undefined8 *)(lVar20 + 0x8c8);
          uVar9 = *(undefined8 *)(lVar20 + 0x8d0);
          uVar11 = *(undefined8 *)(lVar20 + 0x8d8);
          uVar12 = *(undefined8 *)(lVar20 + 0x8e0);
          uVar13 = *(undefined8 *)(lVar20 + 0x8e8);
          uVar14 = *(undefined8 *)(lVar20 + 0x8f0);
          uVar15 = *(undefined8 *)(lVar20 + 0x8f8);
          puVar3[-8] = *(undefined8 *)(lVar20 + 0x8c0);
          puVar3[-7] = uVar8;
          puVar3[-6] = uVar9;
          puVar3[-5] = uVar11;
          puVar3[-4] = uVar12;
          puVar3[-3] = uVar13;
          puVar3[-2] = uVar14;
          puVar3[-1] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0x908);
          uVar9 = *(undefined8 *)(lVar20 + 0x910);
          uVar11 = *(undefined8 *)(lVar20 + 0x918);
          uVar12 = *(undefined8 *)(lVar20 + 0x920);
          uVar13 = *(undefined8 *)(lVar20 + 0x928);
          uVar14 = *(undefined8 *)(lVar20 + 0x930);
          uVar15 = *(undefined8 *)(lVar20 + 0x938);
          *puVar3 = *(undefined8 *)(lVar20 + 0x900);
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar11;
          puVar3[4] = uVar12;
          puVar3[5] = uVar13;
          puVar3[6] = uVar14;
          puVar3[7] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0x940);
          uVar9 = *(undefined8 *)(lVar20 + 0x948);
          uVar11 = *(undefined8 *)(lVar20 + 0x950);
          uVar12 = *(undefined8 *)(lVar20 + 0x958);
          uVar13 = *(undefined8 *)(lVar20 + 0x968);
          uVar14 = *(undefined8 *)(lVar20 + 0x970);
          uVar15 = *(undefined8 *)(lVar20 + 0x978);
          puVar3[0xc] = *(undefined8 *)(lVar20 + 0x960);
          puVar3[0xd] = uVar13;
          puVar3[0xe] = uVar14;
          puVar3[0xf] = uVar15;
          puVar3[8] = uVar8;
          puVar3[9] = uVar9;
          puVar3[10] = uVar11;
          puVar3[0xb] = uVar12;
          uVar8 = *(undefined8 *)(lVar20 + 0x988);
          uVar9 = *(undefined8 *)(lVar20 + 0x990);
          uVar11 = *(undefined8 *)(lVar20 + 0x998);
          uVar12 = *(undefined8 *)(lVar20 + 0x9a0);
          uVar13 = *(undefined8 *)(lVar20 + 0x9a8);
          uVar14 = *(undefined8 *)(lVar20 + 0x9b0);
          uVar15 = *(undefined8 *)(lVar20 + 0x9b8);
          puVar3[0x10] = *(undefined8 *)(lVar20 + 0x980);
          puVar3[0x11] = uVar8;
          puVar3[0x12] = uVar9;
          puVar3[0x13] = uVar11;
          puVar3[0x14] = uVar12;
          puVar3[0x15] = uVar13;
          puVar3[0x16] = uVar14;
          puVar3[0x17] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0x9c8);
          uVar9 = *(undefined8 *)(lVar20 + 0x9d0);
          uVar11 = *(undefined8 *)(lVar20 + 0x9d8);
          uVar12 = *(undefined8 *)(lVar20 + 0x9e0);
          uVar13 = *(undefined8 *)(lVar20 + 0x9e8);
          uVar14 = *(undefined8 *)(lVar20 + 0x9f0);
          uVar15 = *(undefined8 *)(lVar20 + 0x9f8);
          puVar3[0x18] = *(undefined8 *)(lVar20 + 0x9c0);
          puVar3[0x19] = uVar8;
          puVar3[0x1a] = uVar9;
          puVar3[0x1b] = uVar11;
          puVar3[0x1c] = uVar12;
          puVar3[0x1d] = uVar13;
          puVar3[0x1e] = uVar14;
          puVar3[0x1f] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xa08);
          uVar9 = *(undefined8 *)(lVar20 + 0xa10);
          uVar11 = *(undefined8 *)(lVar20 + 0xa18);
          uVar12 = *(undefined8 *)(lVar20 + 0xa20);
          uVar13 = *(undefined8 *)(lVar20 + 0xa28);
          uVar14 = *(undefined8 *)(lVar20 + 0xa30);
          uVar15 = *(undefined8 *)(lVar20 + 0xa38);
          puVar3[0x20] = *(undefined8 *)(lVar20 + 0xa00);
          puVar3[0x21] = uVar8;
          puVar3[0x22] = uVar9;
          puVar3[0x23] = uVar11;
          puVar3[0x24] = uVar12;
          puVar3[0x25] = uVar13;
          puVar3[0x26] = uVar14;
          puVar3[0x27] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xa48);
          uVar9 = *(undefined8 *)(lVar20 + 0xa50);
          uVar11 = *(undefined8 *)(lVar20 + 0xa58);
          uVar12 = *(undefined8 *)(lVar20 + 0xa60);
          uVar13 = *(undefined8 *)(lVar20 + 0xa68);
          uVar14 = *(undefined8 *)(lVar20 + 0xa70);
          uVar15 = *(undefined8 *)(lVar20 + 0xa78);
          puVar3[0x28] = *(undefined8 *)(lVar20 + 0xa40);
          puVar3[0x29] = uVar8;
          puVar3[0x2a] = uVar9;
          puVar3[0x2b] = uVar11;
          puVar3[0x2c] = uVar12;
          puVar3[0x2d] = uVar13;
          puVar3[0x2e] = uVar14;
          puVar3[0x2f] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xa80);
          uVar9 = *(undefined8 *)(lVar20 + 0xa88);
          uVar11 = *(undefined8 *)(lVar20 + 0xa90);
          uVar12 = *(undefined8 *)(lVar20 + 0xa98);
          uVar13 = *(undefined8 *)(lVar20 + 0xaa8);
          uVar14 = *(undefined8 *)(lVar20 + 0xab0);
          uVar15 = *(undefined8 *)(lVar20 + 0xab8);
          puVar4[4] = *(undefined8 *)(lVar20 + 0xaa0);
          puVar4[5] = uVar13;
          puVar4[6] = uVar14;
          puVar4[7] = uVar15;
          *puVar4 = uVar8;
          puVar4[1] = uVar9;
          puVar4[2] = uVar11;
          puVar4[3] = uVar12;
          uVar8 = *(undefined8 *)(lVar20 + 0xac8);
          uVar9 = *(undefined8 *)(lVar20 + 0xad0);
          uVar11 = *(undefined8 *)(lVar20 + 0xad8);
          uVar12 = *(undefined8 *)(lVar20 + 0xae0);
          uVar13 = *(undefined8 *)(lVar20 + 0xae8);
          uVar14 = *(undefined8 *)(lVar20 + 0xaf0);
          uVar15 = *(undefined8 *)(lVar20 + 0xaf8);
          puVar4[8] = *(undefined8 *)(lVar20 + 0xac0);
          puVar4[9] = uVar8;
          puVar4[10] = uVar9;
          puVar4[0xb] = uVar11;
          puVar4[0xc] = uVar12;
          puVar4[0xd] = uVar13;
          puVar4[0xe] = uVar14;
          puVar4[0xf] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xb08);
          uVar9 = *(undefined8 *)(lVar20 + 0xb10);
          uVar11 = *(undefined8 *)(lVar20 + 0xb18);
          uVar12 = *(undefined8 *)(lVar20 + 0xb20);
          uVar13 = *(undefined8 *)(lVar20 + 0xb28);
          uVar14 = *(undefined8 *)(lVar20 + 0xb30);
          uVar15 = *(undefined8 *)(lVar20 + 0xb38);
          puVar4[0x10] = *(undefined8 *)(lVar20 + 0xb00);
          puVar4[0x11] = uVar8;
          puVar4[0x12] = uVar9;
          puVar4[0x13] = uVar11;
          puVar4[0x14] = uVar12;
          puVar4[0x15] = uVar13;
          puVar4[0x16] = uVar14;
          puVar4[0x17] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xb48);
          uVar9 = *(undefined8 *)(lVar20 + 0xb50);
          uVar11 = *(undefined8 *)(lVar20 + 0xb58);
          uVar12 = *(undefined8 *)(lVar20 + 0xb60);
          uVar13 = *(undefined8 *)(lVar20 + 0xb68);
          uVar14 = *(undefined8 *)(lVar20 + 0xb70);
          uVar15 = *(undefined8 *)(lVar20 + 0xb78);
          puVar4[0x18] = *(undefined8 *)(lVar20 + 0xb40);
          puVar4[0x19] = uVar8;
          puVar4[0x1a] = uVar9;
          puVar4[0x1b] = uVar11;
          puVar4[0x1c] = uVar12;
          puVar4[0x1d] = uVar13;
          puVar4[0x1e] = uVar14;
          puVar4[0x1f] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xb80);
          uVar9 = *(undefined8 *)(lVar20 + 0xb88);
          uVar11 = *(undefined8 *)(lVar20 + 0xb90);
          uVar12 = *(undefined8 *)(lVar20 + 0xb98);
          uVar13 = *(undefined8 *)(lVar20 + 0xba8);
          uVar14 = *(undefined8 *)(lVar20 + 0xbb0);
          uVar15 = *(undefined8 *)(lVar20 + 3000);
          puVar4[0x24] = *(undefined8 *)(lVar20 + 0xba0);
          puVar4[0x25] = uVar13;
          puVar4[0x26] = uVar14;
          puVar4[0x27] = uVar15;
          puVar4[0x20] = uVar8;
          puVar4[0x21] = uVar9;
          puVar4[0x22] = uVar11;
          puVar4[0x23] = uVar12;
          uVar8 = *(undefined8 *)(lVar20 + 0xbc8);
          uVar9 = *(undefined8 *)(lVar20 + 0xbd0);
          uVar11 = *(undefined8 *)(lVar20 + 0xbd8);
          uVar12 = *(undefined8 *)(lVar20 + 0xbe0);
          uVar13 = *(undefined8 *)(lVar20 + 0xbe8);
          uVar14 = *(undefined8 *)(lVar20 + 0xbf0);
          uVar15 = *(undefined8 *)(lVar20 + 0xbf8);
          puVar4[0x28] = *(undefined8 *)(lVar20 + 0xbc0);
          puVar4[0x29] = uVar8;
          puVar4[0x2a] = uVar9;
          puVar4[0x2b] = uVar11;
          puVar4[0x2c] = uVar12;
          puVar4[0x2d] = uVar13;
          puVar4[0x2e] = uVar14;
          puVar4[0x2f] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xc08);
          uVar9 = *(undefined8 *)(lVar20 + 0xc10);
          uVar11 = *(undefined8 *)(lVar20 + 0xc18);
          uVar12 = *(undefined8 *)(lVar20 + 0xc20);
          uVar13 = *(undefined8 *)(lVar20 + 0xc28);
          uVar14 = *(undefined8 *)(lVar20 + 0xc30);
          uVar15 = *(undefined8 *)(lVar20 + 0xc38);
          *puVar5 = *(undefined8 *)(lVar20 + 0xc00);
          puVar5[1] = uVar8;
          puVar5[2] = uVar9;
          puVar5[3] = uVar11;
          puVar5[4] = uVar12;
          puVar5[5] = uVar13;
          puVar5[6] = uVar14;
          puVar5[7] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xc40);
          uVar9 = *(undefined8 *)(lVar20 + 0xc48);
          uVar11 = *(undefined8 *)(lVar20 + 0xc50);
          uVar12 = *(undefined8 *)(lVar20 + 0xc58);
          uVar13 = *(undefined8 *)(lVar20 + 0xc68);
          uVar14 = *(undefined8 *)(lVar20 + 0xc70);
          uVar15 = *(undefined8 *)(lVar20 + 0xc78);
          puVar5[0xc] = *(undefined8 *)(lVar20 + 0xc60);
          puVar5[0xd] = uVar13;
          puVar5[0xe] = uVar14;
          puVar5[0xf] = uVar15;
          puVar5[8] = uVar8;
          puVar5[9] = uVar9;
          puVar5[10] = uVar11;
          puVar5[0xb] = uVar12;
          uVar8 = *(undefined8 *)(lVar20 + 0xc80);
          uVar9 = *(undefined8 *)(lVar20 + 0xc88);
          uVar11 = *(undefined8 *)(lVar20 + 0xc90);
          uVar12 = *(undefined8 *)(lVar20 + 0xc98);
          uVar13 = *(undefined8 *)(lVar20 + 0xca8);
          uVar14 = *(undefined8 *)(lVar20 + 0xcb0);
          uVar15 = *(undefined8 *)(lVar20 + 0xcb8);
          puVar5[0x14] = *(undefined8 *)(lVar20 + 0xca0);
          puVar5[0x15] = uVar13;
          puVar5[0x16] = uVar14;
          puVar5[0x17] = uVar15;
          puVar5[0x10] = uVar8;
          puVar5[0x11] = uVar9;
          puVar5[0x12] = uVar11;
          puVar5[0x13] = uVar12;
          uVar8 = *(undefined8 *)(lVar20 + 0xcc8);
          uVar9 = *(undefined8 *)(lVar20 + 0xcd0);
          uVar11 = *(undefined8 *)(lVar20 + 0xcd8);
          uVar12 = *(undefined8 *)(lVar20 + 0xce0);
          uVar13 = *(undefined8 *)(lVar20 + 0xce8);
          uVar14 = *(undefined8 *)(lVar20 + 0xcf0);
          uVar15 = *(undefined8 *)(lVar20 + 0xcf8);
          puVar5[0x18] = *(undefined8 *)(lVar20 + 0xcc0);
          puVar5[0x19] = uVar8;
          puVar5[0x1a] = uVar9;
          puVar5[0x1b] = uVar11;
          puVar5[0x1c] = uVar12;
          puVar5[0x1d] = uVar13;
          puVar5[0x1e] = uVar14;
          puVar5[0x1f] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xd08);
          uVar9 = *(undefined8 *)(lVar20 + 0xd10);
          uVar11 = *(undefined8 *)(lVar20 + 0xd18);
          uVar12 = *(undefined8 *)(lVar20 + 0xd20);
          uVar13 = *(undefined8 *)(lVar20 + 0xd28);
          uVar14 = *(undefined8 *)(lVar20 + 0xd30);
          uVar15 = *(undefined8 *)(lVar20 + 0xd38);
          puVar5[0x20] = *(undefined8 *)(lVar20 + 0xd00);
          puVar5[0x21] = uVar8;
          puVar5[0x22] = uVar9;
          puVar5[0x23] = uVar11;
          puVar5[0x24] = uVar12;
          puVar5[0x25] = uVar13;
          puVar5[0x26] = uVar14;
          puVar5[0x27] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xd48);
          uVar9 = *(undefined8 *)(lVar20 + 0xd50);
          uVar11 = *(undefined8 *)(lVar20 + 0xd58);
          uVar12 = *(undefined8 *)(lVar20 + 0xd60);
          uVar13 = *(undefined8 *)(lVar20 + 0xd68);
          uVar14 = *(undefined8 *)(lVar20 + 0xd70);
          uVar15 = *(undefined8 *)(lVar20 + 0xd78);
          puVar5[0x28] = *(undefined8 *)(lVar20 + 0xd40);
          puVar5[0x29] = uVar8;
          puVar5[0x2a] = uVar9;
          puVar5[0x2b] = uVar11;
          puVar5[0x2c] = uVar12;
          puVar5[0x2d] = uVar13;
          puVar5[0x2e] = uVar14;
          puVar5[0x2f] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xd80);
          uVar9 = *(undefined8 *)(lVar20 + 0xd88);
          uVar11 = *(undefined8 *)(lVar20 + 0xd90);
          uVar12 = *(undefined8 *)(lVar20 + 0xd98);
          uVar13 = *(undefined8 *)(lVar20 + 0xda8);
          uVar14 = *(undefined8 *)(lVar20 + 0xdb0);
          uVar15 = *(undefined8 *)(lVar20 + 0xdb8);
          puVar6[4] = *(undefined8 *)(lVar20 + 0xda0);
          puVar6[5] = uVar13;
          puVar6[6] = uVar14;
          puVar6[7] = uVar15;
          *puVar6 = uVar8;
          puVar6[1] = uVar9;
          puVar6[2] = uVar11;
          puVar6[3] = uVar12;
          uVar8 = *(undefined8 *)(lVar20 + 0xdc8);
          uVar9 = *(undefined8 *)(lVar20 + 0xdd0);
          uVar11 = *(undefined8 *)(lVar20 + 0xdd8);
          uVar12 = *(undefined8 *)(lVar20 + 0xde0);
          uVar13 = *(undefined8 *)(lVar20 + 0xde8);
          uVar14 = *(undefined8 *)(lVar20 + 0xdf0);
          uVar15 = *(undefined8 *)(lVar20 + 0xdf8);
          puVar6[8] = *(undefined8 *)(lVar20 + 0xdc0);
          puVar6[9] = uVar8;
          puVar6[10] = uVar9;
          puVar6[0xb] = uVar11;
          puVar6[0xc] = uVar12;
          puVar6[0xd] = uVar13;
          puVar6[0xe] = uVar14;
          puVar6[0xf] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xe08);
          uVar9 = *(undefined8 *)(lVar20 + 0xe10);
          uVar11 = *(undefined8 *)(lVar20 + 0xe18);
          uVar12 = *(undefined8 *)(lVar20 + 0xe20);
          uVar13 = *(undefined8 *)(lVar20 + 0xe28);
          uVar14 = *(undefined8 *)(lVar20 + 0xe30);
          uVar15 = *(undefined8 *)(lVar20 + 0xe38);
          puVar6[0x10] = *(undefined8 *)(lVar20 + 0xe00);
          puVar6[0x11] = uVar8;
          puVar6[0x12] = uVar9;
          puVar6[0x13] = uVar11;
          puVar6[0x14] = uVar12;
          puVar6[0x15] = uVar13;
          puVar6[0x16] = uVar14;
          puVar6[0x17] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xe48);
          uVar9 = *(undefined8 *)(lVar20 + 0xe50);
          uVar11 = *(undefined8 *)(lVar20 + 0xe58);
          uVar12 = *(undefined8 *)(lVar20 + 0xe60);
          uVar13 = *(undefined8 *)(lVar20 + 0xe68);
          uVar14 = *(undefined8 *)(lVar20 + 0xe70);
          uVar15 = *(undefined8 *)(lVar20 + 0xe78);
          puVar6[0x18] = *(undefined8 *)(lVar20 + 0xe40);
          puVar6[0x19] = uVar8;
          puVar6[0x1a] = uVar9;
          puVar6[0x1b] = uVar11;
          puVar6[0x1c] = uVar12;
          puVar6[0x1d] = uVar13;
          puVar6[0x1e] = uVar14;
          puVar6[0x1f] = uVar15;
          uVar8 = *(undefined8 *)(lVar20 + 0xe80);
          uVar9 = *(undefined8 *)(lVar20 + 0xe88);
          uVar11 = *(undefined8 *)(lVar20 + 0xe90);
          uVar12 = *(undefined8 *)(lVar20 + 0xe98);
          uVar13 = *(undefined8 *)(lVar20 + 0xea8);
          uVar14 = *(undefined8 *)(lVar20 + 0xeb0);
          uVar15 = *(undefined8 *)(lVar20 + 0xeb8);
          puVar6[0x24] = *(undefined8 *)(lVar20 + 0xea0);
          puVar6[0x25] = uVar13;
          puVar6[0x26] = uVar14;
          puVar6[0x27] = uVar15;
          puVar6[0x20] = uVar8;
          puVar6[0x21] = uVar9;
          puVar6[0x22] = uVar11;
          puVar6[0x23] = uVar12;
          uVar8 = *(undefined8 *)(lVar20 + 0xec8);
          uVar9 = *(undefined8 *)(lVar20 + 0xed0);
          uVar11 = *(undefined8 *)(lVar20 + 0xed8);
          uVar12 = *(undefined8 *)(lVar20 + 0xee0);
          uVar13 = *(undefined8 *)(lVar20 + 0xee8);
          uVar14 = *(undefined8 *)(lVar20 + 0xef0);
          uVar15 = *(undefined8 *)(lVar20 + 0xef8);
          puVar6[0x28] = *(undefined8 *)(lVar20 + 0xec0);
          puVar6[0x29] = uVar8;
          puVar6[0x2a] = uVar9;
          puVar6[0x2b] = uVar11;
          puVar6[0x2c] = uVar12;
          puVar6[0x2d] = uVar13;
          puVar6[0x2e] = uVar14;
          puVar6[0x2f] = uVar15;
          FUN_1455ae5a0(uVar16 + lVar26,*(undefined4 *)(lVar7 + 0x1b34));
          FUN_1455ae5a0(puVar3,*(undefined4 *)(lVar7 + 0x1b34));
          FUN_1455ae5a0(puVar4,*(undefined4 *)(lVar7 + 0x1b34));
          FUN_1455ae5a0(puVar5,*(undefined4 *)(lVar7 + 0x1b34));
          FUN_1455ae5a0(puVar6,*(undefined4 *)(lVar7 + 0x1b34));
        }
      }
      else if ((byte)(*(char *)(lVar20 + lVar24) - 1U) < 2) goto LAB_140145f36;
      lVar26 = lVar26 + 0x780;
      lVar24 = lVar24 + 0x48;
    } while (uVar27 * 0x780 != lVar26);
    uVar16 = auStack_58._8_8_;
    uStack_68 = 1;
    lStack_70 = 0x48;
    uVar22 = 0;
    lStack_60 = auStack_58._8_8_;
    do {
      lStack_60 = lStack_60 + 0x780;
      uVar1 = uVar22 + 1;
      if (uVar1 < uVar27) {
        uVar8 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar22 * 0x48) + 0xf0)
        ;
        lVar24 = lStack_60;
        lVar26 = lStack_70;
        uVar28 = uStack_68;
        do {
          uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar26) + 0xf0);
          cVar17 = FUN_14500a600(lVar7 + 0x1ad0,uVar8,uVar9,0,1);
          if (cVar17 == '\0') {
            cVar17 = FUN_141f8a5e0(lVar7,uVar9,uVar22 * 0x780 + uVar16);
            if (cVar17 == '\0') {
              cVar17 = FUN_141f8a5e0(lVar7,uVar8,lVar24);
              bVar21 = 1;
              if (cVar17 == '\0') goto LAB_140146501;
            }
          }
          else {
            cVar17 = FUN_140145400(uVar8,uVar9);
            bVar21 = 1;
            if (cVar17 == '\0') {
              cVar17 = FUN_140145400(uVar9,uVar8);
              bVar21 = 2 - cVar17;
            }
LAB_140146501:
            iVar18 = *(int *)(param_1 + 0x24);
            lVar20 = *(longlong *)(param_1 + 0x50);
            pbVar2 = (byte *)(lVar20 + (ulonglong)(uint)(iVar18 * (int)uVar28 + (int)uVar22));
            *pbVar2 = *pbVar2 | bVar21;
            pbVar2 = (byte *)(lVar20 + (ulonglong)(uint)((int)uVar22 * iVar18 + (int)uVar28));
            *pbVar2 = *pbVar2 | bVar21;
          }
          uVar28 = uVar28 + 1;
          lVar24 = lVar24 + 0x780;
          lVar26 = lVar26 + 0x48;
        } while (uVar27 != uVar28);
      }
      uStack_68 = uStack_68 + 1;
      lStack_70 = lStack_70 + 0x48;
      uVar22 = uVar1;
    } while (uVar1 != uVar27);
    lVar24 = *(longlong *)(param_1 + 0x28);
    uVar22 = 0;
    do {
      lVar26 = *(longlong *)(lVar24 + uVar22 * 0x48);
      lVar20 = (longlong)*(int *)(lVar26 + 300);
      if (0 < lVar20) {
        iVar18 = *(int *)(param_1 + 0x24);
        lVar26 = *(longlong *)(lVar26 + 0x130);
        lVar29 = *(longlong *)(param_1 + 0x50);
        lVar19 = 0;
        do {
          lVar10 = *(longlong *)(lVar26 + lVar19 * 8);
          if (*(longlong *)(lVar10 + 0x150) == param_1) {
            iVar23 = (int)*(short *)(lVar10 + 0x192);
            pbVar2 = (byte *)(lVar29 + (ulonglong)(uint)(iVar18 * iVar23 + (int)uVar22));
            *pbVar2 = *pbVar2 | 4;
            pbVar2 = (byte *)(lVar29 + (ulonglong)(uint)(iVar23 + iVar18 * (int)uVar22));
            *pbVar2 = *pbVar2 | 4;
          }
          lVar19 = lVar19 + 1;
        } while (lVar20 != lVar19);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar27);
    iVar18 = *(int *)(param_1 + 0x24);
    if (0 < iVar18) {
      iVar23 = 1;
      lVar26 = 0x48;
      lVar24 = 0;
      do {
        lVar29 = lVar24 + 1;
        lVar20 = (longlong)iVar18;
        if (lVar29 < lVar20) {
          uVar8 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar24 * 0x48) + 0xf0);
          lVar20 = lVar26;
          iVar25 = iVar23;
          do {
            if ((*(byte *)(*(longlong *)(param_1 + 0x50) +
                          (ulonglong)(uint)(iVar18 * iVar25 + (int)lVar24)) & 5) != 0) {
              FUN_1401467f0(lVar7 + 0x1ad0,uVar8,
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar20) + 0xf0));
              iVar18 = *(int *)(param_1 + 0x24);
            }
            iVar25 = iVar25 + 1;
            lVar20 = lVar20 + 0x48;
          } while (iVar25 < iVar18);
          lVar20 = (longlong)iVar18;
        }
        iVar23 = iVar23 + 1;
        lVar26 = lVar26 + 0x48;
        lVar24 = lVar29;
      } while (lVar29 < lVar20);
    }
    FUN_141f8a7a0(param_1,uVar27);
    if (uVar16 != 0) {
      func_0x000144d9c130();
    }
  }
  return;
}

