// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140145460  size: 893 bytes
// Name:    FUN_140145460
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141cc7e30, FUN_14554cb10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140145460(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_b98 [24];
  uint uStack_b80;
  uint uStack_b7c;
  ulonglong *puStack_b78;
  ulonglong auStack_b70 [100];
  undefined8 uStack_850;
  longlong *plStack_848;
  longlong alStack_840 [256];
  
  plStack_848 = alStack_840;
  puStack_b78 = auStack_b70;
  uVar5 = 0;
  uStack_b80 = 100;
  uStack_850 = 0x100;
  func_0x000145f40580(plStack_848,0,0x800);
  uStack_b7c = 1;
  auStack_b70[0] = param_1;
  FUN_141cc7e30(&uStack_850,auStack_b98);
  uVar10 = (ulonglong)uStack_b7c;
  if (uStack_b7c != 0) {
LAB_1401454f4:
    uVar11 = (int)uVar10 - 1;
    uVar10 = (ulonglong)uVar11;
    uVar5 = puStack_b78[uVar10];
    if (uVar5 != param_2) {
      uStack_b7c = uVar11;
      lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(uVar5 + 0x80) + 0x20),
                                  *(undefined4 *)(uVar5 + 0x88));
      if (*(short *)(lVar4 + 0xf08) != 0) {
        uVar10 = 0;
LAB_140145534:
        uVar1 = *(ulonglong *)(*(longlong *)(lVar4 + 0xf00) + uVar10 * 8);
        if (uVar1 == param_1) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
        if ((uVar1 == 0) || ((int)uStack_850 == 0)) {
LAB_1401455c6:
          uVar11 = uStack_b80;
          puVar8 = puStack_b78;
          if (uStack_b7c == uStack_b80) {
            puVar8 = auStack_b70;
            uVar11 = uStack_b7c >> 1;
            if (uStack_b7c < 2) {
              uVar11 = 1;
            }
            uVar11 = uVar11 + uStack_b7c;
            if (100 < uVar11) {
              puVar8 = (ulonglong *)func_0x000144d9c140(8,(ulonglong)uVar11 << 3);
            }
            if (uStack_b7c != 0) {
              func_0x000145f40560(puVar8,puStack_b78,(ulonglong)uStack_b7c << 3);
            }
            if (puStack_b78 != (ulonglong *)0x0 && auStack_b70 != puStack_b78) {
              func_0x000144d9c130(puStack_b78);
            }
          }
          puStack_b78 = puVar8;
          uStack_b80 = uVar11;
          puStack_b78[uStack_b7c] = uVar1;
          uVar6 = (uVar1 >> 0x21 ^ uVar1) * -0xae502812aa7333;
          lVar4 = (uVar6 >> 0x21 ^ uVar6) * -0x3b314601e57a13ad;
          uStack_b7c = uStack_b7c + 1;
          do {
            if ((int)uStack_850 != 0) {
              uVar11 = (int)uStack_850 - 1U & ((uint)((ulonglong)lVar4 >> 0x21) ^ (uint)lVar4);
              uVar6 = plStack_848[uVar11];
              if (uVar6 == uVar1) goto LAB_14014570e;
              puVar8 = (ulonglong *)(plStack_848 + uVar11);
              while (uVar6 != 0) {
                puVar8 = (ulonglong *)
                         (plStack_848 +
                         ((uint)((ulonglong)((longlong)puVar8 + (8 - (longlong)plStack_848)) >> 3) &
                         (int)uStack_850 - 1U));
                uVar6 = *puVar8;
                if (uVar6 == uVar1) goto LAB_14014570e;
              }
              if (uStack_850._4_4_ != (uint)((int)uStack_850 * 0x4b) / 100) goto LAB_140145704;
            }
            FUN_14554cb10(&uStack_850,(int)uStack_850 * 2);
          } while( true );
        }
        uVar6 = (uVar1 >> 0x21 ^ uVar1) * -0xae502812aa7333;
        lVar4 = (uVar6 >> 0x21 ^ uVar6) * -0x3b314601e57a13ad;
        uVar7 = (ulonglong)(((uint)((ulonglong)lVar4 >> 0x21) ^ (uint)lVar4) & (int)uStack_850 - 1U)
        ;
        uVar6 = plStack_848[uVar7];
        while ((uVar6 != 0 && (uVar6 != uVar1))) {
          uVar7 = (ulonglong)((uint)(uVar7 * 8 + 8 >> 3) & (int)uStack_850 - 1U);
          uVar6 = plStack_848[uVar7];
        }
        if (uVar6 == 0) goto LAB_1401455c6;
        goto LAB_14014570e;
      }
      goto LAB_14014573b;
    }
  }
LAB_14014574d:
  iVar3 = uStack_850._4_4_;
  plVar9 = plStack_848;
  while (iVar3 != 0) {
    if (*plVar9 != 0) {
      iVar3 = iVar3 + -1;
      *plVar9 = 0;
      uStack_850 = CONCAT44(iVar3,(int)uStack_850);
    }
    plVar9 = plVar9 + 1;
  }
  if (plStack_848 != (longlong *)0x0 && alStack_840 != plStack_848) {
    func_0x000144d9c130();
  }
  uStack_b7c = 0;
  if (puStack_b78 != (ulonglong *)0x0 && auStack_b70 != puStack_b78) {
    func_0x000144d9c130();
  }
  return uVar5;
LAB_140145704:
  *puVar8 = uVar1;
  uStack_850 = CONCAT44(uStack_850._4_4_ + 1,(int)uStack_850);
LAB_14014570e:
  uVar10 = uVar10 + 1;
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(uVar5 + 0x80) + 0x20),
                              *(undefined4 *)(uVar5 + 0x88));
  if (*(ushort *)(lVar4 + 0xf08) <= uVar10) goto code_r0x000140145737;
  goto LAB_140145534;
code_r0x000140145737:
  uVar10 = (ulonglong)uStack_b7c;
LAB_14014573b:
  if ((int)uVar10 == 0) goto code_r0x000140145743;
  goto LAB_1401454f4;
code_r0x000140145743:
  uVar5 = 0;
  goto LAB_14014574d;
}

