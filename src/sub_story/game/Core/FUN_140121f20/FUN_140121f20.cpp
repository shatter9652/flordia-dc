// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140121f20  size: 611 bytes
// Name:    FUN_140121f20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140054df0, FUN_1443c4bf0, FUN_140004b40, FUN_144fb0380, FUN_1450498a0, FUN_14516b5d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140121f20(void)

{
  ulonglong *puVar1;
  char *pcVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  byte bVar14;
  uint uVar15;
  byte bVar16;
  longlong lVar17;
  undefined1 auStack_48 [4];
  byte bStack_44;
  
  if (_DAT_149c3d818 != (undefined8 *)0x0) {
    FUN_140054df0(auStack_48,0,0,0,0);
    if ((_DAT_149c3d818 != (undefined8 *)0x0 & bStack_44) == 1) {
      do {
        uVar12 = _DAT_149c3d818[0xb];
        uVar10 = func_0x000144da86d0();
        puVar8 = _DAT_149c3d818;
        if (uVar10 < uVar12) break;
        uVar15 = *(uint *)(_DAT_149c3d818 + 0xd);
        uVar4 = *(uint *)((longlong)_DAT_149c3d818 + 0x6c);
        if (uVar4 == uVar15) {
          bVar7 = false;
          _DAT_149c3d818 = (undefined8 *)*_DAT_149c3d818;
        }
        else {
          bVar7 = false;
          uVar5 = *(uint *)((longlong *)_DAT_149c3d818[0xc] + 2);
          lVar6 = *(longlong *)_DAT_149c3d818[0xc];
          _DAT_149c3d818 = (undefined8 *)*_DAT_149c3d818;
          do {
            uVar12 = *(ulonglong *)(lVar6 + (ulonglong)uVar15 * 0x10);
            puVar1 = (ulonglong *)(lVar6 + (ulonglong)uVar15 * 0x10);
            lVar11 = 0xb;
            bVar16 = (byte)uVar12 & 7;
            bVar14 = (byte)(uVar12 >> 0x3d);
            if ((bVar14 < bVar16) || (lVar11 = 10, bVar16 < bVar14)) {
              LOCK();
              pcVar2 = (char *)(lVar11 + (ulonglong)*(ushort *)((uVar12 & 0x1ffffffffffffff8) + 6) *
                                         0x10 + _DAT_149c3e108);
              *pcVar2 = *pcVar2 + -1;
              UNLOCK();
              uVar12 = *puVar1;
            }
            if (uVar12 < 0x2000000000000000) {
              FUN_140004b40((ulonglong)((uint)uVar12 & 0x1f8) * 4 + 0x149c3d840);
              uVar12 = *puVar1;
              uVar3 = *(ushort *)((uVar12 & 0x1ffffffffffffff8) + 6);
              if ((uVar3 == 0) || (0x1fffffffffffffff < uVar12)) {
                lVar11 = 0;
              }
              else {
                lVar17 = (ulonglong)uVar3 * 0x10;
                lVar11 = 0;
                if (*(int *)(_DAT_149c3e108 + 8 + lVar17) == 0) {
                  lVar11 = FUN_14516b5d0(uVar12 & 0x1ffffffffffffff8,_DAT_149c3e108 + lVar17);
                  uVar12 = *puVar1;
                }
              }
              func_0x000144d9dab0((ulonglong)((uint)uVar12 & 0x1f8) * 4 + 0x149c3d840);
              if (lVar11 != 0) {
                FUN_144fb0380(lVar11);
              }
            }
            else {
              FUN_1443c4bf0(uVar12 & 0x1ffffffffffffff8,puVar1);
              bVar7 = (bool)(bVar7 | puVar1[1] != 0);
            }
            uVar15 = uVar15 + 1;
            if (uVar15 == uVar5) {
              uVar15 = 0;
            }
          } while (uVar4 != uVar15);
        }
        if ((bVar7) || (_DAT_149c3d828 != 0)) {
          *puVar8 = 0;
          puVar13 = (undefined8 *)&DAT_149c3d828;
          if (_DAT_149c3d828 != 0) {
            puVar13 = _DAT_149c3d830;
          }
          *puVar13 = puVar8;
          _DAT_149c3d830 = puVar8;
          iVar9 = _DAT_14a9437ac + 2;
          if (!bVar7) {
            iVar9 = 0;
          }
          *(int *)(puVar8 + 0x11) = iVar9;
        }
        else {
          *(undefined4 *)(puVar8[0xc] + 8) = *(undefined4 *)((longlong)puVar8 + 0x6c);
          puVar8[0xc] = 0;
          *puVar8 = _DAT_149c3e110;
          _DAT_149c3e110 = puVar8;
        }
      } while (_DAT_149c3d818 != (undefined8 *)0x0);
    }
    FUN_1450498a0(auStack_48);
  }
  return;
}

