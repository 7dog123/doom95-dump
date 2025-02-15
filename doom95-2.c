void** g48aea0 = reinterpret_cast<void**>(89);

void** fun_43f680(void** ecx) {
    void** eax2;
    void** edx3;
    void** ebx4;
    void** ecx5;
    void*** esp6;
    void* v7;
    void* esp8;
    void** edx9;
    void** edi10;
    void** eax11;
    void** ebx12;
    void** eax13;
    void* esp14;
    void** v15;
    void** ebp16;
    void** edx17;
    void*** v18;
    void** eax19;
    void** edx20;
    void* esp21;
    void* v22;
    void* esp23;
    void** edx24;
    void** ecx25;
    void** eax26;
    void** ebx27;
    void** eax28;
    void* esp29;
    void** v30;
    void** eax31;
    void* tmp32_32;
    struct s25* edi33;
    void** ebp34;
    void* esp35;
    void* v36;
    void* esp37;
    void** v38;
    void** edx39;
    void*** esp40;
    void** eax41;
    void** v42;
    void** ebx43;
    void** eax44;
    void* esp45;
    void** v46;
    void** eax47;
    void* tmp32_48;
    void** ecx49;
    void** esi50;
    void** edi51;
    struct s25* eax52;
    void** esp53;
    void* v54;
    void** edx55;
    void** ebp56;
    void** eax57;
    void** ebx58;
    void** v59;

    eax2 = g48ae94;
    edx3 = g4775d0;
    if (eax2 != edx3 && (ebx4 = g482a68, !ebx4)) {
        ecx5 = g48aea0;
        esp6 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 16 - 4 - 4 - 4 - 4);
        v7 = reinterpret_cast<void*>(esp6 + 16);
        SetRect(v7, ebx4, ebx4, edx3, ecx5);
        esp8 = reinterpret_cast<void*>(esp6 - 4 - 4 + 4 - 4 - 4);
        edx9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp8) + 8);
        edi10 = g60b278;
        eax11 = g60b270;
        ebx12 = *reinterpret_cast<void***>(eax11);
        eax13 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx12 + 20)(eax11, edx9, edi10, edx9, 0x1000000, 0, v7, ebx4, ebx4, edx3, ecx5));
        esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 - 4 - 4 - 4 + 4);
        g60b3a0 = eax13;
        if (eax13) {
            v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax13) & 0xfff);
            eax13 = fun_437a90(ecx5, "R_DrawViewBorder: Blt = %d", v15, eax11, edx9, edi10, edx9, 0x1000000, 0, ecx5, "R_DrawViewBorder: Blt = %d", v15, eax11, edx9, edi10, edx9, 0x1000000, 0);
            esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 - 4 + 4 + 8);
        }
        ebp16 = g4775d0;
        *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp16 == 0x140));
        edx17 = g4775d4;
        v18 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx17) - ((reinterpret_cast<unsigned char>(eax13) & 0xff) + 1 << 5));
        eax19 = g48aea0;
        edx20 = g48ae98;
        esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 - 4 - 4);
        v22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) + 16);
        SetRect(v22, 0, reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<unsigned char>(edx20), ebp16, v18, eax11, edx9, edi10, edx9, 0x1000000, 0, v7, ebx4, ebx4, edx3, ecx5);
        esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 + 4 - 4 - 4);
        edx24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp23) + 8);
        ecx25 = g60b278;
        eax26 = g60b270;
        ebx27 = *reinterpret_cast<void***>(eax26);
        eax28 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx27 + 20)(eax26, edx24, ecx25, edx24, 0x1000000, 0, v22, 0, reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<unsigned char>(edx20), ebp16, v18, eax11, edx9, edi10, edx9, 0x1000000, 0, v7, ebx4, ebx4, edx3, ecx5));
        esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 - 4 - 4 + 4);
        g60b3a0 = eax28;
        if (eax28) {
            v30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax28) & 0xfff);
            fun_437a90(ecx25, "R_DrawViewBorder: Blt = %d", v30, eax26, edx24, ecx25, edx24, 0x1000000, 0, ecx25, "R_DrawViewBorder: Blt = %d", v30, eax26, edx24, ecx25, edx24, 0x1000000, 0);
            esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 - 4 - 4 + 4 + 8);
        }
        eax31 = g48aea0;
        tmp32_32 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax31) + reinterpret_cast<unsigned char>(g48ae98));
        edi33 = g48ae9c;
        ebp34 = g48aea0;
        esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 - 4 - 4 - 4);
        v36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) + 16);
        SetRect(v36, 0, ebp34, edi33, tmp32_32, eax26, edx24, ecx25, edx24, 0x1000000, 0, v22, 0, reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<unsigned char>(edx20), ebp16, v18, eax11, edx9, edi10, edx9, 0x1000000, 0, v7, ebx4, ebx4, edx3, ecx5);
        esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 - 4 + 4 - 4 - 4);
        v38 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp37) + 8);
        edx39 = g60b278;
        esp40 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp37) - 4 - 4);
        eax41 = g60b270;
        v42 = reinterpret_cast<void**>(esp40 + 16);
        ebx43 = *reinterpret_cast<void***>(eax41);
        eax44 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx43 + 20)(eax41, v42, edx39, v38, 0x1000000, 0, v36, 0, ebp34, edi33, tmp32_32, eax26, edx24, ecx25, edx24, 0x1000000, 0, v22, 0, reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<unsigned char>(edx20), ebp16, v18, eax11, edx9, edi10, edx9, 0x1000000, 0, v7, ebx4, ebx4, edx3, ecx5));
        esp45 = reinterpret_cast<void*>(esp40 - 4 - 4 - 4 + 4);
        g60b3a0 = eax44;
        if (eax44) {
            v46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax44) & 0xfff);
            fun_437a90(ecx25, "R_DrawViewBorder: Blt = %d", v46, eax41, v42, edx39, v38, 0x1000000, 0, ecx25, "R_DrawViewBorder: Blt = %d", v46, eax41, v42, edx39, v38, 0x1000000, 0);
            esp45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp45) - 4 - 4 - 4 + 4 + 8);
        }
        eax47 = g48aea0;
        tmp32_48 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax47) + reinterpret_cast<unsigned char>(g48ae98));
        ecx49 = g4775d0;
        esi50 = g48aea0;
        edi51 = g48ae94;
        eax52 = g48ae9c;
        esp53 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp45) - 4 - 4 - 4 - 4);
        v54 = reinterpret_cast<void*>(esp53 + 4);
        SetRect(v54, reinterpret_cast<uint32_t>(eax52) + reinterpret_cast<unsigned char>(edi51), esi50, ecx49, tmp32_48, eax41, v42, edx39, v38, 0x1000000, 0, v36, 0, ebp34, edi33, tmp32_32, eax26, edx24, ecx25, edx24, 0x1000000, 0, v22, 0, reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<unsigned char>(edx20), ebp16, v18, eax11, edx9, edi10, edx9, 0x1000000, 0, v7, ebx4, ebx4, edx3, ecx5);
        edx55 = reinterpret_cast<void**>(esp53 - 1 - 1 + 1 - 1 - 1 + 2);
        ebp56 = g60b278;
        eax57 = g60b270;
        ebx58 = *reinterpret_cast<void***>(eax57);
        eax2 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx58 + 20)(eax57, edx55, ebp56, edx55, 0x1000000, 0, v54, reinterpret_cast<uint32_t>(eax52) + reinterpret_cast<unsigned char>(edi51), esi50, ecx49, tmp32_48, eax41, v42, edx39, v38, 0x1000000, 0, v36, 0, ebp34, edi33, tmp32_32, eax26, edx24, ecx25, edx24, 0x1000000, 0, v22, 0, reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<unsigned char>(edx20), ebp16, v18, eax11, edx9, edi10, edx9, 0x1000000, 0, v7, ebx4, ebx4, edx3, ecx5));
        g60b3a0 = eax2;
        if (eax2) {
            v59 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax2) & 0xfff);
            eax2 = fun_437a90(ecx49, "R_DrawViewBorder: Blt = %d", v59, eax57, edx55, ebp56, edx55, 0x1000000, 0, ecx49, "R_DrawViewBorder: Blt = %d", v59, eax57, edx55, ebp56, edx55, 0x1000000, 0);
        }
    }
    return eax2;
}

int32_t g4654e0 = 0;

void** g60ae64 = reinterpret_cast<void**>(0);

void** fun_434700(void** ecx);

void fun_434740(void** ecx);

void** fun_434890(void** ecx, void** a2, void** a3, ...) {
    void** eax4;
    int32_t edx5;
    int1_t zf6;
    int1_t cf7;
    void** ebp8;
    void** ebx9;
    void** ecx10;
    void** edi11;
    void** esi12;
    void** ebx13;
    void** eax14;

    eax4 = fun_4346d0(ecx, __return_address(), a2);
    if (edx5 != 3 || (zf6 = g4654e0 == 0, zf6)) {
        cf7 = reinterpret_cast<unsigned char>(eax4) < reinterpret_cast<unsigned char>(g60ae74);
        if (!cf7) {
            fun_43bd40(ecx, "W_CacheLumpNum: %i >= numlumps", eax4, ebp8);
        }
        ebx9 = g60ae64;
        ecx10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax4) * 4);
        if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(ecx10))) {
            if (*reinterpret_cast<int32_t*>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(ecx10)) + 0xfffffff4) != 0x1d4a11) {
                fun_43bd40(ecx10, "Z_CT at w_wad.c:%i", 0x212, ebp8);
            }
            fun_437910(ecx10, ebp8, edi11, esi12, ecx, ebx13, __return_address(), a2);
        } else {
            fun_434700(ecx10);
            fun_4375e0(ecx10, ebp8, edi11);
            fun_434740(ecx10);
        }
        eax14 = g60ae64;
        return *reinterpret_cast<void***>(eax14 + reinterpret_cast<unsigned char>(eax4) * 4);
    } else {
        return 0;
    }
}

void** g60b430 = reinterpret_cast<void**>(0);

void** g4775c4 = reinterpret_cast<void**>(0);

void** g60b26c = reinterpret_cast<void**>(0);

void fun_43bba0(void** ecx, void** a2, void** a3, void** a4);

int32_t g60b730 = 0;

int32_t GetTickCount = 0x220750;

void** g481254 = reinterpret_cast<void**>(0);

int32_t g60b738 = 0;

void fun_43c6e0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;
    void** v11;
    void** ebx12;
    void** v13;
    void** v14;
    void** edx15;
    void** v16;
    void** esi17;
    void** v18;
    void** edi19;
    void** v20;
    void** ebp21;
    int1_t zf22;
    int1_t zf23;
    int1_t zf24;
    void** eax25;
    void** esi26;
    void** edx27;
    void** eax28;
    void** v29;
    void** eax30;
    void** v31;
    void** edx32;
    void** v33;
    void** eax34;
    void** eax35;
    void** ebp36;
    void** edx37;
    void** eax38;
    int1_t zf39;
    void** eax40;
    void** ebx41;
    void** eax42;
    void** eax43;
    void** edx44;
    void** eax45;
    void** ebp46;
    void** v47;
    void** eax48;
    void** v49;
    void** edx50;
    void** eax51;
    void** eax52;
    void** v53;
    int32_t eax54;
    void** ecx55;
    uint32_t eax56;
    int32_t eax57;
    int32_t edx58;
    int32_t eax59;
    void** edx60;
    int32_t eax61;
    void** v62;

    v10 = reinterpret_cast<void**>(__return_address());
    v11 = ebx12;
    v13 = ecx;
    v14 = edx15;
    v16 = esi17;
    v18 = edi19;
    v20 = ebp21;
    zf22 = g60b430 == 0;
    if (!zf22) {
        addr_43c8e9_2:
        return;
    } else {
        zf23 = reinterpret_cast<int1_t>(g4775e0 == 1);
        if (!zf23) {
            zf24 = reinterpret_cast<int1_t>(g4775c4 == 0x800);
            if (zf24 && ((eax25 = g60b26c, esi26 = g60b270, eax25 != esi26) && (edx27 = *reinterpret_cast<void***>(eax25), eax28 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx27 + 28)(eax25, 0, 0, esi26, 0, 16)), g60b3a0 = eax28, !!eax28))) {
                fun_437a90(ecx, "I_FinishUpdate: Blt offscreen to backbuffer %d", reinterpret_cast<unsigned char>(eax28) & 0xfff, eax25, 0, 0, esi26, 0, 16);
            }
            v29 = reinterpret_cast<void**>(1);
            eax30 = g60b268;
            v31 = reinterpret_cast<void**>(0);
            edx32 = *reinterpret_cast<void***>(eax30);
            v33 = eax30;
            eax34 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx32 + 44)(v33, 0, 1));
            g60b3a0 = eax34;
            if (eax34) 
                goto addr_43c803_7;
        } else {
            eax35 = g60b26c;
            ebp36 = g60b270;
            if (eax35 != ebp36) {
                edx37 = *reinterpret_cast<void***>(eax35);
                eax38 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx37 + 28)(eax35, 0, 0, ebp36, 0, 16));
                g60b3a0 = eax38;
            }
            zf39 = g60b264 == 0;
            if (!zf39) {
                do {
                    eax40 = g60b264;
                    ebx41 = *reinterpret_cast<void***>(eax40);
                    eax42 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx41 + 68)());
                    g60b3a0 = eax42;
                    if (eax40) 
                        break;
                } while (!eax42);
                do {
                    eax43 = g60b264;
                    edx44 = *reinterpret_cast<void***>(eax43);
                    eax45 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx44 + 68)());
                    g60b3a0 = eax45;
                    if (!eax43) 
                        break;
                } while (!eax45);
            }
            v29 = reinterpret_cast<void**>(0);
            v31 = reinterpret_cast<void**>(0x1000000);
            v33 = reinterpret_cast<void**>(0);
            ebp46 = g60b26c;
            v47 = ebp46;
            eax48 = g60b268;
            v49 = reinterpret_cast<void**>(0x60b3ec);
            edx50 = *reinterpret_cast<void***>(eax48);
            eax51 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx50 + 20)(eax48, 0x60b3ec, v47, 0, 0x1000000, 0));
            g60b3a0 = eax51;
            if (eax51) 
                goto addr_43c798_16;
        }
    }
    addr_43c816_17:
    eax52 = g60b3a0;
    if (!reinterpret_cast<int1_t>(eax52 == 0x887601c2)) {
        if (eax52) {
            fun_437be0(ecx, v33, v31, v29, v53, v20, v18, v16, v14, v13, v11, v10, a2, a3, a4, a5, a6, a7, a8, a9);
        }
    } else {
        fun_43bba0(ecx, v33, v31, v29);
    }
    ++g60b730;
    eax54 = reinterpret_cast<int32_t>(GetTickCount(v33, v31, v29));
    ecx55 = g481254;
    if (ecx55 && (eax56 = reinterpret_cast<uint32_t>(eax54 - g60b738), eax56 > 0x1388)) {
        eax57 = g60b730;
        edx58 = eax57 % 5;
        eax59 = g60b730;
        wsprintfA(0x60b740, "%d.%d FPS", eax59 / 5, edx58 + edx58, v33, v31, v29);
        edx60 = g482a7c;
        g60b730 = 0;
        g60b738 = eax54;
        *reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(edx60 + reinterpret_cast<unsigned char>(edx60) * 8) * 4 - reinterpret_cast<unsigned char>(edx60)) * 8 + 0x4825f0) = 0x60b740;
    }
    while (eax61 = reinterpret_cast<int32_t>(PeekMessageA(0x60b410, 0, 0, 0, 1, v33, v31, v29)), !!eax61) {
        DispatchMessageA(0x60b410, 0x60b410, 0, 0, 0, 1, v33, v31, v29);
    }
    goto addr_43c8e9_2;
    addr_43c803_7:
    v47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax34) & 0xfff);
    v49 = reinterpret_cast<void**>("blast error on flip %d");
    addr_43c80e_26:
    fun_437a90(ecx, v49, v47, v33, v31, v29, v62, v20, v18);
    goto addr_43c816_17;
    addr_43c798_16:
    goto addr_43c80e_26;
}

int32_t g45987c = 0;

void*** g5f27a0 = reinterpret_cast<void***>(0);

void*** g481de4 = reinterpret_cast<void***>(0x4ec8355);

uint32_t fun_4154e0(void** ecx, void** a2, void* a3) {
    int1_t zf4;
    void*** eax5;
    int32_t eax6;
    int32_t ecx7;
    void** eax8;
    uint1_t zf9;

    zf4 = g45987c == 0;
    if (zf4) {
        eax5 = g5f27a0;
        g45987c = 1;
        g481de4 = eax5;
        *reinterpret_cast<int32_t*>("0PA" + (eax6 * 4 - eax6) * 4)();
    }
    fun_433970(a2);
    ecx7 = (eax6 * 4 - eax6) * 4;
    eax8 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ecx7 + reinterpret_cast<int32_t>("`PA"))());
    if (eax8) {
        g45987c = 0;
        eax8 = ecx;
        *reinterpret_cast<int32_t*>(ecx7 + 0x459888)();
    }
    zf9 = reinterpret_cast<uint1_t>(g45987c == 0);
    *reinterpret_cast<unsigned char*>(&eax8) = zf9;
    return reinterpret_cast<unsigned char>(eax8) & 0xff;
}

void*** g60ba04 = reinterpret_cast<void***>(0);

void** g60ba1c = reinterpret_cast<void**>(0);

void*** g60ba00 = reinterpret_cast<void***>(0);

void** g5f2790 = reinterpret_cast<void**>(0);

