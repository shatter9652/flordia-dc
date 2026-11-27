// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008de0d0 @ 008de0d0 size=500
// undefined FUN_008de0d0()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_008de0d0(long param_1)

{
  char *pcVar1;
  short *psVar2;
  char cVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  lVar14 = *(long *)(param_1 + 0x5e8);
  if (lVar14 != 0) {
    lVar4 = *(long *)(lVar14 + 0x240);
    uVar12 = 0;
    uVar6 = *(uint *)(lVar14 + 0x230) << 4;
    uVar7 = (ulong)uVar6;
    if (uVar6 != 0) {
      uVar8 = 0;
      do {
        uVar9 = uVar8;
        if (!SBORROW1('\0',*(char *)((ulong)(uVar8 & 0xf) + (ulong)(uVar8 >> 4) * 0xb10 + lVar4)))
        break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar6;
      } while (uVar6 != uVar8);
      uVar12 = (ulong)uVar9;
    }
    lVar10 = (uVar12 >> 4) * 0xb10;
    lVar11 = (ulong)((uint)uVar12 & 0xf) * 0xb0;
    if (lVar10 + lVar11 != (ulong)(*(uint *)(lVar14 + 0x230) & 0xfffffff) * 0xb10) {
      uVar12 = (ulong)uVar6 | uVar12 << 0x20;
      lVar10 = lVar10 + 0x10 + lVar11 + lVar4;
      do {
        *(undefined8 *)(lVar10 + 0x90) = 0x5a0c640;
        *(undefined4 *)(lVar10 + 0x98) = 0;
        *(undefined2 *)(lVar10 + 0x9c) = 0x1000;
        *(long *)(lVar10 + 0xa8) = lVar10 + 0x10;
        LOCK();
        UNLOCK();
        bVar5 = (byte)_DAT_0b0f0990;
        _DAT_0b0f0990 = _DAT_0b0f0990 + 1;
        *(byte *)(lVar10 + 0x9b) = ~bVar5 & 1;
        lVar11 = _DAT_0ca04820;
        LOCK();
        pcVar1 = (char *)(lVar10 + 0x9a);
        cVar3 = *pcVar1;
        *pcVar1 = *pcVar1 + '\x01';
        UNLOCK();
        *(long *)(lVar10 + 0x98 + (ulong)(byte)(cVar3 + 1) * 8) = lVar11 + 0x848;
        LOCK();
        psVar2 = (short *)(lVar11 + 0x850);
        *psVar2 = *psVar2 + 1;
        UNLOCK();
        FUN_008de790(lVar10 + 0x90);
        uVar6 = (uint)(uVar12 >> 0x20);
        uVar7 = uVar12;
        uVar13 = uVar12;
        if (uVar6 != (uint)uVar12) {
          while( true ) {
            uVar6 = uVar6 + 1;
            uVar12 = uVar7 & 0xffffffff | (ulong)uVar6 << 0x20;
            if (((uVar6 < (uint)uVar13) &&
                (!SBORROW1('\0',*(char *)((ulong)(uVar6 & 0xf) + (ulong)(uVar6 >> 4) * 0xb10 + lVar4
                                         )))) || (uVar6 == (uint)uVar7)) break;
            uVar13 = uVar7 & 0xffffffff;
            uVar7 = uVar12;
          }
        }
        uVar7 = (ulong)(uVar6 & 0xf) * 0xb0;
        lVar11 = (uVar12 >> 0x24) * 0xb10 + lVar4;
        lVar10 = uVar7 + 0x10 + lVar11;
      } while (lVar11 + uVar7 !=
               (ulong)(*(uint *)(lVar14 + 0x230) & 0xfffffff) * 0xb10 + *(long *)(lVar14 + 0x240));
      lVar14 = *(long *)(param_1 + 0x5e8);
    }
    if ((lVar14 != 0) && (*(int *)(lVar14 + 0x234) != 0)) {
      return CONCAT71((int7)(uVar7 >> 8),1);
    }
  }
  return 0;
}


