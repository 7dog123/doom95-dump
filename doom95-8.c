void** fun_444348(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** fun_434240(void** ecx) {
    void* esp2;
    void* ebp3;
    void** v4;
    void** eax5;
    signed char* eax6;
    void** edx7;
    struct s467* eax8;
    void** eax9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    void* esp24;
    void** edi25;
    void** v26;
    uint32_t ecx27;
    void** ecx28;
    uint32_t eax29;
    void* esp30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** eax41;
    int32_t eax42;
    void* esp43;
    int32_t eax44;
    void** v45;
    unsigned char* ecx46;
    int32_t v47;
    unsigned char* eax48;
    void** esp49;
    void** ecx50;
    void** esp51;
    void** esp52;
    void** esp53;
    void** edx54;
    void** esi55;
    void* v56;
    void** ecx57;
    void** esp58;
    void** eax59;
    void** esp60;
    void** esp61;
    void** esp62;
    void** ecx63;
    void** edi64;
    void** ecx65;
    void** eax66;
    void** v67;
    void** edx68;
    void** v69;
    void** esp70;
    void** edx71;
    int1_t zf72;
    void** esp73;
    void** eax74;
    void** ecx75;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4);
    ebp3 = esp2;
    v4 = eax5;
    if (*eax6 == 0x7e) {
        edx7 = reinterpret_cast<void**>(&eax8->f1);
        eax9 = g60ae74;
        v4 = edx7;
        g60ae68 = edx7;
        g60ae6c = eax9;
    }
    eax11 = fun_44367f(ecx, v4, 0x200, v10);
    v12 = eax11;
    if (!reinterpret_cast<int1_t>(eax11 == 0xffffffff)) {
        fun_440840(ecx, "\tadding %s\n", v4, v13, v14, v15, v16, v17, v18, v19, v20, eax11, v12, v4, v21, v22);
        eax23 = g60ae74;
        esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 52 - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 4 + 8);
        edi25 = v4;
        v26 = eax23;
        ecx27 = reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(ecx) - 1;
        do {
            if (!ecx27) 
                break;
            --ecx27;
            ++edi25;
        } while (*reinterpret_cast<void***>(edi25));
        ecx28 = reinterpret_cast<void**>(~ecx27 - 1);
        eax29 = fun_442f62(ecx28);
        esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 + 4);
        if (eax29) 
            goto addr_4342ce_8;
    } else {
        eax41 = fun_440840(ecx, "\tcouldn't open %s\n", v4, v31, v32, v33, v34, v35, v36, v37, v38, eax11, v12, v4, v39, v40);
        goto addr_434465_10;
    }
    fun_44385a(ecx28);
    eax42 = fun_4442e5(ecx28);
    esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 + 4 - 4 + 4);
    if (eax42) {
        eax44 = fun_4442e5(ecx28);
        esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) - 4 + 4);
        if (eax44) {
            fun_43bd40(ecx28, "Wad file %s doesn't have IWAD or PWAD id\n", v4, v45);
            esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) - 4 - 4 - 4 + 4 + 8);
        }
        g481238 = reinterpret_cast<void**>(1);
    }
    ecx46 = reinterpret_cast<unsigned char*>((v47 << 4) + 3);
    *reinterpret_cast<unsigned char*>(&ecx46) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx46) & 0xfc);
    eax48 = fun_444203();
    esp49 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp43) - 4 + 4);
    if (reinterpret_cast<uint32_t>(ecx46) >= reinterpret_cast<uint32_t>(eax48)) {
        ecx50 = reinterpret_cast<void**>(0);
    } else {
        esp49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esp49) - reinterpret_cast<uint32_t>(ecx46));
        ecx50 = esp49;
    }
    esp51 = esp49 - 4;
    *reinterpret_cast<void***>(esp51) = reinterpret_cast<void**>(0x434381);
    fun_44430e(ecx50, *reinterpret_cast<void***>(esp51 + 4));
    esp52 = esp51 + 4 - 4;
    *reinterpret_cast<void***>(esp52) = reinterpret_cast<void**>(0x43438d);
    fun_44385a(ecx50);
    esp53 = esp52 + 4;
    edx54 = g60ae74;
    esi55 = ecx50;
    g60ae74 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx54) + reinterpret_cast<uint32_t>(v56));
    addr_4343a0_19:
    ecx57 = g60ae74;
    esp58 = esp53 - 4;
    *reinterpret_cast<void***>(esp58) = reinterpret_cast<void**>(0x4343c0);
    eax59 = fun_444348(ecx57, *reinterpret_cast<void***>(esp58 + 4), *reinterpret_cast<void***>(esp58 + 8), *reinterpret_cast<void***>(esp58 + 12), *reinterpret_cast<void***>(esp58 + 16), *reinterpret_cast<void***>(esp58 + 20), *reinterpret_cast<void***>(esp58 + 24), *reinterpret_cast<void***>(esp58 + 28), *reinterpret_cast<void***>(esp58 + 32), *reinterpret_cast<void***>(esp58 + 36), *reinterpret_cast<void***>(esp58 + 40), *reinterpret_cast<void***>(esp58 + 44), *reinterpret_cast<void***>(esp58 + 48), *reinterpret_cast<void***>(esp58 + 52), *reinterpret_cast<void***>(esp58 + 56));
    esp60 = esp58 + 4;
    g60ae70 = eax59;
    if (!eax59) {
        esp61 = esp60 - 4;
        *reinterpret_cast<void***>(esp61) = reinterpret_cast<void**>("Couldn't realloc lumpinfo");
        esp62 = esp61 - 4;
        *reinterpret_cast<void***>(esp62) = reinterpret_cast<void**>(0x4343d3);
        fun_43bd40(ecx57, "Couldn't realloc lumpinfo", *reinterpret_cast<void***>(esp62 + 8), *reinterpret_cast<void***>(esp62 + 12));
        esp60 = esp62 + 4 + 4;
    }
    ecx63 = g60ae70;
    edi64 = g60ae68;
    ecx65 = ecx63 + reinterpret_cast<uint32_t>(v26 + reinterpret_cast<unsigned char>(v26) * 4) * 4;
    if (!edi64) {
        eax66 = v12;
    } else {
        eax66 = reinterpret_cast<void**>(0xffffffff);
    }
    v67 = eax66;
    eax41 = v26;
    edx68 = g60ae74;
    v69 = eax41;
    if (reinterpret_cast<unsigned char>(eax41) < reinterpret_cast<unsigned char>(edx68)) {
        do {
            *reinterpret_cast<void***>(ecx65 + 8) = v67;
            *reinterpret_cast<void***>(ecx65 + 12) = *reinterpret_cast<void***>(esi55);
            esi55 = esi55 + 16;
            *reinterpret_cast<void***>(ecx65 + 16) = *reinterpret_cast<void***>(esi55 + 4);
            esp70 = esp60 - 4;
            *reinterpret_cast<void***>(esp70) = reinterpret_cast<void**>(0x434440);
            fun_4439f9(ecx65);
            esp60 = esp70 + 4;
            edx71 = g60ae74;
            eax41 = v69 + 1;
            ecx65 = ecx65 + 20;
            v69 = eax41;
        } while (reinterpret_cast<unsigned char>(eax41) < reinterpret_cast<unsigned char>(edx71));
    }
    zf72 = g60ae68 == 0;
    if (!zf72) {
        esp73 = esp60 - 4;
        *reinterpret_cast<void***>(esp73) = reinterpret_cast<void**>(0x434465);
        eax41 = fun_4439d1(ecx65, *reinterpret_cast<void***>(esp73 + 4), *reinterpret_cast<void***>(esp73 + 8), *reinterpret_cast<void***>(esp73 + 12));
    }
    addr_434465_10:
    return eax41;
    addr_4342ce_8:
    eax74 = fun_44428c(ecx28, 0);
    fun_4341b0(ecx28, 0, eax74);
    esp53 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) - 4 + 4 - 4 + 4);
    ecx75 = g60ae74;
    esi55 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffcc);
    g60ae74 = ecx75 + 1;
    goto addr_4343a0_19;
}

void fun_43d310() {
    return;
}

struct s468 {
    void** f0;
    signed char[7] pad8;
    void** f8;
    signed char[7] pad16;
    void** f10;
};

void fun_434740(void** ecx) {
    int1_t less2;
    void** eax3;
    void** eax4;
    void** edx5;
    void** eax6;
    struct s468* esi7;
    int32_t eax8;
    void** ebx9;
    void** eax10;
    void** eax11;
    void** eax12;
    void** edx13;
    void** ebp14;
    void** edi15;

    less2 = reinterpret_cast<signed char>(eax3) < reinterpret_cast<signed char>(g60ae74);
    if (!less2) {
        fun_43bd40(ecx, "W_ReadLump: %i >= numlumps", eax4, edx5);
    }
    eax6 = g60ae70;
    esi7 = reinterpret_cast<struct s468*>(eax6 + (eax8 * 4 + eax8) * 4);
    fun_43d310();
    ebx9 = esi7->f8;
    if (reinterpret_cast<int1_t>(ebx9 == 0xffffffff)) {
        ecx = g60ae68;
        eax10 = fun_44367f(ecx, ecx, 0x200, edx5);
        if (eax10 == ebx9) {
            eax11 = g60ae68;
            fun_43bd40(ecx, "W_ReadLump: couldn't open %s", eax11, edx5);
        }
    }
    fun_44430e(ecx, edx5);
    eax12 = fun_44385a(ecx);
    edx13 = esi7->f10;
    if (reinterpret_cast<signed char>(eax12) < reinterpret_cast<signed char>(edx13)) {
        fun_43bd40(ecx, "W_ReadLump: only read %i of %i on lump %i", eax12, edx13, ecx, "W_ReadLump: only read %i of %i on lump %i", eax12, edx13);
    }
    if (reinterpret_cast<int1_t>(esi7->f8 == 0xffffffff)) {
        fun_4439d1(ecx, edx5, ebp14, edi15);
    }
    fun_43d310();
    return;
}

int32_t g477af8 = 0;

int32_t g477ad0 = 0;

int32_t fun_449da2();

void** fun_44385a(void** ecx) {
    void** v2;
    void** eax3;
    void** ebp4;
    void** edx5;
    void** edx6;
    void** v7;
    int32_t eax8;
    void** eax9;
    void** edx10;
    void** v11;
    void* esp12;
    void** v13;
    void** ebx14;
    void** edi15;
    int1_t zf16;
    int32_t eax17;
    void* esp18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    int32_t eax23;
    void** eax24;
    void** v25;
    void** eax26;
    void** ebx27;
    void* edx28;
    void* esi29;
    void** esi30;
    int1_t zf31;
    int32_t eax32;
    void** ebx33;
    int32_t eax34;
    void** eax35;
    void** eax36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;

    v2 = eax3;
    ebp4 = edx5;
    edx6 = g61835c;
    v7 = *reinterpret_cast<void***>(edx6 + eax8 * 4);
    eax9 = fun_445f5a(ecx);
    edx10 = eax9;
    v11 = eax9;
    if (eax9) {
        image_base_();
        esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 16 - 4 - 4 + 4 - 4 + 4);
        if (*reinterpret_cast<unsigned char*>(&edx10) & 1) {
            if (!(*reinterpret_cast<unsigned char*>(&edx10) & 64)) {
                v13 = ebx14;
                edi15 = reinterpret_cast<void**>(0);
                do {
                    zf16 = g477af8 == 0;
                    if (zf16 || (eax17 = reinterpret_cast<int32_t>(g477ad0()), esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 + 4), eax17 == 0)) {
                        esp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4);
                        v19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp18) + 8);
                        v20 = v13;
                        v21 = ebp4;
                        v22 = v7;
                        eax23 = fun_449da2();
                        esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp18) - 4 - 4 - 4 - 4 - 4 + 4);
                        if (!eax23) 
                            goto addr_443903_7;
                    } else {
                        eax24 = reinterpret_cast<void**>(g477af8());
                        esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 + 4);
                        v25 = eax24;
                    }
                    if (!v25) 
                        goto addr_4439be_10;
                    eax26 = ebp4;
                    ebx27 = reinterpret_cast<void**>(0);
                    edx28 = reinterpret_cast<void*>(0);
                    while (reinterpret_cast<unsigned char>(ebx27) < reinterpret_cast<unsigned char>(v25)) {
                        ecx = reinterpret_cast<void**>(0);
                        ecx = *reinterpret_cast<void***>(eax26);
                        if (reinterpret_cast<int1_t>(ecx == 26)) 
                            goto addr_443977_14;
                        if (ecx != 13) {
                            esi29 = edx28;
                            ++edi15;
                            edx28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx28) + 1);
                            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esi29) + reinterpret_cast<unsigned char>(ebp4)) = ecx;
                        }
                        ++eax26;
                        ++ebx27;
                    }
                    esi30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v13) - reinterpret_cast<uint32_t>(edx28));
                    ebp4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp4) + reinterpret_cast<uint32_t>(edx28));
                    v13 = esi30;
                } while (!(*reinterpret_cast<unsigned char*>(&v11 + 1) & 32) && esi30);
                goto addr_4439be_10;
                addr_443977_14:
                fun_44430e(ecx, v2);
                goto addr_4439be_10;
            } else {
                zf31 = g477af8 == 0;
                if (zf31 || (eax32 = reinterpret_cast<int32_t>(g477ad0()), esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 + 4), eax32 == 0)) {
                    v19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp12) - 4 + 8);
                    v20 = ebx33;
                    v21 = ebp4;
                    v22 = v7;
                    eax34 = fun_449da2();
                    edi15 = v21;
                    if (eax34) {
                        addr_4439be_10:
                        image_base_();
                        eax35 = edi15;
                    } else {
                        addr_443903_7:
                        image_base_();
                        eax35 = fun_4457b6(ecx, v22, v21, v20, v19, 0, v2, v25, v11);
                    }
                } else {
                    eax36 = reinterpret_cast<void**>(g477af8());
                    edi15 = eax36;
                    goto addr_4439be_10;
                }
            }
        } else {
            fun_44515b(v2, v37, v11, v7, v38);
            image_base_();
            goto addr_44388d_23;
        }
    } else {
        fun_44515b(v2, v39, v11, v7, v40);
        goto addr_44388d_23;
    }
    addr_4439c9_25:
    return eax35;
    addr_44388d_23:
    eax35 = reinterpret_cast<void**>(0xffffffff);
    goto addr_4439c9_25;
}

int16_t* g60af04 = reinterpret_cast<int16_t*>(0);

void** g60af94 = reinterpret_cast<void**>(0);

void** fun_4350f0(uint32_t ecx) {
    void** ebp2;
    void** eax3;
    int32_t v4;
    int32_t edx5;
    int32_t esi6;
    int32_t ebx7;
    uint32_t edi8;
    int16_t* edx9;
    void** edx10;
    void** v11;
    int32_t ebx12;
    void** ebx13;
    int32_t ebx14;
    void** eax15;
    void** edx16;
    void** v17;
    void** ecx18;
    void** edx19;
    void** ecx20;

    ebp2 = eax3;
    v4 = edx5;
    esi6 = ebx7;
    edi8 = ecx;
    edx9 = g60af04;
    edx10 = reinterpret_cast<void**>(static_cast<int32_t>(*edx9));
    v11 = edx10;
    if (reinterpret_cast<int32_t>(ecx) < reinterpret_cast<int32_t>(0)) {
        if (ebx12) {
            edx10 = ebx13;
            edi8 = edi8 ^ ecx;
            if (ebx14) {
                do {
                    eax15 = reinterpret_cast<void**>(reinterpret_cast<signed char>(edx10) / 10);
                    ++edi8;
                    edx10 = eax15;
                } while (eax15);
            }
        } else {
            edi8 = 1;
        }
    }
    *reinterpret_cast<unsigned char*>(&edx10) = reinterpret_cast<uint1_t>(esi6 < 0);
    edx16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx10) & 0xff);
    v17 = edx16;
    if (edx16) {
        esi6 = -esi6;
    }
    if (esi6 != 0x7ca) {
        while (--edi8, edi8 != 0xffffffff) {
            ebp2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp2) - reinterpret_cast<unsigned char>(v11));
            ecx18 = *reinterpret_cast<void***>(esi6 % 10 * 4 + 0x60af04);
            fun_433a50(ecx18, v17, v11, *reinterpret_cast<signed char*>(&v4));
            esi6 = esi6 / 10;
        }
        if (v17) 
            goto addr_435199_13;
    } else {
        edx19 = reinterpret_cast<void**>(0);
        goto addr_4351b1_15;
    }
    addr_4351af_16:
    edx19 = ebp2;
    addr_4351b1_15:
    return edx19;
    addr_435199_13:
    ecx20 = g60af94;
    ebp2 = ebp2 - 8;
    fun_433a50(ecx20, v17, v11, *reinterpret_cast<signed char*>(&v4));
    goto addr_4351af_16;
}

void** g60af98 = reinterpret_cast<void**>(0);

void** g60afb4 = reinterpret_cast<void**>(0);

void** fun_4351f0(void** ecx) {
    int32_t v2;
    int32_t edi3;
    void** v4;
    void** ebp5;
    void** v6;
    void** edx7;
    int32_t esi8;
    int32_t ebx9;
    int32_t ebx10;
    int32_t ebx11;
    void** ecx12;
    void** eax13;
    int32_t edi14;
    void** ecx15;
    void** eax16;

    v2 = edi3;
    v4 = ebp5;
    v6 = edx7;
    esi8 = ebx9;
    if (ebx10 >= 0) {
        if (ebx11 > 0xe0f) {
            ecx12 = g60af98;
            eax13 = fun_433a50(ecx12, v6, v4, *reinterpret_cast<signed char*>(&v2));
        } else {
            edi14 = 1;
            do {
                edi14 = edi14 * 60;
                fun_4350f0(2);
                if (edi14 == 60 || esi8 / edi14) {
                    ecx15 = g60afb4;
                    fun_433a50(ecx15, v6, v4, *reinterpret_cast<signed char*>(&v2));
                }
                eax16 = reinterpret_cast<void**>(esi8 / edi14);
            } while (eax16);
            return eax16;
        }
    }
    return eax13;
}

void** g60af3c = reinterpret_cast<void**>(0);

void** g60af40 = reinterpret_cast<void**>(0);

void** g60af9c = reinterpret_cast<void**>(0);

void** g60af88 = reinterpret_cast<void**>(0);

void** g60afe4 = reinterpret_cast<void**>(0);

struct s469 {
    signed char[8] pad8;
    int32_t f8;
};

void** g60afb8 = reinterpret_cast<void**>(0);

void** g60afc4 = reinterpret_cast<void**>(0);

void** g60afac = reinterpret_cast<void**>(0);

void** g60afb0 = reinterpret_cast<void**>(0);

void** g60afa0 = reinterpret_cast<void**>(0);

void** g60afa4 = reinterpret_cast<void**>(0);

void** g60afc0 = reinterpret_cast<void**>(0);

void** g60afc8 = reinterpret_cast<void**>(0);

void** g60afd8 = reinterpret_cast<void**>(0);

void** g60af8c = reinterpret_cast<void**>(0);

void** g60afcc = reinterpret_cast<void**>(0);

void** g60af84 = reinterpret_cast<void**>(0);

void** g60af74 = reinterpret_cast<void**>(0);

void** g60af80 = reinterpret_cast<void**>(0);