void** g60ba28 = reinterpret_cast<void**>(0);

void** g60ba2c = reinterpret_cast<void**>(0);

void** g5f279c = reinterpret_cast<void**>(0);

void** g60ba20 = reinterpret_cast<void**>(0);

void** g60ba38 = reinterpret_cast<void**>(0);

void** g5f2794 = reinterpret_cast<void**>(0);

void** g60ba24 = reinterpret_cast<void**>(0);

void** g60ba30 = reinterpret_cast<void**>(0);

void** g5f2798 = reinterpret_cast<void**>(0);

void** g60ba0c = reinterpret_cast<void**>(0);

void** g60ba34 = reinterpret_cast<void**>(0);

void** g60ba18 = reinterpret_cast<void**>(0);

void** g60ba10 = reinterpret_cast<void**>(0);

void** g60ba14 = reinterpret_cast<void**>(0);

void** fun_43c430(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void fun_41d4c0(void** ecx);

void fun_43c5a0(void** ecx, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** v8;
    void** edx9;
    void** v10;
    void** esi11;
    void** v12;
    void** edi13;
    void** v14;
    void** ebp15;
    void*** eax16;
    void** edx17;
    void** eax18;
    void** ebx19;
    void** eax20;
    void** ecx21;
    void** eax22;
    void** esi23;
    void** eax24;
    void** edi25;
    void** eax26;
    void** ebp27;
    void** eax28;
    void** edx29;
    void** eax30;
    void** ebx31;
    void** eax32;
    signed char* esi33;
    signed char* edi34;
    uint32_t ecx35;
    signed char* esi36;
    signed char* edi37;
    uint32_t ecx38;
    void** eax39;
    void** ecx40;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ebx6;
    v7 = ecx;
    v8 = edx9;
    v10 = esi11;
    v12 = edi13;
    v14 = ebp15;
    eax16 = g60ba04;
    edx17 = g60ba1c;
    g60ba00 = eax16;
    eax18 = g5f2790;
    if (reinterpret_cast<signed char>(eax18) <= reinterpret_cast<signed char>(edx17)) {
        eax18 = edx17;
    }
    ebx19 = g60ba28;
    g60ba2c = eax18;
    eax20 = g5f279c;
    if (reinterpret_cast<signed char>(eax20) <= reinterpret_cast<signed char>(ebx19)) {
        eax20 = ebx19;
    }
    ecx21 = g60ba20;
    g60ba38 = eax20;
    eax22 = g5f2794;
    if (reinterpret_cast<signed char>(eax22) >= reinterpret_cast<signed char>(ecx21)) {
        eax22 = ecx21;
    }
    esi23 = g60ba24;
    g60ba30 = eax22;
    eax24 = g5f2798;
    if (reinterpret_cast<signed char>(eax24) >= reinterpret_cast<signed char>(esi23)) {
        eax24 = esi23;
    }
    edi25 = g60ba0c;
    g60ba34 = eax24;
    eax26 = g60ba2c;
    if (reinterpret_cast<signed char>(eax26) <= reinterpret_cast<signed char>(edi25)) {
        eax26 = edi25;
    }
    ebp27 = g60ba18;
    g60ba2c = eax26;
    eax28 = g60ba38;
    if (reinterpret_cast<signed char>(eax28) <= reinterpret_cast<signed char>(ebp27)) {
        eax28 = ebp27;
    }
    edx29 = g60ba10;
    g60ba38 = eax28;
    eax30 = g60ba30;
    if (reinterpret_cast<signed char>(eax30) >= reinterpret_cast<signed char>(edx29)) {
        eax30 = edx29;
    }
    ebx31 = g60ba14;
    g60ba30 = eax30;
    eax32 = g60ba34;
    if (reinterpret_cast<signed char>(eax32) >= reinterpret_cast<signed char>(ebx31)) {
        eax32 = ebx31;
    }
    esi33 = reinterpret_cast<signed char*>(0x60ba0c);
    edi34 = reinterpret_cast<signed char*>(0x60ba1c);
    g60ba34 = eax32;
    ecx35 = 4;
    do {
        if (!ecx35) 
            break;
        --ecx35;
        *edi34 = *esi33;
        edi34 = edi34 + 4;
        esi33 = esi33 + 4;
    } while (1);
    *reinterpret_cast<unsigned char*>(&ecx35) = 0;
    do {
        if (!ecx35) 
            break;
        --ecx35;
        *edi34 = *esi33;
        ++edi34;
        ++esi33;
    } while (0);
    esi36 = reinterpret_cast<signed char*>(0x5f2790);
    edi37 = reinterpret_cast<signed char*>(0x60ba0c);
    ecx38 = 4;
    do {
        if (!ecx38) 
            break;
        --ecx38;
        *edi37 = *esi36;
        edi37 = edi37 + 4;
        esi36 = esi36 + 4;
    } while (1);
    *reinterpret_cast<unsigned char*>(&ecx38) = 0;
    do {
        if (!ecx38) 
            break;
        --ecx38;
        *edi37 = *esi36;
        ++edi37;
        ++esi36;
    } while (0);
    eax39 = g60ba2c;
    ecx40 = g60ba30;
    if (reinterpret_cast<signed char>(eax39) >= reinterpret_cast<signed char>(ecx40)) {
        ecx40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax39) - reinterpret_cast<unsigned char>(ecx40) + 1);
        fun_43c430(ecx40, v14, v12, v10, v8, v7, v5, v4, a2, a3);
    }
    fun_41d4c0(ecx40);
    return;
}

void** g4835b8 = reinterpret_cast<void**>(0x89);

void** g483590 = reinterpret_cast<void**>(18);

void** g4835cc = reinterpret_cast<void**>(0);

void** g48357c = reinterpret_cast<void**>(13);

void** g4835d8 = reinterpret_cast<void**>(57);

void** g4835d6 = reinterpret_cast<void**>(0);

void** fun_433eb0(void** ecx, void** a2, void** a3, void** a4);

void** g4835b0 = reinterpret_cast<void**>(0x82);

struct s30 {
    signed char f0;
    signed char f1;
};

int32_t fun_41c200(void** ecx);

void fun_41c2a0(void** ecx);

void** fun_41cfe0(void** ecx) {
    void** edx2;
    void** ebx3;
    int1_t zf4;
    void** eax5;
    void** esi6;
    int32_t edi7;
    void** si8;
    void** edx9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    void** v14;
    void** v15;
    void** edx16;
    void** v17;
    void** v18;
    void** eax19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    struct s27* eax24;
    void** ebx25;
    void* ebp26;
    struct s30* eax27;
    void** v28;
    struct s30* v29;
    struct s30* esi30;
    void** edi31;
    uint32_t ecx32;
    int32_t edx33;
    int32_t v34;
    void** edi35;
    signed char* edi36;
    uint32_t ecx37;
    void** ecx38;
    void** eax39;
    void** edi40;
    signed char* edi41;
    uint32_t ecx42;
    void** esi43;
    signed char al44;
    signed char al45;
    int32_t eax46;
    int32_t edx47;
    struct s27* eax48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;

    edx2 = reinterpret_cast<void**>(0);
    ebx3 = g4835b8;
    g483590 = reinterpret_cast<void**>(0);
    if (!ebx3) {
        zf4 = g4835cc == 0;
        if (!zf4) {
            eax5 = g48357c;
            if (*reinterpret_cast<void***>(eax5 + 10)) {
                *reinterpret_cast<void***>(eax5 + 10)();
            }
            esi6 = g48357c;
            edi7 = 0;
            g4835d8 = *reinterpret_cast<void***>(esi6 + 14);
            si8 = *reinterpret_cast<void***>(esi6);
            g4835d6 = *reinterpret_cast<void***>(esi6 + 16);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(si8) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(si8 == 0))) {
                do {
                    edx9 = g48357c;
                    if (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(edx9 + 6) + reinterpret_cast<int16_t>(*reinterpret_cast<void***>(&edi7)) * 17) + 2)) {
                        eax12 = fun_434890(ecx, v10, v11);
                        edx9 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(g4835d6)));
                        ecx = eax12;
                        fun_433eb0(ecx, v13, v14, v15);
                    }
                    edx9 = g4835d6;
                    edx16 = edx9 + 16;
                    ++edi7;
                    g4835d6 = edx16;
                } while (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&edi7)) < reinterpret_cast<signed char>(si8));
            }
            eax19 = fun_434890(ecx, v17, v18);
            eax23 = fun_433eb0(eax19, v20, v21, v22);
        }
    } else {
        eax24 = g482f08;
        ebx25 = g4835b0;
        ebp26 = reinterpret_cast<void*>(0);
        eax27 = reinterpret_cast<struct s30*>(static_cast<int32_t>(eax24->f2));
        v28 = ebx25;
        v29 = eax27;
        esi30 = eax27;
        while (1) {
            edi31 = v28;
            ecx32 = reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(ecx) - 1;
            do {
                if (!ecx32) 
                    break;
                --ecx32;
                ++edi31;
                esi30 = reinterpret_cast<struct s30*>(&esi30->f1);
            } while (*reinterpret_cast<void***>(edi31));
            ecx = reinterpret_cast<void**>(~ecx32 - 1);
            if (reinterpret_cast<unsigned char>(edx2) >= reinterpret_cast<unsigned char>(ecx)) 
                break;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx25) == 10)) {
                esi30 = reinterpret_cast<struct s30*>(reinterpret_cast<uint32_t>(esi30) + reinterpret_cast<uint32_t>(v29));
            }
            ++ebx25;
            ++edx2;
        }
        edx33 = 100 - (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(esi30) - (reinterpret_cast<int32_t>(esi30) >> 31)) >> 1);
        g4835d6 = *reinterpret_cast<void***>(&edx33);
        while (eax23 = g4835b0, !!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax23) + reinterpret_cast<uint32_t>(ebp26))) {
            v34 = 0;
            while (1) {
                edi35 = g4835b0;
                edi36 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edi35) + reinterpret_cast<uint32_t>(ebp26));
                ecx37 = reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(ecx) - 1;
                do {
                    if (!ecx37) 
                        break;
                    --ecx37;
                    ++edi36;
                    esi30 = reinterpret_cast<struct s30*>(&esi30->f1);
                } while (*edi36);
                ecx38 = reinterpret_cast<void**>(~ecx37 - 1);
                if (reinterpret_cast<unsigned char>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&v34))) >= reinterpret_cast<unsigned char>(ecx38)) 
                    break;
                eax39 = g4835b0;
                ecx = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&v34)));
                if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx) + (reinterpret_cast<unsigned char>(eax39) + reinterpret_cast<uint32_t>(ebp26))) == 10) 
                    goto addr_41d07b_26;
                ++v34;
            }
            addr_41d0be_28:
            edi40 = g4835b0;
            edi41 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edi40) + reinterpret_cast<uint32_t>(ebp26));
            ecx42 = reinterpret_cast<unsigned char>(ecx38) - reinterpret_cast<unsigned char>(ecx38) - 1;
            do {
                if (!ecx42) 
                    break;
                --ecx42;
                ++edi41;
                esi30 = reinterpret_cast<struct s30*>(&esi30->f1);
            } while (*edi41);
            ecx = reinterpret_cast<void**>(~ecx42 - 1);
            if (reinterpret_cast<int1_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&v34)) == ecx)) {
                esi43 = g4835b0;
                esi30 = reinterpret_cast<struct s30*>(reinterpret_cast<unsigned char>(esi43) + reinterpret_cast<uint32_t>(ebp26));
                do {
                    al44 = esi30->f0;
                    if (!al44) 
                        break;
                    al45 = esi30->f1;
                    ++esi30;
                } while (al45);
                ebp26 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp26) + static_cast<int32_t>(*reinterpret_cast<int16_t*>(&v34)));
            }
            eax46 = fun_41c200(ecx);
            edx47 = 0xa0 - (eax46 - (eax46 >> 31) >> 1);
            g4835d8 = *reinterpret_cast<void***>(&edx47);
            fun_41c2a0(ecx);
            eax48 = g482f08;
            *reinterpret_cast<void***>(&esi30) = g4835d6;
            *reinterpret_cast<int16_t*>(&eax48) = eax48->f2;
            esi30 = reinterpret_cast<struct s30*>(reinterpret_cast<uint32_t>(esi30) + reinterpret_cast<uint32_t>(eax48));
            g4835d6 = *reinterpret_cast<void***>(&esi30);
            continue;
            addr_41d07b_26:
            fun_442b80(ecx, v49, v50, v51, v52, v53);
            ecx38 = ecx + 1;
            fun_4439f9(ecx38);
            ebp26 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp26) + reinterpret_cast<unsigned char>(ecx38));
            goto addr_41d0be_28;
        }
    }
    return eax23;
}

void** g482a18 = reinterpret_cast<void**>(95);

void** g481278 = reinterpret_cast<void**>(0xcb);

void** g481270 = reinterpret_cast<void**>(15);

void** g48126c = reinterpret_cast<void**>(72);

void** g4829e0 = reinterpret_cast<void**>(0xd0);

void fun_418360() {
    void** ebx1;
    void** ebx2;
    signed char al3;
    void** al4;
    void** al5;
    unsigned char al6;
    void** al7;
    signed char al8;
    void** al9;
    void** al10;
    int32_t eax11;

    ebx1 = g482a18;
    *reinterpret_cast<void***>(ebx1) = reinterpret_cast<void**>(0x6d);
    ebx2 = ebx1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1;
    al3 = *reinterpret_cast<signed char*>(&g482a58);
    *reinterpret_cast<signed char*>(ebx2 + 0xfffffff8) = al3;
    al4 = g482a80;
    *reinterpret_cast<void***>(ebx2 + 0xfffffff9) = al4;
    al5 = g482a5c;
    *reinterpret_cast<void***>(ebx2 + 0xfffffffa) = al5;
    al6 = *reinterpret_cast<unsigned char*>(&g482a6c);
    *reinterpret_cast<unsigned char*>(ebx2 + 0xfffffffb) = al6;
    al7 = g481278;
    *reinterpret_cast<void***>(ebx2 + 0xfffffffc) = al7;
    al8 = *reinterpret_cast<signed char*>(&g481270);
    *reinterpret_cast<signed char*>(ebx2 + 0xfffffffd) = al8;
    al9 = g48126c;
    *reinterpret_cast<void***>(ebx2 + 0xfffffffe) = al9;
    al10 = g482a7c;
    *reinterpret_cast<void***>(ebx2 + 0xffffffff) = al10;
    eax11 = 0;
    do {
        eax11 = eax11 + 4;
        *reinterpret_cast<void***>(ebx2) = *reinterpret_cast<void***>(eax11 + 0x482978);
        ++ebx2;
    } while (eax11 != 16);
    g4829e0 = ebx2;
    return;
}

void** g4835f4 = reinterpret_cast<void**>(0x83);

uint32_t fun_442f62(void** ecx);

void** fun_41d410(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29) {
    void** ebx30;
    int1_t less31;
    void** eax32;
    void** ecx33;
    uint32_t eax34;
    void** edi35;

    ebx30 = reinterpret_cast<void**>(1);
    less31 = reinterpret_cast<signed char>(1) < reinterpret_cast<signed char>(g4835f4);
    if (!less31) {
        addr_41d44e_2:
        eax32 = reinterpret_cast<void**>(0);
    } else {
        ecx33 = reinterpret_cast<void**>(4);
        do {
            eax34 = fun_442f62(ecx33);
            if (!eax34) 
                goto addr_41d43c_5;
            edi35 = g4835f4;
            ++ebx30;
            ecx33 = ecx33 + 4;
        } while (reinterpret_cast<signed char>(ebx30) < reinterpret_cast<signed char>(edi35));
        goto addr_41d44e_2;
    }
    addr_41d450_7:
    return eax32;
    addr_41d43c_5:
    eax32 = ebx30;
    goto addr_41d450_7;
}

void** fun_44459b(void** ecx, void** a2);

void fun_442b37(int32_t ecx);

void fun_442b4a(void** ecx, void* a2, int32_t a3, void** a4, void** a5, void** a6, ...) {
    void** eax7;

    eax7 = fun_44459b(fun_442b37, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 + 28);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(a2) + reinterpret_cast<unsigned char>(eax7)) = 0;
    return;
}

void** g60b70c = reinterpret_cast<void**>(0);

int32_t IsWindow = 0x220c2a;

int32_t SendMessageA = 0x220cdc;

void** fun_440840(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, ...) {
    void** ebp17;
    void** edi18;
    void** esi19;
    void** edx20;
    void** ebx21;
    void** eax22;
    void** edi23;
    void** ebx24;
    void** v25;
    int32_t eax26;
    signed char* ebx27;
    signed char* esi28;
    signed char* v29;
    void** ebp30;
    void** eax31;
    void** esi32;

    eax22 = fun_44441f(ecx, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 36, ebp17, edi18, esi19, edx20, ecx, ebx21, __return_address(), a2, a3);
    edi23 = eax22;
    fun_437a90(ecx, "printf: %s", 0x61707c, 0, ebp17, edi18, esi19, edx20, ecx);
    ebx24 = g60b70c;
    if (!ebx24 || (v25 = ebx24, eax26 = reinterpret_cast<int32_t>(IsWindow(v25, 0)), eax26 == 0)) {
        addr_440912_2:
        return edi23;
    } else {
        ebx27 = reinterpret_cast<signed char*>(0x61707c);
        while (1) {
            esi28 = ebx27;
            do {
                if (*esi28 == 10) 
                    break;
                if (!*esi28) 
                    goto addr_4408b7_7;
                ++esi28;
                if (*esi28 == 10) 
                    break;
                ++esi28;
            } while (*esi28);
            goto addr_4408b7_7;
            addr_4408b9_10:
            if (!esi28) 
                break;
            v29 = ebx27;
            ebp30 = g60b70c;
            *esi28 = 0;
            SendMessageA(ebp30, 0x402, 4, v29, v25, 0);
            eax31 = g60b70c;
            ebx27 = esi28 + 1;
            SendMessageA(eax31, 0x402, 4, "\r\n", ebp30, 0x402, 4, v29, v25, 0);
            *esi28 = 10;
            continue;
            addr_4408b7_7:
            esi28 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi28) - reinterpret_cast<int32_t>(esi28));
            goto addr_4408b9_10;
        }
        if (!*ebx27) 
            goto addr_440912_2;
    }
    esi32 = g60b70c;
    SendMessageA(esi32, 0x402, 4, ebx27, v25, 0);
    goto addr_440912_2;
}

