// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070c60  size: 20 bytes
// Name:    FUN_140070c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 * FUN_140070c60(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  longlong unaff_GS_OFFSET;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_28 [16];
  
  iVar3 = func_0x000144e98420();
  if (iVar3 == 0) {
    return (undefined1 *)0x0;
  }
  uVar9 = 0;
  bVar11 = true;
  puVar5 = (undefined1 *)**(ulonglong **)(unaff_GS_OFFSET + 0x58);
  if (puVar5[0x861] == '\0') {
    iVar4 = func_0x000145037ab0();
    puVar5 = (undefined1 *)(ulonglong)uRam0000000147bbcc98;
    if (uRam0000000147bbcc98 != iVar4 + 1U) {
      piVar7 = (int *)0x147bbcc98;
      do {
        uVar8 = (uint)puVar5;
        if ((int)uVar8 < 1) {
          LOCK();
          bVar11 = uVar8 == uRam0000000147bbcc98;
          uVar8 = uVar8 - 1;
          if (!bVar11) {
            puVar5 = (undefined1 *)(ulonglong)uRam0000000147bbcc98;
            uVar8 = uRam0000000147bbcc98;
          }
          uRam0000000147bbcc98 = uVar8;
          UNLOCK();
          if (bVar11) goto code_r0x000144ed22d6;
        }
        puVar5 = (undefined1 *)(ulonglong)uRam0000000147bbcc98;
      } while( true );
    }
  }
  piVar7 = (int *)0x0;
code_r0x000144ed22d8:
  if ((ulonglong)uRam0000000147bbcc58 == 0) {
code_r0x000144ed233c:
    if ((uint)uVar9 != uRam0000000147bbcc58) {
      while( true ) {
        bVar12 = *(int *)(*(undefined1 **)(pauRam0000000147bbcc60[(uVar9 & 0xffffffff) * 2 + 1] + 8)
                         + 0x18) != iVar3;
        puVar6 = *(undefined1 **)(pauRam0000000147bbcc60[(uVar9 & 0xffffffff) * 2 + 1] + 8);
        if (!bVar12) break;
        do {
          while( true ) {
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            puVar6 = puVar5;
            if (uVar8 < uRam0000000147bbcc58) break;
            if (uRam0000000147bbcc58 == uVar8) {
              bVar12 = true;
              goto code_r0x000144ed23c5;
            }
          }
          auVar2._8_8_ = 0;
          auVar2._0_8_ = *(ulonglong *)pauRam0000000147bbcc60[(ulonglong)uVar8 * 2 + 1];
          auVar1 = vpor_avx(auVar2,pauRam0000000147bbcc60[(ulonglong)uVar8 * 2] ^ ZEXT816(0x1ffff));
        } while (auVar1 == (undefined1  [16])0x0);
        if (uVar8 == uRam0000000147bbcc58) break;
      }
      goto code_r0x000144ed23c5;
    }
  }
  else {
    puVar5 = auStack_28;
    uVar9 = 0;
    pauVar10 = pauRam0000000147bbcc60;
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *(ulonglong *)pauVar10[1];
      auVar1 = vpor_avx(auVar1,*pauVar10 ^ ZEXT816(0x1ffff));
      if (auVar1 != (undefined1  [16])0x0) goto code_r0x000144ed233c;
      uVar9 = uVar9 + 1;
      pauVar10 = pauVar10 + 2;
    } while (uRam0000000147bbcc58 != uVar9);
  }
  bVar12 = true;
  puVar6 = puVar5;
code_r0x000144ed23c5:
  if (!bVar11) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  if (bVar12) {
    return (undefined1 *)0x0;
  }
  return puVar6;
code_r0x000144ed22d6:
  bVar11 = false;
  goto code_r0x000144ed22d8;
}