void** fun_436ab0(void** ecx) {
    void** v2;
    void** v3;
    void** ebx4;
    void** v5;
    void** v6;
    void** edx7;
    void** v8;
    void** esi9;
    void** v10;
    void** edi11;
    void** v12;
    void** ebp13;
    void** eax14;
    int32_t ebx15;
    int1_t zf16;
    void** eax17;
    void** eax18;
    void** eax19;
    void* ebx20;
    void** eax21;
    void** eax22;
    int32_t ebp23;
    void** eax24;
    int32_t esi25;
    int32_t ebx26;
    int32_t edi27;
    void** eax28;
    struct s469* eax29;
    void** ebx30;
    void** ebp31;
    void* ebx32;
    void** eax33;
    void** edi34;
    void** eax35;
    void** eax36;
    void** eax37;
    void** eax38;
    void** eax39;
    void** eax40;
    void** eax41;
    void** eax42;
    void** eax43;
    void** eax44;
    void** eax45;
    void** eax46;
    void** eax47;
    void** eax48;
    void** eax49;
    int32_t ebx50;
    int32_t ebx51;
    void** eax52;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ebx4;
    v5 = ecx;
    v6 = edx7;
    v8 = esi9;
    v10 = edi11;
    v12 = ebp13;
    eax14 = g60af94;
    if (*reinterpret_cast<int32_t*>(eax14 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x43b, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    ebx15 = 0;
    do {
        if (*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebx15 + 0x60af04) - 12) != 0x1d4a11) {
            fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x43c, v12);
        }
        ebx15 = ebx15 + 4;
        fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    } while (ebx15 != 40);
    zf16 = g481264 == 0;
    if (zf16) {
        eax17 = g60af3c;
        if (*reinterpret_cast<int32_t*>(eax17 + 0xfffffff4) != 0x1d4a11) {
            fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x443, v12);
        }
        fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
        eax18 = g60af40;
        if (*reinterpret_cast<int32_t*>(eax18 + 0xfffffff4) != 0x1d4a11) {
            fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x443, v12);
        }
        fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
        eax19 = g60af9c;
        if (*reinterpret_cast<int32_t*>(eax19 + 0xfffffff4) != 0x1d4a11) {
            fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x444, v12);
        }
        fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
        ebx20 = reinterpret_cast<void*>(0);
        do {
            eax21 = g60af88;
            if (*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx20) + reinterpret_cast<unsigned char>(eax21)) - 12) != 0x1d4a11) {
                fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x445, v12);
            }
            ebx20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx20) + 4);
            fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
        } while (!reinterpret_cast<int1_t>(ebx20 == 36));
        eax22 = g60afe4;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax22)) < reinterpret_cast<signed char>(3)) {
            ebp23 = 0;
            while (eax24 = g60afe4, ebp23 < *reinterpret_cast<int32_t*>("\n" + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax24)) * 4)) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax24) == 1) || ebp23 != 8) {
                    esi25 = 0;
                    ebx26 = 0;
                    edi27 = ebp23 * 56;
                    while (eax28 = g60afe4, eax29 = reinterpret_cast<struct s469*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax28)) * 4 + 0x47758c)) + edi27), esi25 < eax29->f8) {
                        if (*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebx26 + reinterpret_cast<int32_t>(eax29) + 28) - 12) != 0x1d4a11) {
                            fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x44c, v12);
                        }
                        ebx26 = ebx26 + 4;
                        ++esi25;
                        fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
                    }
                }
                ++ebp23;
            }
        }
    } else {
        ebx30 = g60afb8;
        ebp31 = reinterpret_cast<void**>(0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx30) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx30 == 0))) {
            ebx32 = reinterpret_cast<void*>(0);
            while (1) {
                eax33 = g60af88;
                if (*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx32) + reinterpret_cast<unsigned char>(eax33)) - 12) != 0x1d4a11) {
                    fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x43f, v12);
                }
                ++ebp31;
                fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
                edi34 = g60afb8;
                ebx32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx32) + 4);
                if (reinterpret_cast<signed char>(ebp31) >= reinterpret_cast<signed char>(edi34)) 
                    break;
            }
        }
    }
    fun_437550(ecx);
    eax35 = g60afc4;
    if (*reinterpret_cast<int32_t*>(eax35 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x451, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax36 = g60afb4;
    if (*reinterpret_cast<int32_t*>(eax36 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x452, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax37 = g60afac;
    if (*reinterpret_cast<int32_t*>(eax37 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x453, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax38 = g60afb0;
    if (*reinterpret_cast<int32_t*>(eax38 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x454, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax39 = g60afa0;
    if (*reinterpret_cast<int32_t*>(eax39 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x455, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax40 = g60afa4;
    if (*reinterpret_cast<int32_t*>(eax40 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x456, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax41 = g60afc0;
    if (*reinterpret_cast<int32_t*>(eax41 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x457, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax42 = g60afc8;
    if (*reinterpret_cast<int32_t*>(eax42 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x458, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax43 = g60afd8;
    if (*reinterpret_cast<int32_t*>(eax43 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x459, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax44 = g60af8c;
    if (*reinterpret_cast<int32_t*>(eax44 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x45a, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax45 = g60af98;
    if (*reinterpret_cast<int32_t*>(eax45 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x45b, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax46 = g60afcc;
    if (*reinterpret_cast<int32_t*>(eax46 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x45c, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax47 = g60af84;
    if (*reinterpret_cast<int32_t*>(eax47 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x45e, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax48 = g60af74;
    if (*reinterpret_cast<int32_t*>(eax48 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x45f, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    eax49 = g60af80;
    if (*reinterpret_cast<int32_t*>(eax49 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x460, v12);
    }
    fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    ebx50 = 0;
    do {
        if (*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebx50 + 0x60aee4) - 12) != 0x1d4a11) {
            fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x463, v12);
        }
        ebx50 = ebx50 + 4;
        fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    } while (ebx50 != 16);
    ebx51 = 0;
    do {
        if (*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebx51 + 0x60aef4) - 12) != 0x1d4a11) {
            fun_43bd40(ecx, "Z_CT at wi_stuff.c:%i", 0x464, v12);
        }
        ebx51 = ebx51 + 4;
        eax52 = fun_437910(ecx, v12, v10, v8, v6, v5, v3, v2);
    } while (ebx51 != 16);
    return eax52;
}

void** fun_417a80(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    int32_t ebx13;
    void** edx14;
    void** eax15;
    int1_t zf16;
    void** edx17;
    void** ebx18;
    int1_t zf19;

    ebx13 = g482998;
    g482a8c = reinterpret_cast<void**>(8);
    if (ebx13) {
        edx14 = g482a7c;
        eax15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx14 + reinterpret_cast<unsigned char>(edx14) * 8) * 4 - reinterpret_cast<unsigned char>(edx14));
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax15) * 8 + 0x48262c) = 1;
    }
    zf16 = g481264 == 0;
    if (zf16) 
        goto addr_417b03_4;
    eax15 = g482a5c;
    if (reinterpret_cast<unsigned char>(eax15) < reinterpret_cast<unsigned char>(15)) {
        if (reinterpret_cast<unsigned char>(eax15) < reinterpret_cast<unsigned char>(6)) {
            addr_417b03_4:
            return eax15;
        } else {
            if (reinterpret_cast<unsigned char>(eax15) > reinterpret_cast<unsigned char>(6) && eax15 != 11) {
                return eax15;
            }
        }
    } else {
        if (reinterpret_cast<unsigned char>(eax15) > reinterpret_cast<unsigned char>(15)) {
            if (reinterpret_cast<unsigned char>(eax15) < reinterpret_cast<unsigned char>(30)) {
                if (eax15 != 20) {
                    return eax15;
                }
            } else {
                if (reinterpret_cast<unsigned char>(eax15) <= reinterpret_cast<unsigned char>(30)) {
                    addr_417afe_14:
                    eax15 = fun_4155a0(ecx, edx17, ebx18, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                    goto addr_417b03_4;
                } else {
                    if (eax15 != 31) {
                        return eax15;
                    }
                }
            }
        }
        zf19 = g482998 == 0;
        if (zf19) 
            goto addr_417b03_4; else 
            goto addr_417afe_14;
    }
}

struct s470 {
    void** f0;
    signed char[4681443] pad4681444;
    int32_t f476ee4;
    void* f476ee8;
};

void** fun_434db0(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebx8;
    void** v9;
    void** v10;
    void** esi11;
    void** v12;
    void** edi13;
    void** v14;
    void** ebp15;
    void** v16;
    void** eax17;
    void** v18;
    void** edx19;
    void** ebx20;
    int32_t edi21;
    int32_t edx22;
    void** v23;
    int32_t eax24;
    void** eax25;
    struct s470* ecx26;
    int32_t esi27;
    void** ecx28;
    void** eax29;
    void** ecx30;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebx8;
    v9 = ecx;
    v10 = esi11;
    v12 = edi13;
    v14 = ebp15;
    v16 = eax17;
    v18 = edx19;
    ebx20 = v18;
    edi21 = 0;
    edx22 = 0;
    v23 = reinterpret_cast<void**>(eax24 * 8);
    do {
        eax25 = g60afe4;
        ecx26 = reinterpret_cast<struct s470*>(v23 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) * 72);
        esi27 = ecx26->f476ee4 - reinterpret_cast<int16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx20) + 4));
        ecx28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx26->f476ee8) - reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx20) + 6)))));
        if (esi27 < 0 || (reinterpret_cast<int16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx20))) + esi27 >= 0x140 || (reinterpret_cast<signed char>(ecx28) < reinterpret_cast<signed char>(0) || reinterpret_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx20) + 2)) + reinterpret_cast<unsigned char>(ecx28)) >= reinterpret_cast<int32_t>(0xc8)))) {
            ebx20 = ebx20 + 4;
            ++edx22;
        } else {
            edi21 = 1;
        }
    } while (!edi21 && edx22 != 2);
    if (!edi21 || edx22 >= 2) {
        eax29 = fun_440840(ecx28, "Could not place patch on level %d", v16 + 1, v18, v16, v23, v14, v12, v10, v9, v7, v6, a2, a3, a4, a5);
    } else {
        ecx30 = *reinterpret_cast<void***>(v18 + edx22 * 4);
        eax29 = fun_433a50(ecx30, v18, v16, *reinterpret_cast<signed char*>(&v23));
    }
    return eax29;
}

void** fun_434d30(void** ecx) {
    void** v2;
    void** ecx3;
    void** esi4;
    void** edx5;
    void** eax6;
    void** edx7;
    void** ecx8;
    void** eax9;

    v2 = ecx;
    ecx3 = g60afb0;
    fun_433a50(ecx3, esi4, edx5, *reinterpret_cast<signed char*>(&v2));
    eax6 = g60afe4;
    edx7 = g60af88;
    ecx8 = *reinterpret_cast<void***>(edx7 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax6 + 12)) * 4);
    eax9 = fun_433a50(ecx8, esi4, edx5, *reinterpret_cast<signed char*>(&v2));
    return eax9;
}

struct s471 {
    signed char[48] pad48;
    int32_t f30;
};

void fun_435080(void** ecx) {
    int32_t v2;
    int32_t esi3;
    void** v4;
    void** edi5;
    void** v6;
    void** ebp7;
    int1_t zf8;
    void** eax9;
    int32_t esi10;
    int32_t edi11;
    void** eax12;
    uint32_t eax13;
    struct s471* eax14;
    void** ecx15;

    v2 = esi3;
    v4 = edi5;
    v6 = ebp7;
    zf8 = g481264 == 0;
    if (zf8 && (eax9 = g60afe4, reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax9)) <= reinterpret_cast<signed char>(2))) {
        esi10 = 0;
        edi11 = 0;
        while (eax12 = g60afe4, eax13 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax12)) * 4, esi10 < *reinterpret_cast<int32_t*>(eax13 + reinterpret_cast<int32_t>("\n"))) {
            eax14 = reinterpret_cast<struct s471*>(*reinterpret_cast<int32_t*>(eax13 + 0x47758c) + edi11);
            if (eax14->f30 >= 0) {
                ecx15 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(eax14) + eax14->f30 * 4 + 28);
                fun_433a50(ecx15, v6, v4, *reinterpret_cast<signed char*>(&v2));
            }
            edi11 = edi11 + 56;
            ++esi10;
        }
    }
    return;
}

struct s472 {
    int32_t f0;
    int32_t f4;
    signed char[12] pad20;
    int32_t f14;
    void* f18;
    signed char[12] pad40;
    void** f28;
    signed char[7] pad48;
    int32_t f30;
};

void** g60afe8 = reinterpret_cast<void**>(0);

void** fun_434ea0(void** ecx) {
    int1_t zf2;
    void** edx3;
    int32_t esi4;
    void** ecx5;
    void** edx6;
    uint32_t edx7;
    struct s472* ebx8;
    int32_t ebp9;
    void** edx10;
    void** edx11;
    void* edi12;
    uint32_t eax13;
    void** eax14;
    uint32_t eax15;
    void** edi16;

    zf2 = g481264 == 0;
    if (zf2 && (edx3 = g60afe4, reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx3)) <= reinterpret_cast<signed char>(2))) {
        esi4 = 0;
        ecx5 = reinterpret_cast<void**>(0);
        while (edx6 = g60afe4, edx7 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx6)) * 4, esi4 < *reinterpret_cast<int32_t*>(edx7 + reinterpret_cast<int32_t>("\n"))) {
            ebx8 = reinterpret_cast<struct s472*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(edx7 + 0x47758c)) + reinterpret_cast<unsigned char>(ecx5));
            ebp9 = ebx8->f0;
            ebx8->f30 = -1;
            if (ebp9) {
                edx10 = g60afe8;
                edx11 = edx10 + 1;
                if (ebp9 != 1) {
                    if (ebp9 == 2) {
                        ebx8->f28 = edx11;
                    }
                } else {
                    edi12 = ebx8->f18;
                    eax13 = fun_41d480(ecx5);
                    eax14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax13) / ebx8->f14);
                    ebx8->f28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edi12) + reinterpret_cast<unsigned char>(edx11) + reinterpret_cast<int32_t>(eax13) % ebx8->f14);
                }
            } else {
                eax15 = fun_41d480(ecx5);
                eax14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax15) / ebx8->f4);
                edi16 = g60afe8;
                ebx8->f28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi16 + 1) + reinterpret_cast<int32_t>(eax15) % ebx8->f4);
            }
            ecx5 = ecx5 + 56;
            ++esi4;
        }
    }
    return eax14;
}

void* g60afdc = reinterpret_cast<void*>(0);

struct s473 {
    signed char[4729208] pad4729208;
    int32_t f482978;
};

void** fun_4354a0(void** ecx) {
    void* ebp2;
    int32_t esi3;
    int32_t eax4;
    void* ebx5;
    int32_t eax6;
    void* edi7;
    struct s473* edx8;
    void** eax9;

    ebp2 = g60afdc;
    esi3 = eax4;
    ebx5 = reinterpret_cast<void*>(0);
    eax6 = 0;
    edi7 = reinterpret_cast<void*>((esi3 * 4 + esi3) * 8);
    edx8 = reinterpret_cast<struct s473*>(0);
    do {
        if (edx8->f482978 && eax6 != esi3) {
            ebx5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx5) + *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi7) + reinterpret_cast<uint32_t>(ebp2) + reinterpret_cast<int32_t>(edx8) + 20));
        }
        ++eax6;
        edx8 = reinterpret_cast<struct s473*>(reinterpret_cast<int32_t>(edx8) + 4);
    } while (eax6 < 4);
    eax9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx5) - *reinterpret_cast<uint32_t*>((esi3 + esi3 * 4) * 8 + reinterpret_cast<uint32_t>(ebp2) + esi3 * 4 + 20));
    g60afdc = ebp2;
    return eax9;
}

void** fun_434ca0(void** ecx) {
    void** v2;
    void** eax3;
    void** edx4;
    void** ecx5;
    void** esi6;
    void** edx7;
    void** ecx8;
    void** eax9;

    v2 = ecx;
    eax3 = g60afe4;
    edx4 = g60af88;
    ecx5 = *reinterpret_cast<void***>(edx4 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 8)) * 4);
    fun_433a50(ecx5, esi6, edx7, *reinterpret_cast<signed char*>(&v2));
    ecx8 = g60afac;
    eax9 = fun_433a50(ecx8, esi6, edx7, *reinterpret_cast<signed char*>(&v2));
    return eax9;
}

void** fun_434f50(void** ecx);

void** g60aff0 = reinterpret_cast<void**>(0);

int32_t g60af70 = 0;

struct s474 {
    signed char[4729208] pad4729208;
    int32_t f482978;
};

void** g60afd4 = reinterpret_cast<void**>(0);

void** g60afe0 = reinterpret_cast<void**>(0);

void** g60aff4 = reinterpret_cast<void**>(0);

struct s475 {
    signed char[6336148] pad6336148;
    int32_t f60ae94;
};

struct s476 {
    signed char[4729208] pad4729208;
    int32_t f482978;
};

struct s477 {
    signed char[6336148] pad6336148;
    void** f60ae94;
};

void** fun_435580(void** ecx) {
    void** eax2;
    int1_t zf3;
    int1_t zf4;
    int32_t edi5;
    int32_t ebp6;
    void** v7;
    void** v8;
    void** ecx9;
    void** esi10;
    struct s474* eax11;
    void* edx12;
    void** eax13;
    int32_t edi14;
    int1_t zf15;
    void** eax16;
    int1_t zf17;
    void** eax18;
    void** edi19;
    void** eax20;
    int1_t zf21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** esi26;
    void** ebp27;
    struct s475* edi28;
    int32_t ebx29;
    struct s475* eax30;
    struct s476* edx31;
    void* ecx32;
    struct s477* edx33;
    void** eax34;
    void** eax35;

    eax2 = fun_434f50(ecx);
    zf3 = g60aff0 == 0;
    if (!zf3 && (zf4 = g60af70 == 4, !zf4)) {
        edi5 = 0;
        ebp6 = 0;
        g60aff0 = reinterpret_cast<void**>(0);
        v7 = reinterpret_cast<void**>(0);
        v8 = reinterpret_cast<void**>(0);
        do {
            if (*reinterpret_cast<int32_t*>(ebp6 + 0x482978)) {
                ecx9 = v8;
                esi10 = v7;
                eax11 = reinterpret_cast<struct s474*>(0);
                do {
                    if (eax11->f482978) {
                        edx12 = g60afdc;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi10) + reinterpret_cast<uint32_t>(eax11) + 0x60ae94) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx12) + reinterpret_cast<unsigned char>(ecx9) + reinterpret_cast<uint32_t>(eax11) + 20);
                    }
                    eax11 = reinterpret_cast<struct s474*>(reinterpret_cast<uint32_t>(eax11) + 4);
                } while (!reinterpret_cast<int1_t>(eax11 == 16));
                eax13 = fun_4354a0(ecx9);
                *reinterpret_cast<void***>(ebp6 + 0x60aed4) = eax13;
            }
            ebp6 = ebp6 + 4;
            ++edi5;
            ecx = v8 + 40;
            v7 = v7 + 16;
            v8 = ecx;
        } while (edi5 < 4);
        eax2 = fun_4312d0(ecx, v8);
        g60af70 = 4;
    }
    edi14 = g60af70;
    if (edi14 != 2) {
        if (edi14 != 4) {
            zf15 = (*reinterpret_cast<unsigned char*>(&g60af70) & 1) == 0;
            if (!zf15 && (eax16 = g60afd4, eax2 = eax16 - 1, g60afd4 = eax2, !eax2)) {
                g60afd4 = reinterpret_cast<void**>(35);
                g60af70 = edi14 + 1;
            }
        } else {
            zf17 = g60aff0 == 0;
            if (!zf17) {
                eax18 = fun_4312d0(ecx, v8);
                edi19 = g481264;
                if (!edi19) {
                    g60aff0 = edi19;
                    g60afe0 = reinterpret_cast<void**>(1);
                    g60aff4 = reinterpret_cast<void**>(0x8c);
                    eax20 = fun_434ea0(ecx);
                    return eax20;
                } else {
                    g60afe0 = reinterpret_cast<void**>(0xffffffff);
                    g60aff0 = reinterpret_cast<void**>(0);
                    g60aff4 = reinterpret_cast<void**>(10);
                    return eax18;
                }
            }
        }
    } else {
        zf21 = (*reinterpret_cast<unsigned char*>(&g60afe8) & 3) == 0;
        if (zf21) {
            fun_4312d0(ecx, v8);
        }
        v22 = reinterpret_cast<void**>(0);
        v23 = reinterpret_cast<void**>(0);
        v24 = reinterpret_cast<void**>(0);
        v25 = reinterpret_cast<void**>(0);
        while (1) {
            eax2 = v25;
            if (!*reinterpret_cast<void***>(eax2 + 0x482978)) {
                addr_435733_23:
                ecx = v25 + 4;
                esi26 = v23 + 1;
                v24 = v24 + 40;
                v25 = ecx;
                v23 = esi26;
                if (reinterpret_cast<signed char>(esi26) < reinterpret_cast<signed char>(4)) 
                    continue; else 
                    break;
            } else {
                ebp27 = v24;
                edi28 = reinterpret_cast<struct s475*>(reinterpret_cast<unsigned char>(v23) << 4);
                ebx29 = 0;
                eax30 = edi28;
                do {
                    edx31 = reinterpret_cast<struct s476*>(ebx29 * 4);
                    if (edx31->f482978 && (ecx32 = g60afdc, ecx = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx32) + reinterpret_cast<unsigned char>(ebp27) + reinterpret_cast<uint32_t>(edx31)), edx33 = reinterpret_cast<struct s477*>(reinterpret_cast<uint32_t>(edx31) + reinterpret_cast<uint32_t>(edi28)), edx33->f60ae94 != *reinterpret_cast<void***>(ecx + 20))) {
                        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx + 20)) >= reinterpret_cast<signed char>(0)) {
                            edx33->f60ae94 = edx33->f60ae94 + 1;
                        } else {
                            edx33->f60ae94 = edx33->f60ae94 - 1;
                        }
                        if (eax30->f60ae94 > 99) {
                            eax30->f60ae94 = 99;
                        }
                        if (eax30->f60ae94 < -99) {
                            eax30->f60ae94 = -99;
                        }
                        v22 = reinterpret_cast<void**>(1);
                    }
                    ++ebx29;
                    eax30 = reinterpret_cast<struct s475*>(reinterpret_cast<uint32_t>(eax30) + 4);
                } while (ebx29 < 4);
                eax34 = fun_4354a0(ecx);
                *reinterpret_cast<void***>(v25 + 0x60aed4) = eax34;
                if (reinterpret_cast<signed char>(eax34) > reinterpret_cast<signed char>(99)) 
                    goto addr_435712_36;
            }
            addr_43571c_37:
            eax2 = v25;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax2 + 0x60aed4)) < reinterpret_cast<signed char>(0xffffff9d)) {
                *reinterpret_cast<void***>(eax2 + 0x60aed4) = reinterpret_cast<void**>(0xffffff9d);
                goto addr_435733_23;
            }
            addr_435712_36:
            *reinterpret_cast<void***>(v25 + 0x60aed4) = reinterpret_cast<void**>(99);
            goto addr_43571c_37;
        }
        if (!v22) {
            eax35 = fun_4312d0(ecx, v8);
            ++g60af70;
            return eax35;
        }
    }
    return eax2;
}

void** g60af6c = reinterpret_cast<void**>(0);

void* g60af68 = reinterpret_cast<void*>(0);