void** fun_442d4e(void** ecx);

void** fun_442d87(void** ecx) {
    void** eax2;

    eax2 = fun_442d4e(ecx);
    return eax2;
}

int32_t GetMessageA = 0x220baa;

void fun_43bae0(void** ecx) {
    GetMessageA();
    DispatchMessageA();
    goto 0;
}

void** g60b88c = reinterpret_cast<void**>(0);

struct s31 {
    signed char[11] pad11;
    unsigned char fb;
};

struct s31* g60b848 = reinterpret_cast<struct s31*>(0);

void** g60b844 = reinterpret_cast<void**>(0);

int32_t DeviceIoControl = 0x2206d8;

uint32_t g60b110 = 0;

int32_t g477628 = 1;

int32_t g47762c = 1;

void fun_411cc0(uint32_t a1, uint32_t a2, uint32_t a3, int32_t a4);

void fun_43cd30(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29) {
    int1_t zf30;
    struct s31* ebx31;
    void** eax32;
    void* esp33;
    uint32_t ecx34;
    uint32_t v35;
    unsigned char v36;
    unsigned char v37;
    unsigned char v38;
    unsigned char v39;
    unsigned char v40;
    unsigned char v41;
    int32_t edx42;
    int32_t edx43;
    int16_t v44;
    int16_t v45;

    zf30 = g60b88c == 0;
    if (!zf30 && ((ebx31 = g60b848, !!ebx31) && ebx31->fb & 0x80)) {
        eax32 = g60b844;
        if (eax32 && eax32 != 0xffffffff) {
            esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 32 - 4);
            DeviceIoControl(eax32, 1, 0, 0, reinterpret_cast<int32_t>(esp33) - 4 - 4 + 28, 12, reinterpret_cast<int32_t>(esp33) + 32, 0);
        }
        ecx34 = g60b110;
        if (!ecx34) {
            v35 = ecx34;
            if (v36 & 8 || v37 & 8) {
                *reinterpret_cast<unsigned char*>(&v35) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v35) | 1);
            }
            if (v38 & 4 || v39 & 4) {
                *reinterpret_cast<unsigned char*>(&v35) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v35) | 2);
            }
            if (v40 & 2 || v41 & 2) {
                *reinterpret_cast<unsigned char*>(&v35) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v35) | 4);
            }
            edx42 = g477628;
            edx43 = g47762c;
            fun_411cc0(2, v35, edx42 * reinterpret_cast<uint32_t>(static_cast<int32_t>(v44)), edx43 * -static_cast<int32_t>(v45));
        }
    }
    return;
}

void** g481268 = reinterpret_cast<void**>(0x8b);

void** g481274 = reinterpret_cast<void**>(0xc1);

int32_t fun_41c310(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22);

void fun_411cf0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18) {
    void** v19;
    void** v20;
    void** v21;
    void** edx22;
    void** v23;
    void** esi24;
    int1_t zf25;
    void** eax26;
    void** eax27;
    int1_t zf28;
    int32_t eax29;
    void** ecx30;

    v19 = reinterpret_cast<void**>(__return_address());
    v20 = ecx;
    v21 = edx22;
    v23 = esi24;
    zf25 = g481264 == 0;
    if (!zf25) {
        eax26 = fun_434640(ecx);
        if (reinterpret_cast<signed char>(eax26) < reinterpret_cast<signed char>(0)) {
            addr_411d4e_3:
            return;
        }
    }
    while (eax27 = g481268, zf28 = eax27 == g481274, !zf28) {
        eax29 = fun_41c310(ecx, v23, v21, v20, v19, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
        if (!eax29) {
            fun_416b70(ecx, v23, v21, v20, v19);
        }
        ecx30 = g481268;
        ecx = ecx30 + 1;
        g481268 = ecx;
        g481268 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx) & 63);
    }
    goto addr_411d4e_3;
}

struct s32 {
    unsigned char f0;
    unsigned char f1;
    int16_t f2;
    int16_t f4;
    signed char f6;
    unsigned char f7;
};

unsigned char* fun_43bac0();

void** g481604 = reinterpret_cast<void**>(4);

void fun_4419b0(int32_t ecx);

int32_t g4829dc = 0xbf000001;

uint32_t g4829f0 = 0x4812203d;

int32_t g4829cc = 0x48126415;

int32_t g4599a4 = 0;

int32_t g482a10 = 0x200d8900;

int32_t g4829d4 = 0xd2850048;

void** g481608 = reinterpret_cast<void**>(12);

uint32_t g4829a0 = 0xa3004812;

int32_t g4829e8 = 0x28358900;

int32_t g482a08 = 0x89004500;

int32_t g4829e4 = 0x42b8;

int32_t g482a14 = 0x5d004812;

signed char fun_419260();

int32_t g4829d8 = 0x81be2774;

int32_t g4829d0 = 0x2a68a300;

int32_t g482a0c = 0x4812281d;

uint32_t g48299c = 0x282d8900;

int32_t g481ff4 = 0x5a00021d;

int32_t g4829c8 = 0x8b000000;

uint32_t g4829ac = 0x5f5d0048;

uint32_t g4829a8 = 0x12201589;

uint32_t g4829c0 = 0x595a5e5f;

uint32_t g4829b0 = 0x5b595a5e;

uint32_t g4829c4 = 0x3b8c35b;

void** g459988 = reinterpret_cast<void**>(50);

void** g482a24 = reinterpret_cast<void**>(0xb8);

void** g4829bc = reinterpret_cast<void**>(94);

void** fun_416620(void** ecx) {
    struct s32* ebx2;
    struct s32* eax3;
    unsigned char* eax4;
    unsigned char* esi5;
    struct s32* edi6;
    uint32_t ecx7;
    void** edx8;
    void** eax9;
    int32_t eax10;
    uint32_t eax11;
    struct s24* edx12;
    int32_t edi13;
    int32_t eax14;
    int32_t esi15;
    int1_t zf16;
    void** v17;
    int32_t eax18;
    void** ecx19;
    int32_t eax20;
    void** eax21;
    uint32_t tmp32_22;
    int1_t less23;
    int32_t eax24;
    int32_t edx25;
    int32_t edx26;
    int32_t edx27;
    int32_t eax28;
    int32_t eax29;
    int32_t eax30;
    int32_t eax31;
    int32_t eax32;
    signed char al33;
    int32_t eax34;
    int32_t edx35;
    struct s24* eax36;
    int32_t eax37;
    unsigned char dl38;
    int32_t ebp39;
    int32_t edx40;
    int32_t eax41;
    int32_t eax42;
    struct s24* edx43;
    int32_t edx44;
    struct s24* eax45;
    uint32_t esi46;
    uint32_t edx47;
    int1_t less_or_equal48;
    void** eax49;
    uint32_t edx50;
    uint32_t edx51;
    int1_t zf52;
    uint32_t eax53;
    struct s24* edx54;
    uint32_t ebp55;
    uint32_t eax56;
    int1_t less_or_equal57;
    void** eax58;
    uint32_t esi59;
    uint32_t esi60;
    int1_t zf61;
    void** eax62;
    void** esi63;
    void** v64;
    void*** esi65;
    void** eax66;
    void** eax67;
    void** edx68;
    void** edi69;
    unsigned char al70;
    void** ebp71;
    int1_t zf72;
    unsigned char al73;

    ebx2 = eax3;
    eax4 = fun_43bac0();
    esi5 = eax4;
    edi6 = ebx2;
    ecx7 = 2;
    do {
        if (!ecx7) 
            break;
        --ecx7;
        edi6->f0 = *esi5;
        edi6 = reinterpret_cast<struct s32*>(&edi6->f4);
        esi5 = esi5 + 4;
    } while (1);
    *reinterpret_cast<unsigned char*>(&ecx7) = 0;
    do {
        if (!ecx7) 
            break;
        --ecx7;
        edi6->f0 = *esi5;
        edi6 = reinterpret_cast<struct s32*>(&edi6->f1);
        ++esi5;
    } while (0);
    edx8 = g482a7c;
    eax9 = g481604;
    ebx2->f4 = *reinterpret_cast<int16_t*>((reinterpret_cast<unsigned char>(edx8) * 4 - reinterpret_cast<unsigned char>(edx8)) * 8 + reinterpret_cast<signed char>(eax9) % 12 * 2 + 0x4823d0);
    fun_4419b0(12);
    eax10 = g4829dc;
    if (*reinterpret_cast<int32_t*>(eax10 * 4 + 0x481f30) || (eax11 = g4829f0, edx12 = image_base_, !!*reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(edx12) + eax11 * 4))) {
        edi13 = 1;
    } else {
        edi13 = 0;
    }
    eax14 = g4829cc;
    esi15 = *reinterpret_cast<int32_t*>(eax14 * 4 + 0x481f30);
    if (esi15 || (zf16 = g4599a4 == 0, !zf16)) {
        esi15 = 1;
    }
    v17 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(ebx2->f0)));
    ebx2->f0 = 0;
    eax18 = g482a10;
    ecx19 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(ebx2->f1)));
    ebx2->f1 = 0;
    if (*reinterpret_cast<uint32_t*>(eax18 * 4 + 0x481f30) || (eax20 = g4829d4, !!*reinterpret_cast<int32_t*>(eax20 * 4 + 0x481f30))) {
        eax21 = g481608;
        tmp32_22 = g4829a0 + reinterpret_cast<unsigned char>(eax21);
        g4829a0 = tmp32_22;
    } else {
        g4829a0 = *reinterpret_cast<uint32_t*>(eax18 * 4 + 0x481f30);
    }
    less23 = reinterpret_cast<int32_t>(g4829a0) < reinterpret_cast<int32_t>(6);
    if (!less23) {
        eax24 = esi15;
    } else {
        eax24 = 2;
    }
    edx25 = g482a10;
    edx26 = edx25 * 4;
    if (!edi13) {
        if (*reinterpret_cast<int32_t*>(edx26 + 0x481f30)) {
            ebx2->f2 = reinterpret_cast<int16_t>(ebx2->f2 - *reinterpret_cast<int16_t*>(eax24 * 4 + 0x459994));
        }
        edx27 = g4829d4;
        if (*reinterpret_cast<int32_t*>(edx27 * 4 + 0x481f30)) {
            ebx2->f2 = reinterpret_cast<int16_t>(ebx2->f2 + *reinterpret_cast<int16_t*>(eax24 * 4 + 0x459994));
        }
    } else {
        if (*reinterpret_cast<int32_t*>(edx26 + 0x481f30)) {
            ecx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx19) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(esi15 * 4 + 0x45998c)));
        }
        eax28 = g4829d4;
        if (*reinterpret_cast<int32_t*>(eax28 * 4 + 0x481f30)) {
            ecx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx19) - *reinterpret_cast<uint32_t*>(esi15 * 4 + 0x45998c));
        }
    }
    eax29 = g4829e8;
    if (*reinterpret_cast<int32_t*>(eax29 * 4 + 0x481f30)) {
        v17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v17) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(esi15 * 4 + 0x459984)));
    }
    eax30 = g482a08;
    if (*reinterpret_cast<int32_t*>(eax30 * 4 + 0x481f30)) {
        v17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v17) - *reinterpret_cast<uint32_t*>(esi15 * 4 + 0x459984));
    }
    eax31 = g4829e4;
    if (*reinterpret_cast<int32_t*>(eax31 * 4 + 0x481f30)) {
        ecx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx19) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(esi15 * 4 + 0x45998c)));
    }
    eax32 = g482a14;
    if (*reinterpret_cast<int32_t*>(eax32 * 4 + 0x481f30)) {
        ecx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx19) - *reinterpret_cast<uint32_t*>(esi15 * 4 + 0x45998c));
    }
    al33 = fun_419260();
    ebx2->f6 = al33;
    eax34 = g4829d8;
    if (*reinterpret_cast<int32_t*>(eax34 * 4 + 0x481f30) || (edx35 = g4829d0, eax36 = image_base_, !!*reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(eax36) + edx35 * 4))) {
        ebx2->f7 = reinterpret_cast<unsigned char>(ebx2->f7 | 1);
    }
    eax37 = g482a0c;
    if (*reinterpret_cast<int32_t*>(eax37 * 4 + 0x481f30)) {
        dl38 = reinterpret_cast<unsigned char>(ebx2->f7 | 2);
        g48299c = 0;
        ebx2->f7 = dl38;
    }
    if (!(ebx2->f7 & 4)) {
        ebp39 = g481ff4;
        edx40 = 0;
        eax41 = 0;
        if (!ebp39) {
            while (eax41 = eax41 + 4, ++edx40, eax41 < 32) {
                if (*reinterpret_cast<int32_t*>(eax41 + 0x481ff4)) 
                    goto addr_416851_43;
            }
        } else {
            addr_416851_43:
            ebx2->f7 = reinterpret_cast<unsigned char>(ebx2->f7 | 4);
            ebx2->f7 = reinterpret_cast<unsigned char>(ebx2->f7 | reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx40) << 3));
        }
    }
    eax42 = g4829c8;
    edx43 = image_base_;
    if (*reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(edx43) + eax42 * 4)) {
        v17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v17) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(esi15 * 4 + 0x459984)));
    }
    edx44 = g4829c8;
    eax45 = image_base_;
    esi46 = g4829ac;
    edx47 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(eax45) + edx44 * 4);
    if (edx47 == esi46 || (less_or_equal48 = reinterpret_cast<int32_t>(g4829a8) <= reinterpret_cast<int32_t>(1), less_or_equal48)) {
        eax49 = g481608;
        edx50 = g4829a8;
        edx51 = edx50 + reinterpret_cast<unsigned char>(eax49);
        g4829a8 = edx51;
        if (reinterpret_cast<int32_t>(edx51) > reinterpret_cast<int32_t>(20)) {
            g48299c = 0;
            g4829ac = 0;
        }
    } else {
        g4829ac = edx47;
        if (edx47) {
            ++g48299c;
        }
        zf52 = g48299c == 2;
        if (!zf52) {
            g4829a8 = 0;
        } else {
            ebx2->f7 = reinterpret_cast<unsigned char>(ebx2->f7 | 2);
            g48299c = 0;
        }
    }
    eax53 = g4829f0;
    edx54 = image_base_;
    *reinterpret_cast<unsigned char*>(&eax53) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(edx54) + eax53 * 4));
    ebp55 = g4829c0;
    eax56 = eax53 & 0xff;
    if (eax56 == ebp55 || (less_or_equal57 = reinterpret_cast<int32_t>(g4829b0) <= reinterpret_cast<int32_t>(1), less_or_equal57)) {
        eax58 = g481608;
        esi59 = g4829b0;
        esi60 = esi59 + reinterpret_cast<unsigned char>(eax58);
        g4829b0 = esi60;
        if (reinterpret_cast<int32_t>(esi60) > reinterpret_cast<int32_t>(20)) {
            g4829c4 = 0;
            g4829c0 = 0;
        }
    } else {
        g4829c0 = eax56;
        if (eax56) {
            ++g4829c4;
        }
        zf61 = g4829c4 == 2;
        if (!zf61) {
            g4829b0 = 0;
        } else {
            ebx2->f7 = reinterpret_cast<unsigned char>(ebx2->f7 | 2);
            g4829c4 = 0;
        }
    }
    eax62 = g4829b4;
    esi63 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v17) + reinterpret_cast<unsigned char>(eax62));
    v64 = esi63;
    if (!edi13) {
        *reinterpret_cast<int16_t*>(&eax62) = *reinterpret_cast<int16_t*>(&g4829b8);
        *reinterpret_cast<int16_t*>(&esi63) = ebx2->f2;
        esi65 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi63) - (reinterpret_cast<unsigned char>(eax62) << 3));
        ebx2->f2 = *reinterpret_cast<int16_t*>(&esi65);
    } else {
        eax66 = g4829b8;
        ecx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx19) + (reinterpret_cast<unsigned char>(eax66) + reinterpret_cast<unsigned char>(eax66)));
    }
    eax67 = v64;
    edx68 = g459988;
    g4829b4 = reinterpret_cast<void**>(0);
    g4829b8 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<signed char>(eax67) <= reinterpret_cast<signed char>(edx68)) {
        eax67 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(edx68));
        if (reinterpret_cast<signed char>(eax67) > reinterpret_cast<signed char>(v64)) {
            v64 = eax67;
        }
    } else {
        v64 = edx68;
    }
    edi69 = g459988;
    if (reinterpret_cast<signed char>(ecx19) <= reinterpret_cast<signed char>(edi69)) {
        eax67 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(edi69));
        if (reinterpret_cast<signed char>(ecx19) < reinterpret_cast<signed char>(eax67)) {
            ecx19 = eax67;
        }
    } else {
        ecx19 = edi69;
    }
    al70 = ebx2->f1;
    ebx2->f0 = reinterpret_cast<unsigned char>(ebx2->f0 + reinterpret_cast<unsigned char>(v64));
    *reinterpret_cast<unsigned char*>(&eax67) = reinterpret_cast<unsigned char>(al70 + *reinterpret_cast<unsigned char*>(&ecx19));
    ebp71 = g482a28;
    ebx2->f1 = *reinterpret_cast<unsigned char*>(&eax67);
    if (ebp71) {
        eax67 = reinterpret_cast<void**>(0);
        ebx2->f7 = 0x81;
        g482a28 = reinterpret_cast<void**>(0);
    }
    zf72 = g482a24 == 0;
    if (!zf72) {
        al73 = *reinterpret_cast<unsigned char*>(&g4829bc);
        *reinterpret_cast<unsigned char*>(&eax67) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al73 << 2) | 0x82);
        g482a24 = reinterpret_cast<void**>(0);
        ebx2->f7 = *reinterpret_cast<unsigned char*>(&eax67);
    }
    return eax67;
}

