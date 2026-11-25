// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140007380  size: 822 bytes
// Name:    FUN_140007380
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144394fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140007380(longlong param_1,ulonglong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong unaff_GS_OFFSET;
  byte bVar16;
  undefined1 auVar17 [16];
  longlong lStack_b0;
  uint uStack_a4;
  char cStack_a0;
  int iStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined8 uStack_63;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined3 uStack_53;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  
  iVar12 = (int)param_2;
  if (param_3 == 0) {
    return (undefined8 *)0x0;
  }
  bVar8 = (byte)param_2;
  bVar16 = bVar8 & 0x7f;
  uVar15 = param_2 >> 7 & 0x1ffffff;
  auVar17._0_8_ =
       CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(bVar8,CONCAT12(bVar8,
                                                  CONCAT11(bVar8,bVar8))))))) & 0x7f7f7f7f7f7f7f7f;
  auVar17[8] = bVar16;
  auVar17[9] = bVar16;
  auVar17[10] = bVar16;
  auVar17[0xb] = bVar16;
  auVar17[0xc] = bVar16;
  auVar17[0xd] = bVar16;
  auVar17[0xe] = bVar16;
  auVar17[0xf] = bVar16;
  do {
    uVar14 = (uint)uVar15 & param_3 - 1U;
    auVar3 = *(undefined1 (*) [16])(param_4 + (ulonglong)uVar14 * 0x510);
    auVar4 = vpcmpeqb_avx(auVar3,auVar17);
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
            (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
    if (uVar5 != 0) {
      uVar13 = (uint)uVar5;
      do {
        uVar6 = 0;
        for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        if (*(int *)((ulonglong)uVar14 * 0x510 + param_4 + 0x10 + (ulonglong)(uVar6 * 0x50)) ==
            iVar12) {
          uVar14 = uVar14 << 4 | uVar6;
          lVar1 = (ulonglong)((uVar6 & 0xf) * 0x50) + 0x10 +
                  param_4 + (ulonglong)(uVar14 >> 4) * 0x510;
          if (uVar14 == 0xffffffff) {
            return (undefined8 *)0x0;
          }
          param_1 = param_1 + 8;
          iStack_98 = iVar12;
          if ((*(char *)(*(longlong *)
                          (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
               == '\0') &&
             (func_0x0001455db994(param_1),
             *(char *)(*(longlong *)
                        (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
             '\0')) {
            func_0x0001455db994(param_1);
            uStack_88 = _DAT_145fc6ee0;
            uStack_80 = _UNK_145fc6ee8;
            uStack_58 = 0;
            uStack_53 = 0;
            uStack_78 = 0;
            uStack_70 = SUB325(ZEXT832(0),4);
            uStack_6b = 0;
            uStack_68 = 0;
            uStack_63 = 0;
            uStack_5b = 0;
            uStack_50 = 0xffffffff;
            uStack_4c = 10;
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
              uStack_4b = 0;
              if (*(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8) == '\0') {
                func_0x0001455db994();
              }
              goto LAB_1400074b6;
            }
          }
          else {
            uStack_70 = SUB325(ZEXT832(0),4);
          }
          uStack_78 = 0;
          uStack_53 = 0;
          uStack_58 = 0;
          uStack_5b = 0;
          uStack_63 = 0;
          uStack_68 = 0;
          uStack_6b = 0;
          uStack_4c = 10;
          uStack_50 = 0xffffffff;
          uStack_4b = 0;
          uStack_88 = _DAT_145fc6ee0;
          uStack_80 = _UNK_145fc6ee8;
LAB_1400074b6:
          uStack_4a = 0;
          FUN_144394fd0(param_1,&lStack_b0);
          if (cStack_a0 == '\0') {
            uVar15 = (ulonglong)(uStack_a4 >> 4);
          }
          else {
            uVar15 = (ulonglong)(uStack_a4 >> 4);
            puVar2 = (undefined8 *)
                     ((ulonglong)((uStack_a4 & 0xf) * 0x50) + 0x20 + uVar15 * 0x510 + lStack_b0);
            *(int *)(puVar2 + -2) = iVar12;
            *(ulonglong *)((longlong)puVar2 + 0x1d) = CONCAT53(uStack_68,uStack_6b);
            *(undefined8 *)((longlong)puVar2 + 0x25) = uStack_63;
            *(ulonglong *)((longlong)puVar2 + 0x2d) = CONCAT53(uStack_58,uStack_5b);
            *(ulonglong *)((longlong)puVar2 + 0x35) =
                 CONCAT17(uStack_4c,CONCAT43(uStack_50,uStack_53));
            *puVar2 = uStack_88;
            puVar2[1] = uStack_80;
            puVar2[2] = uStack_78;
            puVar2[3] = CONCAT35(uStack_6b,uStack_70);
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
            *(undefined1 *)((longlong)puVar2 + 0x3d) = uStack_4b;
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
            *(undefined1 *)((longlong)puVar2 + 0x3e) = 0;
          }
          puVar2 = (undefined8 *)
                   ((ulonglong)((uStack_a4 & 0xf) * 0x50) + 0x20 + uVar15 * 0x510 + lStack_b0);
          if (cStack_a0 == '\0') {
            return puVar2;
          }
          uVar9 = *(undefined8 *)(lVar1 + 0x18);
          uVar10 = *(undefined8 *)(lVar1 + 0x20);
          uVar11 = *(undefined8 *)(lVar1 + 0x28);
          *puVar2 = *(undefined8 *)(lVar1 + 0x10);
          puVar2[1] = uVar9;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
          uVar9 = *(undefined8 *)(lVar1 + 0x38);
          puVar2[4] = *(undefined8 *)(lVar1 + 0x30);
          puVar2[5] = uVar9;
          *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(lVar1 + 0x40);
          *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)(lVar1 + 0x44);
          *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(lVar1 + 0x48);
          *(undefined1 *)((longlong)puVar2 + 0x3c) = *(undefined1 *)(lVar1 + 0x4c);
          *(undefined1 *)((longlong)puVar2 + 0x3d) = *(undefined1 *)(lVar1 + 0x4d);
          *(undefined1 *)((longlong)puVar2 + 0x3e) = *(undefined1 *)(lVar1 + 0x4e);
          *(undefined1 *)((longlong)puVar2 + 0x3d) = 0;
          return puVar2;
        }
        uVar13 = uVar13 - 1 & uVar13;
      } while (uVar13 != 0);
    }
    auVar3 = vpsignb_avx(auVar3,auVar3);
    if ((((((((((((((((SUB161(auVar3 >> 7,0) & 1) != 0 || (SUB161(auVar3 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar3 >> 0x17,0) & 1) != 0) || (SUB161(auVar3 >> 0x1f,0) & 1) != 0) ||
                  (SUB161(auVar3 >> 0x27,0) & 1) != 0) || (SUB161(auVar3 >> 0x2f,0) & 1) != 0) ||
                (SUB161(auVar3 >> 0x37,0) & 1) != 0) || (SUB161(auVar3 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar3 >> 0x47,0) & 1) != 0) || (SUB161(auVar3 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar3 >> 0x57,0) & 1) != 0) || (SUB161(auVar3 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar3 >> 0x67,0) & 1) != 0) || (SUB161(auVar3 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar3 >> 0x77,0) & 1) != 0) || auVar3[0xf] < '\0') {
      return (undefined8 *)0x0;
    }
    uVar15 = (ulonglong)(uVar14 + 1);
  } while( true );
}

