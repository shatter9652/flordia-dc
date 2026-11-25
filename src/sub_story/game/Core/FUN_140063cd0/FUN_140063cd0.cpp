// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140063cd0  size: 825 bytes
// Name:    FUN_140063cd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e53a50, FUN_144e53c30, FUN_1400560b0, FUN_144e547d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140063cd0(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  short *psVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong unaff_RDI;
  longlong *plVar12;
  longlong unaff_GS_OFFSET;
  bool bVar13;
  longlong lStack_af0;
  longlong lStack_ae8;
  undefined8 uStack_ae0;
  undefined1 *puStack_ad8;
  undefined1 auStack_ad0 [960];
  undefined8 uStack_710;
  undefined1 *puStack_708;
  undefined1 auStack_700 [120];
  undefined8 uStack_688;
  undefined1 *puStack_680;
  undefined1 auStack_678 [512];
  undefined8 uStack_478;
  undefined1 *puStack_470;
  undefined1 auStack_468 [512];
  undefined8 uStack_268;
  undefined1 *puStack_260;
  undefined1 auStack_258 [512];
  undefined8 uStack_58;
  longlong lStack_50;
  undefined1 uStack_48;
  
  plVar2 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xfe8);
  do {
    plVar6 = *(longlong **)(param_1 + 0x80);
    puStack_ad8 = auStack_ad0;
    puStack_708 = auStack_700;
    puStack_470 = auStack_468;
    lStack_50 = plVar6[0x17];
    uStack_ae0 = 0x78;
    uStack_710 = 0x78;
    puStack_680 = auStack_678;
    puStack_260 = auStack_258;
    *plVar2 = param_1;
    uStack_688 = 0x40;
    uStack_478 = 0x40;
    uStack_268 = 0x40;
    uStack_58 = 0;
    uStack_48 = 0;
    if (((*(ushort *)(param_1 + 0xe4) == 0) ||
        ((*(ushort *)(param_1 + 0xe4) & *(ushort *)((longlong)plVar6 + 0x5e)) != 0)) &&
       ((*(byte *)(param_1 + 0xe1) & *(byte *)(plVar6 + 0xe)) == *(byte *)(param_1 + 0xe2))) {
      lVar7 = *(longlong *)(param_1 + 0xe8);
      if ((lVar7 != 0) &&
         ((*(char *)(param_1 + 0xf7) != '\x01' || ((*(byte *)(param_1 + 0xd8) & 0x10) != 0)))) {
        cVar8 = (**(code **)(lVar7 + 0x50))(lVar7 + 0xfU & 0xfffffffffffffff0,param_1);
        *(undefined1 *)(param_1 + 0xf7) = 1;
        if (cVar8 == '\0') goto LAB_140063edd;
      }
      (**(code **)(*plVar6 + 0x20))(plVar6,param_1,1);
      lStack_ae8 = param_1 + 0x68;
      *(undefined4 *)(param_1 + 0xf0) = 4;
      *(undefined8 **)(param_1 + 0xd0) = &uStack_ae0;
      if ((lStack_ae8 == param_4) && ((*(byte *)(param_1 + 0xd8) & 8) != 0)) {
        uVar11 = (ulonglong)*(byte *)(param_1 + 0x72);
        bVar13 = true;
        if (uVar11 == 0) {
          uVar11 = 0;
        }
        else {
          uVar10 = 0;
          do {
            unaff_RDI = *(longlong *)(param_1 + 0x78 + uVar10 * 8);
            uVar10 = uVar10 + 1;
            LOCK();
            *(short *)(unaff_RDI + 8) = *(short *)(unaff_RDI + 8) + 1;
            UNLOCK();
          } while (uVar11 != uVar10);
        }
      }
      else {
        uVar11 = 0;
        bVar13 = false;
      }
      cVar8 = (**(code **)(param_1 + 0x50))(param_1 + 0xfU & 0xfffffffffffffff0,param_1);
      *(undefined8 *)(param_1 + 0xd0) = 0;
      (**(code **)(*plVar6 + 0x28))(plVar6,param_1);
      if (cVar8 == '\0') {
LAB_140063f9d:
        if ((lStack_ae8 == param_4 && !bVar13) &&
           (bVar5 = *(byte *)(param_1 + 0x72), (ulonglong)bVar5 != 0)) {
          uVar11 = 0;
          do {
            lVar7 = uVar11 * 8;
            uVar11 = uVar11 + 1;
            LOCK();
            psVar1 = (short *)(*(longlong *)(param_1 + 0x78 + lVar7) + 8);
            *psVar1 = *psVar1 + 1;
            UNLOCK();
          } while (bVar5 != uVar11);
        }
        FUN_1400560b0(&uStack_ae0,0,param_2,param_3);
        *plVar2 = 0;
        FUN_144e547d0(&uStack_ae0);
        return;
      }
      LOCK();
      piVar3 = (int *)(param_1 + 0xf0);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (0 < iVar4 + -4) goto LAB_140063f9d;
      if (bVar13 && (int)uVar11 != 0) {
        do {
          LOCK();
          *(short *)(unaff_RDI + 8) = *(short *)(unaff_RDI + 8) + -1;
          UNLOCK();
          uVar9 = (int)uVar11 - 1;
          uVar11 = (ulonglong)uVar9;
        } while (uVar9 != 0);
      }
    }
    else {
LAB_140063edd:
      *(undefined4 *)(param_1 + 0xf0) = 3;
    }
    func_0x0001455ad980(&uStack_ae0,param_1);
    *plVar2 = 0;
    lStack_af0 = 0;
    plVar12 = &lStack_af0;
    if (*(char *)(param_1 + 0x72) != '\0') {
      plVar12 = (longlong *)0x0;
    }
    bVar13 = param_1 + 0x68 != param_4;
    if (bVar13) {
      plVar12 = &lStack_af0;
    }
    FUN_144e53c30(param_1,&uStack_ae0,bVar13);
    FUN_1400560b0(&uStack_ae0,plVar12,param_2,param_3);
    if (*(char *)(param_1 + 0xe0) != '\x03') {
      FUN_144e53a50(plVar6);
    }
    param_1 = lStack_af0;
    FUN_144e547d0(&uStack_ae0);
    if (param_1 == 0) {
      return;
    }
  } while( true );
}