void** g48122c = reinterpret_cast<void**>(0xf7);

void** g482a90 = reinterpret_cast<void**>(83);

void** g482a88 = reinterpret_cast<void**>(0xc3);

void** g481224 = reinterpret_cast<void**>(64);

void** g481258 = reinterpret_cast<void**>(0);

int32_t g481228 = 0x4800b0;

int32_t g481220 = 0x8b004597;

void** fun_430d40(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19);

void** fun_4183e0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void** fun_4124a0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** edx13;
    void** edx14;
    void** ebp15;
    int32_t ebx16;
    void** eax17;
    int1_t zf18;
    void** eax19;
    void** ebp20;
    void** edi21;
    void** esi22;
    void** edx23;
    void** ebx24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** edx28;
    void** eax29;
    void** eax30;

    edx13 = g482a7c;
    g48122c = reinterpret_cast<void**>(0);
    g482a90 = reinterpret_cast<void**>(0);
    g482a88 = reinterpret_cast<void**>(0);
    g482a8c = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(edx13 + reinterpret_cast<unsigned char>(edx13) * 8) * 4 - reinterpret_cast<unsigned char>(edx13)) * 8 + 0x48251c) = reinterpret_cast<void**>(0);
    edx14 = g481224;
    ebp15 = g481258;
    if (!ebp15) {
        ebx16 = 6;
    } else {
        ebx16 = 7;
    }
    g481224 = reinterpret_cast<void**>(reinterpret_cast<signed char>(edx14 + 1) % ebx16);
    eax17 = g481224;
    switch (eax17) {
    case 0:
        zf18 = g481264 == 0;
        if (zf18) {
            g481228 = 0xaa;
        } else {
            g481228 = 0x181;
        }
        eax19 = g481264;
        g482a68 = reinterpret_cast<void**>(3);
        g481220 = reinterpret_cast<int32_t>("TITLEPIC");
        if (!eax19) {
            eax25 = fun_430d40(ecx, ebp20, edi21, esi22, edx23, ecx, ebx24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
            return eax25;
        } else {
            eax17 = fun_430d40(ecx, ebp20, edi21, esi22, edx23, ecx, ebx24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
            break;
        }
    case 1:
        eax26 = fun_4183e0(ebp20, edi21, esi22, edx23, ecx, ebx24, __return_address(), a2, a3);
        return eax26;
    case 2:
        g481228 = 0xc8;
        g482a68 = reinterpret_cast<void**>(3);
        g481220 = reinterpret_cast<int32_t>("CREDIT");
        return 3;
    case 3:
        eax27 = fun_4183e0(ebp20, edi21, esi22, edx23, ecx, ebx24, __return_address(), a2, a3);
        return eax27;
    case 4:
        edx28 = g481264;
        g482a68 = reinterpret_cast<void**>(3);
        if (!edx28) {
            g481228 = 0xc8;
            g481220 = reinterpret_cast<int32_t>("CREDIT");
            return 3;
        } else {
            g481228 = 0x181;
            g481220 = reinterpret_cast<int32_t>("TITLEPIC");
            eax29 = fun_430d40(ecx, ebp20, edi21, esi22, edx23, ecx, ebx24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
            return eax29;
        }
    case 5:
        eax30 = fun_4183e0(ebp20, edi21, esi22, edx23, ecx, ebx24, __return_address(), a2, a3);
        return eax30;
    case 6:
        eax17 = fun_4183e0(ebp20, edi21, esi22, edx23, ecx, ebx24, __return_address(), a2, a3);
    }
    return eax17;
}

void** fun_430d40(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19) {
    void** edx20;
    void** eax21;

    eax21 = fun_430c80(ecx, edx20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
    return eax21;
}

struct s33 {
    signed char[3] pad3;
    void** f3;
};

/* (image base) */
int32_t image_base_ = 0x4452df;

void** g477a70 = reinterpret_cast<void**>(0);

void** g477a6c = reinterpret_cast<void**>(0);

void** fun_445450(void** ecx, void** a2, void** a3);

void** g477a68 = reinterpret_cast<void**>(0);

struct s34 {
    int32_t f0;
    signed char[16] pad20;
    int32_t f14;
    int32_t f18;
};

struct s34* fun_4456fc(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

int32_t fun_445757();

signed char g618354 = 0;

/* (image base) */
int32_t image_base_ = 0x4452df;

void** fun_442e73(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    uint208_t v11;
    int32_t ebx12;
    int32_t edx13;
    int32_t esi14;
    int32_t edi15;
    int16_t es16;
    void** v17;
    int16_t fs18;
    int16_t gs19;
    void** v20;
    void** ebp21;
    int32_t eax22;
    uint32_t eax23;
    void** eax24;
    void** edi25;
    struct s33* eax26;
    void** edx27;
    void** v28;
    void** eax29;
    int1_t below_or_equal30;
    void** ecx31;
    void** eax32;
    void** ebx33;
    struct s34* eax34;
    int32_t eax35;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v11) + 22) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v11) + 18) = ebx12;
    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v11) + 14) = ecx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v11) + 10) = edx13;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v11) + 6) = esi14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v11) + 2) = edi15;
    *reinterpret_cast<int16_t*>(&v11) = es16;
    *reinterpret_cast<int16_t*>(&v17 + 2) = fs18;
    *reinterpret_cast<int16_t*>(&v17) = gs19;
    v20 = ebp21;
    if (!eax22 || eax23 > 0xffffffd4) {
        eax24 = reinterpret_cast<void**>(0);
    } else {
        edi25 = reinterpret_cast<void**>(&eax26->f3);
        edx27 = reinterpret_cast<void**>(0);
        *reinterpret_cast<signed char*>(&v28) = 0;
        *reinterpret_cast<uint16_t*>(&edi25) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi25) & 0xfffc);
        image_base_();
        while (1) {
            eax29 = edi25;
            if (reinterpret_cast<unsigned char>(edi25) < reinterpret_cast<unsigned char>(12)) {
                eax29 = reinterpret_cast<void**>(12);
            }
            below_or_equal30 = reinterpret_cast<unsigned char>(eax29) <= reinterpret_cast<unsigned char>(g477a70);
            if (below_or_equal30) {
                ecx31 = reinterpret_cast<void**>(0);
                goto addr_442eca_8;
            } else {
                ecx31 = g477a6c;
                if (ecx31) {
                    addr_442f10_10:
                    while (ecx31) {
                        g477a6c = ecx31;
                        eax32 = fun_445450(ecx31, v28, v20);
                        edx27 = eax32;
                        if (eax32) 
                            goto addr_442f43_12;
                        ebx33 = g477a70;
                        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx31 + 20)) > reinterpret_cast<unsigned char>(ebx33)) {
                            g477a70 = *reinterpret_cast<void***>(ecx31 + 20);
                        }
                        ecx31 = *reinterpret_cast<void***>(ecx31 + 8);
                    }
                } else {
                    addr_442eca_8:
                    g477a70 = ecx31;
                    ecx31 = g477a68;
                    goto addr_442f10_10;
                }
                if (*reinterpret_cast<signed char*>(&v28) || (eax34 = fun_4456fc(ecx31, v28, v20, v17, *reinterpret_cast<void***>(&v11), *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v11) + 4), *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v11) + 8), *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v11) + 12), *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v11) + 16), *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v11) + 20)), !eax34)) {
                    eax35 = fun_445757();
                    if (!eax35) 
                        break;
                    *reinterpret_cast<signed char*>(&v28) = 0;
                } else {
                    *reinterpret_cast<signed char*>(&v28) = 1;
                }
            }
        }
        addr_442f43_12:
        g618354 = 0;
        image_base_();
        eax24 = edx27;
    }
    return eax24;
}

struct s35 {
    signed char f0;
    signed char f1;
};

int32_t g60affc = 0;

int32_t GetLastError = 0x22071e;

int32_t CreateFileA = 0x2206ca;

struct s35* g60b004 = reinterpret_cast<struct s35*>(0);

struct s35* g60b000 = reinterpret_cast<struct s35*>(0);

int32_t WriteFile = 0x2207e0;

void** fun_437a90(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, ...) {
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    void* esp21;
    struct s35* esi22;
    void* esp23;
    uint32_t ecx24;
    signed char v25;
    int32_t ecx26;
    void* ebx27;
    struct s35* eax28;
    int1_t zf29;
    void* v30;
    int32_t ecx31;
    signed char v32;
    struct s35* esi33;

    eax20 = fun_44441f(ecx, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19);
    esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 0x208 - 4 + 4);
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp21) + reinterpret_cast<unsigned char>(eax20) - 2) != 13 || *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp21) + reinterpret_cast<unsigned char>(eax20) - 1) != 10) {
        esi22 = reinterpret_cast<struct s35*>("\r\n");
        esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4);
        ecx24 = reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(ecx) - 1;
        do {
            if (!ecx24) 
                break;
            --ecx24;
            esi22 = reinterpret_cast<struct s35*>(&esi22->f1);
        } while (v25);
        do {
            *reinterpret_cast<signed char*>(&eax20) = esi22->f0;
            if (!*reinterpret_cast<signed char*>(&eax20)) 
                break;
            *reinterpret_cast<signed char*>(&eax20) = esi22->f1;
            ++esi22;
        } while (*reinterpret_cast<signed char*>(&eax20));
        esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) + 4);
    }
    ecx26 = g60affc;
    ebx27 = esp21;
    if (!ecx26) {
        GetLastError();
        eax28 = reinterpret_cast<struct s35*>(CreateFileA("\\\\.\\mailslot\\debugout", 0x40000000, 3, 0, 3, 0, 0));
        g60b004 = eax28;
        eax20 = reinterpret_cast<void**>(GetLastError("\\\\.\\mailslot\\debugout", 0x40000000, 3, 0, 3, 0, 0));
        esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
        esi22 = g60b004;
        if (!reinterpret_cast<int1_t>(esi22 == -1)) {
            g60b000 = reinterpret_cast<struct s35*>(1);
        } else {
            g60b004 = reinterpret_cast<struct s35*>(0);
            g60b000 = reinterpret_cast<struct s35*>(0);
        }
        g60affc = 1;
    }
    zf29 = g60b000 == 0;
    if (!zf29) {
        v30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 + 0x208);
        ecx31 = ecx26 - ecx26 - 1;
        do {
            if (!ecx31) 
                break;
            --ecx31;
        } while (v32);
        esi33 = g60b004;
        eax20 = reinterpret_cast<void**>(WriteFile(esi33, ebx27, ~ecx31 - 1, v30, 0));
    }
    return eax20;
}

struct s36 {
    void** f0;
    void** f1;
};

int32_t g4805d0 = 0xc2291053;

void** fun_412690(void** ecx, void** a2, void** a3, void** a4, int32_t a5, int32_t a6, void* a7, ...) {
    void** v8;
    void** v9;
    void** ebx10;
    void** v11;
    void** v12;
    void** edx13;
    void** v14;
    void** esi15;
    void** v16;
    void** edi17;
    struct s36* esi18;
    struct s36* eax19;
    int32_t ebx20;
    int32_t edx21;
    struct s36* edi22;
    uint32_t ecx23;
    void** ecx24;
    void** eax25;
    void** edi26;
    void** ebx27;
    void** al28;
    void** al29;
    void** eax30;

    v8 = reinterpret_cast<void**>(__return_address());
    v9 = ebx10;
    v11 = ecx;
    v12 = edx13;
    v14 = esi15;
    v16 = edi17;
    esi18 = eax19;
    ebx20 = g4805d0;
    edx21 = 0;
    if (ebx20) {
        do {
            ecx = *reinterpret_cast<void***>(edx21 + 0x4805d4);
            edx21 = edx21 + 4;
        } while (ecx);
    }
    edi22 = esi18;
    ecx23 = reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(ecx) - 1;
    do {
        if (!ecx23) 
            break;
        --ecx23;
        edi22 = reinterpret_cast<struct s36*>(&edi22->f1);
        esi18 = reinterpret_cast<struct s36*>(&esi18->f1);
    } while (edi22->f0);
    ecx24 = reinterpret_cast<void**>(~ecx23 - 1);
    eax25 = fun_442e73(ecx24, v16, v14, v12, v11, v9, v8, a2, a3, a4);
    edi26 = eax25;
    ebx27 = eax25;
    do {
        al28 = esi18->f0;
        *reinterpret_cast<void***>(edi26) = al28;
        if (!al28) 
            break;
        al29 = esi18->f1;
        ++esi18;
        *reinterpret_cast<void***>(edi26 + 1) = al29;
        edi26 = edi26 + 2;
    } while (al29);
    *reinterpret_cast<void***>(edx21 + 0x4805d0) = ebx27;
    eax30 = fun_437a90(ecx24, ebx27, v16, v14, v12, v11, v9, v8, a2);
    return eax30;
}

struct s37 {
    signed char f0;
    signed char f1;
};

int32_t RegOpenKeyA = 0x22080a;

int32_t RegQueryValueExA = 0x220818;

int32_t RegCloseKey = 0x2207ec;

struct s38 {
    signed char f0;
    signed char f1;
};

int32_t fun_43d330(void** ecx) {
    int32_t v2;
    int32_t edi3;
    struct s37* edi4;
    struct s37* edx5;
    int32_t ebx6;
    int32_t eax7;
    uint32_t ebx8;
    uint32_t eax9;
    struct s38* esi10;
    signed char al11;
    signed char al12;

    v2 = edi3;
    edi4 = edx5;
    ebx6 = 0;
    eax7 = reinterpret_cast<int32_t>(RegOpenKeyA());
    if (!eax7) {
        RegQueryValueExA();
        RegCloseKey(0x80000001);
        if (1 || ebx8 < eax9) {
            ebx6 = 0;
        } else {
            ebx6 = 0x80000001;
        }
    }
    if (!ebx6) {
        esi10 = reinterpret_cast<struct s38*>(0x457a2f);
        do {
            al11 = esi10->f0;
            edi4->f0 = al11;
            if (!al11) 
                break;
            al12 = esi10->f1;
            ++esi10;
            edi4->f1 = al12;
            ++edi4;
        } while (al12);
    }
    goto v2;
}

/* (image base) */
int32_t image_base_ = 0x442fdb;

/* (image base) */
int32_t image_base_ = 0x442fdb;

void** fun_442ff4(void** ecx);

void** fun_442fdc(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44, void** a45, void** a46, void** a47, void** a48, void** a49, void** a50, void** a51, void** a52, void** a53, void** a54, void** a55, void** a56, void** a57, void** a58, void** a59, void** a60, void** a61, void** a62, void** a63, void** a64, void** a65, void** a66, void** a67, void** a68, void** a69, void** a70, void** a71, void** a72, void** a73, void** a74) {
    void** eax75;

    image_base_();
    image_base_();
    eax75 = fun_442ff4(ecx);
    return eax75;
}

int32_t fun_449dae();

void** fun_4457b6(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void fun_443519(void** ecx, void** a2, void** a3, void** a4) {
    int32_t eax5;
    void** edx6;
    void** eax7;

    eax5 = fun_449dae();
    if (eax5) {
        goto edx6;
    } else {
        fun_4457b6(ecx, eax7, 0, edx6, ecx, __return_address(), a2, a3, a4);
        goto edx6;
    }
}

void** fun_443534(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29) {
    void* edx30;
    signed char* eax31;
    uint32_t edx32;
    signed char cl33;
    void** ebx34;
    uint32_t edx35;
    int32_t eax36;

    while (*reinterpret_cast<signed char*>(&edx30) = reinterpret_cast<signed char>(*eax31 + 1), edx32 = reinterpret_cast<uint32_t>(edx30) & 0xff, *reinterpret_cast<unsigned char*>(&edx32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx32 + 0x459418) & 2), edx30 = reinterpret_cast<void*>(edx32 & 0xff), !!edx30) {
        ++eax31;
    }
    cl33 = *eax31;
    *reinterpret_cast<signed char*>(&edx30) = cl33;
    if (edx30 == 43 || reinterpret_cast<int1_t>(edx30 == 45)) {
        ++eax31;
    }
    ebx34 = reinterpret_cast<void**>(0);
    while (*reinterpret_cast<signed char*>(&edx30) = reinterpret_cast<signed char>(*eax31 + 1), edx35 = reinterpret_cast<uint32_t>(edx30) & 0xff, *reinterpret_cast<unsigned char*>(&edx35) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx35 + 0x459418) & 32), !!(edx35 & 0xff)) {
        edx30 = reinterpret_cast<void*>(0);
        *reinterpret_cast<signed char*>(&edx30) = *eax31;
        ++eax31;
        ebx34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx34) * 10 + reinterpret_cast<uint32_t>(edx30) - 48);
    }
    eax36 = 0;
    *reinterpret_cast<signed char*>(&eax36) = cl33;
    if (eax36 == 45) {
        ebx34 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(ebx34));
    }
    return ebx34;
}

