// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003a9f0  size: 487 bytes
// Name:    FUN_14003a9f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140ea5ec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014003ab80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003a9f0(uint *param_1,uint param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  ushort uVar5;
  longlong *plVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 (*unaff_RBX) [16];
  longlong lVar13;
  ulonglong unaff_RSI;
  uint *unaff_RDI;
  uint uVar14;
  undefined8 *puVar15;
  longlong unaff_GS_OFFSET;
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined8 auStack_90 [6];
  ulonglong uStack_60;
  
  uVar4 = *(ulonglong *)(param_1 + 2);
  uVar2 = *param_1;
  uVar8 = 0x10;
  if (0x10 < param_2) {
    uVar8 = (ulonglong)param_2;
  }
  uVar8 = (uVar8 * 100 + 0x56) / 0x57 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = (uVar8 >> 0x10 | uVar8) + 1 >> 4;
  lVar13 = uVar8 * 0x210;
  auStack_90[0] = 0x14003aa81;
  lVar9 = func_0x000144d9c140(0x10,lVar13);
  auVar16[1] = DAT_146158f92;
  auVar16[0] = DAT_146158f92;
  auVar16[2] = DAT_146158f92;
  auVar16[3] = DAT_146158f92;
  auVar16[4] = DAT_146158f92;
  auVar16[5] = DAT_146158f92;
  auVar16[6] = DAT_146158f92;
  auVar16[7] = DAT_146158f92;
  auVar16[8] = DAT_146158f92;
  auVar16[9] = DAT_146158f92;
  auVar16[10] = DAT_146158f92;
  auVar16[0xb] = DAT_146158f92;
  auVar16[0xc] = DAT_146158f92;
  auVar16[0xd] = DAT_146158f92;
  auVar16[0xe] = DAT_146158f92;
  auVar16[0xf] = DAT_146158f92;
  lVar10 = 0;
  *(longlong *)(param_1 + 2) = lVar9;
  *param_1 = (uint)uVar8;
  do {
    *(undefined1 (*) [16])(lVar9 + lVar10) = auVar16;
    lVar10 = lVar10 + 0x210;
  } while (lVar13 - lVar10 != 0);
  if ((ulonglong)uVar2 != 0) {
    auVar17 = ZEXT1264(ZEXT812(0));
    uStack_60 = (ulonglong)uVar2 * 0x210 + uVar4;
    uVar8 = uVar4;
    do {
      lVar9 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(uVar8 + lVar9))) {
          uVar2 = *(uint *)(uVar8 + 0x10 + lVar9 * 0x20);
          uVar12 = uVar2 >> 7;
          while( true ) {
            uVar12 = uVar12 & *param_1 - 1;
            lVar10 = (ulonglong)uVar12 * 0x210;
            auVar16 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 2) + lVar10);
            auVar16 = vpsignb_avx(auVar16,auVar16);
            uVar5 = (ushort)(SUB161(auVar16 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar16[0xf] >> 7) << 0xf;
            if (uVar5 != 0) break;
            uVar12 = uVar12 + 1;
          }
          uVar12 = 0;
          for (uVar14 = (uint)uVar5; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          lVar10 = *(longlong *)(param_1 + 2) + lVar10;
          puVar15 = (undefined8 *)(lVar9 * 0x20 + uVar8 + 0x10);
          *(byte *)(lVar10 + (ulonglong)uVar12) = (byte)uVar2 & 0x7f;
          pauVar1 = (undefined1 (*) [16])(lVar10 + 0x18 + (ulonglong)(uVar12 << 5));
          *(undefined8 *)(pauVar1[-1] + 8) = *puVar15;
          *pauVar1 = auVar17._0_16_;
          auStack_90[0] = 0x14003ab62;
          FUN_140ea5ec0(pauVar1,puVar15 + 1);
          *(undefined8 *)pauVar1[1] = puVar15[3];
          *(undefined1 *)(uVar8 + lVar9) = 0x80;
          *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
          if (puVar15[2] != 0) {
            register0x00000020 = (BADSPACEBASE *)auStack_90;
            auStack_90[0] = 0x14003ab85;
            uVar8 = puVar15[2];
            unaff_RBX = pauVar1;
            unaff_RSI = uVar4;
            unaff_RDI = param_1;
            goto FUN_140003ab0;
          }
          *(undefined4 *)(puVar15 + 1) = 0;
          puVar15[2] = 0;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x10);
      uVar8 = uVar8 + 0x210;
    } while (uVar8 != uStack_60);
  }
  uVar8 = uVar4;
  if (uVar4 == 0) {
    return;
  }
FUN_140003ab0:
  *(ulonglong *)((longlong)register0x00000020 + -8) = unaff_RSI;
  *(uint **)((longlong)register0x00000020 + -0x10) = unaff_RDI;
  *(undefined1 (**) [16])((longlong)register0x00000020 + -0x18) = unaff_RBX;
  if (uVar8 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003ae4;
      func_0x0001455db994();
    }
    plVar6 = _DAT_14aad45b0;
    lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar11 = *(longlong **)(lVar9 + 0x13a8);
    if (plVar11 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b50;
        func_0x0001455db994();
      }
      *(longlong **)(lVar9 + 0x13a8) = plVar6;
      plVar11 = plVar6;
    }
    pcVar3 = *(code **)(*plVar11 + 200);
    *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b0b;
    cVar7 = (*pcVar3)(plVar11,uVar8);
    if (cVar7 != '\0') {
code_r0x000140093420:
      if (uVar8 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x10))();
      return;
    }
    if (((uVar8 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar8)) &&
       ((uVar8 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar8)))) {
      *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b96;
      FUN_14005a140((undefined8 *)((longlong)register0x00000020 + -0x28));
      plVar11 = *(longlong **)((longlong)register0x00000020 + -0x28);
      do {
        if (plVar11 == (longlong *)0x0) {
LAB_140003bea:
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bf4;
          FUN_14005a120((undefined1 *)((longlong)register0x00000020 + -0x28));
LAB_140003bf4:
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = *(code **)(*plVar11 + 200);
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003baa;
        cVar7 = (*pcVar3)(plVar11,uVar8);
        plVar11 = *(longlong **)((longlong)register0x00000020 + -0x28);
        if (cVar7 != '\0') {
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bcf;
          FUN_14005a120((undefined1 *)((longlong)register0x00000020 + -0x28));
          if (plVar11 == (longlong *)0x0) goto LAB_140003bf4;
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bdf;
          goto code_r0x000140093420;
        }
        if (plVar11 == *(longlong **)((longlong)register0x00000020 + -0x20)) {
          *(undefined8 *)((longlong)register0x00000020 + -0x28) = 0;
          goto LAB_140003bea;
        }
        plVar11 = (longlong *)plVar11[1];
        *(longlong **)((longlong)register0x00000020 + -0x28) = plVar11;
      } while( true );
    }
  }
  return;
}

