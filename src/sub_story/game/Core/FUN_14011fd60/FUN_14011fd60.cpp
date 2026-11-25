// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011fd60  size: 111 bytes
// Name:    FUN_14011fd60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140369a50, FUN_14011fdd0, FUN_145003f00, FUN_140120330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000144fd2600) */
/* WARNING: Removing unreachable block (ram,0x000144fd2613) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14011fd60(void)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  undefined8 *puVar7;
  ulonglong unaff_RBX;
  ulonglong uVar8;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_48 [4];
  byte bStack_44;
  undefined7 uVar9;
  
  FUN_145003f00();
  FUN_140120330();
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  FUN_140369a50(*(undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8),0xc0);
  FUN_14011fdd0();
  (**(code **)(*_DAT_149ab39d8 + 0x38))(_DAT_149ab39d8,0);
  FUN_140004b40(0x149c3e040);
  if (_DAT_149c3d808 != 0) {
    while (*(uint *)(_DAT_149c3d808 + 0x88) <= _DAT_14a9437ac) {
      uVar10 = *(uint *)(_DAT_149c3d808 + 0x68);
      uVar1 = *(uint *)(_DAT_149c3d808 + 0x6c);
      unaff_RBX = (ulonglong)uVar1;
      if (uVar1 != uVar10) {
        uVar2 = *(uint *)(*(longlong **)(_DAT_149c3d808 + 0x60) + 2);
        lVar3 = **(longlong **)(_DAT_149c3d808 + 0x60);
        do {
          uVar8 = *(ulonglong *)(lVar3 + (ulonglong)uVar10 * 0x10);
          if (((byte)(uVar8 >> 0x3d) < ((byte)uVar8 & 7)) &&
             (((uVar8 < 0x2000000000000000 ||
               ((*(byte *)((ulonglong)(*(uint *)(uVar8 & 0x1ffffffffffffff8) & 0xfff) * 0x38 +
                          0x149c3e1d7) & 7) < (uint)(uVar8 >> 0x3d))) &&
              (cVar6 = FUN_144fd26e0(), cVar6 == '\0')))) goto code_r0x000144fd240a;
          uVar10 = uVar10 + 1;
          if (uVar10 == uVar2) {
            uVar10 = 0;
          }
        } while (uVar1 != uVar10);
      }
      FUN_140054df0(auStack_48,*(undefined4 *)(_DAT_149c3d808 + 0x8c),
                    *(undefined8 *)(_DAT_149c3d808 + 0x80),0,0);
      bVar5 = bStack_44;
      unaff_RBX = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bStack_44);
      if (bStack_44 == 1) {
        FUN_140122ce0(_DAT_149c3d808);
      }
      FUN_1450498a0(auStack_48);
      if ((bVar5 & _DAT_149c3d808 != 0) == 0) break;
    }
  }
code_r0x000144fd240a:
  FUN_140121f20();
  do {
    puVar4 = _DAT_149c3d828;
    _DAT_149c3d828 = puVar4;
    if ((puVar4 == (undefined8 *)0x0) || (_DAT_14a9437ac < *(uint *)(puVar4 + 0x11)))
    goto code_r0x000144fd25aa;
    puVar7 = puVar4;
    if (*(uint *)(puVar4 + 0x11) != 0) {
      uVar10 = *(uint *)(puVar4 + 0xd);
      uVar1 = *(uint *)((longlong)puVar4 + 0x6c);
      if (uVar1 != uVar10) {
        iVar11 = 0;
        uVar2 = *(uint *)((longlong *)puVar4[0xc] + 2);
        unaff_RBX = (ulonglong)uVar2;
        lVar3 = *(longlong *)puVar4[0xc];
        do {
          if (*(longlong *)(lVar3 + 8 + (ulonglong)uVar10 * 0x10) != 0) {
            uVar8 = *(ulonglong *)((ulonglong)uVar10 * 0x10 + lVar3);
            if ((uVar8 & 7) != 0) {
              uVar12 = *(byte *)((ulonglong)(*(uint *)(uVar8 & 0x1ffffffffffffff8) & 0xfff) * 0x38 +
                                0x149c3e1d7) & 7;
              iVar11 = iVar11 + (uint)((uint)(uVar8 >> 0x3d) <= uVar12 ||
                                      ((byte)uVar8 & 7) <= uVar12);
            }
            cVar6 = FUN_144fd2620();
            if (cVar6 == '\0') goto code_r0x000144fd25aa;
          }
          uVar10 = uVar10 + 1;
          if (uVar10 == uVar2) {
            uVar10 = 0;
          }
        } while (uVar1 != uVar10);
        if (iVar11 != 0) {
          FUN_140054df0(auStack_48,iVar11,0,0,0);
          if (bStack_44 == 0) {
            FUN_1450498a0(auStack_48);
code_r0x000144fd25aa:
            uVar9 = (undefined7)(unaff_RBX >> 8);
            uVar8 = CONCAT71(uVar9,1);
            if (_DAT_149c3d818 == 0 && _DAT_149c3d808 == 0) {
              uVar8 = CONCAT71(uVar9,_DAT_149c3d828 != (undefined8 *)0x0);
            }
            func_0x000144d9dab0(0x149c3e040);
            return uVar8 & 0xffffffff;
          }
          uVar10 = *(uint *)(puVar4 + 0xd);
          uVar1 = *(uint *)((longlong)puVar4 + 0x6c);
          if (uVar1 != uVar10) {
            uVar2 = *(uint *)((longlong *)puVar4[0xc] + 2);
            unaff_RBX = (ulonglong)uVar2;
            lVar3 = *(longlong *)puVar4[0xc];
            do {
              if (*(longlong *)(lVar3 + 8 + (ulonglong)uVar10 * 0x10) != 0) {
                FUN_140121c70(*(ulonglong *)((ulonglong)uVar10 * 0x10 + lVar3) & 0x1ffffffffffffff8)
                ;
              }
              uVar10 = uVar10 + 1;
              if (uVar10 == uVar2) {
                uVar10 = 0;
              }
            } while (uVar1 != uVar10);
          }
          FUN_1450498a0(auStack_48);
          puVar7 = _DAT_149c3d828;
        }
      }
    }
    _DAT_149c3d828 = (undefined8 *)*puVar7;
    *(undefined4 *)(puVar4[0xc] + 8) = *(undefined4 *)((longlong)puVar4 + 0x6c);
    puVar4[0xc] = 0;
    *puVar4 = _DAT_149c3e110;
    _DAT_149c3e110 = puVar4;
  } while( true );
}

