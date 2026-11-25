// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070be0  size: 106 bytes
// Name:    FUN_140070be0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e40400, FUN_140070c60, FUN_1400711d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140395cc9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_140070be0(undefined4 *param_1)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 (*pauVar6) [16];
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  undefined4 *puVar13;
  longlong unaff_GS_OFFSET;
  bool bVar14;
  bool bVar15;
  undefined1 auVar16 [64];
  undefined8 uStack_48;
  ulonglong uStack_40;
  
  plVar9 = (longlong *)FUN_144e40400(*param_1);
  pauVar10 = (undefined1 (*) [16])0x0;
  if (plVar9 != (longlong *)0x0) {
    FUN_1400711d0(param_1);
    pauVar10 = (undefined1 (*) [16])*plVar9;
    if ((*(int *)pauVar10[5] == -1) || ((pauVar10[5][5] & 4) != 0)) {
      if (*(char *)((longlong)plVar9 + 0x2c3) != '\x03') {
        pauVar10 = (undefined1 (*) [16])func_0x000140070c50(plVar9);
      }
      if ((*(byte *)((longlong)plVar9 + 0x3bc) & 0x40) != 0) {
        pauVar10 = (undefined1 (*) [16])FUN_140070c60(plVar9);
        if ((pauVar10 == (undefined1 (*) [16])0x0) || (*(int *)(pauVar10[1] + 8) == 0)) {
          return pauVar10;
        }
        if (*(longlong *)(*pauVar10 + 8) == 0x10000000) {
          (**(code **)(_DAT_146b16378 + 0x148))(_DAT_14a92da40);
        }
        lVar11 = FUN_144e40400(*(undefined4 *)(pauVar10[1] + 8));
        if (lVar11 != 0) {
          if (*(char *)(lVar11 + 0x2c3) == '\x01') {
            FUN_140070c80(lVar11);
          }
          *(byte *)(lVar11 + 0x3bc) = *(byte *)(lVar11 + 0x3bc) & 0xbf;
          if (pauVar10[1][0xe] == '\x01') {
            FUN_140397460(lVar11);
          }
        }
        bVar15 = true;
        pauVar12 = (undefined1 (*) [16])**(undefined8 **)(unaff_GS_OFFSET + 0x58);
        if (pauVar12[0x86][1] == '\0') {
          iVar7 = func_0x000145037ab0();
          pauVar12 = (undefined1 (*) [16])(ulonglong)uRam0000000147bbcc98;
          if (uRam0000000147bbcc98 != iVar7 + 1U) {
            puVar13 = (undefined4 *)0x147bbcc98;
            bVar15 = false;
            do {
              if ((int)pauVar12 == 0) {
                pauVar12 = (undefined1 (*) [16])0x0;
                LOCK();
                bVar14 = uRam0000000147bbcc98 == 0;
                uVar8 = iVar7 + 1U;
                if (!bVar14) {
                  pauVar12 = (undefined1 (*) [16])(ulonglong)uRam0000000147bbcc98;
                  uVar8 = uRam0000000147bbcc98;
                }
                uRam0000000147bbcc98 = uVar8;
                UNLOCK();
                if (bVar14) goto code_r0x000140396394;
              }
              pauVar12 = (undefined1 (*) [16])(ulonglong)uRam0000000147bbcc98;
            } while( true );
          }
        }
        puVar13 = (undefined4 *)0x0;
code_r0x000140396394:
        iVar7 = iRam0000000147bbcc58;
        if (iRam0000000147bbcc58 != 0) {
          auVar16 = ZEXT1264(ZEXT812(0));
          auVar2._8_8_ = 0;
          auVar2._0_8_ = *(ulonglong *)pauVar10[1];
          auVar2 = vpor_avx(auVar2,*pauVar10 ^ ZEXT816(0x1ffff));
          if (auVar2 != (undefined1  [16])0x0) {
            uVar8 = func_0x000145232960(pauVar10,0x18);
            while( true ) {
              uStack_48 = auVar16._0_8_;
              uStack_40 = auVar16._8_8_;
              pauVar12 = (undefined1 (*) [16])((ulonglong)(uVar8 & iVar7 - 1U) * 0x20);
              auVar5._8_8_ = uStack_48;
              auVar5._0_8_ = 0x1ffff;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = *(ulonglong *)(pauVar12[1] + lRam0000000147bbcc60) ^ uStack_40;
              auVar2 = vpor_avx(auVar3,*(undefined1 (*) [16])(*pauVar12 + lRam0000000147bbcc60) ^
                                       auVar5);
              if (auVar2 == (undefined1  [16])0x0) break;
              pauVar12 = (undefined1 (*) [16])(*pauVar12 + lRam0000000147bbcc60);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = *(ulonglong *)pauVar12[1] ^ *(ulonglong *)pauVar10[1];
              auVar2 = vpor_avx(auVar4,*pauVar12 ^ *pauVar10);
              if (auVar2 == (undefined1  [16])0x0) {
                if (lRam0000000147bbcc60 != 0) {
                  pauVar12 = (undefined1 (*) [16])FUN_140396d00(pauVar12);
                }
                break;
              }
              uVar8 = (uint)((ulonglong)((longlong)pauVar12 + (0x20 - lRam0000000147bbcc60)) >> 5);
            }
          }
        }
        if (!bVar15) {
          *puVar13 = 0;
        }
        if (pauVar10 != (undefined1 (*) [16])0x0) {
          uVar8 = (int)pauVar10 - iRam0000000147bbcc88;
          uVar1 = (ulonglong)uRam0000000147bbcc94;
          pauVar12 = pauRam0000000147bbcc80;
          do {
            *(short *)*pauVar10 = (short)((ulonglong)pauVar12 >> 0x20);
            LOCK();
            bVar15 = pauVar12 != pauRam0000000147bbcc80;
            pauVar6 = (undefined1 (*) [16])
                      ((ulonglong)((int)pauVar12 + 1) |
                      ((ulonglong)pauVar12 & 0xffff000000000000 | (uVar8 / uVar1 & 0xffff) << 0x20)
                      + 0x1000000000000);
            if (bVar15) {
              pauVar12 = pauRam0000000147bbcc80;
              pauVar6 = pauRam0000000147bbcc80;
            }
            pauRam0000000147bbcc80 = pauVar6;
            UNLOCK();
          } while (bVar15);
        }
        return pauVar12;
      }
    }
  }
  return pauVar10;
}