void** g4642fa = reinterpret_cast<void**>(0);

void** g4835d4 = reinterpret_cast<void**>(53);

void** g48358c = reinterpret_cast<void**>(0);

void** g4835bc = reinterpret_cast<void**>(72);

void* g4835ac = reinterpret_cast<void*>(0x448b0048);

int16_t g4835d0 = 0x8b37;

void** g4835b4 = reinterpret_cast<void**>(0);

int16_t g4835d2 = 0xf415;

int16_t g4642e8 = 6;

int16_t g4642f8 = 64;

/* (image base) */
int32_t image_base_ = 0x464340;

/* (image base) */
int32_t image_base_ = 0x41b7d0;

int32_t g46425c = 0x5f4d0001;

int32_t g46426d = 0x5f4d0001;

int32_t g464260 = 0x48544452;

int32_t g464271 = 0x54495551;

int32_t g464264 = 0x5349;

int32_t g464275 = 71;

/* (image base) */
int32_t image_base_ = 0x41be60;

/* (image base) */
int32_t image_base_ = 0x41bf20;

signed char g46426c = 0x72;

signed char g46427d = 0x71;

int16_t g4644da = 0x118;

int16_t g4644dc = 0xb9;

/* (image base) */
int32_t image_base_ = 0x41be80;

/* (image base) */
int32_t image_base_ = 0x464218;

void fun_41d290(void** ecx) {
    void** ax2;
    void** ecx3;
    void* eax4;
    void** eax5;
    void** ecx6;
    void** eax7;
    int1_t zf8;

    ax2 = g4642fa;
    ecx3 = reinterpret_cast<void**>(0);
    g48357c = reinterpret_cast<void**>(0x4642e8);
    g4835cc = reinterpret_cast<void**>(0);
    g4835d4 = ax2;
    g4835b8 = reinterpret_cast<void**>(0);
    g4835b0 = reinterpret_cast<void**>(0);
    g48358c = reinterpret_cast<void**>(0);
    g4835bc = reinterpret_cast<void**>(0xffffffff);
    eax4 = g4835ac;
    g4835d0 = 0;
    g4835b4 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax4) - 3);
    eax5 = g481264;
    g4835d2 = 10;
    if (eax5) {
        *reinterpret_cast<int16_t*>(&ecx3) = g4642e8;
        *reinterpret_cast<int16_t*>(&eax5) = g4642f8;
        ecx6 = ecx3 - 1;
        image_base_ = 0x4642e8;
        image_base_ = 0x41b830;
        g46425c = g46426d;
        g464260 = g464271;
        g464264 = g464275;
        image_base_ = image_base_;
        g46426c = g46427d;
        eax7 = eax5 + 8;
        g4642e8 = *reinterpret_cast<int16_t*>(&ecx6);
        g4642f8 = *reinterpret_cast<int16_t*>(&eax7);
        g4644da = 0x14a;
        g4644dc = 0xa5;
        image_base_ = 0x41bea0;
    }
    zf8 = g481258 == 0;
    if (!zf8) {
        image_base_ = 0x464280;
    }
    return;
}

void** fun_42cef0(void** ecx);

int32_t fun_440950(void** ecx);

int32_t g4835c0 = 0xb8004812;

void fun_42e520();

void fun_42dd80(void** ecx);

void fun_42e500();

void fun_42d520(void** ecx);

void** g491b80 = reinterpret_cast<void**>(83);

void fun_42e280(void** ecx) {
    void* eax2;
    int32_t edx3;

    fun_42cef0(ecx);
    fun_440950(ecx);
    fun_440950(ecx);
    fun_440950(ecx);
    eax2 = g4835ac;
    edx3 = g4835c0;
    g491b70 = 1;
    g491b78 = eax2;
    g491b74 = edx3;
    fun_42e520();
    fun_440950(0);
    fun_42dd80(0);
    fun_440950(0);
    fun_42e500();
    fun_440950(0);
    fun_42d520(0);
    g491b80 = reinterpret_cast<void**>(0);
    return;
}

void fun_4291b0(void** ecx);

void fun_427dd0(int32_t a1, int32_t a2);

struct s39 {
    signed char[6219622] pad6219622;
    int16_t f5ee766;
};

void fun_42fc20(void** ecx);

void fun_427910(void** ecx, int32_t a2) {
    void** edx3;
    struct s39* eax4;
    struct s39* edx5;

    fun_4291b0(ecx);
    fun_427dd0(__return_address(), a2);
    edx3 = g4775d0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx3) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx3 == 0))) {
        ecx = reinterpret_cast<void**>(0xffffffff);
        eax4 = reinterpret_cast<struct s39*>(0);
        edx5 = reinterpret_cast<struct s39*>(reinterpret_cast<unsigned char>(edx3) + reinterpret_cast<unsigned char>(edx3));
        do {
            eax4 = reinterpret_cast<struct s39*>(reinterpret_cast<uint32_t>(eax4) + 2);
            eax4->f5ee766 = -1;
        } while (reinterpret_cast<int32_t>(eax4) < reinterpret_cast<int32_t>(edx5));
    }
    fun_42fc20(ecx);
    return;
}

void** g60b89c = reinterpret_cast<void**>(0);

int32_t g4835ec = 0xba00be0f;

int32_t g60b888 = 0;

void** fun_441640(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void fun_41b030(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26);

void fun_43ce50(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** ebp24;
    void** esi25;
    void** edx26;
    void** ebx27;
    void** eax28;
    void** v29;
    void** v30;
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
    int1_t zf42;
    void** eax43;
    void* esp44;
    void** esi45;
    struct s31* eax46;
    void* esp47;
    void** eax48;
    void* esp49;
    void** eax50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** eax63;
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

    eax28 = fun_41d410(ecx, v18, v19, v20, v21, v22, v23, ebp24, esi25, edx26, ecx, ebx27, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    g60b89c = eax28;
    fun_440840(ecx, "I_StartupMouse\n", v29, v30, v31, v32, v33, v34, ebp24, esi25, edx26, ecx, ebx27, __return_address(), a2, a3);
    g60b88c = reinterpret_cast<void**>(0);
    eax41 = fun_41d410(ecx, v35, v36, v37, v38, v39, v40, ebp24, esi25, edx26, ecx, ebx27, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    if (!eax41 && (zf42 = g4835ec == 0, !zf42)) {
        g60b88c = reinterpret_cast<void**>(1);
        GetLastError();
        eax43 = reinterpret_cast<void**>(CreateFileA("\\\\.\\DMOUSE.VXD", 0x80000000, 1, 0, 3, 0x4000080, 0));
        if (reinterpret_cast<int1_t>(eax43 == 0xffffffff)) {
            eax43 = reinterpret_cast<void**>(0);
        }
        g60b844 = eax43;
        GetLastError("\\\\.\\DMOUSE.VXD", 0x80000000, 1, 0, 3, 0x4000080, 0);
        esp44 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 24 - 4 + 4 - 4 - 4 + 4 + 4 - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
        esi45 = g60b844;
        if (esi45) {
            g60b88c = reinterpret_cast<void**>(1);
            if (!esi45 || reinterpret_cast<int1_t>(esi45 == 0xffffffff)) {
                eax46 = reinterpret_cast<struct s31*>(0);
            } else {
                esp47 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp44) - 4 - 4 - 4);
                DeviceIoControl(esi45, 2, 0, 0);
                esp44 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp47) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
                eax46 = reinterpret_cast<struct s31*>(reinterpret_cast<int32_t>(esp47) + 28);
            }
            g60b848 = eax46;
            eax48 = g60b844;
            if (eax48 && eax48 != 0xffffffff) {
                esp49 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp44) - 4);
                DeviceIoControl(eax48, 1, 0, 0, reinterpret_cast<int32_t>(esp49) - 4 - 4 + 12, 12, reinterpret_cast<int32_t>(esp49) + 24, 0, "\\\\.\\DMOUSE.VXD", 0x80000000, 1, 0, 0, 0x4000080, 0);
            }
        } else {
            eax50 = reinterpret_cast<void**>(GetLastError("\\\\.\\DMOUSE.VXD", 0x80000000, 1, 0, 3, 0x4000080, 0));
            fun_437a90(ecx, "MouseOpen %d", eax50, "\\\\.\\DMOUSE.VXD", 0x80000000, 1, 0, 3, 0x4000080, ecx, "MouseOpen %d", eax50, "\\\\.\\DMOUSE.VXD", 0x80000000, 1, 0, 3, 0x4000080);
            g60b88c = esi45;
        }
    }
    fun_440840(ecx, "I_StartupJoystick\n", v51, v52, v53, v54, v55, v56, ebp24, esi25, edx26, ecx, ebx27, __return_address(), a2, a3);
    g60b888 = 0;
    eax63 = fun_41d410(ecx, v57, v58, v59, v60, v61, v62, ebp24, esi25, edx26, ecx, ebx27, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    if (!eax63) {
        fun_441640(ecx, v64, v65, v66, v67, v68, v69, ebp24);
    }
    fun_440840(ecx, "I_StartupKeyboard\n", v70, v71, v72, v73, v74, v75, ebp24, esi25, edx26, ecx, ebx27, __return_address(), a2, a3);
    fun_440840(ecx, "I_StartupSound\n", v76, v77, v78, v79, v80, v81, ebp24, esi25, edx26, ecx, ebx27, __return_address(), a2, a3);
    fun_41b030(ecx, v82, v83, v84, v85, v86, v87, ebp24, esi25, edx26, ecx, ebx27, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    return;
}

void** g48160c = reinterpret_cast<void**>(8);

void** fun_43e230(void** ecx);

void** g481240 = reinterpret_cast<void**>(0x89);

void** g481234 = reinterpret_cast<void**>(16);

void** g481248 = reinterpret_cast<void**>(0xc2);

void** g481610 = reinterpret_cast<void**>(0x8b);

void fun_414160(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

int32_t g4815f4 = 0xfd8090c;

void** fun_414350(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22) {
    void** v23;
    void** v24;
    void** ebx25;
    void** v26;
    void** v27;
    void** edx28;
    void** v29;
    void** esi30;
    void** v31;
    void** edi32;
    void** v33;
    void** ebp34;
    void** esi35;
    int32_t eax36;
    void** edx37;
    void** ebx38;
    void** ecx39;
    void** edi40;
    void** ebp41;
    void** eax42;
    void** edx43;
    void** esi44;
    void** esi45;
    void** ecx46;
    void** eax47;
    void** esi48;
    void** edi49;
    void** ebp50;
    void** eax51;
    void** edx52;
    void** ebx53;
    void** ecx54;
    void** edi55;
    void** ebp56;
    void** eax57;
    void** edx58;
    void** ebx59;
    void** ecx60;
    void** edi61;
    void** ebp62;
    void** eax63;
    void** edx64;
    void** ebx65;
    void** esi66;
    void** eax67;
    void** eax68;
    void** ebx69;
    int32_t eax70;
    void** esi71;
    int32_t eax72;
    int32_t edx73;
    void** edx74;
    int32_t eax75;
    void** ecx76;
    void** v77;
    void** eax78;
    void** eax79;

    v23 = reinterpret_cast<void**>(__return_address());
    v24 = ebx25;
    v26 = ecx;
    v27 = edx28;
    v29 = esi30;
    v31 = edi32;
    v33 = ebp34;
    esi35 = g48160c;
    eax36 = 0;
    do {
        eax36 = eax36 + 4;
        *reinterpret_cast<int32_t*>(eax36 + 0x4813c4) = 0;
        *reinterpret_cast<int32_t*>(eax36 + 0x4813e4) = 0;
        *reinterpret_cast<int32_t*>(eax36 + 0x4812ec) = 0;
        *reinterpret_cast<int32_t*>(eax36 + 0x48131c) = 0;
    } while (eax36 != 32);
    g48160c = esi35;
    fun_43e230(ecx);
    edx37 = g481270;
    ebx38 = g481278;
    ecx39 = g48126c;
    edi40 = g482a6c;
    ebp41 = g481240;
    eax42 = g481234;
    edx43 = g481248;
    fun_437a90(ecx39, "startepisode %d, startmap %d, startskill %d, deathmatch %d, nomonsters %d, respawnparm %d, fastparm %d", edx43, eax42, ebp41, edi40, ecx39, ebx38, edx37);
    esi44 = g48160c;
    if (*reinterpret_cast<void***>(esi44) != 0x12345678) {
        fun_43bd40(ecx39, "Doomcom buffer invalid!", v33, v31);
    }
    esi45 = g48160c;
    ecx46 = g482a84;
    eax47 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(esi45 + 28))));
    g481610 = esi45 + 36;
    g482a78 = eax47;
    g482a7c = eax47;
    if (ecx46) {
        fun_414160(ecx46, v33, v31, v29, v27, v26, v24, v23, a2, a3, a4);
    }
    esi48 = g481270;
    edi49 = g481278;
    ebp50 = g48126c;
    eax51 = g482a6c;
    edx52 = g481240;
    ebx53 = g481234;
    ecx54 = g481248;
    fun_437a90(ecx54, "startepisode %d, startmap %d, startskill %d, deathmatch %d, nomonsters %d, respawnparm %d, fastparm %d", ecx54, ebx53, edx52, eax51, ebp50, edi49, esi48);
    edi55 = g481248;
    ebp56 = g481234;
    eax57 = g482a6c;
    edx58 = g481240;
    fun_440840(ecx54, "startskill %i  deathmatch: %i  startmap: %i  startepisode: %i\n", edx58, eax57, ebp56, edi55, v33, v31, v29, v27, v26, v24, v23, a2, a3, a4);
    ebx59 = g481270;
    ecx60 = g481278;
    edi61 = g48126c;
    ebp62 = g482a6c;
    eax63 = g481240;
    edx64 = g481234;
    ebx65 = g481248;
    fun_437a90(ecx60, "startepisode %d, startmap %d, startskill %d, deathmatch %d, nomonsters %d, respawnparm %d, fastparm %d", ebx65, edx64, eax63, ebp62, edi61, ecx60, ebx59);
    esi66 = g48160c;
    g481608 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(esi66 + 14))));
    eax67 = fun_41d410(ecx60, v33, v31, v29, v27, v26, v24, v23, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
    if (eax67) {
        eax68 = fun_443534(ecx60, v33, v31, v29, v27, v26, v24, v23, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
        g481608 = eax68;
    }
    ebx69 = g481608;
    eax70 = 12 / reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(ebx69) + reinterpret_cast<unsigned char>(ebx69)) - 1;
    esi71 = g48160c;
    g4815f4 = eax70;
    if (eax70 < 1) {
        g4815f4 = 1;
    }
    eax72 = 0;
    edx73 = 0;
    while (eax72 < static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(esi71 + 30)))) {
        edx73 = edx73 + 4;
        ++eax72;
        *reinterpret_cast<int32_t*>(edx73 + 0x482974) = 1;
    }
    edx74 = reinterpret_cast<void**>(0);
    eax75 = 0;
    while (ecx76 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(esi71 + 12)))), reinterpret_cast<signed char>(edx74) < reinterpret_cast<signed char>(ecx76)) {
        eax75 = eax75 + 4;
        ++edx74;
        *reinterpret_cast<void**>(eax75 + 0x4813c4) = reinterpret_cast<void*>(1);
    }
    v77 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(esi71 + 30))));
    eax78 = g482a7c;
    g48160c = esi71;
    eax79 = fun_440840(ecx76, "player %i of %i (%i nodes)\n", eax78 + 1, v77, ecx76, v33, v31, v29, v27, v26, v24, v23, a2, a3, a4, a5);
    return eax79;
}

void fun_41b090();

void** fun_430ec0(void** ecx);

void fun_430ac0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** g5f1364 = reinterpret_cast<void**>(0);

void** g5f22cc = reinterpret_cast<void**>(0);

void** g5f22c0 = reinterpret_cast<void**>(0);

uint32_t g4654d0 = 1;

uint32_t fun_449dc6(void** a1, void** a2, void** a3);

uint32_t g4654dc = 0;

void** g4654d8 = reinterpret_cast<void**>(0);

void** g5f22c8 = reinterpret_cast<void**>(0);