void** fun_435b10(void** ecx) {
    void** v2;
    void** ebp3;
    int1_t zf4;
    int1_t zf5;
    int32_t ebx6;
    void* ebp7;
    void* esi8;
    void** edi9;
    void* edi10;
    void** eax11;
    void** eax12;
    int1_t zf13;
    void** edi14;
    void** edi15;
    void** edx16;
    int1_t zf17;
    void** ecx18;
    void** eax19;
    int1_t zf20;
    void** ecx21;
    int32_t edx22;
    int32_t ebx23;
    void** eax24;
    int1_t zf25;
    int32_t edi26;
    int32_t ebx27;
    void** ecx28;
    void* eax29;
    void** esi30;
    void** eax31;
    uint1_t zf32;
    void* eax33;
    void** ecx34;
    void** eax35;
    int1_t zf36;
    int32_t edi37;
    int32_t ebx38;
    void** ecx39;
    void* eax40;
    void** esi41;
    void** eax42;
    int1_t zf43;
    int32_t edi44;
    int32_t ebx45;
    void** ecx46;
    void* eax47;
    void** esi48;
    void** eax49;

    v2 = ebp3;
    fun_434f50(ecx);
    zf4 = g60aff0 == 0;
    if (!zf4 && (zf5 = reinterpret_cast<int1_t>(g60af6c == 10), !zf5)) {
        ecx = reinterpret_cast<void**>(0);
        ebx6 = 0;
        ebp7 = reinterpret_cast<void*>(0);
        g60aff0 = reinterpret_cast<void**>(0);
        do {
            if (*reinterpret_cast<int32_t*>(ebx6 + 0x482978) && (esi8 = g60afdc, edi9 = g60afe4, *reinterpret_cast<int32_t*>(ebx6 + 0x60af44) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8) + reinterpret_cast<uint32_t>(ebp7) + 4) * 100 / reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi9 + 16)), *reinterpret_cast<int32_t*>(ebx6 + 0x60af2c) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8) + reinterpret_cast<uint32_t>(ebp7) + 8) * 100 / reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi9 + 20)), edi10 = g60af68, *reinterpret_cast<int32_t*>(ebx6 + 0x60af54) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8) + reinterpret_cast<uint32_t>(ebp7) + 12) * 100 / reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi9 + 24)), !!edi10)) {
                eax11 = fun_4354a0(ecx);
                *reinterpret_cast<void***>(ebx6 + 0x60ae84) = eax11;
            }
            ebx6 = ebx6 + 4;
            ++ecx;
            ebp7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp7) + 40);
        } while (reinterpret_cast<signed char>(ecx) < reinterpret_cast<signed char>(4));
        fun_4312d0(ecx, v2);
        g60af6c = reinterpret_cast<void**>(10);
    }
    eax12 = g60af6c;
    if (!reinterpret_cast<int1_t>(eax12 == 2)) {
        if (!reinterpret_cast<int1_t>(eax12 == 4)) {
            if (!reinterpret_cast<int1_t>(eax12 == 6)) {
                if (!reinterpret_cast<int1_t>(eax12 == 8)) {
                    if (!reinterpret_cast<int1_t>(eax12 == 10)) {
                        zf13 = (*reinterpret_cast<unsigned char*>(&g60af6c) & 1) == 0;
                        if (!zf13 && (edi14 = g60afd4, edi15 = edi14 - 1, g60afd4 = edi15, !edi15)) {
                            edx16 = g60af6c;
                            eax12 = reinterpret_cast<void**>(35);
                            g60afd4 = reinterpret_cast<void**>(35);
                            g60af6c = edx16 + 1;
                        }
                    } else {
                        zf17 = g60aff0 == 0;
                        if (!zf17) {
                            fun_4312d0(ecx, v2);
                            ecx18 = g481264;
                            if (!ecx18) {
                                g60aff0 = ecx18;
                                g60afe0 = reinterpret_cast<void**>(1);
                                g60aff4 = reinterpret_cast<void**>(0x8c);
                                eax19 = fun_434ea0(ecx18);
                                return eax19;
                            } else {
                                g60afe0 = reinterpret_cast<void**>(0xffffffff);
                                g60aff0 = reinterpret_cast<void**>(0);
                                g60aff4 = reinterpret_cast<void**>(10);
                                return 0xffffffff;
                            }
                        }
                    }
                } else {
                    zf20 = (*reinterpret_cast<unsigned char*>(&g60afe8) & 3) == 0;
                    if (zf20) {
                        eax12 = fun_4312d0(ecx, v2);
                    }
                    ecx21 = reinterpret_cast<void**>(0);
                    edx22 = 0;
                    ebx23 = 0;
                    do {
                        if (*reinterpret_cast<int32_t*>(ebx23 + 0x482978)) {
                            *reinterpret_cast<void***>(ebx23 + 0x60ae84) = *reinterpret_cast<void***>(ebx23 + 0x60ae84) + 1;
                            eax12 = fun_4354a0(ecx21);
                            if (reinterpret_cast<signed char>(eax12) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx23 + 0x60ae84))) {
                                ecx21 = reinterpret_cast<void**>(1);
                            } else {
                                *reinterpret_cast<void***>(ebx23 + 0x60ae84) = eax12;
                            }
                        }
                        ++edx22;
                        ebx23 = ebx23 + 4;
                    } while (edx22 < 4);
                    if (!ecx21) {
                        eax24 = fun_4312d0(ecx21, v2);
                        ++g60af6c;
                        return eax24;
                    }
                }
            } else {
                zf25 = (*reinterpret_cast<unsigned char*>(&g60afe8) & 3) == 0;
                if (zf25) {
                    eax12 = fun_4312d0(ecx, v2);
                }
                edi26 = 0;
                ebx27 = 0;
                ecx28 = reinterpret_cast<void**>(0);
                do {
                    if (*reinterpret_cast<int32_t*>(ebx27 + 0x482978)) {
                        eax29 = g60afdc;
                        *reinterpret_cast<void***>(ebx27 + 0x60af54) = *reinterpret_cast<void***>(ebx27 + 0x60af54) + 2;
                        esi30 = g60afe4;
                        eax12 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx28) + reinterpret_cast<uint32_t>(eax29) + 12) * 100 / reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi30 + 24)));
                        if (reinterpret_cast<signed char>(eax12) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx27 + 0x60af54))) {
                            edi26 = 1;
                        } else {
                            *reinterpret_cast<void***>(ebx27 + 0x60af54) = eax12;
                        }
                    }
                    ebx27 = ebx27 + 4;
                    ecx28 = ecx28 + 40;
                } while (ebx27 != 16);
                if (!edi26) {
                    eax31 = fun_4312d0(ecx28, v2);
                    zf32 = reinterpret_cast<uint1_t>(g60af68 == 0);
                    *reinterpret_cast<unsigned char*>(&eax31) = zf32;
                    eax33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax31) & 0xff);
                    ecx34 = g60af6c;
                    eax35 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax33) + reinterpret_cast<uint32_t>(eax33) + 1);
                    g60af6c = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx34) + reinterpret_cast<unsigned char>(eax35));
                    return eax35;
                }
            }
        } else {
            zf36 = (*reinterpret_cast<unsigned char*>(&g60afe8) & 3) == 0;
            if (zf36) {
                eax12 = fun_4312d0(ecx, v2);
            }
            edi37 = 0;
            ebx38 = 0;
            ecx39 = reinterpret_cast<void**>(0);
            do {
                if (*reinterpret_cast<int32_t*>(ebx38 + 0x482978)) {
                    eax40 = g60afdc;
                    *reinterpret_cast<void***>(ebx38 + 0x60af2c) = *reinterpret_cast<void***>(ebx38 + 0x60af2c) + 2;
                    esi41 = g60afe4;
                    eax12 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx39) + reinterpret_cast<uint32_t>(eax40) + 8) * 100 / reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi41 + 20)));
                    if (reinterpret_cast<signed char>(eax12) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx38 + 0x60af2c))) {
                        edi37 = 1;
                    } else {
                        *reinterpret_cast<void***>(ebx38 + 0x60af2c) = eax12;
                    }
                }
                ebx38 = ebx38 + 4;
                ecx39 = ecx39 + 40;
            } while (ebx38 != 16);
            if (!edi37) {
                eax42 = fun_4312d0(ecx39, v2);
                ++g60af6c;
                return eax42;
            }
        }
    } else {
        zf43 = (*reinterpret_cast<unsigned char*>(&g60afe8) & 3) == 0;
        if (zf43) {
            eax12 = fun_4312d0(ecx, v2);
        }
        edi44 = 0;
        ebx45 = 0;
        ecx46 = reinterpret_cast<void**>(0);
        do {
            if (*reinterpret_cast<int32_t*>(ebx45 + 0x482978)) {
                eax47 = g60afdc;
                *reinterpret_cast<void***>(ebx45 + 0x60af44) = *reinterpret_cast<void***>(ebx45 + 0x60af44) + 2;
                esi48 = g60afe4;
                eax12 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx46) + reinterpret_cast<uint32_t>(eax47) + 4) * 100 / reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi48 + 16)));
                if (reinterpret_cast<signed char>(eax12) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx45 + 0x60af44))) {
                    edi44 = 1;
                } else {
                    *reinterpret_cast<void***>(ebx45 + 0x60af44) = eax12;
                }
            }
            ebx45 = ebx45 + 4;
            ecx46 = ecx46 + 40;
        } while (ebx45 != 16);
        if (!edi44) {
            eax49 = fun_4312d0(ecx46, v2);
            ++g60af6c;
            return eax49;
        }
    }
    return eax12;
}

void** fun_4352b0(void** ecx) {
    void** eax2;

    g60afe0 = reinterpret_cast<void**>(0xffffffff);
    g60aff0 = reinterpret_cast<void**>(0);
    g60aff4 = reinterpret_cast<void**>(10);
    return eax2;
}

void** g4775a0 = reinterpret_cast<void**>(0);

void** g60afec = reinterpret_cast<void**>(0);

void** g60af7c = reinterpret_cast<void**>(0);

void** g60af78 = reinterpret_cast<void**>(0);

void** g60af44 = reinterpret_cast<void**>(0);

void** g60af2c = reinterpret_cast<void**>(0);

void** g60af54 = reinterpret_cast<void**>(0);

void** fun_437030(void** ecx) {
    void** eax2;
    uint1_t less3;
    int1_t zf4;
    void** ecx5;
    uint32_t ecx6;
    struct s29* esi7;
    void*** edi8;
    uint32_t eax9;
    uint32_t ecx10;
    int1_t zf11;
    int1_t zf12;
    void** ecx13;
    void** ecx14;
    void** v15;
    void** v16;
    signed char v17;
    void** ecx18;
    void** ebp19;
    void** v20;
    void** v21;
    signed char v22;
    void** ecx23;
    void** v24;
    void** v25;
    signed char v26;
    int32_t esi27;
    void** ecx28;
    void** v29;
    void** v30;
    signed char v31;
    void** ecx32;
    void** v33;
    void** v34;
    signed char v35;
    int1_t zf36;
    void** ecx37;
    void** v38;
    void** v39;
    signed char v40;
    void** ecx41;
    void** v42;
    void** v43;
    signed char v44;
    void** v45;
    void** eax46;
    int32_t esi47;
    void** ebx48;
    int1_t zf49;
    void** v50;
    void** v51;
    void** edx52;
    void** v53;
    void** esi54;
    void** v55;
    void** edi56;
    void** ecx57;
    uint32_t ecx58;
    struct s29* esi59;
    void*** edi60;
    uint32_t eax61;
    uint32_t ecx62;
    int1_t zf63;
    int1_t zf64;
    void** ecx65;
    int1_t zf66;
    void** ebx67;
    void** eax68;
    void** ebx69;
    void** eax70;
    int1_t zf71;
    int1_t zf72;
    void** eax73;
    int32_t v74;
    int32_t esi75;
    void** v76;
    void** edi77;
    void** v78;
    void** ebp79;
    void** ecx80;
    uint32_t ecx81;
    void*** edi82;
    struct s29* esi83;
    uint32_t eax84;
    uint32_t ecx85;
    int1_t zf86;
    int1_t zf87;
    void** ecx88;
    void** ecx89;
    void** esi90;
    void** ecx91;
    void** edi92;
    void** ecx93;
    void** ecx94;
    void** edi95;
    void** ecx96;
    void** ecx97;
    void** eax98;
    void** ebx99;
    void** ecx100;
    void** ecx101;
    void** ecx102;
    uint32_t ecx103;
    void** eax104;
    struct s29* esi105;
    void*** edi106;
    uint32_t v107;
    uint32_t eax108;
    uint32_t ecx109;
    int1_t zf110;
    int1_t zf111;
    void** ecx112;
    void** ecx113;
    void** v114;
    void** v115;
    signed char v116;
    void** ecx117;
    void** v118;
    void** v119;
    signed char v120;
    void** ecx121;
    void** v122;
    void** v123;
    signed char v124;
    void* ebp125;
    void** eax126;
    int32_t ebp127;
    void** eax128;
    void** v129;
    void** edx130;
    int32_t edx131;
    uint32_t eax132;
    void* edx133;
    void* edi134;
    void** ecx135;
    void** v136;
    void** v137;
    int1_t zf138;
    void** ecx139;
    int32_t eax140;
    void** ecx141;
    int32_t eax142;
    void** ecx143;
    void** ecx144;
    void* edx145;
    void** ecx146;
    void** ecx147;
    void** v148;
    void** v149;
    signed char v150;

    eax2 = g60afe0;
    less3 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax2) < reinterpret_cast<signed char>(0));
    if (less3) {
        if (eax2 == 0xffffffff) {
            g4775a0 = reinterpret_cast<void**>(1);
        } else {
            return eax2;
        }
    } else {
        if (less3 | reinterpret_cast<uint1_t>(eax2 == 0)) {
            zf4 = g482a6c == 0;
            if (!zf4) {
                ecx5 = g4775d0;
                ecx6 = reinterpret_cast<unsigned char>(ecx5) * reinterpret_cast<unsigned char>(g4775d4);
                esi7 = g5f27a4;
                edi8 = g5f27a0;
                eax9 = ecx6;
                ecx10 = ecx6 >> 2;
                zf11 = ecx10 == 0;
                do {
                    if (!ecx10) 
                        break;
                    --ecx10;
                    *edi8 = esi7->f0;
                    edi8 = edi8 + 4;
                    esi7 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(esi7) + 4);
                } while (!zf11);
                *reinterpret_cast<unsigned char*>(&ecx10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax9) & 3);
                zf12 = *reinterpret_cast<unsigned char*>(&ecx10) == 0;
                do {
                    if (!ecx10) 
                        break;
                    --ecx10;
                    *edi8 = esi7->f0;
                    ++edi8;
                    esi7 = reinterpret_cast<struct s29*>(&esi7->pad16384);
                } while (!zf12);
                ecx13 = g4775d4;
                fun_433970(ecx13);
                fun_435080(ecx13);
                fun_434ca0(ecx13);
                ecx14 = g60af80;
                fun_433a50(ecx14, v15, v16, v17);
                ecx18 = g60af74;
                ebp19 = reinterpret_cast<void**>(0);
                fun_433a50(ecx18, v20, v21, v22);
                ecx23 = g60af84;
                fun_433a50(ecx23, v24, v25, v26);
                esi27 = 0;
                do {
                    if (*reinterpret_cast<int32_t*>(esi27 + 0x482978) && (ecx28 = *reinterpret_cast<void***>(esi27 + 0x60aee4), fun_433a50(ecx28, v29, v30, v31), ecx32 = *reinterpret_cast<void***>(esi27 + 0x60aee4), fun_433a50(ecx32, v33, v34, v35), zf36 = ebp19 == g60afec, zf36)) {
                        ecx37 = g60af7c;
                        fun_433a50(ecx37, v38, v39, v40);
                        ecx41 = g60af78;
                        fun_433a50(ecx41, v42, v43, v44);
                    }
                    esi27 = esi27 + 4;
                    ++ebp19;
                } while (reinterpret_cast<signed char>(ebp19) < reinterpret_cast<signed char>(4));
                v45 = reinterpret_cast<void**>(0);
                do {
                    eax46 = v45;
                    if (*reinterpret_cast<void***>(eax46 + 0x482978)) {
                        esi47 = 0;
                        do {
                            if (*reinterpret_cast<int32_t*>(esi47 + 0x482978)) {
                                fun_4350f0(2);
                            }
                            esi47 = esi47 + 4;
                        } while (esi47 != 16);
                        eax46 = fun_4350f0(2);
                    }
                    ebx48 = v45 + 4;
                    v45 = ebx48;
                } while (!reinterpret_cast<int1_t>(ebx48 == 16));
                return eax46;
            }
            zf49 = g482a84 == 0;
            if (zf49) 
                goto addr_436330_27; else 
                goto addr_437069_28;
        } else {
            if (eax2 != 1) {
                return eax2;
            }
        }
    }
    v50 = ecx;
    v51 = edx52;
    v53 = esi54;
    v55 = edi56;
    ecx57 = g4775d0;
    ecx58 = reinterpret_cast<unsigned char>(ecx57) * reinterpret_cast<unsigned char>(g4775d4);
    esi59 = g5f27a4;
    edi60 = g5f27a0;
    eax61 = ecx58;
    ecx62 = ecx58 >> 2;
    zf63 = ecx62 == 0;
    do {
        if (!ecx62) 
            break;
        --ecx62;
        *edi60 = esi59->f0;
        edi60 = edi60 + 4;
        esi59 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(esi59) + 4);
    } while (!zf63);
    *reinterpret_cast<unsigned char*>(&ecx62) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax61) & 3);
    zf64 = *reinterpret_cast<unsigned char*>(&ecx62) == 0;
    do {
        if (!ecx62) 
            break;
        --ecx62;
        *edi60 = esi59->f0;
        ++edi60;
        esi59 = reinterpret_cast<struct s29*>(&esi59->pad16384);
    } while (!zf64);
    ecx65 = g4775d4;
    fun_433970(ecx65);
    fun_435080(ecx65);
    zf66 = g481264 == 0;
    if (zf66) {
        ebx67 = g60afe4;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx67)) > reinterpret_cast<signed char>(2)) 
            goto addr_435404_39;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx67 + 8) == 8)) {
            eax68 = *reinterpret_cast<void***>(ebx67 + 8);
        } else {
            eax68 = *reinterpret_cast<void***>(ebx67 + 12) - 1;
        }
        ecx65 = eax68;
        ebx69 = reinterpret_cast<void**>(0);
        if (reinterpret_cast<signed char>(eax68) >= reinterpret_cast<signed char>(0)) {
            do {
                ++ebx69;
                fun_434db0(ecx65, v55, v53, v51, v50);
            } while (reinterpret_cast<signed char>(ebx69) <= reinterpret_cast<signed char>(ecx65));
        }
        eax70 = g60afe4;
        if (*reinterpret_cast<void***>(eax70 + 4)) {
            fun_434db0(ecx65, v55, v53, v51, v50);
        }
        zf71 = g4775a0 == 0;
        if (!zf71) {
            fun_434db0(ecx65, v55, v53, v51, v50);
        }
    }
    zf72 = g481264 == 0;
    if (zf72 || (eax73 = g60afe4, *reinterpret_cast<void***>(eax73 + 12) != 30)) {
        addr_435404_39:
        eax73 = fun_434d30(ecx65);
        goto addr_435409_51;
    } else {
        addr_435409_51:
        return eax73;
    }
    addr_436330_27:
    v74 = esi75;
    v76 = edi77;
    v78 = ebp79;
    ecx80 = g4775d0;
    ecx81 = reinterpret_cast<unsigned char>(ecx80) * reinterpret_cast<unsigned char>(g4775d4);
    edi82 = g5f27a0;
    esi83 = g5f27a4;
    eax84 = ecx81;
    ecx85 = ecx81 >> 2;
    zf86 = ecx85 == 0;
    do {
        if (!ecx85) 
            break;
        --ecx85;
        *edi82 = esi83->f0;
        edi82 = edi82 + 4;
        esi83 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(esi83) + 4);
    } while (!zf86);
    *reinterpret_cast<unsigned char*>(&ecx85) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax84) & 3);
    zf87 = *reinterpret_cast<unsigned char*>(&ecx85) == 0;
    do {
        if (!ecx85) 
            break;
        --ecx85;
        *edi82 = esi83->f0;
        ++edi82;
        esi83 = reinterpret_cast<struct s29*>(&esi83->pad16384);
    } while (!zf87);
    ecx88 = g4775d4;
    fun_433970(ecx88);
    fun_435080(ecx88);
    fun_434ca0(ecx88);
    ecx89 = g60afa0;
    fun_433a50(ecx89, v78, v76, *reinterpret_cast<signed char*>(&v74));
    esi90 = g60af44;
    if (reinterpret_cast<signed char>(esi90) >= reinterpret_cast<signed char>(0)) 
        goto addr_4363bc_58;
    addr_4363e9_59:
    ecx91 = g60afc8;
    fun_433a50(ecx91, v78, v76, *reinterpret_cast<signed char*>(&v74));
    edi92 = g60af2c;
    if (reinterpret_cast<signed char>(edi92) >= reinterpret_cast<signed char>(0)) {
        ecx93 = g60afc4;
        fun_433a50(ecx93, v78, v76, *reinterpret_cast<signed char*>(&v74));
        fun_4350f0(0xffffffff);
    }
    ecx94 = g60afc0;
    fun_433a50(ecx94, v78, v76, *reinterpret_cast<signed char*>(&v74));
    edi95 = g60af54;
    if (reinterpret_cast<signed char>(edi95) >= reinterpret_cast<signed char>(0)) {
        ecx96 = g60afc4;
        fun_433a50(ecx96, v78, v76, *reinterpret_cast<signed char*>(&v74));
        fun_4350f0(0xffffffff);
    }
    ecx97 = g60af8c;
    fun_433a50(ecx97, v78, v76, *reinterpret_cast<signed char*>(&v74));
    eax98 = fun_4351f0(ecx97);
    ebx99 = g60afe4;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx99)) < reinterpret_cast<signed char>(3)) {
        ecx100 = g60afcc;
        fun_433a50(ecx100, v78, v76, *reinterpret_cast<signed char*>(&v74));
        eax98 = fun_4351f0(ecx100);
    }
    return eax98;
    addr_4363bc_58:
    ecx101 = g60afc4;
    fun_433a50(ecx101, v78, v76, *reinterpret_cast<signed char*>(&v74));
    fun_4350f0(0xffffffff);
    goto addr_4363e9_59;
    addr_437069_28:
    ecx102 = g4775d0;
    ecx103 = reinterpret_cast<unsigned char>(ecx102) * reinterpret_cast<unsigned char>(g4775d4);
    eax104 = g60afc4;
    esi105 = g5f27a4;
    edi106 = g5f27a0;
    v107 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax104))));
    eax108 = ecx103;
    ecx109 = ecx103 >> 2;
    zf110 = ecx109 == 0;
    do {
        if (!ecx109) 
            break;
        --ecx109;
        *edi106 = esi105->f0;
        edi106 = edi106 + 4;
        esi105 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(esi105) + 4);
    } while (!zf110);
    *reinterpret_cast<unsigned char*>(&ecx109) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax108) & 3);
    zf111 = *reinterpret_cast<unsigned char*>(&ecx109) == 0;
    do {
        if (!ecx109) 
            break;
        --ecx109;
        *edi106 = esi105->f0;
        ++edi106;
        esi105 = reinterpret_cast<struct s29*>(&esi105->pad16384);
    } while (!zf111);
    ecx112 = g4775d4;
    fun_433970(ecx112);
    fun_435080(ecx112);
    fun_434ca0(ecx112);
    ecx113 = g60afa0;
    fun_433a50(ecx113, v114, v115, v116);
    ecx117 = g60afc8;
    fun_433a50(ecx117, v118, v119, v120);
    ecx121 = g60afa4;
    fun_433a50(ecx121, v122, v123, v124);
    ebp125 = g60af68;
    if (ebp125) 
        goto addr_4371ac_72;
    addr_4371f2_73:
    eax126 = g60afa0;
    ebp127 = 0;
    eax128 = reinterpret_cast<void**>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax126 + 2)) + 50);
    v129 = reinterpret_cast<void**>(0);
    do {
        if (*reinterpret_cast<int32_t*>(ebp127 + 0x482978)) {
            edx130 = g60af78;
            edx131 = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edx130));
            eax132 = reinterpret_cast<uint32_t>(edx131 - (edx131 >> 31) >> 1);
            edx133 = g60af68;
            edi134 = reinterpret_cast<void*>(eax132 + 32);
            *reinterpret_cast<unsigned char*>(&eax132) = reinterpret_cast<uint1_t>(edx133 == 0);
            ecx135 = *reinterpret_cast<void***>(ebp127 + 0x60aee4);
            fun_433a50(ecx135, v129, v136, *reinterpret_cast<signed char*>(&v137));
            zf138 = v129 == g60afec;
            if (zf138) {
                ecx139 = g60af78;
                fun_433a50(ecx139, v129, v136, *reinterpret_cast<signed char*>(&v137));
            }
            eax140 = *reinterpret_cast<int32_t*>(ebp127 + 0x60af44);
            if (eax140 >= 0) {
                ecx141 = g60afc4;
                fun_433a50(ecx141, v129, v136, *reinterpret_cast<signed char*>(&v137));
                fun_4350f0(0xffffffff);
            }
            eax142 = *reinterpret_cast<int32_t*>(ebp127 + 0x60af2c);
            if (eax142 >= 0) {
                ecx143 = g60afc4;
                fun_433a50(ecx143, v129, v136, *reinterpret_cast<signed char*>(&v137));
                fun_4350f0(0xffffffff);
            }
            v136 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi134) + ((eax132 & 0xff) << 5) + 64 + 64 + 64 - v107);
            eax128 = *reinterpret_cast<void***>(ebp127 + 0x60af54);
            v137 = eax128;
            if (reinterpret_cast<signed char>(eax128) >= reinterpret_cast<signed char>(0)) {
                ecx144 = g60afc4;
                fun_433a50(ecx144, v129, v136, *reinterpret_cast<signed char*>(&v137));
                eax128 = fun_4350f0(0xffffffff);
            }
            edx145 = g60af68;
            if (edx145) {
                eax128 = fun_4350f0(0xffffffff);
            }
        }
        ecx146 = v129 + 1;
        ebp127 = ebp127 + 4;
        v129 = ecx146;
    } while (reinterpret_cast<signed char>(ecx146) < reinterpret_cast<signed char>(4));
    return eax128;
    addr_4371ac_72:
    ecx147 = g60afd8;
    fun_433a50(ecx147, v148, v149, v150);
    goto addr_4371f2_73;
}

