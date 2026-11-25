// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140113c30  size: 293 bytes
// Name:    FUN_140113c30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402eb370, FUN_144dd7510, FUN_144fcdf50, FUN_144ef6160, FUN_1401331f0, FUN_145226d60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140bf2a90) */
/* WARNING: Removing unreachable block (ram,0x000140bf2aa0) */
/* WARNING: Removing unreachable block (ram,0x000140bf2aac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140113c30(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auVar12 [64];
  undefined1 auStack_68 [16];
  undefined1 aauStack_58 [2] [16];
  undefined8 uStack_20;
  undefined4 uStack_1c;
  
  aauStack_58[0]._8_8_ = 0x140113c42;
  cVar4 = FUN_144ef6160();
  if (cVar4 != '\0') {
    aauStack_58[0]._8_8_ = 0x140113c51;
    lVar6 = FUN_144dd7510(*(undefined4 *)(param_1 + 0x9c));
    if (((lVar6 == 0) || (6 < *(byte *)(lVar6 + 0xfa))) ||
       ((0x62U >> (*(byte *)(lVar6 + 0xfa) & 0x1f) & 1) == 0)) {
      if (*(char *)(param_2 + 0x30) == '\x02') {
        aauStack_58[0]._8_8_ = 0x140113cbd;
        plVar7 = (longlong *)FUN_144fcdf50(param_1);
        if ((plVar7 != (longlong *)0x0) && ((int)plVar7[0x56b] == 1)) {
          aauStack_58[0]._8_8_ = 0x140113cda;
          cVar4 = (**(code **)(*plVar7 + 0x88))(plVar7);
          if ((cVar4 == '\0') && (uVar5 = *(uint *)((longlong)plVar7 + 0xac34), uVar5 != 0x1ffff)) {
            uVar3 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)(uVar5 & 0x1ffff) * 4);
            if ((((~uVar3 & *(uint *)(_DAT_14abbe8c8 + 6)) == 0) &&
                ((uVar3 & 0x7fe0000) == (uVar5 & 0xfffe0000))) &&
               ((ulonglong)((uVar5 & 0x1ffff) * (int)_DAT_14abbe8c8[1]) + *_DAT_14abbe8c8 == param_2
               )) {
              return 0;
            }
          }
        }
      }
      else if (*(char *)(param_2 + 0x30) == '\x03') {
        uVar2 = *(undefined4 *)(param_2 + 0x9c);
        aauStack_58[0]._8_8_ = 0x140113c95;
        cVar4 = func_0x000144e238f0(uVar2);
        if (cVar4 == '\0') {
          aauStack_58[0]._8_8_ = 0x140113ca0;
          cVar4 = FUN_145226d60(uVar2);
          if (cVar4 == '\0') {
            return 0;
          }
        }
        aauStack_58[0]._8_8_ = 0x140113cae;
        lVar6 = FUN_1402eb370(param_2,0);
        if (lVar6 != 0) {
          return 0;
        }
      }
      aauStack_58[0]._8_8_ = 0x140113d3e;
      FUN_1401331f0(&uStack_1c,param_1);
      lVar6 = func_0x000144fc04a0(*(undefined4 *)(param_2 + 0x9c));
      if (lVar6 == 0) {
        uVar9 = 0;
      }
      else {
        FUN_140004b40(0x1492c73e8);
        puVar8 = (undefined4 *)func_0x000144e28f80(lVar6);
        aauStack_58[0]._0_12_ = ZEXT812(0);
        aauStack_58[0]._12_4_ = 0;
        cVar4 = FUN_142acbc50(*puVar8,*(undefined8 *)(puVar8 + 2),uStack_1c,0,aauStack_58);
        uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        if (cVar4 == '\0') {
          lVar6 = func_0x000140c5f790(uStack_1c);
          if ((lVar6 == 0) || (uVar1 = *(ushort *)(lVar6 + 0x48), (ulonglong)uVar1 == 0)) {
            uVar9 = 0;
          }
          else {
            lVar6 = *(longlong *)(lVar6 + 0x40);
            auVar12 = ZEXT1264(ZEXT812(0));
            lVar10 = 0;
            do {
              auStack_68 = auVar12._0_16_;
              uVar5 = FUN_142acbc50(*puVar8,*(undefined8 *)(puVar8 + 2),
                                    *(undefined4 *)(lVar6 + lVar10),0,auStack_68);
              uVar9 = (ulonglong)uVar5;
              if ((char)uVar5 != '\0') break;
              bVar11 = (ulonglong)uVar1 * 4 + -4 != lVar10;
              lVar10 = lVar10 + 4;
            } while (bVar11);
          }
        }
        func_0x000144d9dab0(0x1492c73e8);
      }
      return uVar9 & 0xffffffff;
    }
  }
  return 0;
}