void** fun_431460(void** ecx, void** a2, int32_t a3, int32_t a4, int32_t a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** fun_431830(void** ecx, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** v8;
    void** esi9;
    void** v10;
    void** edi11;
    void** v12;
    void** ebp13;
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
    void** edx25;
    void** eax26;
    void** ebx27;
    void** ebx28;
    void** eax29;
    int1_t zf30;
    void** v31;
    uint32_t eax32;
    void** ebp33;
    void** eax34;
    void** edx35;
    uint32_t eax36;
    void* esp37;
    void** v38;
    void** v39;
    void** eax40;
    void** v41;
    void** v42;
    void** ebx43;
    void** v44;
    uint32_t eax45;
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
    void** eax56;
    void** eax57;
    void** v58;
    void** ebx59;
    uint32_t eax60;
    void** v61;
    void** eax62;
    void** edx63;
    void** v64;
    int32_t ebx65;
    void** ecx66;
    void** edx67;
    void** eax68;
    void** v69;
    int32_t v70;
    int32_t v71;
    void** v72;
    void** v73;
    void** v74;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ebx6;
    v7 = ecx;
    v8 = esi9;
    v10 = edi11;
    v12 = ebp13;
    fun_41b090();
    fun_430ec0(ecx);
    fun_430ac0(ecx, v14, v15, v16, v17, v18, v19, v20);
    eax23 = fun_4375e0(ecx, v21, v22);
    esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 40 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
    edx25 = g5f1364;
    g5f22cc = eax23;
    eax26 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx25) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx25 == 0))) {
        edx25 = reinterpret_cast<void**>(0);
        do {
            ebx27 = g5f22cc;
            ++eax26;
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx25) + reinterpret_cast<unsigned char>(ebx27)) = 0;
            ebx28 = g5f1364;
            edx25 = edx25 + 12;
        } while (reinterpret_cast<signed char>(eax26) < reinterpret_cast<signed char>(ebx28));
    }
    g5f22c0 = reinterpret_cast<void**>(0);
    eax29 = reinterpret_cast<void**>(36);
    do {
        eax29 = eax29 + 36;
        *reinterpret_cast<int32_t*>(eax29 + 0x465920) = -1;
        *reinterpret_cast<int32_t*>(eax29 + 0x465924) = -1;
    } while (!reinterpret_cast<int1_t>(eax29 == 0xf54));
    zf30 = g4654d0 == 0;
    if (!zf30) {
        v31 = reinterpret_cast<void**>(0);
        eax32 = fun_449dc6(0, 0x4654d8, 0);
        g4654dc = eax32;
        if (!eax32) {
            ebp33 = g5f22d0;
            eax34 = g4654d8;
            edx35 = *reinterpret_cast<void***>(eax34);
            eax36 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(edx35 + 24)(eax34, ebp33, 2, 0, 0x4654d8, 0));
            g4654dc = eax36;
            if (!eax36) {
                fun_442b80(0, eax34, ebp33, 2, 0, 0x4654d8, 0, eax34, ebp33, 2, 0, 0x4654d8);
                esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 - 4 - 4);
                v38 = reinterpret_cast<void**>(1);
                v39 = reinterpret_cast<void**>(0);
                eax40 = g4654d8;
                v41 = reinterpret_cast<void**>(0);
                v42 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp37) + 8);
                ebx43 = *reinterpret_cast<void***>(eax40);
                v44 = eax40;
                eax45 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ebx43 + 12)(v44, v42, 0x5f22c8, 0, 20, 1, 0, 0, 0, 0));
                g4654dc = eax45;
                if (!eax45) {
                    eax56 = fun_41d410(0, v44, v42, 0x5f22c8, 0, 20, 1, 0, 0, 0, 0, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v12, v10, v8, v7, v5, v4, a2, a3);
                    if (!eax56 && (eax57 = g5f22c8, *reinterpret_cast<int16_t*>(&v38) = 1, *reinterpret_cast<int16_t*>(&v38 + 2) = 2, v41 = reinterpret_cast<void**>(0x2b11), v31 = reinterpret_cast<void**>(0x5622), *reinterpret_cast<int16_t*>(&v39) = 2, v58 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp37) - 4 - 4 - 4 + 4 - 4 + 4 + 20), *reinterpret_cast<int16_t*>(&v39 + 2) = 8, ebx59 = *reinterpret_cast<void***>(eax57), eax60 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ebx59 + 56)(eax57, v58, v44, v42, 0x5f22c8, 0, 20, 0x20001, 0x2b11, 0x5622, 0x80002, 0)), g4654dc = eax60, !!eax60)) {
                        v61 = reinterpret_cast<void**>(eax60 & 0xfff);
                        fun_437a90(0, "set Primary sound buffer format error %d", v61, eax57, v58, v44, v42, 0x5f22c8, 0, 0, "set Primary sound buffer format error %d", v61, eax57, v58, v44, v42, 0x5f22c8, 0);
                    }
                    eax62 = g5f22c8;
                    edx63 = *reinterpret_cast<void***>(eax62);
                    v64 = eax62;
                    ebx65 = 1;
                    *reinterpret_cast<void***>(edx63 + 48)(v64, 0, 0, 1, v44, v42, 0x5f22c8, 0, 20, v38, v41, v31, v39, 0);
                    ecx66 = reinterpret_cast<void**>(72);
                    do {
                        edx67 = ecx66;
                        eax68 = reinterpret_cast<void**>(ebx65 * 36);
                        do {
                            eax68 = eax68 + 4;
                            *reinterpret_cast<int32_t*>(eax68 + 0x5f1368) = 0;
                        } while (eax68 != edx67);
                        ++ebx65;
                        ecx66 = ecx66 + 36;
                    } while (ebx65 < 0x6d);
                    eax29 = fun_431460(ecx66, v64, 0, 0, 1, v44, v42, 0x5f22c8, 0, 20, v38, v41, v31, v39, 0);
                } else {
                    v69 = reinterpret_cast<void**>(eax45 & 0xfff);
                    fun_437a90(0, "Create Primarysoundbuffer Error %d", v69, v44, v42, 0x5f22c8, 0, 20, 1, 0, "Create Primarysoundbuffer Error %d", v69, v44, v42, 0x5f22c8, 0, 20, 1);
                    g4654d0 = 0;
                    goto v70;
                }
            } else {
                fun_437a90(0, "DirectSound coop failed %d", eax36 & 0xfff, eax34, ebp33, 2, 0, 0x4654d8, 0);
                g4654d0 = 0;
                goto v71;
            }
        } else {
            eax29 = fun_437a90(0, "DirectSoundCreate failed %d", eax32 & 0xfff, 0, 0x4654d8, 0, v72, v73, v74);
            g4654d0 = 0;
        }
    }
    return eax29;
}

void** g481260 = reinterpret_cast<void**>(29);

void* g482b64 = reinterpret_cast<void*>(0x4d74c085);

void fun_418d70(void** ecx) {
    void* esp2;
    int1_t zf3;
    void** ecx4;
    int32_t ebx5;
    void* esp6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 12);
    zf3 = g481260 == 0;
    if (zf3) {
        g482b64 = reinterpret_cast<void*>(0x418cd0);
    } else {
        g482b64 = reinterpret_cast<void*>(0x418c50);
    }
    ecx4 = reinterpret_cast<void**>(33);
    ebx5 = 0;
    do {
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4);
        ebx5 = ebx5 + 4;
        fun_442b4a(ecx4, reinterpret_cast<int32_t>(esp6) + 8, "STCFN%.3d", ecx4, v7, v8);
        ++ecx4;
        eax11 = fun_434890(ecx4, v9, v10);
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 + 12 - 4 + 4);
        *reinterpret_cast<void***>(ebx5 + 0x482f04) = eax11;
    } while (ebx5 != 0xfc);
    return;
}

int32_t g46687c = 1;

void fun_432fe0(void** ecx, void** a2);

void** g5f27b0 = reinterpret_cast<void**>(0);

void** g5f27b4 = reinterpret_cast<void**>(0);

void fun_433910(void** ecx) {
    void** v2;
    void** edx3;
    void** eax4;
    void** ecx5;
    void** eax6;

    v2 = edx3;
    g46687c = 0;
    fun_432fe0(ecx, v2);
    eax4 = fun_4375e0(ecx, v2, ecx);
    ecx5 = g4775d0;
    g5f27b0 = eax4;
    if (!reinterpret_cast<int1_t>(ecx5 == 0x140)) {
    }
    eax6 = fun_4375e0(ecx5, v2, ecx);
    g5f27b4 = eax6;
    return;
}

struct s40 {
    signed char f0;
    signed char f1;
};

struct s41 {
    signed char f0;
    signed char f1;
};

struct s42 {
    signed char f0;
    signed char f1;
};

struct s43 {
    signed char f0;
    signed char f1;
};

void** fun_4402a0(void** ecx);

void** g482a74 = reinterpret_cast<void**>(80);

void* g4829ec = reinterpret_cast<void*>(0x89004812);

void fun_418290(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23) {
    void** v24;
    void** v25;
    void** ebx26;
    void** v27;
    void** v28;
    void** edx29;
    void** v30;
    void** esi31;
    void** v32;
    void** edi33;
    struct s40* edi34;
    struct s41* esi35;
    struct s41* eax36;
    signed char al37;
    signed char al38;
    signed char* edi39;
    struct s42* esi40;
    uint32_t ecx41;
    struct s43* edi42;
    signed char al43;
    signed char al44;
    void** ecx45;
    void** eax46;
    void** edx47;
    void** eax48;
    void** eax49;
    void** eax50;

    v24 = reinterpret_cast<void**>(__return_address());
    v25 = ebx26;
    v27 = ecx;
    v28 = edx29;
    v30 = esi31;
    v32 = edi33;
    edi34 = reinterpret_cast<struct s40*>(0x482430);
    esi35 = eax36;
    g482a90 = reinterpret_cast<void**>(0);
    do {
        al37 = esi35->f0;
        edi34->f0 = al37;
        if (!al37) 
            break;
        al38 = esi35->f1;
        ++esi35;
        edi34->f1 = al38;
        ++edi34;
    } while (al38);
    edi39 = reinterpret_cast<signed char*>(0x482430);
    esi40 = reinterpret_cast<struct s42*>(".lmp");
    ecx41 = reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(ecx) - 1;
    do {
        if (!ecx41) 
            break;
        --ecx41;
        ++edi39;
        esi40 = reinterpret_cast<struct s42*>(&esi40->f1);
    } while (*edi39);
    edi42 = reinterpret_cast<struct s43*>(edi39 - 1);
    do {
        al43 = esi40->f0;
        edi42->f0 = al43;
        if (!al43) 
            break;
        al44 = esi40->f1;
        ++esi40;
        edi42->f1 = al44;
        ++edi42;
    } while (al44);
    ecx45 = reinterpret_cast<void**>(0x20000);
    eax46 = fun_41d410(0x20000, v32, v30, v28, v27, v25, v24, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
    if (!eax46 || (edx47 = g4835f4, reinterpret_cast<signed char>(eax46) >= reinterpret_cast<signed char>(edx47 - 1))) {
        eax48 = fun_4402a0(0x20000);
        if (!eax48) {
            addr_41832d_12:
            eax49 = fun_4375e0(ecx45, v32, v30);
            g482a18 = eax49;
            g482a74 = reinterpret_cast<void**>(1);
            g4829ec = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax49) + reinterpret_cast<unsigned char>(ecx45));
            return;
        } else {
            eax50 = fun_4402a0(0x20000);
        }
    } else {
        eax50 = fun_443534(reinterpret_cast<unsigned char>(eax46) * 4, v32, v30, v28, v27, v25, v24, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
    }
    ecx45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax50) << 10);
    goto addr_41832d_12;
}

int32_t g482988 = 0x595a5e5f;

void** fun_4183e0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    int32_t eax10;
    void** eax11;

    g482988 = eax10;
    g482a8c = reinterpret_cast<void**>(5);
    return eax11;
}

void** g481244 = reinterpret_cast<void**>(1);

void** fun_43c900(void** ecx);

void fun_43ca20();

void** g4597d4 = reinterpret_cast<void**>(0);

void** fun_414640(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44, void** a45, void** a46, void** a47);

void** fun_41d260();

void** fun_416e20(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44, void** a45, void** a46, void** a47, void** a48, void** a49, void** a50, void** a51, void** a52, void** a53, void** a54);

void** g482a44 = reinterpret_cast<void**>(0xff);

void** fun_4312f0(void** ecx);

void fun_411dc0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40);

void fun_4122e0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44) {
    void** v45;
    void** v46;
    void** ebx47;
    void** v48;
    void** v49;
    void** edx50;
    void** v51;
    void** esi52;
    void* esp53;
    int1_t zf54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** eax60;
    void** ebx61;
    void* esp62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** eax70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    int1_t zf76;
    int1_t zf77;
    int1_t zf78;
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
    int1_t zf94;
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
    void** ecx105;
    void** esi106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    int1_t zf112;

    v45 = reinterpret_cast<void**>(__return_address());
    v46 = ebx47;
    v48 = ecx;
    v49 = edx50;
    v51 = esi52;
    esp53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 20);
    zf54 = g482a74 == 0;
    if (!zf54) {
        fun_418360();
        esp53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp53) - 4 + 4);
    }
    eax60 = fun_41d410(ecx, v55, v56, v57, v58, v59, v51, v49, v48, v46, v45, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
    if (eax60) {
        ebx61 = g482a7c;
        esp62 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp53) - 4 + 4 - 4 - 4);
        fun_442b4a(ecx, reinterpret_cast<int32_t>(esp62) + 8, "debug%i.txt", ebx61, v63, v64);
        fun_440840(ecx, "debug output to: %s\n", reinterpret_cast<int32_t>(esp62) - 4 - 4 + 4 + 12, v65, v66, v67, v68, v69, v51, v49, v48, v46, v45, a2, a3, a4);
        eax70 = fun_442d87(ecx);
        g481244 = eax70;
    }
    fun_43c900(ecx);
    fun_43cd30(ecx, v71, v72, v73, v74, v75, v51, v49, v48, v46, v45, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
    zf76 = g4597d8 == 0;
    if (!zf76) {
        do {
            zf77 = g60b110 == 0;
            if (zf77) {
                fun_43ca20();
                zf78 = g4597d4 == 0;
                if (zf78) {
                    fun_414640(ecx, v79, v80, v81, v82, v83, v51, v49, v48, v46, v45, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37);
                } else {
                    fun_43cd30(ecx, v84, v85, v86, v87, v88, v51, v49, v48, v46, v45, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
                    fun_411cf0(ecx, v89, v90, v91, v92, v93, v51, v49, v48, v46, v45, a2, a3, a4, a5, a6, a7, a8);
                    fun_416620(12);
                    zf94 = g48122c == 0;
                    if (!zf94) {
                        fun_4124a0(12, v95, v96, v97, v98, v99, v51, v49, v48, v46, v45, a2);
                    }
                    fun_41d260();
                    fun_416e20(12, v100, v101, v102, v103, v104, v51, v49, v48, v46, v45, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44);
                    ecx105 = g482a44;
                    esi106 = g481604;
                    ecx = ecx105 + 1;
                    g482a44 = ecx;
                    g481604 = esi106 + 1;
                }
                fun_4312f0(ecx);
                fun_411dc0(ecx, v107, v108, v109, v110, v111, v51, v49, v48, v46, v45, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30);
            } else {
                fun_43bae0(ecx);
            }
            zf112 = g4597d8 == 0;
        } while (!zf112);
    }
    return;
}

void** g482a38 = reinterpret_cast<void**>(0);

void** g482a34 = reinterpret_cast<void**>(0xe8);

void** g482a20 = reinterpret_cast<void**>(0);

void fun_4184e0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25) {
    void** esi26;
    void** edx27;
    void** ebx28;
    void** eax29;
    void** eax30;
    int32_t eax31;

    eax29 = fun_41d410(ecx, esi26, edx27, ebx28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25);
    g482a38 = eax29;
    eax30 = fun_41d410(ecx, esi26, edx27, ebx28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25);
    g482a34 = eax30;
    g482a20 = reinterpret_cast<void**>(1);
    g4597d4 = reinterpret_cast<void**>(1);
    g482988 = eax31;
    g482a8c = reinterpret_cast<void**>(5);
    return;
}

void** g482978 = reinterpret_cast<void**>(94);

int32_t fun_430f20(void** ecx, void** a2);

void** g481250 = reinterpret_cast<void**>(41);

void fun_41d4a0();

void** g482a60 = reinterpret_cast<void**>(0);

int32_t g461144 = 0xf0000;

int32_t g461704 = 0xa0000;

int32_t g4616a8 = 0xa0000;

void** g482a2c = reinterpret_cast<void**>(89);