struct s478 {
    signed char[16] pad16;
    int32_t f10;
};

struct s479 {
    signed char[36] pad36;
    void** f24;
};

int32_t g60af90 = 0;

struct s480 {
    signed char[16] pad16;
    int32_t f10;
};

void** fun_4373a0(void** ecx) {
    int32_t ebp2;
    struct s478* eax3;
    struct s479* eax4;
    void* eax5;
    struct s480* eax6;
    void** eax7;
    void** eax8;
    int1_t zf9;

    g60aff0 = reinterpret_cast<void**>(0);
    g60afe8 = reinterpret_cast<void**>(0);
    g60aff4 = reinterpret_cast<void**>(0);
    ebp2 = eax3->f10;
    g60afec = eax4->f24;
    g60af90 = 1;
    g60afdc = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax5) + 40);
    if (!ebp2) {
        eax6->f10 = 1;
    }
    if (!*reinterpret_cast<void***>(eax7 + 20)) {
        *reinterpret_cast<void***>(eax7 + 20) = reinterpret_cast<void**>(1);
    }
    eax8 = eax7;
    if (!*reinterpret_cast<void***>(eax7 + 24)) {
        *reinterpret_cast<void***>(eax7 + 24) = reinterpret_cast<void**>(1);
    }
    zf9 = g481258 == 0;
    if (!zf9 && (eax8 = eax7, reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax7)) > reinterpret_cast<signed char>(2))) {
        *reinterpret_cast<void***>(eax7) = *reinterpret_cast<void***>(eax7) + 0xfffffffd;
    }
    g60afe4 = eax7;
    return eax8;
}

void** fun_435510(void** ecx) {
    void* esi2;
    void** ecx3;
    void* ebx4;
    void** eax5;
    void** eax6;

    g60afe0 = reinterpret_cast<void**>(0);
    g60aff0 = reinterpret_cast<void**>(0);
    g60af70 = 1;
    g60afd4 = reinterpret_cast<void**>(35);
    esi2 = reinterpret_cast<void*>(0);
    ecx3 = reinterpret_cast<void**>(0);
    do {
        if (*reinterpret_cast<void***>(ecx3 + 0x482978)) {
            ebx4 = esi2;
            eax5 = reinterpret_cast<void**>(0);
            do {
                if (*reinterpret_cast<void***>(eax5 + 0x482978)) {
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebx4) + reinterpret_cast<unsigned char>(eax5) + 0x60ae94) = reinterpret_cast<void**>(0);
                }
                eax5 = eax5 + 4;
            } while (!reinterpret_cast<int1_t>(eax5 == 16));
            *reinterpret_cast<void***>(ecx3 + 0x60aed4) = reinterpret_cast<void**>(0);
        }
        ecx3 = ecx3 + 4;
        esi2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi2) + 16);
    } while (!reinterpret_cast<int1_t>(ecx3 == 16));
    eax6 = fun_434ea0(ecx3);
    return eax6;
}

void** fun_435a80(void** ecx) {
    void** edx2;
    int32_t ebx3;
    void** eax4;
    void* tmp32_5;
    int1_t zf6;
    uint32_t eax7;
    void** eax8;

    edx2 = reinterpret_cast<void**>(0);
    ebx3 = 0;
    g60afe0 = reinterpret_cast<void**>(0);
    g60aff0 = reinterpret_cast<void**>(0);
    g60af6c = reinterpret_cast<void**>(1);
    g60afd4 = reinterpret_cast<void**>(35);
    do {
        if (*reinterpret_cast<void***>(edx2 + 0x482978)) {
            *reinterpret_cast<int32_t*>(edx2 + 0x60ae84) = 0;
            *reinterpret_cast<int32_t*>(edx2 + 0x60af54) = 0;
            *reinterpret_cast<int32_t*>(edx2 + 0x60af2c) = 0;
            *reinterpret_cast<int32_t*>(edx2 + 0x60af44) = 0;
            eax4 = fun_4354a0(1);
            tmp32_5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(g60af68) + reinterpret_cast<unsigned char>(eax4));
            g60af68 = tmp32_5;
        }
        ++ebx3;
        edx2 = edx2 + 4;
    } while (ebx3 < 4);
    zf6 = g60af68 == 0;
    *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<uint1_t>(!zf6);
    eax7 = reinterpret_cast<unsigned char>(eax4) & 0xff;
    *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<uint1_t>(!!eax7);
    g60af68 = reinterpret_cast<void*>(eax7 & 0xff);
    eax8 = fun_434ea0(1);
    return eax8;
}

void** g60b3a8 = reinterpret_cast<void**>(0);

int32_t fun_439df0(void** ecx, void** a2) {
    int32_t v3;
    int32_t edx4;
    void* esp5;
    int1_t zf6;
    void** v7;
    void** ebx8;
    void** eax9;
    void** v10;
    void** edx11;
    void** v12;
    void** eax13;
    void* esp14;
    void** ecx15;
    void** v16;
    void** esi17;
    void** v18;
    void** v19;
    void*** esp20;
    void** v21;
    void** v22;
    void** v23;
    int32_t eax24;
    void** ebp25;
    int32_t eax26;
    int32_t* esp27;
    void* v28;
    int32_t v29;
    int32_t v30;
    int32_t v31;
    int32_t v32;
    int32_t v33;
    int32_t v34;
    void** ecx35;
    void** esi36;
    void* esp37;
    void* v38;
    void* esp39;
    void* v40;
    void** edi41;
    int32_t v42;
    int32_t v43;
    int32_t v44;
    int32_t v45;
    int32_t v46;
    int32_t v47;
    void** esi48;
    void** eax49;
    void** edx50;
    void* esp51;
    void* esp52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** ebx57;
    void** eax58;
    void** edx59;
    void** eax60;
    void* esp61;
    void** edi62;
    void** esi63;
    void** eax64;
    void** edx65;
    void** eax66;
    void* esp67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void* esp72;
    void** ecx73;
    void* esp74;
    void*** esp75;
    void** v76;
    void** eax77;
    void** v78;
    void** edx79;
    void** eax80;
    void* esp81;
    void** v82;
    void** ebp83;
    unsigned char v84;
    void** ebx85;
    unsigned char v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** eax91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** eax96;

    v3 = edx4;
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x778);
    zf6 = g4775e0 == 0;
    if (!zf6) {
        v7 = reinterpret_cast<void**>(8);
        ebx8 = g5f22d0;
        eax9 = g60b264;
        v10 = ebx8;
        edx11 = *reinterpret_cast<void***>(eax9);
        v12 = eax9;
        eax13 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx11 + 80)(v12, v10, 8));
        esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 + 4);
        g60b3a0 = eax13;
        if (!eax13) {
            ecx15 = g4775d4;
            v16 = ecx15;
            esi17 = g4775d0;
            v18 = esi17;
            v19 = eax13;
            esp20 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp14) - 4 - 4 - 4 - 4);
            v21 = eax13;
            v22 = reinterpret_cast<void**>(esp20 + 0x768);
            SetRect(v22, v21, v19, v18, v16, v12, v10, 8);
            v23 = reinterpret_cast<void**>(0xec);
            eax24 = reinterpret_cast<int32_t>(GetWindowLongA());
            ebp25 = g5f22d0;
            eax26 = reinterpret_cast<int32_t>(GetWindowLongA(ebp25, 0xf0, 0, eax24));
            esp27 = reinterpret_cast<int32_t*>(esp20 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4);
            v28 = reinterpret_cast<void*>(esp27 + 0x1d9);
            AdjustWindowRectEx(v28, eax26, ebp25, 0xf0, 0, eax24);
            v29 = v30 - v31;
            v32 = v33 - v34;
            ecx35 = g5f22d0;
            SetWindowPos(ecx35, 0, 0, 0, v32, v29, 22, v28, eax26, ebp25, 0xf0, 0, eax24);
            esi36 = g5f22d0;
            SetWindowPos(esi36, 0xfe, 0, 0, 0, 0, 19, ecx35, 0, 0, 0, v32, v29, 22, v28, eax26, ebp25, 0xf0, 0, eax24);
            esp37 = reinterpret_cast<void*>(esp27 - 1 - 1 + 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 + 1 - 1);
            v38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) + 0x76c);
            SystemParametersInfoA(48, 0, v38, 0, esi36, 0xfe, 0, 0, 0, 0, 19, ecx35, 0, 0, 0, v32, v29, 22, v28, eax26, ebp25, 0xf0, 0, eax24);
            esp39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) - 4 - 4 - 4 - 4 + 4);
            v40 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp39) + 0x758);
            edi41 = g5f22d0;
            GetWindowRect(edi41, v40, 48, 0, v38, 0, esi36, 0xfe, 0, 0, 0, 0, 19, ecx35, 0, 0, 0, v32, v29, 22, v28, eax26, ebp25, 0xf0, 0, eax24);
            if (v42 < v43) {
                v44 = v43;
            }
            if (v45 < v46) {
                v47 = v46;
            }
            esi48 = g5f22d0;
            SetWindowPos(esi48, 0, v44, v47, 0, 0, 21, edi41, v40, 48, 0, v38, 0, esi36, 0xfe, 0, 0, 0, 0, 19, ecx35, 0, 0, 0, v32, v29, 22, v28, eax26, ebp25, 0xf0, 0, eax24);
            eax49 = g60b264;
            edx50 = *reinterpret_cast<void***>(eax49);
            *reinterpret_cast<void***>(edx50 + 76)(eax49, esi48, 0, v44, v47, 0, 0, 21, edi41, v40, 48, 0, v38, 0, esi36, 0xfe, 0, 0, 0, 0, 19, ecx35, 0, 0, 0, v32, v29, 22, v28, eax26, ebp25, 0xf0, 0, eax24);
            esp51 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp39) - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
        } else {
            esp52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4);
            g60b430 = reinterpret_cast<void**>(1);
            wsprintfA(reinterpret_cast<int32_t>(esp52) + 0x208, "SetCoop %d", reinterpret_cast<unsigned char>(eax13) & 0xfff, v12, v10, 8);
            fun_437a90(ecx, reinterpret_cast<int32_t>(esp52) - 4 - 4 + 4 + 12 + 0x200, v12, v10, 8, v53, v54, v55, v56);
            g60b430 = reinterpret_cast<void**>(0);
            goto v3;
        }
    } else {
        v7 = reinterpret_cast<void**>(81);
        ebx57 = g5f22d0;
        eax58 = g60b264;
        v10 = ebx57;
        edx59 = *reinterpret_cast<void***>(eax58);
        v12 = eax58;
        eax60 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx59 + 80)(v12, v10, 81));
        esp61 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 + 4);
        g60b3a0 = eax60;
        if (!eax60) {
            v16 = eax60;
            edi62 = g4775d0;
            esi63 = g4775d4;
            SetCursor(v16, v12, v10, 81);
            v18 = reinterpret_cast<void**>(8);
            v19 = esi63;
            eax64 = g60b264;
            v21 = edi62;
            edx65 = *reinterpret_cast<void***>(eax64);
            v22 = eax64;
            eax66 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx65 + 84)(v22, v21, v19, 8, v16, v12, v10, 81));
            v23 = reinterpret_cast<void**>(0);
            g60b3a0 = eax66;
            SetCursor(0, v22, v21, v19, 8, v16, v12, v10, 81);
            esp51 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp61) - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
        } else {
            esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp61) - 4 - 4);
            g60b430 = reinterpret_cast<void**>(1);
            wsprintfA(reinterpret_cast<int32_t>(esp67) + 8, "SetCoop %d", reinterpret_cast<unsigned char>(eax60) & 0xfff, v12, v10, 81);
            fun_437a90(ecx, reinterpret_cast<int32_t>(esp67) - 4 - 4 + 4 + 12, v12, v10, 81, v68, v69, v70, v71);
            g60b430 = reinterpret_cast<void**>(0);
            goto addr_43a167_12;
        }
    }
    fun_442b80(0xac, v23, v22, v21, v19, v18, 0xac, v23, v22, v21, v19, v18);
    esp72 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp51) - 4 + 4 - 4);
    ecx73 = reinterpret_cast<void**>(43);
    do {
        if (!ecx73) 
            break;
        --ecx73;
    } while (1);
    *reinterpret_cast<unsigned char*>(&ecx73) = 0;
    do {
        if (!ecx73) 
            break;
        --ecx73;
    } while (0);
    esp74 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp72) + 4);
    esp75 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp74) - 4);
    v76 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp74) + 0x6ac);
    eax77 = g60b264;
    v78 = reinterpret_cast<void**>(esp75 + 0x604);
    edx79 = *reinterpret_cast<void***>(eax77);
    eax80 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx79 + 44)(eax77, v78, v76, v23, v22, v21, v19, v18, v16, v12, v10, v7));
    g60b3a0 = eax80;
    esp81 = reinterpret_cast<void*>(esp75 - 4 - 4 - 4 + 4 - 4 - 4);
    g60b430 = reinterpret_cast<void**>(1);
    wsprintfA(reinterpret_cast<int32_t>(esp81) + 0x408, "PreCreateScreens: GetCaps %d", reinterpret_cast<unsigned char>(eax80) & 0xfff, eax77, v78, v76, v23, v22, v21, v19, v18, v16, v12, v10, v7);
    v82 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp81) - 4 - 4 + 4 + 12 + 0x400);
    fun_437a90(ecx73, v82, eax77, v78, v76, v23, v22, v21, v19, ecx73, v82, eax77, v78, v76, v23, v22, v21, v19);
    ebp83 = g60b3a0;
    g60b430 = reinterpret_cast<void**>(0);
    if (ebp83 || v84 & 8) {
        g4775c4 = reinterpret_cast<void**>(0x800);
    } else {
        g4775c4 = reinterpret_cast<void**>(0x4000);
    }
    ebx85 = g60b3a0;
    if (ebx85 || v86 & 2) {
        g60b3a8 = reinterpret_cast<void**>(1);
        g4775c4 = reinterpret_cast<void**>(0x800);
    } else {
        g60b3a8 = ebx85;
    }
    eax91 = fun_41d410(ecx73, eax77, v78, v76, v23, v22, v21, v19, v18, v16, v12, v10, v7, v87, 48, 0, v88, 0, v89, 0xfe, 0, 0, 0, 0, 19, v90, 0, 0, 0);
    if (eax91) {
        g4775c4 = reinterpret_cast<void**>(0x800);
    }
    eax96 = fun_41d410(ecx73, eax77, v78, v76, v23, v22, v21, v19, v18, v16, v12, v10, v7, v92, 48, 0, v93, 0, v94, 0xfe, 0, 0, 0, 0, 19, v95, 0, 0, 0);
    if (eax96) {
        g4775c4 = reinterpret_cast<void**>(0x4000);
    }
    addr_43a167_12:
    goto v3;
}

int32_t g60b334 = 0;

void** g60b338 = reinterpret_cast<void**>(0);

void** g60b39c = reinterpret_cast<void**>(0);

void** g60b340 = reinterpret_cast<void**>(0);

void** g60b33c = reinterpret_cast<void**>(0);

void** g60b280 = reinterpret_cast<void**>(0);

void** g4775e8 = reinterpret_cast<void**>(1);

