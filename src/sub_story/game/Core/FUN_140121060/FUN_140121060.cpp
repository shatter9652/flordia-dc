// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140121060  size: 645 bytes
// Name:    FUN_140121060
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dbce00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140121060(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong unaff_GS_OFFSET;
  bool bVar10;
  undefined1 auVar11 [64];
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  longlong lStack_c0;
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [12];
  undefined4 uStack_9c;
  undefined1 auStack_98 [12];
  undefined4 auStack_88 [2];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar5 = 0;
  LOCK();
  bVar10 = DAT_148d45550 == 0;
  if (bVar10) {
    DAT_148d45550 = 1;
  }
  else {
    uVar5 = (ulonglong)DAT_148d45550;
  }
  UNLOCK();
  if (bVar10) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar8 = _DAT_148d452f0;
    lVar6 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    if ((_DAT_148d452f0 != 0) && ((ushort)(*(short *)(_DAT_148d452f0 + 0x12) - 1U) < _DAT_14a943ab8)
       ) {
      lVar4 = *(longlong *)(lVar6 + 0x12a8);
      *(undefined1 *)(lVar4 + 0x121a4) = 1;
      uStack_c8 = 0xffffffff;
      uStack_c4 = 0xffff;
      FUN_144dbce00(lVar4,0,lVar8,&uStack_c8,0x119);
    }
    plVar3 = (longlong *)(lVar6 + 0x12a8);
    if ((ulonglong)_DAT_148d4551c != 0) {
      auVar11 = ZEXT1264(ZEXT812(0));
      puVar9 = _DAT_148d45520 + (ulonglong)_DAT_148d4551c * 0xb;
      puVar7 = _DAT_148d45520;
      do {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        lStack_c0 = _DAT_148d452f0;
        lVar6 = *plVar3;
        uStack_b8 = (ulonglong)*(uint *)*puVar7;
        *(undefined1 *)(lVar6 + 0x121a4) = 1;
        uStack_c8 = 0;
        puStack_80 = puVar7 + 2;
        auStack_88[0] = 1;
        auStack_98 = auVar11._4_12_;
        auStack_a8 = auVar11._0_12_;
        uStack_9c = auVar11._12_4_;
        uStack_78 = 0x44;
        uStack_70 = 0;
        uStack_b0 = 0x44;
        func_0x0001452dd400(lVar6,&uStack_c8,auStack_88);
        puVar7 = puVar7 + 0xb;
      } while (puVar7 != puVar9);
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar6 = _DAT_148d452f0;
    if ((_DAT_148d452f0 != 0) && ((ushort)(*(short *)(_DAT_148d452f0 + 0x12) - 1U) < _DAT_14a943ab8)
       ) {
      lVar8 = *plVar3;
      *(undefined1 *)(lVar8 + 0x121a4) = 1;
      uStack_c8 = 0xffffffff;
      uStack_c4 = 0xffff;
      FUN_144dbce00(lVar8,0,lVar6,&uStack_c8,0x101);
    }
    puVar7 = _DAT_148d45520;
    uVar5 = (ulonglong)_DAT_148d4551c;
    if (uVar5 != 0) {
      lVar6 = uVar5 * 0x58;
      lVar8 = 0;
      do {
        plVar3 = *(longlong **)((longlong)puVar7 + lVar8 + 8);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            uVar5 = (**(code **)(*plVar3 + 8))(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              uVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        lVar8 = lVar8 + 0x58;
      } while (lVar6 - lVar8 != 0);
    }
    _DAT_148d4551c = 0;
    DAT_148d45550 = 0;
  }
  return uVar5;
}