void** fun_416a60(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_42d020(void** ecx);

void** g5ee6e0 = reinterpret_cast<void**>(0);

void** fun_417f70(void** ecx, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void** v10;
    void** ebp11;
    void** edi12;
    void** eax13;
    void** esi14;
    void** edx15;
    void** edx16;
    void** ecx17;
    void** ebp18;
    void** eax19;
    void** ebx20;
    void** eax21;
    int1_t zf22;
    int1_t zf23;
    int32_t ebx24;
    void** ebx25;
    int1_t zf26;
    int1_t zf27;
    int1_t zf28;
    int32_t eax29;
    int1_t zf30;
    int32_t eax31;
    int32_t eax32;
    void** edx33;
    void** eax34;
    void** eax35;
    void** eax36;
    void** eax37;
    void** eax38;
    void** ebx39;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ecx;
    v6 = esi7;
    v8 = edi9;
    v10 = ebp11;
    edi12 = eax13;
    esi14 = edx15;
    edx16 = g482978;
    ecx17 = g482a78;
    ebp18 = g482a7c;
    fun_437a90(ecx17, "G_InitNew: skill %d episode %d, map %d, consoleplayer %d, displayplayer %d, playeringame[0] %d", eax19, esi14, ebx20, ebp18, ecx17, edx16, v10);
    eax21 = g482a88;
    if (eax21) {
        g482a88 = reinterpret_cast<void**>(0);
        fun_430f20(ecx17, v10);
    }
    if (reinterpret_cast<signed char>(edi12) > reinterpret_cast<signed char>(4)) {
        edi12 = reinterpret_cast<void**>(4);
    }
    zf22 = g481258 == 0;
    if (zf22 || esi14) {
        if (!esi14) {
            esi14 = reinterpret_cast<void**>(3);
        }
    } else {
        esi14 = reinterpret_cast<void**>(4);
    }
    if (reinterpret_cast<signed char>(esi14) > reinterpret_cast<signed char>(1) && (zf23 = g481250 == 0, !zf23)) {
        esi14 = reinterpret_cast<void**>(1);
    }
    if (ebx24 < 1) {
        ebx25 = reinterpret_cast<void**>(1);
    }
    if (!1 && (zf26 = g481264 == 0, zf26)) {
        ebx25 = reinterpret_cast<void**>(9);
    }
    fun_41d4a0();
    if (edi12 == 4 || (edx16 = g481278, !!edx16)) {
        g482a60 = reinterpret_cast<void**>(1);
    } else {
        g482a60 = edx16;
    }
    zf27 = g481270 == 0;
    if (!zf27 || reinterpret_cast<int1_t>(edi12 == 4) && (zf28 = edi12 == g482a58, !zf28)) {
        eax29 = 0x342c;
        ecx17 = ecx17;
        do {
            eax29 = eax29 + 28;
            *reinterpret_cast<int32_t*>(eax29 + 0x45a170) = *reinterpret_cast<int32_t*>(eax29 + 0x45a18c) >> 1;
        } while (eax29 != 0x3598);
        g461144 = 0x140000;
        g461704 = 0x140000;
        g4616a8 = 0x140000;
    } else {
        if (edi12 != 4 && (zf30 = reinterpret_cast<int1_t>(g482a58 == 4), zf30)) {
            eax31 = 0x342c;
            do {
                eax31 = eax31 + 28;
                *reinterpret_cast<int32_t*>(eax31 + 0x45a170) = *reinterpret_cast<int32_t*>(eax31 + 0x45a18c) + *reinterpret_cast<int32_t*>(eax31 + 0x45a18c);
            } while (eax31 != 0x3598);
            g461144 = 0xf0000;
            g461704 = 0xa0000;
            g4616a8 = 0xa0000;
        }
    }
    eax32 = 0;
    do {
        eax32 = eax32 + 0x118;
        *reinterpret_cast<int32_t*>(eax32 + 0x482404) = 2;
    } while (eax32 != 0x460);
    g482a80 = esi14;
    g482a5c = ebx25;
    g482a58 = edi12;
    g482a90 = reinterpret_cast<void**>(1);
    g482a88 = reinterpret_cast<void**>(0);
    g482a64 = reinterpret_cast<void**>(0);
    g45973c = reinterpret_cast<void**>(0);
    edx33 = g481264;
    g482a2c = reinterpret_cast<void**>(1);
    if (!edx33) {
        switch (reinterpret_cast<unsigned char>(esi14) - reinterpret_cast<unsigned char>(1)) {
            addr_41818f_31:
        default:
            eax34 = fun_416a60(ecx17, v10, v8, v6, v5, v4, a2, a3);
            return eax34;
            addr_418145_32:
        case 0:
            break;
            addr_418151_33:
        case 1:
            break;
        case 2:
            eax35 = fun_42d020(ecx17);
            g5ee6e0 = eax35;
            eax36 = fun_416a60(ecx17, v10, v8, v6, v5, v4, a2, a3);
            return eax36;
        case 3:
        }
        eax37 = fun_42d020(ecx17);
        g5ee6e0 = eax37;
        goto addr_41818f_31;
    } else {
        eax38 = fun_42d020(ecx17);
        ebx39 = g482a5c;
        g5ee6e0 = eax38;
        if (reinterpret_cast<signed char>(ebx39) < reinterpret_cast<signed char>(12)) 
            goto addr_418145_32;
        if (reinterpret_cast<signed char>(ebx39) >= reinterpret_cast<signed char>(21)) 
            goto addr_41818f_31; else 
            goto addr_418151_33;
    }
}

void** fun_413850(void** ecx, void** a2, void** a3, void** a4) {
    void** edx5;
    uint32_t ebx6;
    int32_t eax7;
    void** ebx8;
    void** edx9;
    void** eax10;
    void* eax11;
    void* eax12;
    void** edx13;
    void* eax14;

    edx5 = g481604;
    ebx6 = eax7 - (reinterpret_cast<unsigned char>(edx5) & 0xff);
    if (reinterpret_cast<int32_t>(ebx6) < reinterpret_cast<int32_t>(0xffffffc0) || reinterpret_cast<int32_t>(ebx6) > reinterpret_cast<int32_t>(64)) {
        ebx8 = g481604;
        *reinterpret_cast<signed char*>(&ebx8) = 0;
        if (reinterpret_cast<int32_t>(ebx6) <= reinterpret_cast<int32_t>(64)) {
            if (reinterpret_cast<int32_t>(ebx6) >= reinterpret_cast<int32_t>(0xffffffc0)) {
                edx9 = g481604;
                fun_43bd40(ecx, "ExpandTics: strange value %i at maketic %i", eax10, edx9);
                return 0;
            } else {
                return reinterpret_cast<int32_t>(eax11) + reinterpret_cast<uint32_t>(ebx8 + 0x100);
            }
        } else {
            return reinterpret_cast<int32_t>(eax12) + reinterpret_cast<uint32_t>(ebx8 - 0x100);
        }
    } else {
        edx13 = g481604;
        *reinterpret_cast<signed char*>(&edx13) = 0;
        return reinterpret_cast<int32_t>(eax14) + reinterpret_cast<unsigned char>(edx13);
    }
}

void** g616ea0 = reinterpret_cast<void**>(0);

void** g60ba58 = reinterpret_cast<void**>(0);

void** g60b83c = reinterpret_cast<void**>(0);

void** g60b840 = reinterpret_cast<void**>(0);

void** g477650 = reinterpret_cast<void**>(0);

void** g47764c = reinterpret_cast<void**>(1);

int32_t g60b880 = 0;

void** fun_43ebe0(void** ecx) {
    int32_t v2;
    int32_t ebp3;
    void* esp4;
    int1_t zf5;
    void** v6;
    void** v7;
    void** ebx8;
    void** ebp9;
    void** eax10;
    int32_t eax11;
    void** v12;
    void** edi13;
    void** edx14;
    void** ecx15;
    void** ebp16;
    void** edx17;
    void** v18;
    void** ecx19;
    void** v20;
    void* esp21;
    void*** esp22;
    void** v23;
    void** eax24;
    void** v25;
    void** ebx26;
    void** eax27;
    void** esi28;
    void** v29;
    void** edx30;
    void** eax31;
    void** ebx32;
    void** edi33;
    void** ebp34;
    void** eax35;
    void** ebx36;
    void** eax37;
    void** v38;
    void** eax39;
    void** eax40;
    void** ebp41;
    void*** esi42;
    void** ebp43;
    void** ecx44;
    void*** edi45;
    void** eax46;
    uint32_t ecx47;
    int1_t zf48;
    int1_t zf49;
    void** ebp50;
    void** dx51;
    int32_t ebx52;
    void** ecx53;
    int32_t edx54;
    int32_t ebx55;

    v2 = ebp3;
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 16);
    zf5 = g482a84 == 0;
    if (zf5) {
        fun_43bd40(ecx, "I_NetCmd when not in netgame", v6, v7);
        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 + 4 + 4);
    }
    ebx8 = g616ea0;
    ebp9 = g48160c;
    if (!ebx8) {
        eax10 = ebp9;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp9 + 6)) < reinterpret_cast<unsigned char>(2)) {
            if (*reinterpret_cast<void***>(ebp9 + 6) == 1 && (eax11 = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebp9 + 8)), v12 = *reinterpret_cast<void***>(eax11 * 4 + 0x615a5c), edi13 = g60ba58, edx14 = g60b83c, ecx15 = *reinterpret_cast<void***>(edx14), eax10 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ecx15 + 92)(edx14, edi13, v12, 4)), g60b840 = eax10, reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(0))) {
                ebp16 = g48160c;
                edx17 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebp16 + 8))));
                v18 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx17) * 4 + 0x615a5c);
                ecx19 = g60ba58;
                v20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax10) & 0xfff);
                fun_437a90(ecx19, " --------------------------- Send Failure %d from %d to %d [inodefrom %d ]\r\n", v20, ecx19, edx17, v18, edx14, edi13, v12, ecx19, " --------------------------- Send Failure %d from %d to %d [inodefrom %d ]\r\n", v20, ecx19, edx17, v18, edx14, edi13, v12);
                goto v2;
            }
        } else {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp9 + 6)) <= reinterpret_cast<unsigned char>(2)) {
                do {
                    esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4);
                    esp22 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp21) - 4);
                    v23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp21) + 24);
                    eax24 = g60b83c;
                    v25 = reinterpret_cast<void**>(esp22 + 24);
                    ebx26 = *reinterpret_cast<void***>(eax24);
                    g477650 = reinterpret_cast<void**>(0x1000);
                    eax27 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx26 + 84)(eax24, v25));
                    esp4 = reinterpret_cast<void*>(esp22 - 4 - 4 - 4 + 4);
                    g60b840 = eax27;
                    if (eax27) 
                        goto addr_43eda2_10;
                } while (!v23);
                goto addr_43ed21_12;
            } else {
                if (*reinterpret_cast<void***>(ebp9 + 6) == 3) {
                    esi28 = g60ba58;
                    v29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp4) - 4 + 4);
                    edx30 = g47764c;
                    eax31 = g60b83c;
                    ebx32 = *reinterpret_cast<void***>(eax31);
                    eax10 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx32 + 92)(eax31, esi28, reinterpret_cast<unsigned char>(edx30) + reinterpret_cast<unsigned char>(1), 4));
                    g60b840 = eax10;
                    if (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(0)) {
                        eax10 = fun_437a90(1, " --------------------------- Send Failure %d\r\n", reinterpret_cast<unsigned char>(eax10) & 0xfff, eax31, esi28, reinterpret_cast<unsigned char>(edx30) + reinterpret_cast<unsigned char>(1), 4, v29, 8);
                    }
                    edi33 = g481244;
                    if (edi33) {
                        ebp34 = g48160c;
                        eax35 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebp34 + 8))));
                        ebx36 = g60ba58;
                        fun_442b98(1, edi33, "Direct Play - Send dpid %d dpidnotme %d ( hNode %d ) - %d bytes result %d\r\n", ebx36, eax35, 1, edi33, "Direct Play - Send dpid %d dpidnotme %d ( hNode %d ) - %d bytes result %d\r\n", ebx36, eax35);
                        goto v2;
                    }
                } else {
                    return eax10;
                }
            }
        }
    } else {
        eax37 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebp9 + 6))));
        if (!reinterpret_cast<int1_t>(eax37 == 1)) {
            if (!reinterpret_cast<int1_t>(eax37 == 2)) {
                eax39 = fun_43bd40(ecx, "Bad net cmd: %i\n", eax37, v38);
                return eax39;
            } else {
                eax40 = reinterpret_cast<void**>(g60b880());
                return eax40;
            }
        } else {
            eax10 = reinterpret_cast<void**>(g60b880());
        }
    }
    return eax10;
    addr_43eda2_10:
    if (eax27 != 0x887700be) {
        fun_437a90(ecx, "A Receive Failure %d\r\n", reinterpret_cast<unsigned char>(eax27) & 0xfff, eax24, v25, v23, 1, 0x615a7c, 0x477650);
    }
    ebp41 = g48160c;
    *reinterpret_cast<void***>(ebp41 + 8) = reinterpret_cast<void**>(0xffff);
    goto v2;
    addr_43ed21_12:
    esi42 = reinterpret_cast<void***>(0x615a7c);
    ebp43 = g48160c;
    ecx44 = g477650;
    edi45 = reinterpret_cast<void***>(ebp43 + 36);
    eax46 = ecx44;
    ecx47 = reinterpret_cast<unsigned char>(ecx44) >> 2;
    zf48 = ecx47 == 0;
    do {
        if (!ecx47) 
            break;
        --ecx47;
        *edi45 = *esi42;
        edi45 = edi45 + 4;
        esi42 = esi42 + 4;
    } while (!zf48);
    *reinterpret_cast<unsigned char*>(&ecx47) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax46) & 3);
    zf49 = *reinterpret_cast<unsigned char*>(&ecx47) == 0;
    do {
        if (!ecx47) 
            break;
        --ecx47;
        *edi45 = *esi42;
        ++edi45;
        ++esi42;
    } while (!zf49);
    ebp50 = g48160c;
    dx51 = g477650;
    *reinterpret_cast<void***>(ebp50 + 8) = reinterpret_cast<void**>(0xffff);
    *reinterpret_cast<void***>(ebp50 + 10) = dx51;
    ebx52 = 0;
    ecx53 = v23;
    edx54 = 0;
    while (edx54 < static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebp50 + 12))) && ecx53 != *reinterpret_cast<void***>(ebx52 + 0x615a5c)) {
        ebx52 = ebx52 + 4;
        ++edx54;
    }
    eax10 = ebp50;
    ebx55 = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebp50 + 12));
    g48160c = ebp50;
    if (edx54 < ebx55) {
        *reinterpret_cast<void***>(ebp50 + 8) = *reinterpret_cast<void***>(&edx54);
        goto v2;
    }
}

void** fun_4137f0(void** ecx) {
    void** edi2;
    int32_t edx3;
    uint32_t edx4;
    int32_t edx5;
    uint32_t ebx6;
    int32_t esi7;
    int32_t eax8;
    void* edx9;

    edi2 = g481610;
    edx3 = 0;
    *reinterpret_cast<void***>(&edx3) = *reinterpret_cast<void***>(edi2 + 7);
    edx4 = edx3 * 8 + 4;
    edx5 = reinterpret_cast<int32_t>(edx4) >> 31 << 2;
    ebx6 = 0x1234567;
    esi7 = reinterpret_cast<int32_t>(edx4 - (edx5 + reinterpret_cast<uint1_t>(edx4 < edx5 + __intrinsic()))) >> 2;
    eax8 = 0;
    if (!(reinterpret_cast<uint1_t>(esi7 < 0) | reinterpret_cast<uint1_t>(esi7 == 0))) {
        edx9 = reinterpret_cast<void*>(0);
        do {
            ++eax8;
            edx9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx9) + 4);
            ebx6 = ebx6 + *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi2) + reinterpret_cast<uint32_t>(edx9) + 4) * eax8;
        } while (eax8 < esi7);
    }
    g481610 = edi2;
    return ebx6 & 0xfffffff;
}

struct s44 {
    void** f0;
    void** f1;
    int16_t f2;
    signed char[3] pad7;
    void** f7;
};

void* fun_43c1e0(void** ecx);

void* g482a1c = reinterpret_cast<void*>(0xf4b8c35b);

int32_t fun_41d510(void** ecx);

void fun_437550(void** ecx);

void** fun_43d270(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44, void** a45, void** a46, void** a47, void** a48, void** a49, void** a50, void** a51, void** a52, void** a53, void** a54, void** a55, void** a56, void** a57, void** a58, void** a59, void** a60, void** a61, void** a62, void** a63, void** a64, void** a65, void** a66, void** a67, void** a68, void** a69, void** a70, void** a71, void** a72);

void** g482a00 = reinterpret_cast<void**>(0xc3);

void** g482984 = reinterpret_cast<void**>(94);

void** g482980 = reinterpret_cast<void**>(69);

void** g48297c = reinterpret_cast<void**>(0xc3);

void fun_412470();

struct s44* fun_418530(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44, void** a45, void** a46, void** a47, void** a48, void** a49, void** a50, void** a51, void** a52, void** a53, void** a54, void** a55, void** a56, void** a57, void** a58, void** a59, void** a60, void** a61, void** a62, void** a63, void** a64, void** a65, void** a66) {
    void** v67;
    int1_t zf68;
    void* eax69;
    void** eax70;
    void** esi71;
    int1_t zf72;
    void** eax73;
    void** ebp74;
    int1_t zf75;
    void** esi76;
    void** edx77;
    void** ebx78;
    void** eax79;

    v67 = ecx;
    zf68 = g482a20 == 0;
    if (!zf68) {
        eax69 = fun_43c1e0(ecx);
        eax70 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax69) - reinterpret_cast<uint32_t>(g482a1c));
        ecx = g482a44;
        fun_43bd40(ecx, "timed %i gametics in %i realtics", ecx, eax70);
    }
    esi71 = g482a64;
    if (!esi71) {
        zf72 = g482a74 == 0;
        if (!zf72) {
            eax73 = g4829e0;
            *reinterpret_cast<void***>(eax73) = reinterpret_cast<void**>(0x80);
            g4829e0 = eax73 + 1;
            fun_41d510(ecx);
            fun_437550(ecx);
            g482a74 = esi71;
            fun_43bd40(ecx, "Demo %s recorded", 0x482430, ebp74);
        }
        return 0;
    } else {
        zf75 = g482a3c == 0;
        if (!zf75) {
            fun_43d270(ecx, ebp74, esi76, edx77, v67, ebx78, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62, a63, a64, a65, a66);
        }
        eax79 = g482a18;
        if (*reinterpret_cast<int32_t*>(eax79 + 0xfffffff4) != 0x1d4a11) {
            fun_43bd40(ecx, "Z_CT at g_game.c:%i", 0x6c6, ebp74);
        }
        fun_437910(0, ebp74, esi76, edx77, v67, ebx78, __return_address(), a2);
        g482a64 = reinterpret_cast<void**>(0);
        g482a00 = reinterpret_cast<void**>(0);
        g482a84 = reinterpret_cast<void**>(0);
        g482a6c = reinterpret_cast<void**>(0);
        g482984 = reinterpret_cast<void**>(0);
        g482980 = reinterpret_cast<void**>(0);
        g48297c = reinterpret_cast<void**>(0);
        g481278 = reinterpret_cast<void**>(0);
        g481270 = reinterpret_cast<void**>(0);
        g48126c = reinterpret_cast<void**>(0);
        g482a7c = reinterpret_cast<void**>(0);
        fun_412470();
        return 1;
    }
}