int32_t fun_438700(void** ecx, void** a2) {
    void** eax3;
    void** edx4;
    void** eax5;
    void* esp6;
    void** eax7;
    void** eax8;
    void** eax9;
    void** eax10;
    void** edx11;
    void** eax12;
    void* esp13;
    int1_t zf14;
    void** eax15;
    void** eax16;
    void** eax17;
    void** eax18;
    void** edx19;
    void** eax20;
    void** edx21;
    void* esp22;
    void* esp23;
    void** v24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** edx28;
    void** eax29;
    void* esp30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
    void** eax48;
    void** edx49;
    void** eax50;
    void* esp51;
    void** edi52;
    void** eax53;
    void** edx54;
    void** eax55;
    void* esp56;
    void** ebp57;
    void** eax58;
    void** edx59;
    void** eax60;
    void** eax61;
    int1_t zf62;
    void** ebx63;
    void** edx64;
    void** eax65;
    void* esp66;
    void** v67;
    int32_t v68;
    void* esp69;
    void** v70;
    int32_t v71;
    void* esp72;
    void** v73;
    int32_t v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** esi81;
    void* esp82;
    void** v83;
    int32_t v84;
    void* esp85;
    int32_t v86;
    void* esp87;
    void** v88;
    void** v89;
    void** v90;
    int32_t esi91;

    eax3 = g60b264;
    g60b334 = 0x6c;
    edx4 = *reinterpret_cast<void***>(eax3);
    g60b338 = reinterpret_cast<void**>(0);
    g60b39c = reinterpret_cast<void**>(0x200);
    eax5 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx4 + 24)(eax3, 0x60b334, 0x60b268, 0));
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0xe00 - 4 - 4 - 4 - 4 - 4 + 4);
    g60b3a0 = eax5;
    if (!eax5) {
        eax7 = g4775c4;
        *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) | 64);
        g60b39c = eax7;
        eax8 = g4775d0;
        g60b340 = eax8;
        eax9 = g4775d4;
        g60b33c = eax9;
        eax10 = g60b264;
        edx11 = *reinterpret_cast<void***>(eax10);
        g60b338 = reinterpret_cast<void**>(6);
        eax12 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx11 + 24)(eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0));
        esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 - 4 - 4 - 4 + 4);
        g60b3a0 = eax12;
        if (!eax12) {
            zf14 = reinterpret_cast<int1_t>(g4775c4 == 0x800);
            if (!zf14) {
                eax15 = g60b270;
                g60b26c = eax15;
            } else {
                g60b39c = reinterpret_cast<void**>(0x4040);
                eax16 = g4775d0;
                g60b340 = eax16;
                eax17 = g4775d4;
                g60b33c = eax17;
                eax18 = g60b264;
                edx19 = *reinterpret_cast<void***>(eax18);
                g60b338 = reinterpret_cast<void**>(6);
                eax20 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx19 + 24)(eax18, 0x60b334, 0x60b26c, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0));
                esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 - 4 - 4 - 4 + 4);
                g60b3a0 = eax20;
                if (eax20) {
                    edx21 = g60b270;
                    g60b26c = edx21;
                    esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4);
                    g60b430 = reinterpret_cast<void**>(1);
                    wsprintfA(reinterpret_cast<int32_t>(esp22) + 0x808, "Couldn't create video memory backbuffer, Error %d", reinterpret_cast<unsigned char>(eax20) & 0xfff, eax18, 0x60b334, 0x60b26c, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0);
                    esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 - 4 + 4 + 12);
                    v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp23) + 0x800);
                    fun_437a90(0x200, v24, eax18, 0x60b334, 0x60b26c, 0, eax10, 0x60b334, 0x60b270, 0x200, v24, eax18, 0x60b334, 0x60b26c, 0, eax10, 0x60b334, 0x60b270);
                    esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 + 4 + 4);
                    g60b430 = reinterpret_cast<void**>(0);
                }
            }
            eax25 = g4775d0;
            g60b340 = eax25;
            eax26 = g4775d4;
            g60b33c = eax26;
            eax27 = g60b264;
            edx28 = *reinterpret_cast<void***>(eax27);
            g60b338 = reinterpret_cast<void**>(6);
            g60b39c = reinterpret_cast<void**>(64);
            eax29 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx28 + 24)(eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0));
            esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 - 4 - 4 - 4 + 4);
            g60b3a0 = eax29;
            if (!eax29) {
                eax47 = fun_41d410(6, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46);
                if (!eax47) {
                    eax48 = g60b264;
                    edx49 = *reinterpret_cast<void***>(eax48);
                    eax50 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx49 + 16)(eax48, 0, 0x60b280, 0, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0));
                    esp51 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4);
                    g60b3a0 = eax50;
                    if (!eax50) {
                        edi52 = g5f22d0;
                        eax53 = g60b280;
                        edx54 = *reinterpret_cast<void***>(eax53);
                        eax55 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx54 + 32)(eax53, 0, edi52, eax48, 0, 0x60b280, 0, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0));
                        esp56 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp51) - 4 - 4 - 4 - 4 + 4);
                        g60b3a0 = eax55;
                        if (!eax55) {
                            ebp57 = g60b280;
                            eax58 = g60b268;
                            edx59 = *reinterpret_cast<void***>(eax58);
                            eax60 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx59 + 0x70)(eax58, ebp57, eax53, 0, edi52, eax48, 0, 0x60b280, 0, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0));
                            g60b3a0 = eax60;
                            if (!eax60) {
                                eax61 = g60b268;
                                if (eax61 && (zf62 = g60b27c == 0, !zf62)) {
                                    ebx63 = g60b27c;
                                    edx64 = *reinterpret_cast<void***>(eax61);
                                    eax65 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx64 + 0x7c)(eax61, ebx63, eax58, ebp57, eax53, 0, edi52, eax48, 0, 0x60b280, 0, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0));
                                    g60b3a0 = eax65;
                                }
                            } else {
                                esp66 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp56) - 4 - 4 - 4 + 4 - 4 - 4);
                                g60b430 = reinterpret_cast<void**>(1);
                                wsprintfA(reinterpret_cast<int32_t>(esp66) + 0x608, "Cant attach clipper to front buffer %d", reinterpret_cast<unsigned char>(eax60) & 0xfff, eax58, ebp57, eax53, 0, edi52, eax48, 0, 0x60b280, 0, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0);
                                v67 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp66) - 4 - 4 + 4 + 12 + 0x600);
                                fun_437a90(1, v67, eax58, ebp57, eax53, 0, edi52, eax48, 0, 1, v67, eax58, ebp57, eax53, 0, edi52, eax48, 0);
                                g60b430 = reinterpret_cast<void**>(0);
                                goto v68;
                            }
                        } else {
                            esp69 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp56) - 4 - 4);
                            g60b430 = reinterpret_cast<void**>(1);
                            wsprintfA(reinterpret_cast<int32_t>(esp69) + 0x208, "Cant set clipper window handle %d", reinterpret_cast<unsigned char>(eax55) & 0xfff, eax53, 0, edi52, eax48, 0, 0x60b280, 0, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0);
                            v70 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp69) - 4 - 4 + 4 + 12 + 0x200);
                            fun_437a90(6, v70, eax53, 0, edi52, eax48, 0, 0x60b280, 0, 6, v70, eax53, 0, edi52, eax48, 0, 0x60b280, 0);
                            g60b430 = reinterpret_cast<void**>(0);
                            goto v71;
                        }
                    } else {
                        esp72 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp51) - 4 - 4);
                        g60b430 = reinterpret_cast<void**>(1);
                        wsprintfA(reinterpret_cast<int32_t>(esp72) + 0xc08, "Cant create clipper %d", reinterpret_cast<unsigned char>(eax50) & 0xfff, eax48, 0, 0x60b280, 0, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0);
                        v73 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp72) - 4 - 4 + 4 + 12 + 0xc00);
                        fun_437a90(6, v73, eax48, 0, 0x60b280, 0, eax27, 0x60b334, 0x60b278, 6, v73, eax48, 0, 0x60b280, 0, eax27, 0x60b334, 0x60b278);
                        g60b430 = reinterpret_cast<void**>(0);
                        goto v74;
                    }
                }
                fun_43c050(6, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0, v75, v76, v77);
                fun_43bb40(1, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0, v78, v79, v80);
                g4775e8 = reinterpret_cast<void**>(1);
                fun_43bb10(1, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0);
                esi81 = g5f22d0;
                SetWindowPos(esi81, 0xfe, 0, 0, 0, 0, 3, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0);
                fun_43eed0(1, esi81, 0xfe, 0, 0, 0, 0, 3, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0);
            } else {
                esp82 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4);
                g60b430 = reinterpret_cast<void**>(1);
                wsprintfA(reinterpret_cast<int32_t>(esp82) + 0x408, "Couldn't create page 4!, Error %d", reinterpret_cast<unsigned char>(eax29) & 0xfff, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0);
                v83 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp82) - 4 - 4 + 4 + 12 + 0x400);
                fun_437a90(6, v83, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270, 6, v83, eax27, 0x60b334, 0x60b278, 0, eax10, 0x60b334, 0x60b270);
                g60b430 = reinterpret_cast<void**>(0);
                goto v84;
            }
        } else {
            esp85 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4);
            g60b430 = reinterpret_cast<void**>(1);
            wsprintfA(reinterpret_cast<int32_t>(esp85) + 8, "Couldn't create offscreen surface, Error %d", reinterpret_cast<unsigned char>(eax12) & 0xfff, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0);
            fun_437a90(0x200, reinterpret_cast<int32_t>(esp85) - 4 - 4 + 4 + 12, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268, 0x200, reinterpret_cast<int32_t>(esp85) - 4 - 4 + 4 + 12, eax10, 0x60b334, 0x60b270, 0, eax3, 0x60b334, 0x60b268);
            g60b430 = reinterpret_cast<void**>(0);
            goto v86;
        }
    } else {
        esp87 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4);
        g60b430 = reinterpret_cast<void**>(1);
        wsprintfA(reinterpret_cast<int32_t>(esp87) + 0xa08, "Couldn't create surfaces, Error %d", reinterpret_cast<unsigned char>(eax5) & 0xfff, eax3, 0x60b334, 0x60b268, 0);
        fun_437a90(1, reinterpret_cast<int32_t>(esp87) - 4 - 4 + 4 + 12 + 0xa00, eax3, 0x60b334, 0x60b268, 0, v88, v89, v90);
        g60b430 = reinterpret_cast<void**>(0);
    }
    goto esi91;
}

void fun_43bb10(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    int32_t eax14;

    while (eax14 = reinterpret_cast<int32_t>(PeekMessageA()), !!eax14) {
        DispatchMessageA(0x60b410);
    }
    goto 0;
}

void** g60b348 = reinterpret_cast<void**>(0);

int32_t g60b330 = 0;

void** g4775c8 = reinterpret_cast<void**>(1);

int32_t fun_438030(void** ecx, void** a2) {
    void** eax3;
    void** edx4;
    void** v5;
    void** eax6;
    void* esp7;
    void*** esp8;
    void** v9;
    void* esp10;
    void* esp11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** edx16;
    void** eax17;
    void* esp18;
    unsigned char dl19;
    void* esp20;
    void* esp21;
    void** v22;
    void** eax23;
    void** edx24;
    void** eax25;
    void* esp26;
    void* esp27;
    void** eax28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void* esp33;
    void** eax34;
    void** v35;
    void** edx36;
    void** v37;
    void** eax38;
    void* esp39;
    void** ecx40;
    unsigned char v41;
    void*** esp42;
    void** v43;
    void** v44;
    void** eax45;
    void** edx46;
    void** v47;
    void** eax48;
    void* esp49;
    void* esp50;
    void** v51;
    int32_t v52;
    void** eax53;
    void** v54;
    void** ebx55;
    void** v56;
    void** eax57;
    void* esp58;
    unsigned char v59;
    int1_t zf60;
    void** ebp61;
    unsigned char v62;
    void** eax63;
    void*** esp64;
    void** v65;
    void** eax66;
    void** eax67;
    void** eax68;
    void** edx69;
    void** eax70;
    void* esp71;
    void* esp72;
    void** v73;
    int32_t v74;
    void** eax75;
    void** eax76;
    void** eax77;
    void** v78;
    void** edx79;
    void** eax80;
    void* esp81;
    void* esp82;
    void** v83;
    int32_t v84;
    int1_t zf85;
    void** ebx86;
    void* esp87;
    void** eax88;
    void** edx89;
    void** eax90;
    void** v91;
    void** v92;
    void** eax93;
    void** v94;
    void** edx95;
    void** v96;
    int1_t zf97;
    void** eax98;
    void** v99;
    void** edx100;
    void** eax101;
    void** eax102;
    void** v103;
    void** v104;
    void** v105;
    void** ebx106;
    void** eax107;
    void** esi108;
    void** edi109;
    void** edx110;
    void** eax111;
    void** v112;
    void** v113;
    int32_t v114;
    void** v115;
    void* esp116;
    void** eax117;
    void** v118;
    void** ebx119;
    void** eax120;
    void** v121;
    void* esp122;
    void** eax123;
    void** v124;
    void** ebx125;
    void** eax126;
    void** v127;
    void** eax128;
    void** edx129;

    eax3 = g60b264;
    g60b334 = 0x6c;
    g60b338 = reinterpret_cast<void**>(32);
    edx4 = *reinterpret_cast<void***>(eax3);
    v5 = eax3;
    g60b39c = reinterpret_cast<void**>(0x4218);
    g60b348 = reinterpret_cast<void**>(2);
    eax6 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx4 + 24)(v5, 0x60b334, 0x60b268, 0));
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0xe60 - 4 - 4 - 4 - 4 - 4 + 4);
    g60b3a0 = eax6;
    if (!eax6) {
        esp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp7) - 4);
        v9 = reinterpret_cast<void**>("Triple buffer in VRAM");
    } else {
        esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4);
        g60b348 = reinterpret_cast<void**>(1);
        g60b430 = reinterpret_cast<void**>(1);
        wsprintfA(reinterpret_cast<int32_t>(esp10) + 0x408, "Couldn't create primary flipping surface with two back buffers in vram, %d", reinterpret_cast<unsigned char>(eax6) & 0xfff, v5, 0x60b334, 0x60b268, 0);
        esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4 + 4 + 12);
        fun_437a90(0x4218, reinterpret_cast<int32_t>(esp11) + 0x400, v5, 0x60b334, 0x60b268, 0, v12, v13, v14);
        v9 = reinterpret_cast<void**>(0);
        g60b430 = reinterpret_cast<void**>(0);
        eax15 = g60b264;
        edx16 = *reinterpret_cast<void***>(eax15);
        eax17 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx16 + 24)(eax15, 0x60b334, 0x60b268, 0, v5, 0x60b334, 0x60b268, 0));
        esp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4);
        g60b3a0 = eax17;
        if (!eax17) {
            addr_4381bb_4:
            esp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp18) - 4);
        } else {
            dl19 = *reinterpret_cast<unsigned char*>(&g60b39c + 1);
            esp20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp18) - 4 - 4);
            g60b430 = reinterpret_cast<void**>(1);
            *reinterpret_cast<unsigned char*>(&g60b39c + 1) = reinterpret_cast<unsigned char>(dl19 & 0xbf);
            wsprintfA(reinterpret_cast<int32_t>(esp20) + 0xa08, "Couldn't create primary flipping surface with one back buffer in vram, %d", reinterpret_cast<unsigned char>(eax17) & 0xfff, eax15, 0x60b334, 0x60b268, 0, v5, 0x60b334, 0x60b268, 0);
            esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) - 4 - 4 + 4 + 12);
            v22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp21) + 0xa00);
            fun_437a90(0x4218, v22, eax15, 0x60b334, 0x60b268, 0, v5, 0x60b334, 0x60b268, 0x4218, v22, eax15, 0x60b334, 0x60b268, 0, v5, 0x60b334, 0x60b268);
            eax23 = g60b264;
            edx24 = *reinterpret_cast<void***>(eax23);
            g60b430 = reinterpret_cast<void**>(0);
            eax25 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx24 + 24)(eax23, 0x60b334, 0x60b268, 0, eax15, 0x60b334, 0x60b268, 0, v5, 0x60b334, 0x60b268, 0));
            esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4);
            g60b3a0 = eax25;
            if (!eax25) {
                fun_437a90(0x4218, "Double buffer back might be sysmem.", eax23, 0x60b334, 0x60b268, 0, eax15, 0x60b334, 0x60b268, 0x4218, "Double buffer back might be sysmem.", eax23, 0x60b334, 0x60b268, 0, eax15, 0x60b334, 0x60b268);
                esp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 + 4 + 4);
                goto addr_4381bb_4;
            } else {
                esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4);
                g60b430 = reinterpret_cast<void**>(1);
                wsprintfA(reinterpret_cast<int32_t>(esp27) + 8, "Couldn't create primary flipping surface with one back buffers in any ram, %d", reinterpret_cast<unsigned char>(eax25) & 0xfff, eax23, 0x60b334, 0x60b268, 0, eax15, 0x60b334, 0x60b268, 0, v5, 0x60b334, 0x60b268, 0);
                fun_437a90(0x4218, reinterpret_cast<int32_t>(esp27) - 4 - 4 + 4 + 12, eax23, 0x60b334, 0x60b268, 0, eax15, 0x60b334, 0x60b268, 0x4218, reinterpret_cast<int32_t>(esp27) - 4 - 4 + 4 + 12, eax23, 0x60b334, 0x60b268, 0, eax15, 0x60b334, 0x60b268);
                eax28 = g60b3a0;
                v29 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax28) & 0xfff);
                g60b430 = reinterpret_cast<void**>(0);
                fun_43bd40(0x4218, "Doom95 was unable to access the video card - check your DirectX installation! ( Error %d )", v29, eax23, 0x4218, "Doom95 was unable to access the video card - check your DirectX installation! ( Error %d )", v29, eax23);
                goto addr_4386ee_8;
            }
        }
    }
    fun_437a90(0x4218, v9, v5, 0x60b334, 0x60b268, 0, v30, v31, v32);
    esp33 = reinterpret_cast<void*>(esp8 - 4 + 4 + 4);
    eax34 = g60b268;
    v35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp33) + 0xe5c);
    edx36 = *reinterpret_cast<void***>(eax34);
    v37 = eax34;
    eax38 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx36 + 56)(v37, v35, v5, 0x60b334, 0x60b268, 0));
    esp39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 - 4 - 4 + 4);
    ecx40 = g4775d0;
    g60b3a0 = eax38;
    if (reinterpret_cast<int1_t>(ecx40 == 0x140)) {
        if (!(v41 & 32)) {
            esp42 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp39) - 4);
            v43 = reinterpret_cast<void**>("320 mode is NOT modex");
        } else {
            esp42 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp39) - 4);
            v43 = reinterpret_cast<void**>("320 mode is done with MODEX");
        }
        fun_437a90(ecx40, v43, v37, v35, v5, 0x60b334, 0x60b268, 0, v44);
        esp39 = reinterpret_cast<void*>(esp42 - 4 + 4 + 4);
    }
    eax45 = g60b268;
    edx46 = *reinterpret_cast<void***>(eax45);
    v47 = eax45;
    g60b330 = 4;
    eax48 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx46 + 48)(v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0));
    esp49 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp39) - 4 - 4 - 4 - 4 + 4);
    g60b3a0 = eax48;
    if (eax48) {
        esp50 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp49) - 4 - 4);
        g60b430 = reinterpret_cast<void**>(1);
        wsprintfA(reinterpret_cast<int32_t>(esp50) + 0x608, "Backbuffer not found.  Error %d", reinterpret_cast<unsigned char>(eax48) & 0xfff, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0);
        v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp50) - 4 - 4 + 4 + 12 + 0x600);
        fun_437a90(ecx40, v51, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, ecx40, v51, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334);
        g60b430 = reinterpret_cast<void**>(0);
        goto v52;
    }
    eax53 = g60b26c;
    v54 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp49) + 0xe58);
    ebx55 = *reinterpret_cast<void***>(eax53);
    v56 = eax53;
    eax57 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx55 + 56)(v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0));
    esp58 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp49) - 4 - 4 - 4 + 4);
    g60b3a0 = eax57;
    if (!eax57 && v59 & 64) {
        fun_437a90(ecx40, "backbuffer is video memory", v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, ecx40, "backbuffer is video memory", v56, v54, v47, 0x60b330, 0x60b26c, v37, v35);
        esp58 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp58) - 4 - 4 + 4 + 4);
    }
    zf60 = reinterpret_cast<int1_t>(g4775c4 == 0x800);
    if (!zf60 || ((ebp61 = g60b3a0, !!ebp61) || !(v62 & 64))) {
        eax63 = g60b26c;
        g60b270 = eax63;
        esp64 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp58) - 4);
        v65 = reinterpret_cast<void**>("Rendering to video memory backbuffer");
        g4775c8 = reinterpret_cast<void**>(1);
    } else {
        fun_437a90(ecx40, "Creating system memory offscreen", v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, ecx40, "Creating system memory offscreen", v56, v54, v47, 0x60b330, 0x60b26c, v37, v35);
        v65 = ebp61;
        eax66 = g4775d0;
        g60b340 = eax66;
        eax67 = g4775d4;
        g60b33c = eax67;
        eax68 = g60b264;
        g60b338 = reinterpret_cast<void**>(6);
        edx69 = *reinterpret_cast<void***>(eax68);
        g60b39c = reinterpret_cast<void**>(0x840);
        eax70 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx69 + 24)(eax68, 0x60b334, 0x60b270, v65, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0));
        esp71 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp58) - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4);
        g60b3a0 = eax70;
        if (!eax70) {
            esp64 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp71) - 4);
            g4775c8 = ebp61;
        } else {
            esp72 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp71) - 4 - 4);
            g60b430 = reinterpret_cast<void**>(1);
            wsprintfA(reinterpret_cast<int32_t>(esp72) + 0x208, "Couldn't create rendering surface!, Error %d", reinterpret_cast<unsigned char>(eax70) & 0xfff, eax68, 0x60b334, 0x60b270, v65, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0);
            v73 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp72) - 4 - 4 + 4 + 12 + 0x200);
            fun_437a90(1, v73, eax68, 0x60b334, 0x60b270, v65, v56, v54, v47, 1, v73, eax68, 0x60b334, 0x60b270, v65, v56, v54, v47);
            g60b430 = ebp61;
            goto v74;
        }
    }
    fun_437a90(ecx40, v65, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, ecx40, v65, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35);
    eax75 = g4775d0;
    g60b340 = eax75;
    eax76 = g4775d4;
    g60b33c = eax76;
    eax77 = g60b264;
    v78 = eax77;
    edx79 = *reinterpret_cast<void***>(eax77);
    g60b338 = reinterpret_cast<void**>(6);
    g60b39c = reinterpret_cast<void**>(64);
    eax80 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx79 + 24)(v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0));
    esp81 = reinterpret_cast<void*>(esp64 - 4 + 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4);
    g60b3a0 = eax80;
    if (eax80) {
        esp82 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp81) - 4 - 4);
        g60b430 = reinterpret_cast<void**>(1);
        wsprintfA(reinterpret_cast<int32_t>(esp82) + 0x808, "Couldn't create page 4!, Error %d", reinterpret_cast<unsigned char>(eax80) & 0xfff, v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0);
        v83 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp82) - 4 - 4 + 4 + 12 + 0x800);
        fun_437a90(ecx40, v83, v78, 0x60b334, 0x60b278, 0, v56, v54, v47, ecx40, v83, v78, 0x60b334, 0x60b278, 0, v56, v54, v47);
        g60b430 = reinterpret_cast<void**>(0);
        goto v84;
    }
    zf85 = reinterpret_cast<int1_t>(g4775e0 == 1);
    if (zf85) 
        goto addr_438461_26;
    ebx86 = reinterpret_cast<void**>(0);
    do {
        fun_437a90(ecx40, "EraseVRAM: back %d", ebx86, v78, 0x60b334, 0x60b278, 0, v56, v54, ecx40, "EraseVRAM: back %d", ebx86, v78, 0x60b334, 0x60b278, 0, v56, v54);
        ecx40 = reinterpret_cast<void**>(100);
        esp87 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp81) - 4 - 4 - 4 + 4 + 8);
        eax88 = g60b26c;
        if (eax88 && (ecx40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp87) + 0xd2c), edx89 = *reinterpret_cast<void***>(eax88), eax90 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx89 + 20)(eax88, 0, 0, 0, 0x1000400, ecx40, v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0)), esp87 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp87) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4), g60b3a0 = eax90, !!eax90)) {
            v91 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax90) & 0xfff);
            fun_437a90(ecx40, "EraseSurface: blt returned %d", v91, eax88, 0, 0, 0, 0x1000400, ecx40, ecx40, "EraseSurface: blt returned %d", v91, eax88, 0, 0, 0, 0x1000400, ecx40);
            esp87 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp87) - 4 - 4 - 4 + 4 + 8);
        }
        v92 = reinterpret_cast<void**>(1);
        eax93 = g60b268;
        v94 = reinterpret_cast<void**>(0);
        edx95 = *reinterpret_cast<void***>(eax93);
        v96 = eax93;
        ++ebx86;
        *reinterpret_cast<void***>(edx95 + 44)(v96, 0, 1, v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0);
        esp81 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp87) - 4 - 4 - 4 - 4 + 4);
    } while (reinterpret_cast<signed char>(ebx86) < reinterpret_cast<signed char>(4));
    zf97 = g4775c8 == 0;
    if (!zf97) 
        goto addr_438653_32;
    fun_437a90(ecx40, "EraseVRAM: lpDDSOff", v96, 0, 1, v78, 0x60b334, 0x60b278, 0, ecx40, "EraseVRAM: lpDDSOff", v96, 0, 1, v78, 0x60b334, 0x60b278, 0);
    esp81 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp81) - 4 - 4 + 4 + 4);
    eax98 = g60b270;
    if (!eax98) 
        goto addr_438653_32;
    v99 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp81) + 0xc00);
    edx100 = *reinterpret_cast<void***>(eax98);
    eax101 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx100 + 20)(eax98, 0, 0, 0, 0x1000400, v99, v96, 0, 1, v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0));
    esp81 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp81) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    g60b3a0 = eax101;
    if (eax101) 
        goto addr_438640_35;
    addr_438653_32:
    fun_437a90(ecx40, "EraseVRAM: lpDDSPage4", v96, 0, 1, v78, 0x60b334, 0x60b278, 0, ecx40, "EraseVRAM: lpDDSPage4", v96, 0, 1, v78, 0x60b334, 0x60b278, 0);
    eax102 = g60b278;
    if (!eax102 || (v103 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp81) - 4 - 4 + 4 + 4 + 0xcc8), v104 = reinterpret_cast<void**>(0x1000400), v105 = reinterpret_cast<void**>(0), ebx106 = *reinterpret_cast<void***>(eax102), eax107 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx106 + 20)(eax102, 0, 0, 0, 0x1000400, v103, v96, 0, 1, v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0)), g60b3a0 = eax107, eax107 == 0)) {
        addr_4386b3_36:
        esi108 = g60b268;
        if (esi108 && (edi109 = g60b27c, !!edi109)) {
            edx110 = *reinterpret_cast<void***>(esi108);
            eax111 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx110 + 0x7c)(esi108, edi109, v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0));
            g60b3a0 = eax111;
        }
    } else {
        addr_4386a0_38:
        v112 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax107) & 0xfff);
        fun_437a90(ecx40, "EraseSurface: blt returned %d", v112, v105, v104, v103, v96, v94, v92, ecx40, "EraseSurface: blt returned %d", v112, v105, v104, v103, v96, v94, v92);
        goto addr_4386b3_36;
    }
    fun_43c050(ecx40, v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0);
    fun_43bb40(ecx40, v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0);
    g4775e8 = reinterpret_cast<void**>(0);
    fun_43eed0(ecx40, v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0, 0x60b334, 0x60b268, 0, v113);
    addr_4386ee_8:
    goto v114;
    addr_438640_35:
    v115 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax101) & 0xfff);
    fun_437a90(ecx40, "EraseSurface: blt returned %d", v115, eax98, 0, 0, 0, 0x1000400, v99, ecx40, "EraseSurface: blt returned %d", v115, eax98, 0, 0, 0, 0x1000400, v99);
    esp81 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp81) - 4 - 4 - 4 + 4 + 8);
    goto addr_438653_32;
    addr_438461_26:
    fun_437a90(ecx40, "EraseVRAM: lpDDSBack", v78, 0x60b334, 0x60b278, 0, v56, v54, v47, ecx40, "EraseVRAM: lpDDSBack", v78, 0x60b334, 0x60b278, 0, v56, v54, v47);
    esp116 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp81) - 4 - 4 + 4 + 4);
    eax117 = g60b26c;
    if (eax117 && (v118 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp116) + 0xdf4), ebx119 = *reinterpret_cast<void***>(eax117), eax120 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx119 + 20)(eax117, 0, 0, 0, 0x1000400, v118, v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0)), esp116 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp116) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4), g60b3a0 = eax120, !!eax120)) {
        v121 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax120) & 0xfff);
        fun_437a90(ecx40, "EraseSurface: blt returned %d", v121, eax117, 0, 0, 0, 0x1000400, v118, ecx40, "EraseSurface: blt returned %d", v121, eax117, 0, 0, 0, 0x1000400, v118);
        esp116 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp116) - 4 - 4 - 4 + 4 + 8);
    }
    fun_437a90(ecx40, "EraseVRAM: lpDDSOff", v78, 0x60b334, 0x60b278, 0, v56, v54, v47, ecx40, "EraseVRAM: lpDDSOff", v78, 0x60b334, 0x60b278, 0, v56, v54, v47);
    ecx40 = reinterpret_cast<void**>(100);
    esp122 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp116) - 4 - 4 + 4 + 4);
    eax123 = g60b270;
    if (eax123 && (v124 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp122) + 0xd90), ebx125 = *reinterpret_cast<void***>(eax123), eax126 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx125 + 20)(eax123, 0, 0, 0, 0x1000400, v124, v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0)), esp122 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp122) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4), g60b3a0 = eax126, !!eax126)) {
        v127 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax126) & 0xfff);
        fun_437a90(100, "EraseSurface: blt returned %d", v127, eax123, 0, 0, 0, 0x1000400, v124, 100, "EraseSurface: blt returned %d", v127, eax123, 0, 0, 0, 0x1000400, v124);
        esp122 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp122) - 4 - 4 - 4 + 4 + 8);
    }
    fun_437a90(100, "EraseVRAM: lpDDSPage4", v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 100, "EraseVRAM: lpDDSPage4", v78, 0x60b334, 0x60b278, 0, v56, v54, v47);
    eax128 = g60b278;
    if (!eax128) 
        goto addr_4386b3_36;
    v92 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp122) - 4 - 4 + 4 + 4 + 0xc64);
    v94 = reinterpret_cast<void**>(0x1000400);
    v96 = reinterpret_cast<void**>(0);
    v103 = reinterpret_cast<void**>(0);
    v104 = reinterpret_cast<void**>(0);
    edx129 = *reinterpret_cast<void***>(eax128);
    v105 = eax128;
    eax107 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx129 + 20)(v105, 0, 0, 0, 0x1000400, v92, v78, 0x60b334, 0x60b278, 0, v56, v54, v47, 0x60b330, 0x60b26c, v37, v35, v5, 0x60b334, 0x60b268, 0));
    g60b3a0 = eax107;
    if (!eax107) 
        goto addr_4386b3_36;
    goto addr_4386a0_38;
}

