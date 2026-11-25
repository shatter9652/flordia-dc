// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1447cc500  size: 1895 bytes
// Name:    fiAssetManager::FileName
// Subsystem: core
// Class:   fiAssetManager
//
// Evidence:
//   GTAVSRC: fiAssetManager::FileName  (rage/base/src/phbound/boundloader.cpp)
//   literal: /bound/bound
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140299f30, FUN_1447ca9c0, FUN_1447c2b20, FUN_14017d740, FUN_1447c29a0, FUN_14128b9b0, FUN_140643cd0, FUN_140048c90, FUN_140048b50, FUN_1402a9b90, FUN_145515b40, FUN_1401054b0, FUN_1428ca690, FUN_1454524e0, FUN_145e71520, FUN_14052c5a0, FUN_144da6330, FUN_1447c2a60, FUN_140715f40, FUN_141af39c0, FUN_1447c2910
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/fiAssetManager.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * fiAssetManager__FileName(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  void *pvVar10;
  longlong *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_398 [32];
  undefined1 auStack_378 [16];
  undefined *apuStack_368 [71];
  undefined4 uStack_130;
  char acStack_128 [264];
  
  pcVar8 = acStack_128;
  FUN_145515b40(pcVar8,param_1,0x100);
  lVar6 = func_0x000145f40590(pcVar8,0x2f);
  if (lVar6 != 0) {
    FUN_14128b9b0(apuStack_368,0x100,acStack_128);
    uVar7 = FUN_140643cd0();
    FUN_140715f40(uVar7,apuStack_368);
    pcVar8 = (char *)FUN_1454524e0(acStack_128);
  }
  uVar7 = FUN_140643cd0();
  lVar9 = FUN_140048c90(uVar7,pcVar8,&UNK_146784448,1);
  if (lVar9 == 0) {
    strcpy_s(apuStack_368,(void *)0x100,pcVar8);
    strcat_s((char)apuStack_368,(void *)0x100,"/bound");
    uVar7 = FUN_140643cd0();
    lVar9 = FUN_140048c90(uVar7,apuStack_368,&UNK_146784448,1);
    if (lVar9 != 0) goto LAB_1447cc6cb;
    strcpy_s(apuStack_368,(void *)0x100,pcVar8);
    cVar5 = (char)apuStack_368;
    strcat_s(cVar5,(void *)0x100,"/");
    strcat_s(cVar5,(void *)0x100,pcVar8);
    uVar7 = FUN_140643cd0();
    lVar9 = FUN_140048c90(uVar7,apuStack_368,&UNK_146784448,1);
    if (lVar9 != 0) goto LAB_1447cc6cb;
    strcpy_s(apuStack_368,(void *)0x100,pcVar8);
    strcat_s((char)apuStack_368,(void *)0x100,"/bound/bound");
    uVar7 = FUN_140643cd0();
    lVar9 = FUN_140048c90(uVar7,apuStack_368,&UNK_146784448,1);
    if (lVar9 != 0) goto LAB_1447cc6cb;
    uVar7 = FUN_140643cd0();
    FUN_140048c90(uVar7,pcVar8,&UNK_146784447,1);
  }
  else {
LAB_1447cc6cb:
    apuStack_368[0] = &UNK_14668a310;
    uStack_130 = 0;
    func_0x000145ebd9e0(apuStack_368,pcVar8,lVar9);
    FUN_1428ca690(apuStack_368);
    FUN_141af39c0(apuStack_368,auStack_398,0x1e);
    pvVar10 = _stricmp(auStack_398,&UNK_1467895ed);
    if ((int)pvVar10 != 0) {
      pvVar10 = _stricmp(auStack_398,&UNK_1467895fe);
      if (((int)pvVar10 != 0) && (pvVar10 = _stricmp(auStack_398,&UNK_14678969d), (int)pvVar10 != 0)
         ) {
LAB_1447cc753:
        if (lVar6 != 0) {
          uVar7 = FUN_140643cd0();
          func_0x000140704900(uVar7);
        }
        return (longlong *)0x0;
      }
      FUN_1428ca690(apuStack_368);
      FUN_141af39c0(apuStack_368,auStack_398,0x1e);
      pvVar10 = _stricmp(auStack_398,&UNK_146787b01);
      if ((int)pvVar10 == 0) {
        plVar11 = (longlong *)func_0x000144d9c160(0x70,0x10);
        if (plVar11 != (longlong *)0x0) {
          FUN_1401054b0(plVar11,_DAT_145fc6ed8);
          goto LAB_1447cc98e;
        }
LAB_1447cc9ac:
        plVar11 = (longlong *)0x0;
      }
      else {
        pvVar10 = _stricmp(auStack_398,&UNK_146787800);
        if (((int)pvVar10 == 0) ||
           (pvVar10 = _stricmp(auStack_398,&UNK_146787c85), (int)pvVar10 == 0)) {
          plVar11 = (longlong *)func_0x000144d9c160(0x80,0x10);
          if (plVar11 != (longlong *)0x0) {
            FUN_14052c5a0(plVar11);
            goto LAB_1447cc98e;
          }
          goto LAB_1447cc9ac;
        }
        pvVar10 = _stricmp(auStack_398,&UNK_146787c7d);
        if ((int)pvVar10 == 0) {
          plVar11 = (longlong *)func_0x000144d9c160(0x90,0x10);
          if (plVar11 != (longlong *)0x0) {
            FUN_1447c2910(plVar11);
            goto LAB_1447cc98e;
          }
          goto LAB_1447cc9ac;
        }
        pvVar10 = _stricmp(auStack_398,&UNK_1467864bb);
        if ((int)pvVar10 == 0) {
          plVar11 = (longlong *)func_0x000144d9c160(0x70,0x10);
          if (plVar11 != (longlong *)0x0) {
            auStack_378._4_4_ = _DAT_145fc6ed8;
            auStack_378._0_4_ = _DAT_145fc6ed8;
            auStack_378._8_4_ = _DAT_145fc6ed8;
            auStack_378._12_4_ = _DAT_145fc6ed8;
            FUN_1402a9b90(plVar11);
            goto LAB_1447cc98e;
          }
          goto LAB_1447cc9ac;
        }
        pvVar10 = _stricmp(auStack_398,&UNK_1467864b3);
        if ((int)pvVar10 == 0) {
          plVar11 = (longlong *)func_0x000144d9c160(0x100,0x10);
          if (plVar11 != (longlong *)0x0) {
            FUN_1447c29a0(plVar11);
            goto LAB_1447cc98e;
          }
          goto LAB_1447cc9ac;
        }
        pvVar10 = _stricmp(auStack_398,&UNK_146786f52);
        if ((int)pvVar10 == 0) {
          plVar11 = (longlong *)func_0x000144d9c160(0x90,0x10);
          if (plVar11 != (longlong *)0x0) {
            func_0x0001413b9500(plVar11);
            goto LAB_1447cc98e;
          }
          goto LAB_1447cc9ac;
        }
        pvVar10 = _stricmp(auStack_398,&UNK_146786373);
        if ((int)pvVar10 == 0) {
          plVar11 = (longlong *)func_0x000144d9c160(0x130,0x10);
          if (plVar11 != (longlong *)0x0) {
            FUN_140299f30(plVar11);
            goto LAB_1447cc98e;
          }
          goto LAB_1447cc9ac;
        }
        pvVar10 = _stricmp(auStack_398,&UNK_14678818e);
        if ((int)pvVar10 == 0) {
          plVar11 = (longlong *)func_0x000144d9c160(0x80,0x10);
          if (plVar11 != (longlong *)0x0) {
            FUN_1447c2a60(plVar11);
            goto LAB_1447cc98e;
          }
          goto LAB_1447cc9ac;
        }
        pvVar10 = _stricmp(auStack_398,&UNK_146786f5a);
        if ((int)pvVar10 == 0) {
          plVar11 = (longlong *)func_0x000144d9c160(0x80,0x10);
          if (plVar11 != (longlong *)0x0) {
            FUN_144da6330(plVar11);
            lVar4 = _UNK_14615b278;
            lVar1 = _DAT_14615b270;
            fVar3 = _DAT_146159ca4;
            *plVar11 = (longlong)&UNK_14667af70;
            *(undefined4 *)(plVar11 + 2) = 0x1ff;
            *(undefined8 *)((longlong)plVar11 + 0x14) = 0;
            *(undefined1 (*) [32])(plVar11 + 6) = ZEXT1232(ZEXT812(0));
            *(undefined1 (*) [32])(plVar11 + 8) = ZEXT1232(ZEXT812(0));
            auVar12._4_4_ = _DAT_145fc6ed8;
            auVar12._0_4_ = _DAT_145fc6ed8;
            auVar12._8_4_ = _DAT_145fc6ed8;
            auVar12._12_4_ = _DAT_145fc6ed8;
            *(undefined1 (*) [16])(plVar11 + 0xc) = auVar12;
            plVar11[4] = lVar1;
            plVar11[5] = lVar4;
            auVar15 = vminps_avx(auVar12,auVar12);
            *(undefined4 *)((longlong)plVar11 + 0x3c) = 1;
            *plVar11 = (longlong)&UNK_14667c1b0;
            *(undefined1 *)(plVar11 + 2) = 9;
            auVar14._0_4_ = auVar15._0_4_ * fVar3;
            auVar14._4_4_ = auVar15._4_4_ * fVar3;
            auVar14._8_4_ = auVar15._8_4_ * fVar3;
            auVar14._12_4_ = auVar15._12_4_ * fVar3;
            auVar15._4_4_ = _DAT_146159c24;
            auVar15._0_4_ = _DAT_146159c24;
            auVar15._8_4_ = _DAT_146159c24;
            auVar15._12_4_ = _DAT_146159c24;
            auVar14 = vminps_avx(auVar15,auVar14);
            auVar15 = vcmpps_avx(ZEXT416(0) << 0x20,auVar14,2);
            if (auVar15 == (undefined1  [16])0x0) {
              *(undefined4 *)((longlong)plVar11 + 0x2c) = 0x3d23d70a;
              auVar15 = *(undefined1 (*) [16])(plVar11 + 4);
            }
            else {
              auVar15 = vblendps_avx(ZEXT416(0) << 0x20,auVar14,8);
            }
            uVar2 = _DAT_146159bd4;
            auVar16._4_4_ = _DAT_145fc6f48;
            auVar16._0_4_ = _DAT_145fc6f48;
            auVar16._8_4_ = _DAT_145fc6f48;
            auVar16._12_4_ = _DAT_145fc6f48;
            auVar15 = vblendps_avx(auVar12,auVar15,8);
            lVar1 = vmovlps_avx(auVar16);
            plVar11[6] = lVar1;
            *(undefined4 *)(plVar11 + 7) = 0xbf800000;
            *(undefined1 (*) [16])(plVar11 + 4) = auVar15;
            auVar15 = vrsqrtss_avx(ZEXT416(uVar2),ZEXT416(uVar2));
            auVar15 = vrcpss_avx(auVar15,auVar15);
            *(int *)((longlong)plVar11 + 0x14) = auVar15._0_4_;
            func_0x0001450e6ed0();
            *(undefined4 *)((longlong)plVar11 + 0x6c) = 0x40c90fdb;
            (**(code **)(*plVar11 + 0x60))(plVar11,0,0xffffffff);
            auVar13._0_12_ = ZEXT812(0);
            auVar13._12_4_ = 0;
            auVar15 = vblendps_avx(auVar13,*(undefined1 (*) [16])(plVar11 + 8),8);
            *(undefined1 (*) [16])(plVar11 + 8) = auVar15;
            *(undefined1 (*) [16])(plVar11 + 0xe) = auVar13;
            goto LAB_1447cc98e;
          }
          goto LAB_1447cc9ac;
        }
        pvVar10 = _stricmp(auStack_398,&UNK_146787e10);
        if (((int)pvVar10 == 0) ||
           (pvVar10 = _stricmp(auStack_398,&UNK_146787e07), (int)pvVar10 == 0)) {
LAB_1447ccaae:
          plVar11 = (longlong *)func_0x000144d9c160(0x150,0x10);
          if (plVar11 == (longlong *)0x0) goto LAB_1447cc9ac;
          FUN_145e71520(plVar11);
        }
        else {
          pvVar10 = _stricmp(auStack_398,&UNK_1467879cf);
          if ((int)pvVar10 == 0) {
            plVar11 = (longlong *)func_0x000144d9c160(0xb0,0x10);
            if (plVar11 == (longlong *)0x0) goto LAB_1447cc9ac;
            FUN_14017d740(plVar11);
          }
          else {
            pvVar10 = _stricmp(auStack_398,&UNK_1467877bb);
            if ((int)pvVar10 == 0) goto LAB_1447ccaae;
            pvVar10 = _stricmp(auStack_398,&UNK_146787f77);
            if ((int)pvVar10 == 0) {
              plVar11 = (longlong *)func_0x000144d9c160(0xb0,0x10);
              if (plVar11 == (longlong *)0x0) goto LAB_1447cc9ac;
              FUN_1447c2b20(plVar11);
            }
            else if ((_DAT_149e4ed78 == 0 && _DAT_149e4ed68 == 0) ||
                    (plVar11 = (longlong *)(*_DAT_149e4ed80)(&DAT_149e4ed68,auStack_398),
                    plVar11 == (longlong *)0x0)) goto LAB_1447cc753;
          }
        }
LAB_1447cc98e:
        cVar5 = FUN_1447ca9c0(plVar11,apuStack_368);
        if (cVar5 == '\0') {
          (**(code **)*plVar11)(plVar11,1);
          goto LAB_1447cc9ac;
        }
      }
      FUN_140048b50(lVar9);
      goto LAB_1447cc6a9;
    }
  }
  plVar11 = (longlong *)0x0;
LAB_1447cc6a9:
  if (lVar6 != 0) {
    uVar7 = FUN_140643cd0();
    func_0x000140704900(uVar7);
  }
  return plVar11;
}