void** fun_413ab0(void** ecx);

struct s45 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s46 {
    int16_t f0;
    signed char f2;
};

struct s47 {
    int16_t f0;
    signed char f2;
};

signed char g4812a7 = 0x89;

void** fun_413cc0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44, void** a45, void** a46, void** a47, void** a48, void** a49, void** a50, void** a51, void** a52, void** a53, void** a54, void** a55, void** a56, void** a57) {
    void** v58;
    void** v59;
    void** ebx60;
    void** v61;
    void** v62;
    void** edx63;
    void** v64;
    void** esi65;
    void** v66;
    void** edi67;
    void** v68;
    void** ebp69;
    void** eax70;
    void** eax71;
    void** edx72;
    void** ebx73;
    void** ebx74;
    void** v75;
    void** v76;
    void** eax77;
    void** ebp78;
    void** eax79;
    void** eax80;
    void** edi81;
    uint32_t eax82;
    void** edx83;
    void** esi84;
    uint32_t ebx85;
    struct s45* edi86;
    void** edi87;
    void** ebx88;
    void** eax89;
    uint32_t ebx90;
    int32_t ecx91;
    struct s46* esi92;
    struct s47* edi93;
    signed char tmp8_94;
    uint32_t eax95;

    v58 = reinterpret_cast<void**>(__return_address());
    v59 = ebx60;
    v61 = ecx;
    v62 = edx63;
    v64 = esi65;
    v66 = edi67;
    v68 = ebp69;
    while (eax70 = fun_413ab0(ecx), !!eax70) {
        eax71 = g481610;
        if (*reinterpret_cast<unsigned char*>(eax71 + 3) & 32) 
            continue;
        edx72 = reinterpret_cast<void**>(0);
        ebx73 = g48160c;
        ebx74 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx73 + 8))));
        *reinterpret_cast<unsigned char*>(&edx72) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax71 + 6)) & 0x7f);
        v75 = edx72;
        eax77 = fun_413850(ecx, v76, v75, v68);
        ecx = g481610;
        ebp78 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx + 7)) + reinterpret_cast<unsigned char>(eax77));
        if (!(*reinterpret_cast<unsigned char*>(ecx + 3) & 0x80)) {
            if (*reinterpret_cast<unsigned char*>(ecx + 3) & 16) {
                fun_43bd40(ecx, "Killed by network driver", v76, v75);
            }
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v75) * 4 + 0x481310) = ebx74;
            ecx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx74) * 4);
            if (*reinterpret_cast<int32_t*>(ecx + 0x481340) > 0 || (eax79 = g481610, (*reinterpret_cast<unsigned char*>(eax79 + 3) & 64) == 0)) {
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx74) * 4 + 0x481340) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx74) * 4 + 0x481340) - 1;
            } else {
                eax80 = fun_413850(ecx, v76, v75, v68);
                edi81 = g481244;
                *reinterpret_cast<void***>(ecx + 0x481320) = eax80;
                if (edi81) {
                    fun_442b98(ecx, edi81, "retransmit from %i\n", eax80, v76);
                }
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx74) * 4 + 0x481340) = 10;
            }
            eax82 = reinterpret_cast<unsigned char>(ebx74) * 4;
            if (ebp78 == *reinterpret_cast<void***>(eax82 + 0x4813e8)) 
                continue;
            if (reinterpret_cast<signed char>(ebp78) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax82 + 0x4813e8))) {
                if (reinterpret_cast<signed char>(eax77) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax82 + 0x4813e8))) {
                    edx83 = g481610;
                    ecx = edx83 + 8 + (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax82 + 0x4813e8)) - reinterpret_cast<unsigned char>(eax77)) * 8;
                    *reinterpret_cast<int32_t*>(eax82 + 0x4812f0) = 0;
                    esi84 = *reinterpret_cast<void***>(eax82 + 0x4813e8);
                    v76 = reinterpret_cast<void**>(0x481408 + reinterpret_cast<unsigned char>(v75) * 96);
                    ebx85 = eax82;
                    if (reinterpret_cast<signed char>(ebp78) <= reinterpret_cast<signed char>(esi84)) 
                        continue;
                    do {
                        edi86 = reinterpret_cast<struct s45*>(v76 + reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx85 + 0x4813e8)) % 12 * 8);
                        *reinterpret_cast<void***>(ebx85 + 0x4813e8) = *reinterpret_cast<void***>(ebx85 + 0x4813e8) + 1;
                        edi86->f0 = *reinterpret_cast<void***>(ecx);
                        edi86->f4 = *reinterpret_cast<void***>(ecx + 4);
                        ecx = ecx + 8;
                    } while (reinterpret_cast<signed char>(ebp78) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx85 + 0x4813e8)));
                } else {
                    edi87 = g481244;
                    if (edi87) {
                        fun_442b98(ecx, edi87, "missed tics from %i (%i - %i)\n", ebx74, eax77, ecx, edi87, "missed tics from %i (%i - %i)\n", ebx74, eax77);
                    }
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx74) * 4 + 0x4812f0) = 1;
                }
            } else {
                ebx88 = g481244;
                if (!ebx88) 
                    continue;
                eax89 = g481610;
                eax89 = *reinterpret_cast<void***>(eax89 + 7);
                fun_442b98(ecx, ebx88, "out of order packet (%i + %i)\n", eax77, reinterpret_cast<unsigned char>(eax89) & 0xff);
            }
        } else {
            ebx90 = reinterpret_cast<unsigned char>(ebx74) * 4;
            if (!*reinterpret_cast<int32_t*>(ebx90 + 0x4813c8)) 
                continue;
            ecx91 = 5;
            esi92 = reinterpret_cast<struct s46*>("Player 1 left the game");
            *reinterpret_cast<int32_t*>(ebx90 + 0x4813c8) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v75) * 4 + 0x482978) = 0;
            edi93 = reinterpret_cast<struct s47*>("=");
            while (ecx91) {
                --ecx91;
                edi93->f0 = esi92->f0;
                edi93 = reinterpret_cast<struct s47*>(reinterpret_cast<int32_t>(edi93) + 4);
                esi92 = reinterpret_cast<struct s46*>(reinterpret_cast<int32_t>(esi92) + 4);
            }
            edi93->f0 = esi92->f0;
            edi93->f2 = esi92->f2;
            tmp8_94 = reinterpret_cast<signed char>(g4812a7 + *reinterpret_cast<signed char*>(&v75));
            g4812a7 = tmp8_94;
            eax95 = reinterpret_cast<unsigned char>(g482a7c) * 0x118;
            ecx = g482a74;
            *reinterpret_cast<int32_t*>(eax95 + 0x4825f0) = reinterpret_cast<int32_t>("=");
            if (!ecx) 
                continue;
            fun_418530(ecx, v76, v75, v68, v66, v64, v62, v61, v59, v58, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57);
        }
    }
    return eax70;
}

void** fun_412670(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** eax16;
    void** edx17;
    void** eax18;
    void** eax19;

    fun_440840(ecx, eax16, edx17, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    eax19 = fun_437a90(ecx, eax18, edx17, ecx, __return_address(), a2, a3, a4, a5);
    return eax19;
}

int32_t GetAsyncKeyState = 0x220b50;

void fun_414120(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26) {
    void** v27;
    void** v28;
    void** v29;
    void** edx30;
    void* eax31;
    void* edx32;
    void* eax33;
    int16_t ax34;

    v27 = reinterpret_cast<void**>(__return_address());
    v28 = ecx;
    v29 = edx30;
    eax31 = fun_43c1e0(ecx);
    edx32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax31) + 2);
    while (eax33 = fun_43c1e0(ecx), reinterpret_cast<int32_t>(eax33) < reinterpret_cast<int32_t>(edx32)) {
        fun_43cd30(ecx, v29, v28, v27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26);
    }
    fun_43cd30(ecx, v29, v28, v27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26);
    ax34 = reinterpret_cast<int16_t>(GetAsyncKeyState());
    if (ax34) {
        fun_43bd40(ecx, "Network game synchronization aborted.", 27, v29, ecx, "Network game synchronization aborted.", 27, v29);
    }
    goto v28;
}

int32_t g4815fc = 0x74db8500;

void** fun_413ab0(void** ecx) {
    void** v2;
    void** edi3;
    void** v4;
    void** ebp5;
    int1_t zf6;
    int1_t zf7;
    int1_t zf8;
    void** eax9;
    void** eax10;
    void** ecx11;
    void** eax12;
    void** ecx13;
    void** eax14;
    void** esi15;
    void** eax16;
    void** eax17;
    void** esi18;
    void** ecx19;
    void** v20;
    void** eax21;
    void** ecx22;
    void** eax23;
    void** eax24;
    void** v25;
    void** edi26;
    void** eax27;
    void** eax28;
    void** ebp29;
    int32_t v30;
    void** edi31;
    void** v32;
    void** eax33;
    void** edx34;
    void** ebx35;
    void** ebx36;
    void** eax37;
    void** eax38;
    void** v39;
    int32_t ecx40;
    void** edi41;
    void*** esi42;
    void** eax43;

    v2 = edi3;
    v4 = ebp5;
    zf6 = g4815fc == 0;
    if (zf6) {
        zf7 = g482a84 == 0;
        if (!zf7) {
            zf8 = g482a64 == 0;
            if (zf8) {
                eax9 = g48160c;
                *reinterpret_cast<void***>(eax9 + 6) = reinterpret_cast<void**>(2);
                fun_43ebe0(ecx);
                eax10 = g48160c;
                if (static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax10 + 8))) != -1) {
                    ecx11 = g481610;
                    eax12 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax10 + 10))));
                    if (eax12 == reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx11 + 7)) * 8 + 8) {
                        ecx13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx11)) & 0xfffffff);
                        eax14 = fun_4137f0(ecx13);
                        if (eax14 == ecx13) {
                            esi15 = g481244;
                            if (esi15) {
                                eax16 = g481610;
                                if (!(*reinterpret_cast<unsigned char*>(eax16 + 3) & 32)) {
                                    if (!(*reinterpret_cast<unsigned char*>(eax16 + 3) & 64)) {
                                        eax17 = reinterpret_cast<void**>(0xffffffff);
                                    } else {
                                        eax17 = fun_413850(ecx13, v4, v2, esi18);
                                    }
                                    ecx19 = g48160c;
                                    v20 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx19 + 10))));
                                    eax21 = g481610;
                                    ecx22 = reinterpret_cast<void**>(0);
                                    ecx22 = *reinterpret_cast<void***>(eax21 + 7);
                                    eax23 = fun_413850(ecx22, ecx22, eax17, v20);
                                    eax24 = g48160c;
                                    v25 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax24 + 8))));
                                    edi26 = g481244;
                                    ecx13 = reinterpret_cast<void**>(0);
                                    fun_442b98(0, edi26, "get %i = (%i + %i, R %i)[%i] ", v25, eax23, 0, edi26, "get %i = (%i + %i, R %i)[%i] ", v25, eax23);
                                    while (eax27 = g48160c, reinterpret_cast<signed char>(ecx13) < reinterpret_cast<signed char>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax27 + 10))))) {
                                        eax28 = g481610;
                                        *reinterpret_cast<signed char*>(&eax28) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx13) + reinterpret_cast<unsigned char>(eax28));
                                        ebp29 = g481244;
                                        ++ecx13;
                                        fun_442b98(ecx13, ebp29, "%i ", reinterpret_cast<unsigned char>(eax28) & 0xff, v4);
                                    }
                                    v30 = reinterpret_cast<int32_t>("\n");
                                    edi31 = g481244;
                                    v32 = edi31;
                                } else {
                                    v30 = reinterpret_cast<int32_t>("setup packet\n");
                                    v32 = esi15;
                                }
                                fun_442b98(ecx13, v32, v30, v4, v2);
                            }
                        } else {
                            eax33 = g481244;
                            if (eax33) {
                                fun_442b98(ecx13, eax33, "bad packet checksum\n", v4, v2);
                            }
                            fun_437a90(ecx13, "HGetPacket: bad packet checksum", v4, v2, esi18, edx34, ecx, ebx35, __return_address());
                            return 0;
                        }
                    } else {
                        ebx36 = g481244;
                        if (ebx36) {
                            fun_442b98(ecx11, ebx36, "bad packet length %i\n", eax12, v4);
                        }
                        eax37 = g481610;
                        eax37 = *reinterpret_cast<void***>(eax37 + 7);
                        eax38 = g48160c;
                        v39 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax38 + 10))));
                        fun_437a90(ecx11, "HGetPacket: bad packet length %i should be %d", v39, (reinterpret_cast<unsigned char>(eax37) & 0xff) * 8 + 8, v4, v2, esi18, edx34, ecx);
                        return 0;
                    }
                } else {
                    return 0;
                }
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    } else {
        ecx40 = 26;
        edi41 = g481610;
        esi42 = reinterpret_cast<void***>(0x481360);
        eax43 = g48160c;
        while (ecx40) {
            --ecx40;
            *reinterpret_cast<void***>(edi41) = *esi42;
            edi41 = edi41 + 4;
            esi42 = esi42 + 4;
        }
        *reinterpret_cast<void***>(eax43 + 8) = reinterpret_cast<void**>(0);
        g4815fc = 0;
    }
    return 1;
}

void** fun_4138d0(void** ecx) {
    void** v2;
    void** edi3;
    void** v4;
    void** ebp5;
    int32_t ebx6;
    int32_t eax7;
    void** eax8;
    void** eax9;
    uint32_t edx10;
    int1_t zf11;
    int1_t zf12;
    void** ecx13;
    void** eax14;
    int32_t edx15;
    int32_t edx16;
    void** esi17;
    void** eax18;
    void** esi19;
    void** edx20;
    void** v21;
    void** eax22;
    void** edx23;
    void** eax24;
    void** edi25;
    void** eax26;
    void** eax27;
    void** edx28;
    void** eax29;
    int32_t ecx30;
    void*** edi31;
    void** esi32;

    v2 = edi3;
    v4 = ebp5;
    ebx6 = eax7;
    eax8 = fun_4137f0(ecx);
    eax9 = g481610;
    *reinterpret_cast<void***>(eax9) = reinterpret_cast<void**>(edx10 | reinterpret_cast<unsigned char>(eax8));
    if (ebx6) {
        zf11 = g482a64 == 0;
        if (zf11) {
            zf12 = g482a84 == 0;
            if (zf12) {
                fun_43bd40(ecx, "Tried to transmit to another node", v4, v2);
            }
            ecx13 = g48160c;
            eax14 = g481610;
            *reinterpret_cast<void***>(ecx13 + 6) = reinterpret_cast<void**>(1);
            edx15 = 0;
            *reinterpret_cast<void***>(ecx13 + 8) = *reinterpret_cast<void***>(&ebx6);
            *reinterpret_cast<void***>(&edx15) = *reinterpret_cast<void***>(eax14 + 7);
            edx16 = edx15 * 8 + 8;
            esi17 = g481244;
            *reinterpret_cast<void***>(ecx13 + 10) = *reinterpret_cast<void***>(&edx16);
            if (esi17) {
                if (!(*reinterpret_cast<unsigned char*>(eax14 + 3) & 64)) {
                    eax18 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    eax18 = fun_413850(ecx13, v4, v2, esi19);
                }
                edx20 = g48160c;
                v21 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edx20 + 10))));
                eax22 = g481610;
                edx23 = reinterpret_cast<void**>(0);
                edx23 = *reinterpret_cast<void***>(eax22 + 7);
                eax24 = fun_413850(ecx13, edx23, eax18, v21);
                edi25 = g481244;
                ecx13 = reinterpret_cast<void**>(0);
                fun_442b98(0, edi25, "send (%i + %i, R %i) [%i] ", eax24, edx23, 0, edi25, "send (%i + %i, R %i) [%i] ", eax24, edx23);
                while (eax26 = g48160c, reinterpret_cast<signed char>(ecx13) < reinterpret_cast<signed char>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax26 + 10))))) {
                    eax27 = g481610;
                    *reinterpret_cast<signed char*>(&eax27) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx13) + reinterpret_cast<unsigned char>(eax27));
                    edx28 = g481244;
                    ++ecx13;
                    fun_442b98(ecx13, edx28, "%i ", reinterpret_cast<unsigned char>(eax27) & 0xff, v4);
                }
                eax29 = g481244;
                fun_442b98(ecx13, eax29, "\n", v4, v2);
            }
            eax9 = fun_43ebe0(ecx13);
        }
    } else {
        ecx30 = 26;
        edi31 = reinterpret_cast<void***>(0x481360);
        esi32 = eax9;
        g4815fc = 1;
        while (ecx30) {
            --ecx30;
            *edi31 = *reinterpret_cast<void***>(esi32);
            edi31 = edi31 + 4;
            esi32 = esi32 + 4;
        }
    }
    return eax9;
}

int32_t g60b6dc = 0;

int32_t g464cc4 = 0;

void** g60b4d8 = reinterpret_cast<void**>(0);

void** fun_440380(void** ecx);

void** g4835f8 = reinterpret_cast<void**>(21);

struct s48 {
    void** f0;
    void** f1;
};

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(92);

void** g48123c = reinterpret_cast<void**>(15);

void fun_43d850(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

int32_t GetClientRect = 0x220b64;

int32_t MapWindowPoints = 0x220c5e;

int32_t ClipCursor = 0x220ac8;

int32_t SetCursorPos = 0x220cf8;

int32_t g60b890 = 0;

int32_t g477624 = 1;

void fun_43e020(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

void fun_43dc30(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