void** g5f245c = reinterpret_cast<void**>(0);

void** g5f2744 = reinterpret_cast<void**>(0);

void** g5f26ac = reinterpret_cast<void**>(0);

void fun_4320d0(void** ecx, void** a2, void** a3);

void fun_433540(void** ecx, void** a2) {
    void** edx3;
    uint32_t eax4;
    void* eax5;
    void** eax6;
    void** edx7;
    void** ecx8;
    void** edi9;
    int32_t esi10;
    void* v11;
    void** eax12;
    void** edx13;
    void** eax14;
    void** eax15;
    void** eax16;
    void** eax17;
    void** eax18;
    void** eax19;
    void** eax20;
    void** eax21;
    void** eax22;

    edx3 = g5f274c;
    eax4 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx3 + 0x70)) * 4 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx3 + 0x70));
    eax5 = reinterpret_cast<void*>(*reinterpret_cast<int32_t*>(eax4 * 8 + 0x464cc8) * 4);
    fun_431b80(0x5f2508, reinterpret_cast<int32_t>(eax5) + reinterpret_cast<uint32_t>(edx3 + 0x9c), 0x5f26bc, 3);
    eax6 = g5f274c;
    g5f245c = *reinterpret_cast<void***>(eax6 + 0x70);
    edx7 = g5f2744;
    fun_431e00(0x5f2508, eax6 + 32, 0x5f26bc, edx7);
    ecx8 = g5f26ac;
    edi9 = reinterpret_cast<void**>(0x5f2530);
    fun_4320d0(ecx8, 0x5f26a4, 0x5f26bc);
    esi10 = 0;
    v11 = reinterpret_cast<void*>(4);
    do {
        eax12 = g5f274c;
        ++esi10;
        fun_431e70(edi9, reinterpret_cast<uint32_t>(eax12 + 0x78) + reinterpret_cast<uint32_t>(v11), 0x5f271c);
        edi9 = edi9 + 8;
        v11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v11) + 4);
    } while (esi10 < 6);
    fun_431b80(0x5f2508, 0x5f2630, 0x5f2714, 2);
    fun_431e70(0x5f2560, 0x46688c, 0x5f26bc);
    edx13 = g5f2744;
    eax14 = g5f274c;
    fun_431e00(0x5f2508, eax14 + 36, 0x5f26bc, edx13);
    fun_431e70(0x5f2400, 0x5f2634, 0x5f26bc);
    fun_431e70(0x5f2400, 0x5f2638, 0x5f26bc);
    fun_431e70(0x5f2400, 0x5f263c, 0x5f26bc);
    eax15 = g5f274c;
    fun_431b80(0x5f2418, eax15 + 0x9c, 0x5f26bc, 3);
    eax16 = g5f274c;
    fun_431b80(0x5f2418, eax16 + 0xa0, 0x5f26bc, 3);
    eax17 = g5f274c;
    fun_431b80(0x5f2418, eax17 + 0xa4, 0x5f26bc, 3);
    eax18 = g5f274c;
    fun_431b80(0x5f2418, eax18 + 0xa8, 0x5f26bc, 3);
    eax19 = g5f274c;
    fun_431b80(0x5f2418, eax19 + 0xac, 0x5f26bc, 3);
    eax20 = g5f274c;
    fun_431b80(0x5f2418, eax20 + 0xb0, 0x5f26bc, 3);
    eax21 = g5f274c;
    fun_431b80(0x5f2418, eax21 + 0xb4, 0x5f26bc, 3);
    eax22 = g5f274c;
    fun_431b80(0x5f2418, eax22 + 0xb8, 0x5f26bc, 3);
    return;
}

void*** fun_43c570(void** ecx, void** a2) {
    void** edx3;
    void** edx4;

    fun_41d4c0(ecx);
    fun_41d4c0(ecx);
    fun_41d4c0(ecx);
    g60ba38 = reinterpret_cast<void**>(0x80000000);
    g60ba34 = reinterpret_cast<void**>(0x7fffffff);
    edx3 = g60ba38;
    g60ba2c = edx3;
    edx4 = g60ba34;
    g60ba30 = edx4;
    return 0x60ba2c;
}

void** g60b254 = reinterpret_cast<void**>(0);

void fun_42de60(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28);

void fun_4398e0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21) {
    void** v22;
    void** v23;
    void** ebx24;
    void** v25;
    void** v26;
    void** edx27;
    void** v28;
    void** esi29;
    void** v30;
    void** edi31;
    void** v32;
    void** ebp33;
    void* edi34;
    void* eax35;
    void** ecx36;
    void** ebx37;
    void** esi38;
    int32_t eax39;
    void** v40;
    void** esi41;
    void** ebp42;
    void** ecx43;
    void** ebx44;
    int1_t less_or_equal45;
    void** edx46;
    uint32_t eax47;
    uint32_t edx48;
    void** eax49;
    void** eax50;

    v22 = reinterpret_cast<void**>(__return_address());
    v23 = ebx24;
    v25 = ecx;
    v26 = edx27;
    v28 = esi29;
    v30 = edi31;
    v32 = ebp33;
    edi34 = eax35;
    ecx36 = g4775d4;
    ebx37 = g4775d0;
    esi38 = reinterpret_cast<void**>(0);
    eax39 = 0;
    do {
        if (ebx37 != *reinterpret_cast<void***>(eax39 + 0x4775ec)) 
            continue;
        if (ecx36 == *reinterpret_cast<void***>(eax39 + 0x4775f0)) 
            break;
        eax39 = eax39 + 8;
        ++esi38;
    } while (eax39 < 32);
    goto addr_439953_5;
    addr_43990b_6:
    if (esi38 == 4 || ((v40 = esi38, esi41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi38) + reinterpret_cast<uint32_t>(edi34)), reinterpret_cast<signed char>(esi41) < reinterpret_cast<signed char>(0)) || esi41 == 4)) {
        addr_439a0c_7:
        return;
    } else {
        do {
            ebp42 = g4775e0;
            ecx43 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi41) * 8 + 0x4775ec);
            ebx44 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi41) * 8 + 0x4775f0);
            if (!reinterpret_cast<int1_t>(ebp42 == 1)) {
                less_or_equal45 = reinterpret_cast<signed char>(g60b254) <= reinterpret_cast<signed char>(0);
                if (!less_or_equal45) {
                    edx46 = g60b254;
                    eax47 = 0;
                    edx48 = reinterpret_cast<unsigned char>(edx46) * 8;
                    do {
                        if (*reinterpret_cast<void***>(eax47 + 0x60b1b4) == 0x140) 
                            goto addr_43998e_12;
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax47 + 0x60b1b4) == 0x280)) 
                            continue;
                        addr_43998e_12:
                        if (ecx43 != *reinterpret_cast<void***>(eax47 + 0x60b1b4)) 
                            continue;
                        if (ebx44 == *reinterpret_cast<void***>(eax47 + 0x60b1b8)) 
                            break;
                        eax47 = eax47 + 8;
                    } while (reinterpret_cast<int32_t>(eax47) < reinterpret_cast<int32_t>(edx48));
                    goto addr_439967_16;
                } else {
                    goto addr_4399a5_18;
                }
            } else {
                eax49 = ebp42;
                goto addr_4399b6_20;
            }
            eax49 = reinterpret_cast<void**>(1);
            addr_4399b6_20:
            if (eax49) 
                break;
            esi41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi41) + reinterpret_cast<uint32_t>(edi34));
            if (reinterpret_cast<signed char>(esi41) < reinterpret_cast<signed char>(0)) 
                goto addr_439a0c_7;
            if (esi41 == 4) 
                goto addr_439a0c_7; else 
                continue;
            addr_439967_16:
            addr_4399a5_18:
            fun_437a90(ecx43, "IsModeSupported - no match for %d x %d", ecx43, ebx44, v40, v32, v30, v28, v26);
            eax49 = reinterpret_cast<void**>(0);
            goto addr_4399b6_20;
        } while (esi41 != v40);
    }
    if (esi41 != v40) {
        g4775d8 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi41) * 8 + 0x4775ec);
        eax50 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi41) * 8 + 0x4775f0);
        g491b70 = 1;
        g4775dc = eax50;
        g60b260 = 1;
        fun_42de60(v40, v32, v30, v28, v26, v25, v23, v22, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
        goto addr_439a0c_7;
    }
    addr_439953_5:
    goto addr_43990b_6;
}

void fun_42de60(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28) {
    void* eax29;
    int32_t edx30;

    g491b78 = eax29;
    g491b74 = edx30;
    g491b70 = 1;
    return;
}

void fun_439a20(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29) {
    void** edi30;
    uint32_t ebp31;
    uint32_t v32;
    int32_t ecx33;
    void** esi34;
    void** eax35;
    int32_t edx36;
    int32_t ebx37;
    uint32_t edx38;
    int32_t eax39;

    edi30 = g60b254;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi30) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi30 == 0))) {
        ebp31 = 0;
        v32 = reinterpret_cast<unsigned char>(edi30) * 8;
        do {
            ecx33 = 0x7fffffff;
            esi34 = reinterpret_cast<void**>(0xffffffff);
            eax35 = reinterpret_cast<void**>(0);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi30) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi30 == 0))) {
                edx36 = 0;
                do {
                    ebx37 = *reinterpret_cast<int32_t*>(edx36 + 0x60b114) * *reinterpret_cast<int32_t*>(edx36 + 0x60b118);
                    if (ebx37 && ebx37 < ecx33) {
                        esi34 = eax35;
                        ecx33 = ebx37;
                    }
                    ++eax35;
                    edx36 = edx36 + 8;
                } while (reinterpret_cast<signed char>(eax35) < reinterpret_cast<signed char>(edi30));
            }
            edx38 = ebp31 ^ ebp31;
            *reinterpret_cast<int32_t*>(ebp31 + 0x60b1b4) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi34) * 8 + 0x60b114);
            ebp31 = ebp31 + 8;
            eax39 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi34) * 8 + 0x60b118);
            *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(esi34) * 8 + 0x60b114) = edx38;
            *reinterpret_cast<int32_t*>(ebp31 + 0x60b1b0) = eax39;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(esi34) * 8 + 0x60b118) = edx38;
        } while (reinterpret_cast<int32_t>(ebp31) < reinterpret_cast<int32_t>(v32));
    }
    g60b254 = edi30;
    return;
}

struct s481 {
    signed char[16] pad16;
    void** f10;
};

void** fun_447439(void** ecx, void** a2);

struct s482 {
    signed char[16] pad16;
    int32_t f10;
};

struct s483 {
    signed char[16] pad16;
    void** f10;
};

void** fun_444434(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void* esp11;
    void** ebx12;
    void** eax13;
    int32_t eax14;
    struct s481* eax15;
    void** v16;
    uint32_t edx17;
    uint32_t ecx18;
    uint32_t eax19;
    void** eax20;
    void** edx21;
    uint32_t eax22;
    uint32_t ecx23;
    uint32_t eax24;
    struct s482* eax25;
    struct s483* eax26;

    esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 32);
    ebx12 = eax13;
    if (eax14 || (eax15 = reinterpret_cast<struct s481*>(image_base_()), esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 + 4), ebx12 = eax15->f10, !!ebx12)) {
        fun_447439(ecx, v16);
        esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 + 4);
        while ((edx17 = 0, *reinterpret_cast<void***>(&edx17) = *reinterpret_cast<void***>(ebx12), !!edx17) && (ecx18 = 0, *reinterpret_cast<signed char*>(&ecx18) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp11) + (edx17 >> 3)), eax19 = edx17 & 7, *reinterpret_cast<signed char*>(&eax19) = *reinterpret_cast<signed char*>(eax19 + 0x459524), !!(ecx18 & (eax19 & 0xff)))) {
            ++ebx12;
        }
        if (!edx17) 
            goto addr_44444c_6;
    } else {
        addr_44444c_6:
        eax20 = reinterpret_cast<void**>(0);
        goto addr_4444d2_7;
    }
    edx21 = ebx12;
    while (eax22 = 0, *reinterpret_cast<void***>(&eax22) = *reinterpret_cast<void***>(edx21), !!eax22) {
        ecx23 = eax22 >> 3;
        *reinterpret_cast<signed char*>(&ecx23) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp11) + ecx23);
        eax24 = eax22 & 7;
        *reinterpret_cast<signed char*>(&eax24) = *reinterpret_cast<signed char*>(eax24 + 0x459524);
        if (ecx23 & 0xff & (eax24 & 0xff)) 
            goto addr_4444ab_11;
        ++edx21;
    }
    eax25 = reinterpret_cast<struct s482*>(image_base_());
    eax25->f10 = 0;
    addr_4444d0_14:
    eax20 = ebx12;
    addr_4444d2_7:
    return eax20;
    addr_4444ab_11:
    *reinterpret_cast<void***>(edx21) = reinterpret_cast<void**>(0);
    eax26 = reinterpret_cast<struct s483*>(image_base_());
    eax26->f10 = edx21 + 1;
    goto addr_4444d0_14;
}

int32_t LoadIconA = 0x220c44;

int32_t LoadCursorA = 0x220c36;

int32_t GetStockObject = 0x2209cc;

int32_t RegisterClassA = 0x220cbe;

int32_t CreateWindowExA = 0x220aec;

