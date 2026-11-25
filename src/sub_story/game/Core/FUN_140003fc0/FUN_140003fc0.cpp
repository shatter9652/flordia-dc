// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140003fc0  size: 563 bytes
// Name:    FUN_140003fc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140003fc0(int *param_1,uint *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  ushort uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong unaff_GS_OFFSET;
  undefined1 auVar18 [64];
  
  if ((ulonglong)*param_2 != 0) {
    auVar18 = ZEXT1264(ZEXT812(0));
    lVar17 = *(longlong *)(param_2 + 2);
    lVar11 = (ulonglong)*param_2 * 400 + lVar17;
    plVar3 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448);
    do {
      lVar14 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(lVar17 + lVar14))) {
          uVar10 = *(uint *)(lVar17 + 0x10 + lVar14 * 0x18);
          uVar15 = *(uint *)(lVar17 + 0x14 + lVar14 * 0x18);
          uVar10 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          uVar13 = (ulonglong)(uVar10 >> 0x10 ^ uVar10);
          uVar10 = (uVar15 >> 0x10 ^ uVar15) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          uVar12 = ((ulonglong)(uVar10 >> 0x10 ^ uVar10) + 0x651e95c4d06fbfb1 ^ uVar13) *
                   -0x622015f714c7d297;
          uVar13 = (uVar12 >> 0x2f ^ uVar13 ^ uVar12) * -0x622015f714c7d297;
          uVar13 = (uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
          uVar10 = (uint)(uVar13 >> 7) & 0x1ffffff;
          while( true ) {
            uVar10 = uVar10 & *param_1 - 1U;
            lVar16 = (ulonglong)uVar10 * 400;
            auVar6 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 2) + lVar16);
            auVar6 = vpsignb_avx(auVar6,auVar6);
            uVar8 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar6[0xf] >> 7) << 0xf;
            if (uVar8 != 0) break;
            uVar10 = uVar10 + 1;
          }
          uVar10 = 0;
          for (uVar15 = (uint)uVar8; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar10 = uVar10 + 1;
          }
          lVar16 = *(longlong *)(param_1 + 2) + lVar16;
          *(byte *)(lVar16 + (ulonglong)uVar10) = (byte)uVar13 & 0x7f;
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          puVar5 = (undefined4 *)(lVar16 + 0x10 + (ulonglong)uVar10 * 0x18);
          if (*plVar3 == 0) {
            *puVar5 = 0;
          }
          puVar4 = (undefined4 *)(lVar17 + 0x10 + lVar14 * 0x18);
          *puVar5 = *puVar4;
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          if (*plVar3 == 0) {
            puVar5[1] = 0;
          }
          puVar5[1] = puVar4[1];
          uVar9 = *(undefined8 *)(puVar4 + 4);
          *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar4 + 2);
          *(undefined8 *)(puVar5 + 4) = uVar9;
          *(undefined1 (*) [16])(puVar4 + 2) = auVar18._0_16_;
          *(undefined1 *)(lVar17 + lVar14) = 0x80;
          plVar7 = *(longlong **)(puVar4 + 4);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar7 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar7 + 8))(plVar7);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0x10);
      lVar17 = lVar17 + 400;
    } while (lVar17 != lVar11);
  }
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}

