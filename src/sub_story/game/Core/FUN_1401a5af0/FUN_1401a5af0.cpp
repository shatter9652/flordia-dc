// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a5af0  size: 968 bytes
// Name:    FUN_1401a5af0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd11b0, FUN_1402e5b80, FUN_1450a7260, FUN_145647140, FUN_14527df60, FUN_14527dee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a5af0(ulonglong param_1,undefined1 (*param_2) [16],char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong unaff_GS_OFFSET;
  uint auStack_118 [2];
  longlong lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  ulonglong uStack_c8;
  undefined1 auStack_b8 [20];
  uint uStack_a4;
  longlong lStack_a0;
  uint *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  longlong lStack_68;
  longlong *plStack_60;
  ulonglong uStack_58;
  undefined1 (*pauStack_50) [16];
  char cStack_41;
  
  puVar10 = auStack_118;
  param_1 = param_1 & 0xfffffffffffffff0;
  lVar12 = *(longlong *)(param_1 + 0x38);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x10) != 0)) {
    auVar4 = vcmpps_avx(*param_2,*(undefined1 (*) [16])(param_1 + 0x40),0);
    uVar6 = vmovmskps_avx(auVar4);
    if ((~(byte)uVar6 & 7) == 0) {
      auVar4 = vcmpps_avx(param_2[1],*(undefined1 (*) [16])(param_1 + 0x50),0);
      uVar6 = vmovmskps_avx(auVar4);
      if ((~(byte)uVar6 & 7) == 0) {
        auVar4 = vcmpps_avx(param_2[2],*(undefined1 (*) [16])(param_1 + 0x60),0);
        uVar6 = vmovmskps_avx(auVar4);
        if ((~(byte)uVar6 & 7) == 0) {
          auVar4 = vpcmpeqd_avx(*(undefined1 (*) [16])(param_1 + 0x70),param_2[3]);
          if ((auVar4[0xc] & 1) != 0) {
            auVar4 = vcmpps_avx(*(undefined1 (*) [16])(param_1 + 0x70),param_2[3],0);
            uVar6 = vmovmskps_avx(auVar4);
            if (((byte)uVar6 & 7) == 7) {
              return;
            }
          }
        }
      }
    }
    uVar8 = (ulonglong)*(ushort *)(_DAT_14abbf348 + 0x14);
    cStack_41 = param_3;
    if (*(short *)(_DAT_14abbf348 + 0x10) == -1) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      lVar7 = FUN_145647140();
      puVar10 = (uint *)((longlong)auStack_118 + -lVar7);
      puVar9 = (undefined1 *)((longlong)auStack_118 + -lVar7);
    }
    uStack_58 = param_1;
    pauStack_50 = param_2;
    if (uVar8 == 0) {
      puVar11 = (undefined1 *)((longlong)puVar10 + -0x30);
      *(undefined2 *)((longlong)puVar10 + -0x10) = 0;
    }
    else {
      *(undefined8 *)((longlong)puVar10 + -8) = 0x1401a5be5;
      lVar7 = FUN_145647140();
      puVar11 = (undefined1 *)((longlong)puVar10 + -lVar7 + -0x30);
      *(short *)((longlong)puVar10 + -lVar7 + -0x10) = (short)uVar8;
    }
    *(undefined8 *)(puVar11 + -8) = 0x1401a5c18;
    FUN_14527dee0(auStack_b8,puVar9);
    puVar11[0x20] = 1;
    lStack_68 = lVar12;
    *(undefined8 *)(puVar11 + -8) = 0x1401a5c3e;
    FUN_1450a7260(auStack_b8,lVar12,0,0);
    if (uStack_a4 != 0) {
      lVar7 = 0;
      plStack_60 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1400);
      lVar12 = _DAT_14abbf348;
      do {
        uVar1 = *(uint *)(lStack_a0 + lVar7);
        uVar8 = (ulonglong)((uVar1 & 0xffff) << 4);
        if (((((*(short *)(*(longlong *)(lVar12 + 0x28) + 8 + uVar8) == (short)(uVar1 >> 0x10)) &&
              (lVar2 = *(longlong *)(*(longlong *)(lVar12 + 0x28) + uVar8), lVar2 != 0)) &&
             ((*(byte *)(lVar2 + 0x154) & 1) != 0)) &&
            ((lVar3 = *(longlong *)(lVar2 + 0x48), lVar3 != 0 &&
             ((0x1cU >> (*(uint *)(lVar3 + 0x30) & 0x1f) & 1) != 0)))) &&
           ((lVar2 != lStack_68 && (char)*(uint *)(lVar3 + 0x30) == '\x04' &&
            ((*(byte *)(lVar2 + 0x1a) & 0x20) == 0)))) {
          uVar6 = *(undefined4 *)(lVar3 + 0x9c);
          *(undefined8 *)(puVar11 + 8) = 0x1401a5d00;
          cVar5 = FUN_144dd11b0(uVar6);
          if ((cVar5 == '\0') && ((cStack_41 != '\0' || (*(char *)(lVar2 + 0x156) != '\x01')))) {
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              *(undefined8 *)(puVar11 + 8) = 0x1401a5e45;
              func_0x0001455db994();
            }
            lVar12 = *plStack_60;
            cVar5 = '\a';
            if (lVar12 != 0) {
              if (*(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8) == '\0') {
                *(undefined8 *)(puVar11 + 8) = 0x1401a5e5f;
                func_0x0001455db994(7);
                lVar12 = *plStack_60;
              }
              cVar5 = '\a';
              if (*(longlong *)(lVar12 + 0x20) != 0) {
                if (*(char *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 8) == '\0') {
                  *(undefined8 *)(puVar11 + 8) = 0x1401a5e85;
                  func_0x0001455db994();
                }
                cVar5 = (*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1414) & 1) * '\x03' +
                        '\x04';
              }
            }
            puStack_88 = auStack_118;
            uStack_108 = *(undefined8 *)*pauStack_50;
            uStack_100 = *(undefined8 *)(*pauStack_50 + 8);
            uStack_f8 = *(undefined8 *)pauStack_50[1];
            uStack_f0 = *(undefined8 *)(pauStack_50[1] + 8);
            auStack_e8 = *(undefined1 (*) [32])(pauStack_50 + 2);
            pcStack_80 = FUN_143d4ca20;
            puStack_78 = &UNK_1424f6b80;
            puStack_70 = &SUB_140004380;
            auStack_118[0] = uVar1;
            lStack_110 = lVar3;
            uStack_c8 = uStack_58;
            *(undefined8 *)(puVar11 + 8) = 0x1401a5e1c;
            FUN_1402e5b80(cVar5,&puStack_88);
            lVar12 = _DAT_14abbf348;
          }
        }
        lVar7 = lVar7 + 4;
      } while ((ulonglong)uStack_a4 << 2 != lVar7);
    }
    *(undefined8 *)(puVar11 + 8) = 0x1401a5ea3;
    FUN_14527df60(auStack_b8);
  }
  return;
}