int32_t fun_43b540(void** ecx, void** a2) {
    int32_t eax3;
    int16_t ax4;
    int32_t eax5;
    void** eax6;

    LoadIconA(eax3, 0x69, 0);
    LoadCursorA(0, 0x7f00, eax3, 0x69, 0);
    GetStockObject(4, 0, 0x7f00, eax3, 0x69, 0);
    ax4 = reinterpret_cast<int16_t>(RegisterClassA(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 40 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4, 4, 0x43b1d0, 0x7f00, eax3, 0x69, 0));
    if (ax4) {
        eax6 = reinterpret_cast<void**>(CreateWindowExA(0, "DOOM_LAUNCH", 0, 0x80000000, 0, 0, 0, 0, 0, 0, eax5, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 40 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4, 4, 0x43b1d0, 0x7f00, eax3, 0x69, 0));
        g60b70c = eax6;
        IsWindow(eax6, 0, "DOOM_LAUNCH", 0, 0x80000000, 0, 0, 0, 0, 0, 0, eax5, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 40 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4, 4, 0x43b1d0, 0x7f00, eax3, 0x69, 0);
    }
    goto 0;
}

struct s484 {
    signed char f0;
    signed char f1;
};

struct s485 {
    signed char f0;
    signed char f1;
};

int32_t LoadStringA = 0x220c50;

void** fun_4407f0(void** ecx, void** a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, void* a11, void** a12, int32_t a13, int32_t a14) {
    int32_t v15;
    int32_t edi16;
    struct s484* esi17;
    struct s485* edi18;
    signed char al19;
    signed char al20;

    v15 = edi16;
    esi17 = reinterpret_cast<struct s484*>(0x458608);
    edi18 = reinterpret_cast<struct s485*>(0x616f60);
    do {
        al19 = esi17->f0;
        edi18->f0 = al19;
        if (!al19) 
            break;
        al20 = esi17->f1;
        ++esi17;
        edi18->f1 = al20;
        ++edi18;
    } while (al20);
    LoadStringA();
    goto v15;
}

int32_t SearchPathA = 0x2207b8;

int32_t LoadLibraryA = 0x22076e;

void** g60b874 = reinterpret_cast<void**>(0);

int32_t GetProcAddress = 0x22072e;

int32_t g60b870 = 0;

int32_t g616a7c = 0;

int32_t fun_43d4e0(void** ecx, void** a2) {
    void* esp3;
    void** esp4;
    void* v5;
    void* v6;
    int32_t eax7;
    void** v8;
    void** eax9;
    void** eax10;
    int32_t v11;
    void** v12;
    int32_t eax13;
    int32_t v14;
    void** eax15;
    void** edx16;
    void** v17;
    int32_t eax18;
    int32_t eax19;
    int1_t zf20;
    int32_t v21;
    void** eax22;
    void** ebx23;
    void** edx24;
    void** eax25;
    void** eax26;
    void** edx27;
    void** eax28;
    int32_t v29;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 0x204);
    esp4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp3) - 4);
    v5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) + 0x200);
    v6 = reinterpret_cast<void*>(esp4 + 1);
    eax7 = reinterpret_cast<int32_t>(SearchPathA(0, "doomlnch", ".dll", 0x200, v6, v5));
    if (eax7) {
        GetLastError(0, "doomlnch", ".dll", 0x200, v6, v5);
        v8 = reinterpret_cast<void**>(esp4 - 1 - 1 - 1 - 1 - 1 - 1 + 1 - 1 + 1);
        eax9 = reinterpret_cast<void**>(LoadLibraryA(v8, 0, "doomlnch", ".dll", 0x200, v6, v5));
        g60b874 = eax9;
        if (!eax9) {
            eax10 = reinterpret_cast<void**>(GetLastError(v8, 0, "doomlnch", ".dll", 0x200, v6, v5));
            fun_437a90(ecx, "LoadLibrary on doomlnch.dll failed %d %x", eax10, eax10, v8, 0, "doomlnch", ".dll", 0x200, ecx, "LoadLibrary on doomlnch.dll failed %d %x", eax10, eax10, v8, 0, "doomlnch", ".dll", 0x200);
            MessageBoxA(0, "Unable to initialize 'doomlnch.dll'.", 0, 0, v8, 0, "doomlnch", ".dll", 0x200, v6, v5);
            goto v11;
        }
        v12 = eax9;
        eax13 = reinterpret_cast<int32_t>(GetProcAddress(v12, "_Launcher@4", v8, 0, "doomlnch", ".dll", 0x200, v6, v5));
        g60b870 = eax13;
        if (!eax13) {
            MessageBoxA(eax13, "Incompatible or corrupted 'doomlnch.dll'.", eax13, eax13, v12, "_Launcher@4", v8, 0, "doomlnch", ".dll", 0x200, v6, v5);
            goto v14;
        }
        eax15 = image_base_;
        *reinterpret_cast<void***>(eax15 + 12) = reinterpret_cast<void**>(0);
        edx16 = g60b83c;
        *reinterpret_cast<void***>(eax15 + 16) = reinterpret_cast<void**>(0);
        v17 = eax15;
        *reinterpret_cast<void***>(eax15) = edx16;
        eax18 = reinterpret_cast<int32_t>(g60b870(v17, v12, "_Launcher@4", v8, 0, "doomlnch", ".dll", 0x200, v6, v5));
        g616a7c = eax18;
        while (eax19 = reinterpret_cast<int32_t>(PeekMessageA(0x60b410, 0, 0, 0, 1, v17, v12, "_Launcher@4", v8, 0, "doomlnch", ".dll", 0x200, v6, v5)), !!eax19) {
            DispatchMessageA(0x60b410, 0x60b410, 0, 0, 0, 1, v17, v12, "_Launcher@4", v8, 0, "doomlnch", ".dll", 0x200, v6, v5);
        }
        zf20 = g616a7c == 0;
        if (zf20) 
            goto addr_43d5fc_10;
    } else {
        MessageBoxA(eax7, "Unable to locate 'doomlnch.dll'.", eax7, eax7, 0, "doomlnch", ".dll", 0x200, v6, v5);
        goto addr_43d643_12;
    }
    addr_43d643_12:
    goto v21;
    addr_43d5fc_10:
    eax22 = image_base_;
    ebx23 = *reinterpret_cast<void***>(eax22);
    if (ebx23) {
        edx24 = *reinterpret_cast<void***>(ebx23);
        *reinterpret_cast<void***>(edx24 + 16)(ebx23, 0x60b410, 0, 0, 0, 1, v17, v12, "_Launcher@4", v8, 0, "doomlnch", ".dll", 0x200, v6, v5);
        eax25 = image_base_;
        eax26 = *reinterpret_cast<void***>(eax25);
        edx27 = *reinterpret_cast<void***>(eax26);
        *reinterpret_cast<void***>(edx27 + 8)(eax26, ebx23, 0x60b410, 0, 0, 0, 1, v17, v12, "_Launcher@4", v8, 0, "doomlnch", ".dll", 0x200, v6, v5);
        eax28 = image_base_;
        *reinterpret_cast<void***>(eax28) = reinterpret_cast<void**>(0);
    }
    fun_437a90(ecx, "User canceled game", 0x60b410, 0, 0, 0, 1, v17, v12, ecx, "User canceled game", 0x60b410, 0, 0, 0, 1, v17, v12);
    goto v29;
}

void fun_43f870(void** ecx);

void fun_43fbe0(void** ecx);

void fun_43fdc0(void** ecx);

void fun_413630(void** ecx, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30) {
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** eax59;
    void* esp60;
    void** edx61;
    void* esp62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** eax113;
    void* esp114;
    void** edx115;
    void* esp116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
    void** v179;
    void** v180;
    void** v181;
    void** v182;
    void** v183;
    void** v184;
    void** v185;
    void** v186;
    void** v187;
    void** v188;
    void** v189;
    void** v190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** eax197;
    void* esp198;
    void** edx199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    void** v213;
    void** v214;
    void** v215;
    void** v216;
    void** v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    void** v223;
    void** v224;
    void** v225;
    void** v226;
    void** v227;
    void** v228;
    void** v229;
    void** v230;
    void** v231;
    void** v232;
    void** v233;
    void** v234;
    void** v235;
    void** v236;
    void** v237;
    void** v238;
    void** v239;
    void** v240;
    void** v241;
    void** v242;
    void** v243;
    void** v244;
    void** v245;
    void** v246;
    void** v247;
    void** v248;
    void** v249;
    void** v250;
    void** v251;
    void** v252;
    void** v253;
    void** v254;
    void** v255;
    void** v256;
    void** v257;
    void** v258;
    void** v259;
    void** v260;
    void** v261;
    void** v262;
    void** v263;
    void** v264;
    void** v265;
    void** v266;
    void** v267;
    void** v268;
    void** v269;
    void** v270;
    void** v271;
    void** v272;
    void** v273;
    void** v274;
    void** v275;
    void** v276;
    void** v277;
    void** v278;
    void** v279;
    void** v280;
    void** v281;
    void** v282;
    void** v283;
    void** v284;
    void** v285;
    void** v286;
    void** v287;
    void** v288;
    void** v289;
    void** v290;
    void** v291;
    void** v292;
    void** v293;
    void** v294;
    void** eax295;
    void** eax296;
    void** v297;
    void** v298;
    void** v299;
    void** v300;
    void** v301;
    void** v302;
    void** v303;
    void** v304;
    void** v305;
    void** v306;
    void** v307;
    void** v308;
    void** v309;
    void** v310;
    void** v311;
    void** v312;
    void** v313;
    void** v314;
    void** v315;
    void** v316;
    void** v317;
    void** v318;
    void** v319;
    void** v320;
    void** v321;
    void** v322;
    void** v323;
    void** v324;
    void** eax325;
    void* esp326;
    void* edx327;
    void** eax328;
    void** v329;
    int32_t* esp330;
    int32_t v331;
    void** eax332;
    void** v333;
    void** v334;
    int32_t v335;
    int32_t v336;
    void* v337;
    int32_t v338;
    int32_t v339;
    void* v340;
    int1_t zf341;
    void** esi342;
    int1_t zf343;
    void** v344;
    void** v345;
    void** v346;
    void** v347;
    void** v348;
    void** v349;
    void** v350;
    void** v351;
    void** v352;
    void** v353;
    void** v354;
    void** v355;
    void** v356;
    void** v357;
    void** v358;
    void** v359;
    void** v360;
    void** v361;
    void** v362;
    void** v363;
    void** v364;
    void** v365;
    void** v366;
    void** v367;
    void** v368;
    void** v369;
    void** v370;
    void** v371;
    void** v372;
    void** v373;
    void** v374;
    void** v375;
    void** v376;
    void** v377;
    void** v378;
    void** v379;
    void** v380;
    void** v381;
    void** v382;
    void** v383;
    void** v384;
    void** v385;
    void** v386;
    void** v387;
    void** v388;
    void** v389;
    void** v390;
    void** v391;
    void** v392;
    void** v393;
    void** v394;
    void** v395;
    void** v396;

    eax59 = fun_41d410(ecx, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58);
    esp60 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 0x100 - 4 + 4);
    if (!eax59 || (edx61 = g4835f4, reinterpret_cast<signed char>(eax59) >= reinterpret_cast<signed char>(edx61 - 1))) {
        fun_43f870(ecx);
        esp62 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp60) - 4 + 4);
    } else {
        fun_418290(ecx, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84);
        esp62 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp60) - 4 + 4);
        g48123c = reinterpret_cast<void**>(1);
    }
    eax113 = fun_41d410(ecx, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107, v108, v109, v110, v111, v112);
    esp114 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp62) - 4 + 4);
    if (!eax113 || (edx115 = g4835f4, reinterpret_cast<signed char>(eax113) >= reinterpret_cast<signed char>(edx115 - 1))) {
        fun_43fbe0(ecx);
        esp116 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp114) - 4 + 4);
    } else {
        g482a3c = 1;
        fun_4183e0(v117, v118, v119, v120, v121, v122, v123, v124, v125);
        fun_4122e0(ecx, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135, v136, v137, v138, v139, v140, v141, v142, v143, v144, v145, v146, v147, v148, v149, v150, v151, v152, v153, v154, v155, v156, v157, v158, v159, v160, v161, v162, v163, v164, v165, v166, v167, v168);
        esp116 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp114) - 4 + 4 - 4 + 4);
    }
    eax197 = fun_41d410(ecx, v169, v170, v171, v172, v173, v174, v175, v176, v177, v178, v179, v180, v181, v182, v183, v184, v185, v186, v187, v188, v189, v190, v191, v192, v193, v194, v195, v196);
    esp198 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp116) - 4 + 4);
    if (eax197 && (edx199 = g4835f4, reinterpret_cast<signed char>(eax197) < reinterpret_cast<signed char>(edx199 - 1))) {
        fun_4184e0(ecx, v200, v201, v202, v203, v204, v205, v206, v207, v208, v209, v210, v211, v212, v213, v214, v215, v216, v217, v218, v219, v220, v221, v222, v223);
        fun_4122e0(ecx, v224, v225, v226, v227, v228, v229, v230, v231, v232, v233, v234, v235, v236, v237, v238, v239, v240, v241, v242, v243, v244, v245, v246, v247, v248, v249, v250, v251, v252, v253, v254, v255, v256, v257, v258, v259, v260, v261, v262, v263, v264, v265, v266);
        esp198 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp198) - 4 + 4 - 4 + 4);
    }
    eax295 = fun_41d410(ecx, v267, v268, v269, v270, v271, v272, v273, v274, v275, v276, v277, v278, v279, v280, v281, v282, v283, v284, v285, v286, v287, v288, v289, v290, v291, v292, v293, v294);
    if (!eax295 || (eax296 = g4835f4, reinterpret_cast<signed char>(eax295) >= reinterpret_cast<signed char>(eax296 - 1))) {
        fun_43fdc0(ecx);
    } else {
        eax325 = fun_41d410(ecx, v297, v298, v299, v300, v301, v302, v303, v304, v305, v306, v307, v308, v309, v310, v311, v312, v313, v314, v315, v316, v317, v318, v319, v320, v321, v322, v323, v324);
        esp326 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp198) - 4 + 4 - 4 + 4);
        edx327 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax295) * 4);
        if (!eax325) {
            eax328 = g4835f8;
            v329 = reinterpret_cast<void**>(static_cast<int32_t>(**reinterpret_cast<signed char**>(reinterpret_cast<uint32_t>(edx327) + reinterpret_cast<unsigned char>(eax328) + 4)));
            esp330 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp326) - 4 - 4);
            v331 = reinterpret_cast<int32_t>("doomsav%c.dsg");
        } else {
            eax332 = g4835f8;
            v329 = reinterpret_cast<void**>(static_cast<int32_t>(**reinterpret_cast<signed char**>(reinterpret_cast<uint32_t>(edx327) + reinterpret_cast<unsigned char>(eax332) + 4)));
            esp330 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp326) - 4 - 4);
            v331 = reinterpret_cast<int32_t>("c:\\doomdata\\doomsav%c.dsg");
        }
        fun_442b4a(ecx, esp330 + 2, v331, v329, v333, v334);
        fun_417b40(v335, v336, v337, v338, v339, v340);
    }
    zf341 = reinterpret_cast<int1_t>(g482a8c == 3);
    if (!zf341) {
        esi342 = g48123c;
        if (esi342 || (zf343 = g482a84 == 0, !zf343)) {
            fun_417f70(ecx, v344, v345);
            v346 = reinterpret_cast<void**>("Ran G_InitNew");
        } else {
            g482a8c = esi342;
            g481224 = reinterpret_cast<void**>(0xffffffff);
            fun_412470();
            v346 = reinterpret_cast<void**>("Ran D_StartTitle");
        }
        fun_437a90(ecx, v346, v347, v348, v349, v350, v351, v352, v353);
    }
    fun_4122e0(ecx, v354, v355, v356, v357, v358, v359, v360, v361, v362, v363, v364, v365, v366, v367, v368, v369, v370, v371, v372, v373, v374, v375, v376, v377, v378, v379, v380, v381, v382, v383, v384, v385, v386, v387, v388, v389, v390, v391, v392, v393, v394, v395, v396);
    return;
}

void** g618344 = reinterpret_cast<void**>(0);

void fun_4454f8(void** ecx);

int32_t fun_4440d1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21) {
    void** esi22;
    void** eax23;
    int32_t eax24;
    void** ecx25;
    void** ebp26;
    void** eax27;
    int32_t eax28;

    esi22 = eax23;
    if (eax24) {
        image_base_();
        ecx25 = g618344;
        if (!ecx25 || (reinterpret_cast<unsigned char>(ecx25) > reinterpret_cast<unsigned char>(esi22) || reinterpret_cast<unsigned char>(esi22) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx25 + 8)))) {
            ecx25 = g477a68;
            while (*reinterpret_cast<void***>(ecx25 + 8) && (reinterpret_cast<unsigned char>(ecx25) > reinterpret_cast<unsigned char>(esi22) || reinterpret_cast<unsigned char>(esi22) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx25 + 8)))) {
                ecx25 = *reinterpret_cast<void***>(ecx25 + 8);
            }
        }
        fun_4454f8(ecx25);
        ebp26 = g477a6c;
        g618344 = ecx25;
        if (reinterpret_cast<unsigned char>(ecx25) < reinterpret_cast<unsigned char>(ebp26) && (eax27 = g477a70, reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx25 + 20)) > reinterpret_cast<unsigned char>(eax27))) {
            g477a70 = *reinterpret_cast<void***>(ecx25 + 20);
        }
        g618354 = 0;
        eax28 = reinterpret_cast<int32_t>(image_base_());
    }
    return eax28;
}

void fun_437c30(void** ecx, void** a2) {
    int1_t zf3;
    int1_t zf4;
    void** ecx5;
    void** edx6;
    void** eax7;
    void** edi8;
    void** ebp9;
    void** edx10;
    void** eax11;
    void** edx12;
    void** edx13;
    void** eax14;
    int1_t zf15;
    void** esi16;
    void** edx17;
    void** eax18;
    void** eax19;
    int1_t zf20;
    void** edx21;
    void** eax22;
    void** edx23;
    void** edx24;
    void** eax25;
    void** ecx26;
    void** edx27;
    void** eax28;
    void** edi29;
    void** edx30;
    void** eax31;
    int32_t ebx32;

    zf3 = reinterpret_cast<int1_t>(g4775e8 == 1);
    if (!zf3) {
        zf4 = g60b264 == 0;
        if (!zf4) {
            ecx5 = g60b268;
            if (ecx5) {
                edx6 = *reinterpret_cast<void***>(ecx5);
                eax7 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx6 + 8)(ecx5));
                g60b3a0 = eax7;
                g60b268 = reinterpret_cast<void**>(0);
            }
            edi8 = g4775c8;
            if (!edi8 && (ebp9 = g60b270, !!ebp9)) {
                edx10 = *reinterpret_cast<void***>(ebp9);
                eax11 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx10 + 8)(ebp9));
                g60b3a0 = eax11;
                g60b270 = edi8;
            }
            edx12 = g60b278;
            if (edx12) {
                edx13 = *reinterpret_cast<void***>(edx12);
                eax14 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx13 + 8)(edx12));
                g60b3a0 = eax14;
                g60b278 = reinterpret_cast<void**>(0);
            }
        }
    } else {
        zf15 = g60b264 == 0;
        if (!zf15) {
            esi16 = g60b280;
            if (esi16) {
                edx17 = *reinterpret_cast<void***>(esi16);
                eax18 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx17 + 8)(esi16));
                g60b3a0 = eax18;
                g60b280 = reinterpret_cast<void**>(0);
            }
            eax19 = g60b26c;
            zf20 = eax19 == g60b270;
            if (!zf20) {
                edx21 = *reinterpret_cast<void***>(eax19);
                eax22 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx21 + 8)(eax19));
                g60b3a0 = eax22;
                g60b26c = reinterpret_cast<void**>(0);
            }
            edx23 = g60b270;
            if (edx23) {
                edx24 = *reinterpret_cast<void***>(edx23);
                eax25 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx24 + 8)(edx23));
                g60b3a0 = eax25;
                g60b270 = reinterpret_cast<void**>(0);
            }
            ecx26 = g60b268;
            if (ecx26) {
                edx27 = *reinterpret_cast<void***>(ecx26);
                eax28 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx27 + 8)(ecx26));
                g60b3a0 = eax28;
                g60b268 = reinterpret_cast<void**>(0);
            }
            edi29 = g60b278;
            if (edi29) {
                edx30 = *reinterpret_cast<void***>(edi29);
                eax31 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx30 + 8)());
                g60b3a0 = eax31;
                g60b278 = reinterpret_cast<void**>(0);
                goto ebx32;
            }
        }
    }
    return;
}

void fun_43bba0(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** ebx7;
    void** v8;
    void** v9;
    void** edx10;
    void** v11;
    void** esi12;
    void** v13;
    void** edi14;
    void** v15;
    void** ebp16;
    int32_t eax17;
    int32_t eax18;
    int1_t zf19;
    int1_t zf20;
    int32_t eax21;
    void** eax22;
    void** edx23;
    void** eax24;
    int1_t zf25;
    int1_t zf26;
    void** eax27;
    void** edx28;
    void** eax29;
    int1_t zf30;
    void** ebp31;
    void** edx32;
    void** edx33;
    void** eax34;
    int1_t zf35;
    void** ebx36;
    int1_t zf37;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = ebx7;
    v8 = ecx;
    v9 = edx10;
    v11 = esi12;
    v13 = edi14;
    v15 = ebp16;
    while (eax17 = reinterpret_cast<int32_t>(PeekMessageA(0x60b410, 0, 0, 0, 1, v15, v13, v11, v9, v8, v6, v5)), !!eax17) {
        DispatchMessageA(0x60b410, 0x60b410, 0, 0, 0, 1, v15, v13, v11, v9, v8, v6, v5);
    }
    Sleep();
    while (eax18 = reinterpret_cast<int32_t>(PeekMessageA()), !!eax18) {
        DispatchMessageA(0x60b410);
    }
    zf19 = g60b110 == 0;
    if (!zf19) {
        while (zf20 = 0 == g60b110, !zf20) {
            GetMessageA(0x60b410, 0, 0, 0);
            while (DispatchMessageA(0x60b410, 0x60b410, 0, 0, 0), eax21 = reinterpret_cast<int32_t>(PeekMessageA(0x60b410, 0, 0, 0, 1, 0x60b410, 0x60b410, 0, 0, 0)), !!eax21) {
            }
        }
    }
    eax22 = g60b268;
    edx23 = *reinterpret_cast<void***>(eax22);
    eax24 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx23 + 0x6c)());
    g60b3a0 = eax24;
    if (!eax24) {
        addr_43bc7f_14:
        zf25 = reinterpret_cast<int1_t>(g4775e0 == 1);
        if (zf25 || (zf26 = reinterpret_cast<int1_t>(g4775c4 == 0x800), zf26)) {
            eax27 = g60b270;
            edx28 = *reinterpret_cast<void***>(eax27);
            eax29 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx28 + 0x6c)(eax27));
            g60b3a0 = eax29;
        }
    } else {
        if (!reinterpret_cast<int1_t>(eax24 == 0x8876024b)) {
            fun_437be0(ecx, eax22, 0x60b410, 0, 0, 0, 1, 0x1f4, 0x60b410, 0, 0, 0, 1, v15, v13, v11, v9, v8, v6, v5);
            goto addr_43bc7f_14;
        } else {
            fun_437c30(ecx, eax22);
            zf30 = reinterpret_cast<int1_t>(g4775e0 == 1);
            if (zf30) {
                fun_438700(ecx, eax22);
                goto addr_43bd2b_20;
            }
        }
    }
    ebp31 = g60b3a0;
    if (!ebp31) {
        addr_43bcda_22:
        edx32 = g60b278;
        if (edx32) {
            edx33 = *reinterpret_cast<void***>(edx32);
            eax34 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx33 + 0x6c)(edx32));
            g60b3a0 = eax34;
        }
    } else {
        if (!reinterpret_cast<int1_t>(ebp31 == 0x8876024b)) {
            fun_437be0(ecx, eax22, 0x60b410, 0, 0, 0, 1, 0x1f4, 0x60b410, 0, 0, 0, 1, v15, v13, v11, v9, v8, v6, v5);
            goto addr_43bcda_22;
        } else {
            fun_437c30(ecx, eax22);
            zf35 = reinterpret_cast<int1_t>(g4775e0 == 1);
            if (zf35) {
                fun_438700(ecx, eax22);
                goto 0x1f4;
            }
        }
    }
    ebx36 = g60b3a0;
    if (!ebx36) {
        addr_43bd2b_20:
        goto 0x1f4;
    } else {
        if (!reinterpret_cast<int1_t>(ebx36 == 0x8876024b)) {
            fun_437be0(ecx, eax22, 0x60b410, 0, 0, 0, 1, 0x1f4, 0x60b410, 0, 0, 0, 1, v15, v13, v11, v9, v8, v6, v5);
            goto addr_43bd2b_20;
        } else {
            fun_437c30(ecx, eax22);
            zf37 = reinterpret_cast<int1_t>(g4775e0 == 1);
            if (zf37) {
                fun_438700(ecx, eax22);
                goto 0x1f4;
            }
        }
    }
    fun_438030(ecx, eax22);
    goto addr_43bd2b_20;
}

void** fun_437be0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20) {
    void** edx21;
    int32_t* esp22;
    int32_t eax23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** eax31;

    g60b430 = reinterpret_cast<void**>(1);
    edx21 = g60b3a0;
    esp22 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 0x200 - 4 - 4);
    wsprintfA(esp22 + 2, eax23, reinterpret_cast<unsigned char>(edx21) & 0xfff);
    eax31 = fun_437a90(ecx, esp22 - 1 - 1 + 1 + 3, v24, v25, v26, v27, v28, v29, v30);
    g60b430 = reinterpret_cast<void**>(0);
    return eax31;
}

void*** g60b358 = reinterpret_cast<void***>(0);

unsigned char* g60b854 = reinterpret_cast<unsigned char*>(0);

void** g60b858 = reinterpret_cast<void**>(0);

void** fun_43c430(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** esi13;
    void** v14;
    void** edi15;
    void** v16;
    void** ebp17;
    void** v18;
    void** ebx19;
    void** v20;
    int32_t eax21;
    int1_t less_or_equal22;
    void* eax23;
    void* ebx24;
    int32_t edx25;
    int1_t less_or_equal26;
    void* edx27;
    void** eax28;
    void** edx29;
    void** eax30;
    void** eax31;
    void** eax32;
    void*** tmp32_33;
    uint32_t edx34;
    signed char* eax35;
    void** eax36;
    void*** tmp32_37;
    uint32_t edx38;
    signed char* eax39;
    signed char* edx40;
    signed char* ebx41;
    unsigned char* eax42;
    void** ebp43;
    signed char* esi44;
    signed char* edi45;
    void** eax46;
    int1_t zf47;
    int1_t zf48;
    void** esi49;
    void** edi50;
    int1_t zf51;
    void** eax52;
    void** edx53;
    void** eax54;
    void** eax55;

    v11 = reinterpret_cast<void**>(__return_address());
    v12 = esi13;
    v14 = edi15;
    v16 = ebp17;
    v18 = ebx19;
    v20 = ecx;
    if (eax21 < 0 || ((less_or_equal22 = reinterpret_cast<signed char>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<uint32_t>(ebx24)) <= reinterpret_cast<signed char>(g4775d0), !less_or_equal22) || (edx25 < 0 || (less_or_equal26 = reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<uint32_t>(edx27)) <= reinterpret_cast<signed char>(g4775d4), !less_or_equal26)))) {
        eax30 = fun_437a90(v18, "I_UpdateBox: Bad coords %d, %d  %d, %d", eax28, edx29, v18, v20, v18, v20, v16);
    } else {
        eax31 = fun_43c050(ecx, v18, v20, v16, v14, v12, v11, a2, a3, a4, a5, a6, a7, a8, a9, a10);
        if (eax31) {
            eax32 = g60b9e8;
            tmp32_33 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax32) * edx34 + reinterpret_cast<uint32_t>(g60b358));
            eax35 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(tmp32_33) + reinterpret_cast<unsigned char>(eax28));
            *reinterpret_cast<unsigned char*>(&eax35) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax35) & 0xfc);
            eax36 = g4775d0;
            tmp32_37 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax36) * edx38 + reinterpret_cast<uint32_t>(g5f27a0));
            eax39 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(tmp32_37) + reinterpret_cast<unsigned char>(eax28));
            *reinterpret_cast<unsigned char*>(&eax39) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax39) & 0xfc);
            edx40 = eax35;
            ebx41 = eax39;
            eax42 = reinterpret_cast<unsigned char*>(v18 + 3);
            *reinterpret_cast<unsigned char*>(&eax42) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax42) & 0xfc);
            g60b854 = eax42;
            ebp43 = reinterpret_cast<void**>(0);
            g60b858 = v20;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v20) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v20 == 0))) {
                do {
                    esi44 = ebx41;
                    edi45 = edx40;
                    eax46 = v18;
                    ecx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v18) >> 2);
                    zf47 = ecx == 0;
                    do {
                        if (!ecx) 
                            break;
                        --ecx;
                        *edi45 = *esi44;
                        edi45 = edi45 + 4;
                        esi44 = esi44 + 4;
                    } while (!zf47);
                    *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax46) & 3);
                    zf48 = *reinterpret_cast<unsigned char*>(&ecx) == 0;
                    do {
                        if (!ecx) 
                            break;
                        --ecx;
                        *edi45 = *esi44;
                        ++edi45;
                        ++esi44;
                    } while (!zf48);
                    ++ebp43;
                    esi49 = g60b9e8;
                    edi50 = g4775d0;
                    edx40 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx40) + reinterpret_cast<unsigned char>(esi49));
                    ebx41 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx41) + reinterpret_cast<unsigned char>(edi50));
                } while (reinterpret_cast<signed char>(ebp43) < reinterpret_cast<signed char>(v20));
            }
            zf51 = g60b9d4 == 0;
            if (!zf51) {
                eax52 = g60b270;
                edx53 = *reinterpret_cast<void***>(eax52);
                g60b9d4 = reinterpret_cast<void**>(0);
                eax30 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx53 + 0x80)(eax52, 0));
                g60b3a0 = eax30;
                if (eax30) {
                    eax30 = fun_437a90(ecx, "MegaUnlock: Unlock = %d", reinterpret_cast<unsigned char>(eax30) & 0xfff, eax52, 0, v18, v20, v16, v14);
                }
            } else {
                eax54 = fun_437a90(ecx, "MegaUnlock: Not Locked!", v18, v20, v16, v14, v12, v11, a2);
                return eax54;
            }
        } else {
            eax55 = fun_437a90(ecx, "I_UpdateBox: MegaLock failed!", v18, v20, v16, v14, v12, v11, a2);
            return eax55;
        }
    }
    return eax30;
}

void** g60b344 = reinterpret_cast<void**>(0);

void* g60b9ec = reinterpret_cast<void*>(0);

void** g60b72c = reinterpret_cast<void**>(0);

void** g60b728 = reinterpret_cast<void**>(0);

void*** g60b724 = reinterpret_cast<void***>(0);

void** fun_43c050(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    void** v17;
    void** edi18;
    void** edx19;
    void** ebp20;
    void** esi21;
    void** edx22;
    void** eax23;
    void** edx24;
    void** eax25;
    void*** eax26;
    void** eax27;
    void** esi28;
    struct s25* edx29;
    void*** eax30;
    void** edi31;
    void** eax32;
    void** ebp33;
    void** ebp34;
    void** eax35;
    int1_t zf36;
    void*** eax37;
    void** eax38;
    void** ebp39;
    void** ebx40;
    void** ecx41;
    uint32_t eax42;
    void* edx43;
    uint32_t ecx44;
    void** ebx45;

    v17 = edi18;
    edx19 = g60b9d4;
    if (!edx19) {
        fun_442b80(ecx, ebp20, v17, esi21, edx22, ecx);
        eax23 = g60b270;
        edx24 = *reinterpret_cast<void***>(eax23);
        g60b334 = 0x6c;
        eax25 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx24 + 100)());
        g60b3a0 = eax25;
        if (!eax25) {
            eax26 = g60b358;
            g60ba04 = eax26;
            eax27 = g60b344;
            esi28 = g4775d0;
            g60b9e8 = eax27;
            edx29 = g48ae9c;
            g60b9ec = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax27) - reinterpret_cast<unsigned char>(esi28));
            eax30 = g60ba04;
            edi31 = g60b9e8;
            eax32 = g48aea0;
            ebp33 = g60b72c;
            ebp34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp33) + reinterpret_cast<unsigned char>(1));
            g60b9d4 = reinterpret_cast<void**>(1);
            g60b72c = ebp34;
            eax35 = g60b728;
            g60ba08 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx29) + reinterpret_cast<uint32_t>(eax30) + reinterpret_cast<unsigned char>(eax32) * reinterpret_cast<unsigned char>(edi31));
            zf36 = eax35 == edi31;
            if (!zf36) {
                if (!zf36) {
                    fun_437a90(1, "MegaLock %d: pitch changed from %d to %d", ebp34, eax35, edi31, eax23, 0, 0x60b334, 1);
                }
                eax37 = g60b358;
                g60b724 = eax37;
                eax38 = g60b9e8;
                ebp39 = g48ae98;
                g60b728 = eax38;
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebp39) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebp39 == 0))) {
                    ebx40 = g60b9e8;
                    ecx41 = g48aea0;
                    eax42 = 0;
                    edx43 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx41) * reinterpret_cast<unsigned char>(ebx40));
                    ecx44 = reinterpret_cast<unsigned char>(ebp39) * 4;
                    do {
                        *reinterpret_cast<void**>(eax42 + 0x487fc0) = edx43;
                        eax42 = eax42 + 4;
                        edx43 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx43) + reinterpret_cast<unsigned char>(ebx40));
                    } while (reinterpret_cast<int32_t>(eax42) < reinterpret_cast<int32_t>(ecx44));
                }
            }
            goto v17;
        } else {
            if (!reinterpret_cast<int1_t>(eax25 == 0x887601c2)) {
                fun_437be0(ecx, eax23, 0, 0x60b334, 1, 0, ebp20, v17, esi21, edx22, ecx, ebx45, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            } else {
                fun_43bba0(ecx, eax23, 0, 0x60b334);
                goto v17;
            }
        }
    } else {
        fun_437a90(ecx, "MegaLock: Already locked", ebp20, v17, esi21, edx22, ecx, ebx45, __return_address());
    }
    return 0;
}

int32_t g4835e8 = 0x402448b;

int32_t fun_441440(void** ecx, void** a2, void** a3);

void** g6181e8 = reinterpret_cast<void**>(0);

uint32_t g482a04 = 0xe4b90000;

uint32_t g4829fc = 0x5b595a5e;

uint32_t g4829f4 = 0xe746e800;

uint32_t g4829f8 = 0x5f5d0001;

uint32_t g618208 = 0;

uint32_t g618200 = 0;

uint32_t g6181fc = 0;

uint32_t g618238 = 0;

uint32_t g618210 = 0;

uint32_t g618234 = 0;

uint32_t g618204 = 0;

uint32_t g6181f8 = 0;

uint32_t g61822c = 0;

void** g618220 = reinterpret_cast<void**>(0);

void** g4776bc = reinterpret_cast<void**>(0);

void** g618244 = reinterpret_cast<void**>(0);

void** g61823c = reinterpret_cast<void**>(0);

int32_t FreeLibrary = 0x2206fa;

void** fun_441640(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    int1_t zf9;
    void** ebp10;
    void** edi11;
    int32_t eax12;
    struct s55* eax13;
    void** esi14;
    void** edx15;
    void** ebx16;
    uint32_t esi17;
    uint32_t ecx18;
    uint32_t edi19;
    uint32_t ecx20;
    uint32_t ebp21;
    uint32_t ecx22;
    uint32_t eax23;
    uint32_t ecx24;
    uint32_t edx25;
    uint32_t ecx26;
    uint32_t ebx27;
    uint32_t ecx28;
    uint32_t ecx29;
    uint32_t esi30;
    uint32_t ecx31;
    uint32_t edi32;
    uint32_t ecx33;
    uint32_t ebp34;
    uint32_t ecx35;
    uint32_t eax36;
    uint32_t ecx37;
    uint32_t edx38;
    uint32_t ecx39;
    uint32_t ebx40;
    uint32_t ecx41;
    int32_t ecx42;
    int32_t ebp43;
    int32_t ebx44;
    int32_t edi45;
    void** eax46;
    void** v47;
    void** eax48;
    void** edi49;
    void** eax50;
    void** eax51;
    void** edx52;
    int1_t zf53;
    int32_t eax54;
    void** eax55;

    zf9 = g4835e8 == 0;
    if (!zf9) {
        eax12 = fun_441440(ecx, ebp10, edi11);
        if (!eax12) {
            eax13 = g618224;
            fun_440840(3, "joystick %d found\n", &eax13->f1, ebp10, edi11, esi14, edx15, ecx, ebx16, __return_address(), a2, a3, a4, a5, a6, a7);
            g61820c = 1;
            g6181e8 = reinterpret_cast<void**>(3);
            fun_442b80(3, ebp10, edi11, esi14, edx15, ecx);
            esi17 = g482a04;
            if (!(esi17 & 0xffffffe0)) {
                ecx18 = esi17;
                g6182e4 = 1 << *reinterpret_cast<unsigned char*>(&ecx18);
            }
            edi19 = g4829fc;
            if (!(edi19 & 0xffffffe0)) {
                ecx20 = edi19;
                g6182e8 = 1 << *reinterpret_cast<unsigned char*>(&ecx20);
            }
            ebp21 = g4829f4;
            if (!(ebp21 & 0xffffffe0)) {
                ecx22 = ebp21;
                g6182ec = 1 << *reinterpret_cast<unsigned char*>(&ecx22);
            }
            eax23 = g4829f8;
            if (!(eax23 & 0xffffffe0)) {
                ecx24 = eax23;
                g6182f0 = 1 << *reinterpret_cast<unsigned char*>(&ecx24);
            }
            edx25 = g618208;
            if (!(edx25 & 0xffffffe0)) {
                ecx26 = edx25;
                g6182fc = 1 << *reinterpret_cast<unsigned char*>(&ecx26);
            }
            ebx27 = g618200;
            if (!(ebx27 & 0xffffffe0)) {
                ecx28 = ebx27;
                g618300 = 1 << *reinterpret_cast<unsigned char*>(&ecx28);
            }
            ecx29 = g6181fc;
            if (!(ecx29 & 0xffffffe0)) {
                g618304 = 1 << *reinterpret_cast<unsigned char*>(&ecx29);
            }
            esi30 = g618238;
            if (!(esi30 & 0xffffffe0)) {
                ecx31 = esi30;
                g618308 = 1 << *reinterpret_cast<unsigned char*>(&ecx31);
            }
            edi32 = g618210;
            if (!(edi32 & 0xffffffe0)) {
                ecx33 = edi32;
                g61830c = 1 << *reinterpret_cast<unsigned char*>(&ecx33);
            }
            ebp34 = g618234;
            if (!(ebp34 & 0xffffffe0)) {
                ecx35 = ebp34;
                g618310 = 1 << *reinterpret_cast<unsigned char*>(&ecx35);
            }
            eax36 = g618204;
            if (!(eax36 & 0xffffffe0)) {
                ecx37 = eax36;
                g618314 = 1 << *reinterpret_cast<unsigned char*>(&ecx37);
            }
            edx38 = g6181f8;
            if (!(edx38 & 0xffffffe0)) {
                ecx39 = edx38;
                g6182f4 = 1 << *reinterpret_cast<unsigned char*>(&ecx39);
            }
            ebx40 = g61822c;
            if (!(ebx40 & 0xffffffe0)) {
                ecx41 = ebx40;
                g6182f8 = 1 << *reinterpret_cast<unsigned char*>(&ecx41);
            }
            ecx42 = g618230;
            if (ecx42 < 1 || ecx42 > 0x7800) {
                g618230 = 0x1800;
            }
            ebp43 = g61821c;
            if (ebp43 < 1 || ebp43 > 0x7800) {
                g61821c = 0x200;
            }
            ebx44 = g618218;
            if (ebx44 < 1 || ebx44 > 0x7800) {
                g618218 = 0x1800;
            }
            edi45 = g618228;
            if (edi45 < 1 || edi45 > 0x7800) {
                g618228 = 24;
            }
            eax46 = g618220;
            g4776bc = reinterpret_cast<void**>(0);
            g618244 = reinterpret_cast<void**>(0);
            g618240 = reinterpret_cast<void**>(0);
            g61823c = reinterpret_cast<void**>(0);
            if (*reinterpret_cast<void***>(eax46) && (v47 = eax46, *reinterpret_cast<void***>(eax46 + 0x104) = reinterpret_cast<void**>(0), eax46 = reinterpret_cast<void**>(LoadLibraryA(v47)), g4776bc = eax46, !!eax46)) {
                eax48 = reinterpret_cast<void**>(GetProcAddress(eax46, "InitializeForce", v47));
                edi49 = g4776bc;
                g618244 = eax48;
                eax50 = reinterpret_cast<void**>(GetProcAddress(edi49, "DoomForce", eax46, "InitializeForce", v47));
                g618240 = eax50;
                eax51 = reinterpret_cast<void**>(GetProcAddress());
                edx52 = g618244;
                g61823c = eax51;
                if (!edx52 || ((zf53 = g618240 == 0, zf53) || (!eax51 || (eax54 = reinterpret_cast<int32_t>(g618244()), eax54 == 0)))) {
                    eax55 = g4776bc;
                    g618244 = reinterpret_cast<void**>(0);
                    g618240 = reinterpret_cast<void**>(0);
                    g61823c = reinterpret_cast<void**>(0);
                    eax46 = reinterpret_cast<void**>(FreeLibrary(eax55));
                    g4776bc = reinterpret_cast<void**>(0);
                } else {
                    g618240();
                    goto "UninitializeForce";
                }
            }
        } else {
            eax46 = fun_440840(ecx, "joystick not found\n", ebp10, edi11, esi14, edx15, ecx, ebx16, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        }
    }
    return eax46;
}

uint32_t g4654cc = 1;

void fun_41b030(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26) {
    void** ebx27;
    void** eax28;
    void** eax29;
    void** eax30;

    eax28 = fun_41d410(ecx, ecx, ebx27, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26);
    if (!eax28) {
        eax29 = fun_41d410(ecx, ecx, ebx27, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26);
        *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<uint1_t>(eax29 == 0);
        g4654d0 = reinterpret_cast<unsigned char>(eax29) & 0xff;
        eax30 = fun_41d410(ecx, ecx, ebx27, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26);
        if (!eax30) {
            g4654cc = 1;
            return;
        } else {
            g4654cc = 0;
            return;
        }
    } else {
        g4654d0 = 0;
        g4654cc = 0;
        return;
    }
}

void** g61831c = reinterpret_cast<void**>(0);

int32_t g618334 = 0;

void** g4776c8 = reinterpret_cast<void**>(0xff);

struct s486 {
    signed char[96] pad96;
    void** f60;
};

struct s487 {
    signed char[96] pad96;
    void* f60;
};

