signed char fun_419c10() {
    int32_t eax1;

    eax1 = 0;
    do {
        if (**reinterpret_cast<uint32_t**>(eax1 + 0x459ddc) < 0xa0) {
            if (**reinterpret_cast<uint32_t**>(eax1 + 0x459ddc) == 29) {
                addr_419c5f_4:
                **reinterpret_cast<uint32_t**>(eax1 + 0x459ddc) = 0x9d;
                eax1 = eax1;
                continue;
            } else {
                continue;
            }
        } else {
            if (**reinterpret_cast<uint32_t**>(eax1 + 0x459ddc) <= 0xa1) {
                addr_419c51_7:
                **reinterpret_cast<uint32_t**>(eax1 + 0x459ddc) = 0xb6;
                continue;
            } else {
                if (**reinterpret_cast<uint32_t**>(eax1 + 0x459ddc) <= 0xa3) 
                    goto addr_419c5f_4;
                if (**reinterpret_cast<uint32_t**>(eax1 + 0x459ddc) == 0xfe) 
                    goto addr_419c51_7;
            }
        }
        eax1 = eax1 + 16;
    } while (eax1 != 0xd0);
    return 1;
}

void* fun_443671() {
    int32_t eax1;
    int32_t eax2;
    void* eax3;
    void* eax4;

    if (eax1 >= 65 && eax2 <= 90) {
        eax3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax4) + 32);
    }
    return eax3;
}

void** fun_4346d0(void** ecx, void** a2, void** a3) {
    void** eax4;
    void** eax5;
    void** edx6;

    eax4 = fun_434640(ecx);
    if (reinterpret_cast<int1_t>(eax4 == 0xffffffff)) {
        fun_43bd40(ecx, "W_GetNumForName: %s not found!", eax5, edx6);
        eax4 = reinterpret_cast<void**>(0xffffffff);
    }
    return eax4;
}

void** fun_41ad20(void** ecx, void** a2, void** a3, void** a4) {
    uint32_t edx5;
    void** eax6;
    void** edx7;
    void** eax8;

    edx5 = g4654dc;
    eax8 = fun_437a90(ecx, "%s %d", eax6, edx5 & 0xfff, edx7, ecx, __return_address(), a2, a3);
    return eax8;
}

struct s150 {
    void** f0;
    signed char[23] pad24;
    void** f18;
    signed char[7] pad32;
    void** f20;
};

void** fun_41acc0(void** ecx);

int16_t g16;

void** fun_431460(void** ecx, void** a2, int32_t a3, int32_t a4, int32_t a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void* esp16;
    void** ecx17;
    void** v18;
    void** v19;
    void** v20;
    void** ebp21;
    void** ebx22;
    void** esi23;
    void** edi24;
    void** edx25;
    struct s150* ebp26;
    void** eax27;
    void** eax28;
    void* esp29;
    int32_t eax30;
    int32_t v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    int32_t v36;
    void** v37;
    void* eax38;
    void** edx39;
    void* eax40;
    void*** esp41;
    void** v42;
    void** v43;
    void** eax44;
    void** ebx45;
    uint32_t eax46;
    void* esp47;
    void** v48;
    void** v49;
    void** v50;
    void** eax51;
    void** eax52;
    void** eax53;
    void** v54;
    void** eax55;
    void** ebx56;
    void** v57;
    uint32_t eax58;
    void* esp59;
    void** edi60;
    void** esi61;
    void* esp62;
    void** eax63;
    int1_t zf64;
    int1_t zf65;
    void** eax66;
    void** edx67;
    uint32_t eax68;
    void* esp69;
    int32_t eax70;
    void** eax71;

    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 76);
    ecx17 = reinterpret_cast<void**>(36);
    g4654e0 = 0;
    v18 = reinterpret_cast<void**>(1);
    v19 = reinterpret_cast<void**>(36);
    v20 = reinterpret_cast<void**>(0x5f1390);
    do {
        ebp21 = v19;
        ebx22 = ebp21;
        esi23 = ebp21 + 36;
        do {
            edi24 = *reinterpret_cast<void***>(ebx22 + 0x5f136c);
            if (edi24) {
                edx25 = *reinterpret_cast<void***>(edi24);
                *reinterpret_cast<void***>(edx25 + 8)(edi24);
                esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 + 4);
            }
            ebx22 = ebx22 + 4;
            *reinterpret_cast<int32_t*>(ebx22 + 0x5f1368) = 0;
        } while (ebx22 != esi23);
        ebp26 = reinterpret_cast<struct s150*>(ebp21 + 0x465928);
        g60b9d8 = 1;
        eax27 = fun_41acc0(ecx17);
        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 + 4);
        g60b9d8 = reinterpret_cast<unsigned char>(ebx22) ^ reinterpret_cast<unsigned char>(esi23);
        ebp26->f20 = eax27;
        if (eax27 != 0xffffffff) {
            eax28 = fun_4348a0(ecx17, 20, 0xe2);
            esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 + 4);
            ebp26->f18 = eax28;
            eax30 = 0;
            *reinterpret_cast<void***>(&eax30) = *reinterpret_cast<void***>(eax28 + 2);
            v31 = eax30;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax28) == 3)) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax28) == 4)) {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax28) == 5)) {
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax28) == 6)) {
                            v32 = ebp26->f0;
                            fun_43bd40(ecx17, "Bad Sample type, sample %s ( number %d )", v32, v18, ecx17, "Bad Sample type, sample %s ( number %d )", v32, v18);
                            esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 - 4 - 4 - 4 + 4 + 12);
                        }
                    } else {
                        ecx17 = reinterpret_cast<void**>(8);
                    }
                } else {
                    ecx17 = reinterpret_cast<void**>(1);
                }
            }
            fun_442b80(ecx17, 20, 0xe2, v33, v34, v35, ecx17, 20, 0xe2, v33, v36, v35);
            v37 = reinterpret_cast<void**>(0xe2);
            eax38 = reinterpret_cast<void*>(20 * reinterpret_cast<unsigned char>(ebp26->f20));
            edx39 = g60ae70;
            eax40 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx39) + reinterpret_cast<uint32_t>(eax38) + 16);
            esp41 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp29) - 4 + 4 - 4 - 4);
            v42 = v20;
            v33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax40) - 8);
            v43 = reinterpret_cast<void**>(esp41 + 8);
            v35 = reinterpret_cast<void**>(esp41 + 28);
            eax44 = g4654d8;
            ebx45 = *reinterpret_cast<void***>(eax44);
            eax46 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ebx45 + 12)(eax44, v43));
            esp47 = reinterpret_cast<void*>(esp41 - 4 - 4 - 4 + 4);
            g4654dc = eax46;
            if (eax46) {
                v48 = ebp26->f0;
                v49 = reinterpret_cast<void**>(eax46 & 0xfff);
                fun_437a90(v20, "Bad CreateSoundBuffer: %d on sound %d %s", v49, v50, v48, eax44, v43, v42, 0, v20, "Bad CreateSoundBuffer: %d on sound %d %s", v49, v50, v48, eax44, v43, v42, 0);
                eax51 = reinterpret_cast<void**>(0);
                *reinterpret_cast<void**>(&eax51) = *reinterpret_cast<void**>(&v35 + 2);
                eax52 = reinterpret_cast<void**>(0);
                *reinterpret_cast<void**>(&eax52) = *reinterpret_cast<void**>(&v35);
                eax53 = reinterpret_cast<void**>(0);
                *reinterpret_cast<int16_t*>(&eax53) = *reinterpret_cast<int16_t*>(&v37 + 2);
                fun_437a90(v20, "wFormatTag %d Channels %d nSamplesPerSec %d nAvgBytesPerSec %d nBlockAlign %d wBitsPerSample %d cbSize %d", 0xe2, eax53, v33, v54, eax52, eax51, 1, v20, "wFormatTag %d Channels %d nSamplesPerSec %d nAvgBytesPerSec %d nBlockAlign %d wBitsPerSample %d cbSize %d", 0xe2, eax53, v33, v54, eax52, eax51, 1);
                fun_43bd40(v20, "Sound buffer creation failure!", eax44, v43, v20, "Sound buffer creation failure!", eax44, v43);
                esp47 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp47) - 4 - 4 - 4 - 4 - 4 + 4 + 16 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 32 - 4 - 4 + 4 + 4);
            }
            eax55 = *reinterpret_cast<void***>(v20 + 0x5f136c);
            ebx56 = *reinterpret_cast<void***>(eax55);
            v57 = eax55;
            eax58 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ebx56 + 44)(v57, 0));
            esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp47) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            g4654dc = eax58;
            if (eax58) {
                fun_43bd40(v42, "Sound buffer lock failure!", v57, 0, v42, "Sound buffer lock failure!", v57, 0);
                esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 - 4 + 4 + 4);
            }
            edi60 = reinterpret_cast<void**>(0xe2);
            esi61 = ebp26->f18 + 8;
            esp62 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4);
            eax63 = v42;
            ecx17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v42) >> 2);
            zf64 = ecx17 == 0;
            do {
                if (!ecx17) 
                    break;
                --ecx17;
                *reinterpret_cast<void***>(edi60) = *reinterpret_cast<void***>(esi61);
                edi60 = edi60 + 4;
                esi61 = esi61 + 4;
            } while (!zf64);
            *reinterpret_cast<unsigned char*>(&ecx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax63) & 3);
            zf65 = *reinterpret_cast<unsigned char*>(&ecx17) == 0;
            do {
                if (!ecx17) 
                    break;
                --ecx17;
                *reinterpret_cast<void***>(edi60) = *reinterpret_cast<void***>(esi61);
                ++edi60;
                ++esi61;
            } while (!zf65);
            eax66 = *reinterpret_cast<void***>(v31 + 0x5f136c);
            edx67 = *reinterpret_cast<void***>(eax66);
            eax68 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(edx67 + 76)(eax66, 0xe2, 0, 20, 0, v57, 0));
            esp69 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp62) + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            g4654dc = eax68;
            if (eax68) {
                fun_43bd40(ecx17, "Sound buffer unlock failure!", eax66, 0xe2, ecx17, "Sound buffer unlock failure!", eax66, 0xe2);
                esp69 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp69) - 4 - 4 + 4 + 4);
            }
            eax70 = 0;
            *reinterpret_cast<int16_t*>(&eax70) = g16;
            *reinterpret_cast<int32_t*>(v42 + 0x4831a8) = eax70;
            if (*reinterpret_cast<int32_t*>(ebp26->f18 + 0xfffffff4) != 0x1d4a11) {
                fun_43bd40(ecx17, "Z_CT at s_sound.c:%i", 0x2c2, eax66, ecx17, "Z_CT at s_sound.c:%i", 0x2c2, eax66);
                esp69 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp69) - 4 - 4 - 4 + 4 + 8);
            }
            fun_437910(ecx17, eax66, 0xe2, 0, 20, 0, v57, 0);
            esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp69) - 4 + 4);
        }
        eax71 = v18 + 1;
        v20 = v20 + 36;
        v19 = v19 + 36;
        v18 = eax71;
    } while (reinterpret_cast<signed char>(eax71) < reinterpret_cast<signed char>(0x6d));
    return eax71;
}

int32_t fun_41c200(void** ecx) {
    void** v2;
    void** esi3;
    void** v4;
    void** edi5;
    void** v6;
    void** ebp7;
    signed char* ebp8;
    signed char* eax9;
    int32_t edx10;
    void** esi11;
    signed char* edi12;
    uint32_t ecx13;
    void** eax14;
    uint32_t eax15;

    v2 = esi3;
    v4 = edi5;
    v6 = ebp7;
    ebp8 = eax9;
    edx10 = 0;
    esi11 = reinterpret_cast<void**>(0);
    while (1) {
        edi12 = ebp8;
        ecx13 = reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(ecx) - 1;
        do {
            if (!ecx13) 
                break;
            --ecx13;
            ++edi12;
            ++esi11;
        } while (*edi12);
        ecx = reinterpret_cast<void**>(~ecx13 - 1);
        if (reinterpret_cast<unsigned char>(esi11) >= reinterpret_cast<unsigned char>(ecx)) 
            break;
        eax14 = fun_4435c2(ecx, v6, v4, v2);
        eax15 = reinterpret_cast<uint32_t>(eax14 - 33);
        if (reinterpret_cast<int32_t>(eax15) < reinterpret_cast<int32_t>(0) || reinterpret_cast<int32_t>(eax15) >= reinterpret_cast<int32_t>(63)) {
            edx10 = edx10 + 4;
        } else {
            edx10 = edx10 + **reinterpret_cast<int16_t**>(eax15 * 4 + 0x482f08);
        }
        ++esi11;
    }
    return edx10;
}

void fun_41c2a0(void** ecx) {
    void** v2;
    void** ebp3;
    void** v4;
    void** eax5;
    signed char* ebp6;
    signed char* ebx7;
    void** esi8;
    void** eax9;
    int32_t eax10;
    void** v11;
    void** eax12;
    uint32_t eax13;
    void** edx14;
    int1_t less_or_equal15;

    v2 = ebp3;
    v4 = eax5;
    ebp6 = ebx7;
    esi8 = eax9;
    while (eax10 = *ebp6, ++ebp6, !!eax10) {
        if (eax10 != 10) {
            eax12 = fun_4435c2(ecx, v4, v11, v2);
            eax13 = reinterpret_cast<uint32_t>(eax12 - 33);
            if (reinterpret_cast<int32_t>(eax13) < reinterpret_cast<int32_t>(0) || reinterpret_cast<int32_t>(eax13) >= reinterpret_cast<int32_t>(63)) {
                esi8 = esi8 + 4;
            } else {
                ecx = *reinterpret_cast<void***>(eax13 * 4 + 0x482f08);
                edx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi8) + static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx))));
                v11 = edx14;
                less_or_equal15 = reinterpret_cast<signed char>(edx14) <= reinterpret_cast<signed char>(g4775d0);
                if (!less_or_equal15) 
                    break;
                fun_433eb0(ecx, v4, v11, v2);
                esi8 = v11;
            }
        } else {
            esi8 = v4;
        }
    }
    return;
}

struct s151 {
    void* f0;
    void* f4;
    void* f8;
    void* fc;
};

struct s152 {
    void* f0;
    void* f4;
    void* f8;
    void* fc;
};

void** fun_4435d0(void** ecx) {
    struct s151* ebx2;
    struct s151* eax3;
    int32_t eax4;
    int32_t edx5;
    void* eax6;
    void* ecx7;
    struct s152* edx8;
    uint1_t cf9;
    void** eax10;
    uint32_t ecx11;

    ebx2 = eax3;
    if (eax4 == edx5) 
        goto addr_443644_2;
    do {
        eax6 = ebx2->f0;
        ecx7 = edx8->f0;
        if (ecx7 != eax6) 
            break;
        eax6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax6) + 0xfefefeff & ~reinterpret_cast<uint32_t>(ecx7) & 0x80808080);
        if (eax6) 
            goto addr_443644_2;
        eax6 = ebx2->f4;
        ecx7 = edx8->f4;
        if (ecx7 != eax6) 
            break;
        eax6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax6) + 0xfefefeff & ~reinterpret_cast<uint32_t>(ecx7) & 0x80808080);
        if (eax6) 
            goto addr_443644_2;
        eax6 = ebx2->f8;
        ecx7 = edx8->f8;
        if (ecx7 != eax6) 
            break;
        eax6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax6) + 0xfefefeff & ~reinterpret_cast<uint32_t>(ecx7) & 0x80808080);
        if (eax6) 
            goto addr_443644_2;
        eax6 = ebx2->fc;
        ecx7 = edx8->fc;
        if (ecx7 != eax6) 
            break;
        ++ebx2;
        ++edx8;
        eax6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax6) + 0xfefefeff & ~reinterpret_cast<uint32_t>(ecx7) & 0x80808080);
    } while (!eax6);
    goto addr_443644_2;
    cf9 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax6) < *reinterpret_cast<unsigned char*>(&ecx7));
    if (*reinterpret_cast<unsigned char*>(&eax6) != *reinterpret_cast<unsigned char*>(&ecx7)) {
        addr_44366a_12:
        eax10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax6) - (reinterpret_cast<uint32_t>(eax6) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax6) < reinterpret_cast<uint32_t>(eax6) + cf9)));
        *reinterpret_cast<unsigned char*>(&eax10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax10) | 1);
        return eax10;
    } else {
        if (!*reinterpret_cast<unsigned char*>(&eax6)) 
            goto addr_443644_2;
        cf9 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx7) + 1));
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) != *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx7) + 1)) 
            goto addr_44366a_12;
    }
    if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1)) 
        goto addr_443644_2;
    eax6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax6) >> 16);
    ecx11 = reinterpret_cast<uint32_t>(ecx7) >> 16;
    cf9 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax6) < *reinterpret_cast<unsigned char*>(&ecx11));
    if (*reinterpret_cast<unsigned char*>(&eax6) != *reinterpret_cast<unsigned char*>(&ecx11)) 
        goto addr_44366a_12;
    if (!*reinterpret_cast<unsigned char*>(&eax6)) {
        addr_443644_2:
        return reinterpret_cast<uint32_t>(eax6) - reinterpret_cast<uint32_t>(eax6);
    } else {
        cf9 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx11) + 1));
        goto addr_44366a_12;
    }
}

void** fun_44385a(void** ecx);

struct s153 {
    int32_t f0;
    int32_t f4;
};

int32_t g454944 = 0x74706d65;

struct s154 {
    int32_t f0;
    int16_t f4;
};

int32_t g454948 = 0x6c732079;

struct s155 {
    int16_t f0;
    signed char f2;
};

int16_t g45494c = 0x746f;

signed char g45494e = 0;

void fun_41b0a0(void** a1, void** a2) {
    void* esp3;
    void** ebp4;
    void** v5;
    void** v6;
    void** ecx7;
    void** v8;
    void** v9;
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
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** eax36;
    void* esp37;
    void** v38;
    int32_t* esp39;
    int32_t v40;
    void** v41;
    void** v42;
    void* esp43;
    void** eax44;
    void** v45;
    void** v46;
    void** v47;
    struct s153* edi48;
    struct s154* edi49;
    struct s155* edi50;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 0x108);
    ebp4 = reinterpret_cast<void**>(0);
    v5 = reinterpret_cast<void**>(0);
    v6 = reinterpret_cast<void**>(0);
    do {
        eax36 = fun_41d410(ecx7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35);
        esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4);
        if (!eax36) {
            v38 = ebp4;
            esp39 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp37) - 4 - 4);
            v40 = reinterpret_cast<int32_t>("doomsav%d.dsg");
        } else {
            v38 = ebp4;
            esp39 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp37) - 4 - 4);
            v40 = reinterpret_cast<int32_t>("c:\\doomdata\\doomsav%d.dsg");
        }
        fun_442b4a(ecx7, esp39 + 2, v40, v38, v41, v42);
        esp43 = reinterpret_cast<void*>(esp39 - 1 - 1 + 1 + 3 - 1 - 1);
        eax44 = fun_44367f(ecx7, reinterpret_cast<int32_t>(esp43) + 8, 0, 0x1b6);
        ecx7 = eax44;
        esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) - 4 - 4 + 4 + 12);
        if (!reinterpret_cast<int1_t>(eax44 == 0xffffffff)) {
            fun_44385a(ecx7);
            fun_4439d1(ecx7, v45, v46, v47);
            esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4 - 4 + 4);
            *reinterpret_cast<int16_t*>(v6 + 0x464560) = 1;
        } else {
            edi48 = reinterpret_cast<struct s153*>(v5 + 0x483450);
            edi48->f0 = g454944;
            edi49 = reinterpret_cast<struct s154*>(&edi48->f4);
            edi49->f0 = g454948;
            edi50 = reinterpret_cast<struct s155*>(&edi49->f4);
            edi50->f0 = g45494c;
            edi50->f2 = g45494e;
            *reinterpret_cast<int16_t*>(v6 + 0x464560) = 0;
        }
        ++ebp4;
        v5 = v5 + 24;
        v6 = v6 + 17;
    } while (reinterpret_cast<signed char>(ebp4) < reinterpret_cast<signed char>(6));
    goto a2;
}

struct s156 {
    signed char f0;
    signed char f1;
};

struct s157 {
    signed char f0;
    signed char f1;
};

void fun_417cd0() {
    struct s156* edi1;
    void** eax2;
    struct s157* esi3;
    struct s157* edx4;
    signed char al5;
    signed char al6;

    edi1 = reinterpret_cast<struct s156*>(0x482330);
    g4829bc = eax2;
    esi3 = edx4;
    do {
        al5 = esi3->f0;
        edi1->f0 = al5;
        if (!al5) 
            break;
        al6 = esi3->f1;
        ++esi3;
        edi1->f1 = al6;
        ++edi1;
    } while (al6);
    g482a24 = reinterpret_cast<void**>(1);
    return;
}

void fun_41d240() {
    g4835cc = reinterpret_cast<void**>(0);
    return;
}

void fun_417b40(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, void* a6);

void fun_41b290(void** ecx) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
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
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void* esp31;
    void** v32;
    void** eax33;
    int32_t* esp34;
    int32_t v35;
    void** v36;
    void** v37;
    int32_t v38;
    int32_t v39;
    void* v40;
    int32_t v41;
    int32_t v42;
    void* v43;

    eax30 = fun_41d410(ecx, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29);
    esp31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x100 - 4 + 4);
    if (!eax30) {
        v32 = eax33;
        esp34 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp31) - 4 - 4);
        v35 = reinterpret_cast<int32_t>("doomsav%d.dsg");
    } else {
        v32 = eax33;
        esp34 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp31) - 4 - 4);
        v35 = reinterpret_cast<int32_t>("c:\\doomdata\\doomsav%d.dsg");
    }
    fun_442b4a(ecx, esp34 + 2, v35, v32, v36, v37);
    fun_417b40(v38, v39, v40, v41, v42, v43);
    g4835cc = reinterpret_cast<void**>(0);
    return;
}

int32_t g482990 = 0xb8000000;

int32_t g48298c = 0xc8bdc35b;

int32_t g482994 = 3;

void fun_417ed0() {
    int32_t eax1;
    int32_t edx2;
    int32_t ebx3;

    g482990 = eax1;
    g48298c = edx2;
    g482994 = ebx3;
    g482a8c = reinterpret_cast<void**>(2);
    return;
}

void fun_412640(int32_t ecx) {
    g482a8c = reinterpret_cast<void**>(0);
    g481224 = reinterpret_cast<void**>(0xffffffff);
    g48122c = reinterpret_cast<void**>(1);
    return;
}

void fun_417710() {
    g482a8c = reinterpret_cast<void**>(9);
    return;
}

void** g464656 = reinterpret_cast<void**>(0);

void** g48359c = reinterpret_cast<void**>(0x8b);

void** g483588 = reinterpret_cast<void**>(53);

void fun_41b4f0(void** ecx) {
    void** edx2;
    int1_t zf3;
    void** ax4;
    void** edi5;
    void** esi6;
    void** eax7;

    edx2 = g482a90;
    if (edx2) {
        zf3 = g482a68 == 0;
        if (zf3) {
            ax4 = g464656;
            g48357c = reinterpret_cast<void**>(0x464644);
            g4835d4 = ax4;
            fun_41b0a0(edi5, esi6);
        }
        return;
    } else {
        eax7 = g4835cc;
        g48359c = edx2;
        g483588 = edx2;
        g48358c = eax7;
        g4835b8 = reinterpret_cast<void**>(1);
        g4835b0 = reinterpret_cast<void**>("you can't save if you aren't playing!\n\npress a key.");
        g4835cc = reinterpret_cast<void**>(1);
        return;
    }
}

void** g4645da = reinterpret_cast<void**>(0);

void fun_41b2e0(void** ecx) {
    int1_t zf2;
    void** ax3;
    void** edi4;
    void** esi5;
    void** eax6;

    zf2 = g482a84 == 0;
    if (zf2) {
        ax3 = g4645da;
        g48357c = reinterpret_cast<void**>(0x4645c8);
        g4835d4 = ax3;
        fun_41b0a0(edi4, esi5);
        return;
    } else {
        eax6 = g4835cc;
        g48358c = eax6;
        g4835b8 = reinterpret_cast<void**>(1);
        g4835b0 = reinterpret_cast<void**>("you can't do load while in a net game!\n\npress a key.");
        g48359c = reinterpret_cast<void**>(0);
        g483588 = reinterpret_cast<void**>(0);
        g4835cc = reinterpret_cast<void**>(1);
        return;
    }
}

int32_t fun_4439f9(void** ecx) {
    int32_t esi2;
    int32_t eax3;
    int32_t ebx4;
    signed char* edx5;
    signed char* eax6;

    esi2 = eax3;
    while (ebx4 && *edx5) {
        ++edx5;
        --ebx4;
        *eax6 = *edx5;
        ++eax6;
    }
    while (ebx4) {
        --ebx4;
        *eax6 = 0;
        ++eax6;
    }
    return esi2;
}

uint32_t fun_442f62(void** ecx) {
    signed char* ebx2;
    signed char* eax3;
    signed char al4;
    int32_t ecx5;
    uint32_t eax6;
    signed char* edx7;
    int32_t ecx8;
    int32_t edx9;

    ebx2 = eax3;
    while (1) {
        al4 = *ebx2;
        ecx5 = 0;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax6) + 1) = *edx7;
        *reinterpret_cast<signed char*>(&ecx5) = al4;
        if (ecx5 >= 65 && ecx5 <= 90) {
            al4 = reinterpret_cast<signed char>(al4 + 32);
        }
        ecx8 = 0;
        *reinterpret_cast<signed char*>(&ecx8) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax6) + 1);
        if (ecx8 >= 65 && ecx8 <= 90) {
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax6) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax6) + 1) + 32);
        }
        if (al4 != *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax6) + 1)) 
            break;
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax6) + 1)) 
            break;
        ++ebx2;
        ++edx7;
    }
    edx9 = 0;
    *reinterpret_cast<signed char*>(&edx9) = al4;
    *reinterpret_cast<signed char*>(&eax6) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax6) + 1);
    return edx9 - (eax6 & 0xff);
}

void** g61835c = reinterpret_cast<void**>(0);

/* (image base) */
int32_t image_base_ = 0x4452df;

struct s158 {
    signed char[8] pad8;
    int16_t f8;
};

void** fun_445f5a(void** ecx);

struct s159 {
    signed char[8] pad8;
    int16_t f8;
};

struct s160 {
    int32_t f0;
    int32_t f4;
    unsigned char f8;
    signed char[1] pad10;
    int16_t fa;
    int32_t fc;
    int16_t f10;
    int32_t f12;
    int32_t f16;
    uint32_t f1a;
    uint32_t f1e;
    uint32_t f22;
    uint32_t f26;
    int32_t f2a;
    int32_t f2e;
    int32_t f32;
    int16_t f36;
    signed char f38;
    signed char f39;
};

int32_t fun_449d90(void** a1);

int32_t fun_449d8a();

int32_t fun_449d84();

/* (image base) */
int32_t image_base_ = 0x4452df;

void fun_445fe3(void** ecx);

uint32_t fun_4460ab(void** ecx);

int32_t fun_443cd6(void** ecx) {
    void** ebx2;
    void** ebx3;
    int32_t eax4;
    struct s158* edx5;
    void** eax6;
    void** v7;
    uint32_t edx8;
    struct s159* edx9;
    uint32_t edx10;
    struct s160* edx11;
    int32_t eax12;
    unsigned char v13;
    uint32_t eax14;
    int32_t eax15;
    void* esp16;
    void** esp17;
    void* v18;
    void** v19;
    int32_t eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    uint32_t eax26;
    int32_t eax27;
    int32_t v28;
    int16_t v29;
    int32_t eax30;
    int32_t v31;
    int16_t v32;
    uint32_t eax33;
    int32_t eax34;
    int32_t v35;
    int16_t v36;
    int32_t eax37;
    int32_t v38;
    int16_t v39;
    uint32_t eax40;
    int16_t ax41;
    int32_t eax42;
    int32_t ebx43;

    ebx2 = g61835c;
    ebx3 = *reinterpret_cast<void***>(ebx2 + eax4 * 4);
    image_base_();
    edx5->f8 = 0;
    eax6 = fun_445f5a(ecx);
    v7 = eax6;
    if (*reinterpret_cast<unsigned char*>(&eax6) & 1) {
        *reinterpret_cast<int16_t*>(&edx8) = edx9->f8;
        edx10 = edx8 | 0x124;
        edx11->f8 = *reinterpret_cast<unsigned char*>(&edx10);
    }
    if (*reinterpret_cast<unsigned char*>(&v7) & 2) {
        edx11->f8 = reinterpret_cast<unsigned char>(edx11->f8 | 0x92);
    }
    eax12 = fun_449d90(ebx3);
    if (v13 & 32 || (eax12 == 2 || (eax12 == 3 || !eax12))) {
        edx11->f16 = 0;
        edx11->f1e = 0;
        edx11->f8 = reinterpret_cast<unsigned char>(0x2124);
        edx11->f12 = 1;
        eax14 = edx11->f1e;
        edx11->f22 = eax14;
        edx11->f1a = eax14;
    } else {
        eax15 = fun_449d8a();
        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 44 - 4 + 4 - 4 + 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4);
        if (eax15 == -1 || (edx11->f16 = eax15, esp17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp16) - 4), v18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) + 8), v19 = reinterpret_cast<void**>(esp17 + 1), eax20 = fun_449d84(), eax20 == 0)) {
            image_base_();
            fun_4457b6(ecx, ebx3, 0, ebx3, v21, v22, v23, v24, v25);
            goto addr_443ec3_9;
        } else {
            fun_445fe3(ecx);
            eax26 = fun_4460ab(ecx);
            edx11->f1e = eax26;
            if (ebx3 == v19 && !v18 || (fun_445fe3(ecx), eax27 = v28, *reinterpret_cast<int16_t*>(&eax27) == v29) && (eax30 = v31, *reinterpret_cast<int16_t*>(&eax30) == v32)) {
                eax33 = edx11->f1e;
            } else {
                eax33 = fun_4460ab(ecx);
            }
            edx11->f22 = eax33;
            if (ebx3 == v19 && esp17 - 1 + 6 == v18 || (fun_445fe3(ecx), eax34 = v35, *reinterpret_cast<int16_t*>(&eax34) == v36) && (eax37 = v38, *reinterpret_cast<int16_t*>(&eax37) == v39)) {
                eax40 = edx11->f1e;
            } else {
                eax40 = fun_4460ab(ecx);
            }
            edx11->f1a = eax40;
            edx11->f12 = 0;
        }
    }
    edx11->f0 = edx11->f12;
    image_base_(ebx3);
    edx11->fa = 1;
    edx11->f10 = 0;
    edx11->f2a = 0;
    edx11->f2e = 0;
    edx11->f32 = 0;
    edx11->f36 = 0;
    edx11->f38 = 0;
    edx11->f39 = 0;
    ax41 = edx11->f10;
    edx11->f4 = eax42;
    edx11->fc = ax41;
    edx11->f26 = edx11->f1e;
    addr_443ec3_9:
    goto ebx43;
}

uint32_t fun_443ffe(void** ecx, void* a2);

uint32_t fun_44403b(void** ecx, void** a2, int32_t a3, void* a4, signed char* a5) {
    uint32_t eax6;

    eax6 = fun_443ffe(ecx, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 24);
    return eax6;
}

int32_t fun_449db4();

int32_t fun_442fa9(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int32_t ebx6;
    int32_t edx7;
    int32_t eax8;
    void** ebx9;
    void** eax10;

    ebx6 = edx7;
    eax8 = fun_449db4();
    if (eax8 != -1) {
        if (!(*reinterpret_cast<unsigned char*>(&ebx6) & 2) || !(*reinterpret_cast<unsigned char*>(&eax8) & 1)) {
            goto ebx9;
        } else {
            fun_445765(eax10, ecx, ebx9, __return_address());
            goto ebx9;
        }
    } else {
        fun_4457b6(ecx, eax10, ecx, ebx9, __return_address(), a2, a3, a4, a5);
        goto ebx9;
    }
}

struct s162 {
    signed char[74] pad74;
    int32_t f4a;
};

struct s161 {
    signed char[16] pad16;
    struct s162* f10;
};

void** fun_41e3b0(void** ecx) {
    void** ebx2;
    int32_t edx3;
    void** eax4;
    struct s161* eax5;
    void** eax6;
    void** eax7;

    ebx2 = g4835fc;
    edx3 = 0;
    if (eax4 != ebx2) {
        while (edx3 = edx3 + 4, edx3 < 0x78) {
            if (eax5 == *reinterpret_cast<struct s161**>(edx3 + 0x4835fc)) 
                goto addr_41e3bf_4;
        }
    } else {
        addr_41e3bf_4:
        (*reinterpret_cast<struct s161**>(edx3 + 0x4835fc))->f10->f4a = 0;
        eax6 = fun_42af50(ecx);
        *reinterpret_cast<struct s161**>(edx3 + 0x4835fc) = reinterpret_cast<struct s161*>(0);
        return eax6;
    }
    return eax7;
}

struct s163 {
    signed char[20] pad20;
    int16_t f14;
};

struct s164 {
    signed char[8] pad8;
    int32_t f8;
    signed char[24] pad36;
    int32_t f24;
    int32_t f28;
    int32_t f2c;
};

void fun_41e400(void** ecx) {
    struct s163* ecx2;
    struct s163* eax3;
    int32_t eax4;

    ecx2 = eax3;
    eax4 = 0;
    do {
        if (*reinterpret_cast<struct s164**>(eax4 + 0x4835fc) && (static_cast<int32_t>(ecx2->f14) == (*reinterpret_cast<struct s164**>(eax4 + 0x4835fc))->f28 && !(*reinterpret_cast<struct s164**>(eax4 + 0x4835fc))->f24)) {
            (*reinterpret_cast<struct s164**>(eax4 + 0x4835fc))->f24 = (*reinterpret_cast<struct s164**>(eax4 + 0x4835fc))->f2c;
            (*reinterpret_cast<struct s164**>(eax4 + 0x4835fc))->f8 = 0x41e0c0;
        }
        eax4 = eax4 + 4;
    } while (eax4 != 0x78);
    return;
}

struct s165 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_42af30() {
    void** edx1;
    void** eax2;
    struct s165* eax3;
    void*** eax4;
    void** eax5;

    edx1 = g484cf8;
    *reinterpret_cast<void***>(edx1 + 4) = eax2;
    eax3->f4 = reinterpret_cast<int32_t>("H");
    *eax4 = edx1;
    g484cf8 = eax5;
    return;
}

struct s166 {
    signed char[8] pad8;
    int32_t f8;
};

void** fun_42af50(void** ecx) {
    struct s166* eax2;
    void** eax3;

    eax2->f8 = -1;
    return eax3;
}

struct s167 {
    signed char[20] pad20;
    int16_t f14;
};

struct s168 {
    signed char[1] pad1;
    void** f1;
};

void** fun_428190(void** ecx) {
    void** edi2;
    struct s167* esi3;
    struct s167* eax4;
    void** ebx5;
    void** edx6;
    struct s168* edx7;
    void** eax8;
    void* eax9;
    void* ecx10;

    edi2 = g4845e0;
    esi3 = eax4;
    ebx5 = g4845ec;
    edx6 = reinterpret_cast<void**>(&edx7->f1);
    if (reinterpret_cast<signed char>(edx6) >= reinterpret_cast<signed char>(ebx5)) {
        addr_4281c6_2:
        eax8 = reinterpret_cast<void**>(0xffffffff);
    } else {
        eax9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx6) * 86);
        ecx10 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx5) * 86);
        do {
            if (*reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(edi2) + reinterpret_cast<uint32_t>(eax9) + 16) == esi3->f14) 
                goto addr_4281ba_5;
            eax9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax9) + 86);
            ++edx6;
        } while (reinterpret_cast<int32_t>(eax9) < reinterpret_cast<int32_t>(ecx10));
        goto addr_4281c6_2;
    }
    addr_4281cb_7:
    g4845e0 = edi2;
    return eax8;
    addr_4281ba_5:
    eax8 = edx6;
    goto addr_4281cb_7;
}

struct s169 {
    signed char[24] pad24;
    int16_t f18;
};

struct s170 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s172 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s171 {
    signed char[46] pad46;
    struct s170* f2e;
    struct s172* f32;
};

void** g483dcc = reinterpret_cast<void**>(68);

void** g483dd4 = reinterpret_cast<void**>(0xf1);

void** g483dd0 = reinterpret_cast<void**>(82);

void* g483dd8 = reinterpret_cast<void*>(0xca10cc4);

void fun_424300(void** ecx) {
    struct s169* eax2;
    struct s170* eax3;
    struct s171* eax4;
    struct s172* edx5;
    void** ebx6;
    void** esi7;
    void** edx8;
    void* edx9;

    if (static_cast<int32_t>(eax2->f18) != -1) {
        eax3 = eax4->f2e;
        edx5 = eax4->f32;
        if (reinterpret_cast<signed char>(eax3->f4) >= reinterpret_cast<signed char>(edx5->f4)) {
            g483dcc = edx5->f4;
        } else {
            g483dcc = eax3->f4;
        }
        ebx6 = eax3->f0;
        esi7 = edx5->f0;
        if (reinterpret_cast<signed char>(ebx6) <= reinterpret_cast<signed char>(esi7)) {
            g483dd4 = esi7;
            g483dd0 = ebx6;
        } else {
            g483dd4 = ebx6;
            g483dd0 = esi7;
        }
        edx8 = g483dcc;
        edx9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx8) - reinterpret_cast<unsigned char>(g483dd4));
    } else {
        edx9 = reinterpret_cast<void*>(0);
    }
    g483dd8 = edx9;
    return;
}

int32_t g4837a4 = 0x85a5f300;

struct s173 {
    signed char[12] pad12;
    void** fc;
    signed char[3] pad16;
    int32_t f10;
    uint32_t f14;
    signed char[32] pad56;
    void** f38;
    signed char[3] pad60;
    void** f3c;
    signed char[7] pad68;
    void* f44;
    signed char[33] pad105;
    unsigned char f69;
};

void** g4837a0 = reinterpret_cast<void**>(21);

void** g4837ac = reinterpret_cast<void**>(0xe0);

int32_t g48378c = 0x2eb90000;

unsigned char fun_423fd0(void** ecx);

void** g483788 = reinterpret_cast<void**>(15);

void** fun_4231b0(void** ecx) {
    void** edx2;
    void** eax3;
    struct s173* eax4;
    void** eax5;
    void** eax6;
    int32_t ebx7;
    int32_t ebx8;
    int32_t ebx9;
    void** ecx10;
    unsigned char eax11;
    unsigned char eax12;
    void** eax13;
    void** ebx14;
    void* ebp15;
    unsigned char dl16;
    void** eax17;
    void** eax18;
    void** eax19;
    void* eax20;

    g4837a4 = 0;
    eax3 = fun_423010(edx2);
    if (!eax3) {
        addr_423302_2:
        return eax3;
    } else {
        if (eax4->f69 & 16) {
            fun_424370(edx2);
            eax4->fc = edx2;
            eax5 = g4837a0;
            eax4->f38 = eax5;
            eax6 = g4837ac;
            eax4->f3c = eax6;
            eax4->f10 = ebx7;
            fun_424420(edx2);
            if (!(eax4->f69 & 0x90)) {
                while (ebx8 = g48378c, ebx9 = ebx8 - 1, g48378c = ebx9, ebx9 != -1) {
                    ecx10 = *reinterpret_cast<void***>(ebx9 * 4 + 0x483710);
                    eax11 = fun_423fd0(ecx10);
                    eax12 = fun_423fd0(ecx10);
                    if (eax11 == eax12) 
                        continue;
                    if (!*reinterpret_cast<void***>(ecx10 + 18)) 
                        continue;
                    fun_428460(62);
                }
            }
        } else {
            eax13 = g4837ac;
            ebx14 = g4837a0;
            ebp15 = eax4->f44;
            if (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax13) - reinterpret_cast<unsigned char>(ebx14)) >= reinterpret_cast<int32_t>(ebp15)) {
                dl16 = eax4->f69;
                g4837a4 = 1;
                if (dl16 & 0x80 || (eax17 = g4837ac, reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax17) - eax4->f14) >= reinterpret_cast<int32_t>(ebp15))) {
                    if (eax4->f69 & 0x80 || (eax18 = g4837a0, reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax18) - eax4->f14) <= reinterpret_cast<int32_t>(0x180000))) {
                        if (!(eax4->f69 & 68) && (eax19 = g4837a0, eax20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax19) - reinterpret_cast<unsigned char>(g483788)), reinterpret_cast<int32_t>(eax20) > reinterpret_cast<int32_t>(0x180000))) {
                            return 0;
                        }
                    } else {
                        return 0;
                    }
                } else {
                    return 0;
                }
            } else {
                eax3 = reinterpret_cast<void**>(0);
                goto addr_423302_2;
            }
        }
    }
    eax3 = reinterpret_cast<void**>(1);
    goto addr_423302_2;
}

struct s174 {
    signed char[18] pad18;
    int16_t f12;
};

struct s175 {
    signed char[132] pad132;
    int32_t f84;
};

void** fun_41e970(void** ecx);

void** fun_4292d0(void** ecx);

int32_t fun_428da0(void** ecx);

void** fun_41e6a0(void** ecx);

int32_t fun_4296d0(void** ecx) {
    int32_t ebx2;
    struct s174* edx3;
    struct s175* eax4;
    void** edx5;
    int32_t edx6;
    uint32_t edx7;
    void** eax8;
    int32_t eax9;
    void** eax10;
    void** eax11;
    void** eax12;
    void** eax13;
    void** eax14;
    void** eax15;
    void** eax16;
    void** eax17;
    void** eax18;
    void** eax19;
    void** eax20;
    void** eax21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** eax28;
    void** eax29;
    void** eax30;
    void** eax31;
    void** eax32;
    void** eax33;
    void** eax34;
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
    void** eax50;
    void** eax51;
    void** eax52;

    if (ebx2 && edx3->f12 != 0x7c) {
        return 0;
    }
    if (!eax4->f84) {
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx5 + 16)) & 32)) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx5 + 18)) < reinterpret_cast<unsigned char>(1) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx5 + 18)) > reinterpret_cast<unsigned char>(1) && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx5 + 18)) < reinterpret_cast<unsigned char>(32) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx5 + 18)) > reinterpret_cast<unsigned char>(34))) {
                return 0;
            }
        } else {
            return 0;
        }
    }
    *reinterpret_cast<void***>(&edx6) = *reinterpret_cast<void***>(edx5 + 18);
    edx7 = reinterpret_cast<uint32_t>(edx6 - 1);
    if (*reinterpret_cast<uint16_t*>(&edx7) <= 0x8b) 
        goto addr_429724_9;
    addr_429e1d_10:
    return 1;
    addr_429724_9:
    switch (edx7 & 0xffff) {
    case 0:
    case 25:
    case 26:
    case 27:
    case 30:
    case 31:
    case 32:
    case 33:
    case 0x74:
    case 0x75:
        fun_41e970(edx5);
        return 1;
    case 6:
        eax8 = fun_4212e0(edx5);
        if (eax8) {
            fun_4292d0(edx5);
            return 1;
        }
    case 8:
        eax9 = fun_428da0(edx5);
        if (eax9) {
            fun_4292d0(edx5);
            return 1;
        }
    case 10:
        fun_4292d0(edx5);
        fun_417720(edx5);
        return 1;
    case 13:
        eax10 = fun_425c00(edx5);
        if (eax10) {
            fun_4292d0(edx5);
            return 1;
        }
    case 14:
        eax11 = fun_425c00(edx5);
        if (eax11) {
            fun_4292d0(edx5);
            return 1;
        }
    case 17:
        eax12 = fun_420f30(edx5);
        if (eax12) {
            fun_4292d0(edx5);
            return 1;
        }
    case 19:
        eax13 = fun_425c00(edx5);
        if (eax13) {
            fun_4292d0(edx5);
            return 1;
        }
    case 20:
        eax14 = fun_425c00(edx5);
        if (eax14) {
            fun_4292d0(edx5);
            return 1;
        }
    case 22:
        eax15 = fun_420f30(edx5);
        if (eax15) {
            fun_4292d0(edx5);
            return 1;
        }
    case 28:
        eax16 = fun_41e7a0(edx5);
        if (eax16) {
            fun_4292d0(edx5);
            return 1;
        }
    case 40:
        eax17 = fun_41e220(edx5);
        if (eax17) {
            fun_4292d0(edx5);
            return 1;
        }
    case 41:
        eax18 = fun_41e7a0(edx5);
        if (eax18) {
            fun_4292d0(edx5);
            return 1;
        }
    case 42:
        eax19 = fun_41e220(edx5);
        if (eax19) {
            fun_4292d0(edx5);
            return 1;
        }
    case 44:
        eax20 = fun_420f30(edx5);
        if (eax20) {
            fun_4292d0(edx5);
            return 1;
        }
    case 48:
        eax21 = fun_41e220(edx5);
        if (eax21) {
            fun_4292d0(edx5);
            return 1;
        }
    case 49:
        eax22 = fun_41e7a0(edx5);
        if (eax22) {
            fun_4292d0(edx5);
            return 1;
        }
    case 50:
        fun_4292d0(edx5);
        fun_417740(edx5);
        return 1;
    case 54:
        eax23 = fun_420f30(edx5);
        if (eax23) {
            fun_4292d0(edx5);
            return 1;
        }
    case 59:
        eax24 = fun_420f30(edx5);
        if (eax24) {
            fun_4292d0(edx5);
            return 1;
        }
    case 60:
        eax25 = fun_41e7a0(edx5);
        if (eax25) {
            fun_4292d0(edx5);
            return 1;
        }
    case 61:
        eax26 = fun_425c00(edx5);
        if (eax26) {
            fun_4292d0(edx5);
            return 1;
        }
    case 62:
        eax27 = fun_41e7a0(edx5);
        if (eax27) {
            fun_4292d0(edx5);
            return 1;
        }
    case 63:
        eax28 = fun_420f30(edx5);
        if (eax28) {
            fun_4292d0(edx5);
            return 1;
        }
    case 64:
        eax29 = fun_420f30(edx5);
        if (eax29) {
            fun_4292d0(edx5);
            return 1;
        }
    case 65:
        eax30 = fun_425c00(edx5);
        if (eax30) {
            fun_4292d0(edx5);
            return 1;
        }
    case 66:
        eax31 = fun_425c00(edx5);
        if (eax31) {
            fun_4292d0(edx5);
            return 1;
        }
    case 67:
        eax32 = fun_425c00(edx5);
        if (eax32) {
            fun_4292d0(edx5);
            return 1;
        }
    case 68:
        eax33 = fun_420f30(edx5);
        if (eax33) {
            fun_4292d0(edx5);
            return 1;
        }
    case 69:
        eax34 = fun_420f30(edx5);
        if (eax34) {
            fun_4292d0(edx5);
            return 1;
        }
    case 70:
        eax35 = fun_420f30(edx5);
        if (eax35) {
            fun_4292d0(edx5);
            return 1;
        }
    case 98:
    case 0x85:
    case 0x87:
        eax36 = fun_41e6a0(edx5);
        if (eax36) {
            fun_4292d0(edx5);
            return 1;
        }
    case 100:
        eax37 = fun_420f30(edx5);
        if (eax37) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x65:
        eax38 = fun_420f30(edx5);
        if (eax38) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x66:
        eax39 = fun_41e7a0(edx5);
        if (eax39) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x6e:
        eax40 = fun_41e7a0(edx5);
        if (eax40) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x6f:
        eax41 = fun_41e7a0(edx5);
        if (eax41) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x70:
        eax42 = fun_41e7a0(edx5);
        if (eax42) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x71:
        eax43 = fun_41e7a0(edx5);
        if (eax43) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x72:
        eax44 = fun_41e7a0(edx5);
        if (eax44) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x73:
        eax45 = fun_41e7a0(edx5);
        if (eax45) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x79:
        eax46 = fun_425c00(edx5);
        if (eax46) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x7a:
        eax47 = fun_425c00(edx5);
        if (eax47) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x7e:
        eax48 = fun_4212e0(edx5);
        if (eax48) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x82:
        eax49 = fun_420f30(edx5);
        if (eax49) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x83:
        eax50 = fun_420f30(edx5);
        if (eax50) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x84:
    case 0x86:
    case 0x88:
        eax51 = fun_41e6a0(edx5);
        if (eax51) {
            fun_4292d0(edx5);
            return 1;
        }
    case 0x89:
        goto addr_429e0a_103;
    case 0x8a:
        goto addr_429e0a_103;
    case 0x8b:
        eax52 = fun_420f30(edx5);
        if (eax52) {
            fun_4292d0(edx5);
            return 1;
        }
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 9:
    case 11:
    case 12:
    case 15:
    case 16:
    case 18:
    case 21:
    case 23:
    case 24:
    case 29:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 43:
    case 45:
    case 46:
    case 47:
    case 51:
    case 52:
    case 53:
    case 55:
    case 56:
    case 57:
    case 58:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 99:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7f:
    case 0x80:
    case 0x81:
        goto 0x429e1d;
    }
    goto addr_429e1d_10;
    addr_429e0a_103:
    fun_4229d0(edx5);
    fun_4292d0(edx5);
    goto addr_429e1d_10;
}

void** fun_41ee90(void** ecx);

struct s176 {
    signed char[116] pad116;
    uint32_t f74;
};

void** fun_41efd0(void** ecx) {
    void** eax2;
    void** edx3;
    void** eax4;
    struct s176* eax5;

    eax2 = fun_41ee90(ecx);
    if (eax2) {
        eax4 = fun_41d460(ecx, edx3);
        eax5->f74 = reinterpret_cast<unsigned char>(eax4) & 15;
        eax2 = reinterpret_cast<void**>(1);
    }
    return eax2;
}

struct s177 {
    signed char[112] pad112;
    uint32_t f70;
};

struct s179 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s178 {
    signed char[12] pad12;
    void*** fc;
    signed char[4] pad20;
    void** f14;
    signed char[1] pad22;
    int16_t f16;
    signed char[32] pad56;
    void** f38;
    signed char[35] pad92;
    struct s179* f5c;
    signed char[9] pad105;
    unsigned char f69;
    unsigned char f6a;
    signed char[5] pad112;
    int32_t f70;
};

void** fun_41ee90(void** ecx) {
    int32_t edi2;
    struct s177* eax3;
    void** ebp4;
    void** edi5;
    void** ecx6;
    struct s178* eax7;
    void** eax8;
    unsigned char dl9;
    void** eax10;
    int32_t edi11;
    int1_t zf12;
    void** ecx13;
    int32_t edi14;
    int32_t eax15;
    void** edx16;

    edi2 = g48378c;
    if (eax3->f70 != 8) {
        if (eax3->f70 >= 8) {
            fun_43bd40(ecx, "Weird actor->movedir!", ebp4, edi5);
        }
        ecx6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax7->fc) + eax7->f5c->f3c * *reinterpret_cast<uint32_t*>(eax7->f70 * 4 + 0x464c28));
        eax8 = fun_4231b0(ecx6);
        if (eax8) {
            edi2 = g48378c;
            dl9 = eax7->f69;
            eax7->f6a = reinterpret_cast<unsigned char>(eax7->f6a & 0xdf);
            if (!(dl9 & 64)) {
                eax7->f14 = eax7->f38;
            }
            eax10 = reinterpret_cast<void**>(1);
        } else {
            edi11 = g48378c;
            if (!(eax7->f69 & 64) || (zf12 = g4837a4 == 0, zf12)) {
                if (edi11) {
                    eax7->f70 = 8;
                    ecx13 = reinterpret_cast<void**>(0);
                    while (edi14 = edi11 - 1, edi14 != -1) {
                        g48378c = edi14;
                        eax15 = fun_4296d0(ecx13);
                        edi11 = g48378c;
                        if (!eax15) 
                            continue;
                        ecx13 = reinterpret_cast<void**>(1);
                    }
                    g48378c = edi14;
                    return ecx13;
                } else {
                    g48378c = edi11;
                    return 0;
                }
            } else {
                edx16 = g4837a0;
                if (reinterpret_cast<signed char>(eax7->f14) >= reinterpret_cast<signed char>(edx16)) {
                    eax7->f14 = eax7->f14 + 0xfffc0000;
                } else {
                    eax7->f16 = reinterpret_cast<int16_t>(eax7->f16 + 4);
                }
                eax7->f6a = reinterpret_cast<unsigned char>(eax7->f6a | 32);
                g48378c = edi11;
                return 1;
            }
        }
    } else {
        eax10 = reinterpret_cast<void**>(0);
    }
    g48378c = edi2;
    return eax10;
}

struct s180 {
    signed char[52] pad52;
    int32_t* f34;
};

struct s181 {
    signed char[12] pad12;
    int32_t fc;
    int32_t f10;
    void* f14;
    signed char[28] pad52;
    int32_t* f34;
    signed char[12] pad68;
    int32_t f44;
};

int32_t g484678 = 0xe2c00048;

int32_t g4654c4 = 1;

struct s182 {
    signed char[12] pad12;
    int32_t fc;
    int32_t f10;
    int32_t f14;
    signed char[44] pad68;
    void** f44;
};

uint32_t g484688 = 0x481610a1;

void** g484684 = reinterpret_cast<void**>(72);

int32_t g484664 = 0x48124015;

int32_t g484668 = 0x4508800;

void** g48468c = reinterpret_cast<void**>(0);

int32_t g484680 = 0x126c0d3b;

int32_t g48467c = 0x4500806;

int32_t g48466c = 0x2a6c0d3b;

int32_t g484670 = 0xc740048;

void** fun_427c10(void** ecx);

int32_t g484674 = 0x2a6c158a;

void** fun_427cb0(void** ecx) {
    void** ecx2;
    void** edi3;
    uint32_t ecx4;
    struct s180* eax5;
    uint32_t eax6;
    struct s181* edx7;
    uint32_t eax8;
    void** eax9;
    int32_t eax10;
    int32_t edx11;
    void** ecx12;
    struct s182* eax13;
    int32_t edi14;
    uint32_t eax15;
    void* edx16;
    uint32_t ebp17;
    int32_t eax18;
    int32_t edx19;
    void** eax20;
    int32_t ecx21;

    ecx2 = g4845e0;
    edi3 = g4845e0;
    ecx4 = reinterpret_cast<int32_t>(*eax5->f34 - reinterpret_cast<unsigned char>(ecx2)) / 86 * reinterpret_cast<unsigned char>(g4845ec);
    eax6 = reinterpret_cast<int32_t>(*edx7->f34 - reinterpret_cast<unsigned char>(edi3)) / 86 + ecx4;
    eax8 = eax6 & 7;
    eax9 = g4845a8;
    *reinterpret_cast<signed char*>(&eax9) = *reinterpret_cast<signed char*>((reinterpret_cast<int32_t>(eax6) >> 3) + reinterpret_cast<unsigned char>(eax9));
    if (!(reinterpret_cast<unsigned char>(eax9) & 0xff & 1 << *reinterpret_cast<unsigned char*>(&eax8))) {
        eax10 = g484678;
        edx11 = g4654c4;
        ecx12 = eax13->f44;
        g484678 = eax10 + 1;
        g4654c4 = edx11 + 1;
        edi14 = edx7->f44;
        eax15 = eax13->f14 + reinterpret_cast<unsigned char>(ecx12) - (reinterpret_cast<signed char>(ecx12) >> 2);
        edx16 = edx7->f14;
        g484688 = eax15;
        ebp17 = g484688;
        g484684 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx7->f14) - ebp17);
        g484664 = eax13->fc;
        g484668 = eax13->f10;
        eax18 = edx7->fc;
        g48468c = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx16) + edi14 - eax15);
        g484680 = eax18;
        edx19 = eax13->fc;
        g48467c = edx7->f10;
        g48466c = edx7->fc - edx19;
        g484670 = edx7->f10 - eax13->f10;
        eax20 = fun_427c10(ecx12);
    } else {
        ecx21 = g484674;
        eax20 = reinterpret_cast<void**>(0);
        g484674 = ecx21 + 1;
    }
    return eax20;
}

uint32_t g4925e0 = 0x25180500;

uint32_t g4925dc = 0x8491;

void** fun_42d8e0(void** ecx);

void** fun_42db10(void** ecx) {
    uint32_t eax2;
    uint32_t edx3;
    void** eax4;

    g4925e0 = eax2;
    g4925dc = edx3;
    eax4 = fun_42d8e0(ecx);
    return eax4;
}

void** fun_423fa0(void** ecx) {
    void* ebx2;
    uint32_t eax3;
    uint32_t edx4;
    uint32_t edx5;
    void* eax6;
    uint32_t edx7;
    uint32_t edx8;
    uint32_t edx9;
    void* ecx10;

    __asm__("cdq ");
    ebx2 = reinterpret_cast<void*>((eax3 ^ edx4) - edx5);
    __asm__("cdq ");
    eax6 = reinterpret_cast<void*>((edx7 ^ edx8) - edx9);
    ecx10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx2) + reinterpret_cast<uint32_t>(eax6));
    if (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(eax6)) {
        eax6 = ebx2;
    }
    return reinterpret_cast<uint32_t>(ecx10) - (reinterpret_cast<int32_t>(eax6) >> 1);
}

void** fun_41e7a0(void** ecx) {
    void** edi2;
    void** edx3;
    void** v4;
    void** v5;
    void** eax6;
    void** ecx7;
    void** eax8;

    edi2 = edx3;
    v4 = reinterpret_cast<void**>(0);
    v5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi2) * 4);
    do {
        eax6 = fun_428190(ecx);
        if (reinterpret_cast<signed char>(eax6) < reinterpret_cast<signed char>(0)) 
            break;
        ecx7 = g4845e0;
        ecx = ecx7 + reinterpret_cast<unsigned char>(eax6) * 86;
    } while (*reinterpret_cast<void***>(ecx + 74) || (v4 = reinterpret_cast<void**>(1), eax8 = fun_4375e0(ecx, v5, 1), fun_42af30(), *reinterpret_cast<void***>(ecx + 74) = eax8, *reinterpret_cast<void***>(eax8 + 8) = reinterpret_cast<void**>(0x41e500), *reinterpret_cast<void***>(eax8 + 32) = reinterpret_cast<void**>(0x96), *reinterpret_cast<void***>(eax8 + 24) = reinterpret_cast<void**>(0x20000), *reinterpret_cast<void***>(eax8 + 16) = ecx, *reinterpret_cast<void***>(eax8 + 12) = edi2, reinterpret_cast<unsigned char>(edi2) > reinterpret_cast<unsigned char>(7)));
    goto addr_41e82c_4;
    return v4;
    addr_41e82c_4:
    goto *reinterpret_cast<int32_t*>(v5 + 0x41e77c);
}

struct s184 {
    signed char[16] pad16;
    void** f10;
};

struct s183 {
    signed char[12] pad12;
    void** fc;
    signed char[19] pad32;
    uint32_t f20;
    signed char[84] pad120;
    struct s184* f78;
    signed char[12] pad136;
    uint32_t f88;
};

struct s185 {
    signed char[136] pad136;
    int32_t f88;
};

struct s186 {
    struct s184* f0;
    signed char[28] pad32;
    int32_t f20;
};

void** fun_41f260(void** ecx) {
    struct s183* esi2;
    struct s183* eax3;
    int32_t v4;
    int32_t edx5;
    int1_t zf6;
    int32_t ebp7;
    uint32_t v8;
    struct s185* eax9;
    struct s186* edi10;
    void** eax11;
    void** ecx12;
    void** eax13;
    uint32_t eax14;
    void** eax15;

    esi2 = eax3;
    v4 = edx5;
    zf6 = g4668b0 == 0;
    if (!zf6) {
        return 0;
    }
    ebp7 = 0;
    v8 = reinterpret_cast<uint32_t>(eax9->f88 - 1) & 3;
    while (1) {
        if (*reinterpret_cast<int32_t*>(esi2->f88 * 4 + 0x482978)) {
            ++ebp7;
            if (ebp7 == 3) 
                break;
            if (esi2->f88 == v8) 
                break;
            edi10 = reinterpret_cast<struct s186*>(esi2->f88 * 0x118 + 0x482518);
            if (edi10->f20 <= 0) 
                goto addr_41f33a_9;
            eax11 = fun_427cb0(ecx);
            if (!eax11) 
                goto addr_41f33a_9;
            if (v4) 
                goto addr_41f327_12;
            ecx12 = edi10->f0->f10;
            eax13 = fun_42db10(ecx12);
            eax14 = reinterpret_cast<unsigned char>(eax13) - esi2->f20;
            if (eax14 <= 0x40000000) 
                goto addr_41f327_12;
            if (eax14 >= 0xc0000000) 
                goto addr_41f327_12;
            ecx = esi2->fc;
            eax15 = fun_423fa0(ecx);
            if (reinterpret_cast<signed char>(eax15) <= reinterpret_cast<signed char>(0x400000)) 
                goto addr_41f327_12;
        }
        addr_41f33a_9:
        esi2->f88 = esi2->f88 + 1 & 3;
    }
    return 0;
    addr_41f327_12:
    esi2->f78 = edi10->f0;
    return 1;
}

struct s188 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
};

struct s187 {
    signed char[36] pad36;
    int32_t f24;
    int32_t f28;
    signed char[52] pad96;
    int32_t f60;
    struct s188* f64;
};

void** fun_424ae0(void** ecx, void** a2, void** a3) {
    struct s187* ebx4;
    struct s187* eax5;
    int32_t edx6;
    struct s188* edx7;
    int32_t edx8;

    ebx4 = eax5;
    if (edx6) {
        while (1) {
            edx7 = reinterpret_cast<struct s188*>(edx8 * 28 + 0x45a184);
            ebx4->f64 = edx7;
            ebx4->f60 = edx7->f8;
            ebx4->f24 = edx7->f0;
            ebx4->f28 = edx7->f4;
            if (edx7->fc) {
                edx7->fc();
            }
            edx8 = edx7->f10;
            if (ebx4->f60) 
                break;
            if (!edx8) 
                goto addr_424ae8_6;
        }
    } else {
        addr_424ae8_6:
        ebx4->f64 = reinterpret_cast<struct s188*>(0);
        fun_4252a0(ecx);
        goto a3;
    }
    goto a3;
}

struct s190 {
    signed char[12] pad12;
    int32_t fc;
    int32_t f10;
};

struct s189 {
    signed char[12] pad12;
    uint32_t fc;
    uint32_t f10;
    signed char[92] pad112;
    void** f70;
    signed char[3] pad116;
    uint32_t f74;
    struct s190* f78;
};

struct s191 {
    signed char[120] pad120;
    int32_t f78;
};

void** fun_41eff0(void** ecx) {
    struct s189* ebx2;
    struct s189* eax3;
    struct s191* eax4;
    void** v5;
    void** v6;
    void** edi7;
    uint32_t eax8;
    void** ecx9;
    uint32_t esi10;
    uint32_t edx11;
    void** v12;
    void** v13;
    uint32_t eax14;
    uint32_t eax15;
    uint32_t v16;
    void** eax17;
    void** eax18;
    void** v19;
    void** eax20;
    void** eax21;
    void** v22;
    void** edx23;
    void** eax24;
    void** v25;
    void** eax26;
    void** edx27;
    void** eax28;
    void** v29;
    void** eax30;
    void** v31;
    void** eax32;
    void** v33;
    void** eax34;
    void** v35;
    void** eax36;
    void** v37;
    void** eax38;

    ebx2 = eax3;
    if (!eax4->f78) {
        fun_43bd40(ecx, "P_NewChaseDir: called with no target", v5, v6);
    }
    edi7 = ebx2->f70;
    eax8 = ebx2->f10;
    ecx9 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi7) * 4 + 0x464c68);
    esi10 = ebx2->f78->fc - ebx2->fc;
    edx11 = ebx2->f78->f10 - eax8;
    if (reinterpret_cast<int32_t>(esi10) <= reinterpret_cast<int32_t>(0xa0000)) {
        if (reinterpret_cast<int32_t>(esi10) >= reinterpret_cast<int32_t>(0xfff60000)) {
            v12 = reinterpret_cast<void**>(8);
        } else {
            v12 = reinterpret_cast<void**>(4);
        }
    } else {
        v12 = reinterpret_cast<void**>(0);
    }
    if (reinterpret_cast<int32_t>(edx11) >= reinterpret_cast<int32_t>(0xfff60000)) {
        if (reinterpret_cast<int32_t>(edx11) <= reinterpret_cast<int32_t>(0xa0000)) {
            v13 = reinterpret_cast<void**>(8);
        } else {
            v13 = reinterpret_cast<void**>(2);
        }
    } else {
        v13 = reinterpret_cast<void**>(6);
    }
    if (v12 == 8 || (v13 == 8 || ((*reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx11) < reinterpret_cast<int32_t>(0)), eax14 = eax8 & 0xff, eax15 = eax14 + eax14, v16 = eax15, *reinterpret_cast<unsigned char*>(&eax15) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi10) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi10 == 0))), eax17 = *reinterpret_cast<void***>(((eax15 & 0xff) + v16) * 4 + 0x464c8c), ebx2->f70 = eax17, ecx9 == eax17) || (eax18 = fun_41efd0(ecx9), !eax18)))) {
        eax20 = fun_41d460(ecx9, v19);
        if (reinterpret_cast<signed char>(eax20) > reinterpret_cast<signed char>(0xc8) || reinterpret_cast<int32_t>((edx11 ^ edx11) - edx11) > reinterpret_cast<int32_t>((esi10 ^ edx11) - edx11)) {
            eax21 = v12;
            v12 = v13;
            v13 = eax21;
        }
        if (ecx9 == v12) {
            v12 = reinterpret_cast<void**>(8);
        }
        if (ecx9 == v13) {
            v13 = reinterpret_cast<void**>(8);
        }
        if (v12 != 8) 
            goto addr_41f121_21;
    } else {
        addr_41f249_22:
        return eax18;
    }
    addr_41f147_23:
    if (v13 == 8) {
        addr_41f176_24:
        if (edi7 == 8) {
            addr_41f1a1_25:
            eax18 = fun_41d460(ecx9, v22);
            if (!(*reinterpret_cast<unsigned char*>(&eax18) & 1)) {
                edx23 = reinterpret_cast<void**>(7);
                do {
                    if (edx23 != ecx9) {
                        ebx2->f70 = edx23;
                        eax24 = fun_41ee90(ecx9);
                        if (eax24) {
                            eax26 = fun_41d460(ecx9, v25);
                            ebx2->f74 = reinterpret_cast<unsigned char>(eax26) & 15;
                            eax18 = reinterpret_cast<void**>(1);
                        } else {
                            eax18 = reinterpret_cast<void**>(0);
                        }
                        if (eax18) 
                            goto addr_41f249_22;
                    }
                    --edx23;
                } while (!reinterpret_cast<int1_t>(edx23 == 0xffffffff));
            } else {
                edx27 = reinterpret_cast<void**>(0);
                do {
                    if (edx27 != ecx9) {
                        ebx2->f70 = edx27;
                        eax28 = fun_41ee90(ecx9);
                        if (eax28) {
                            eax30 = fun_41d460(ecx9, v29);
                            ebx2->f74 = reinterpret_cast<unsigned char>(eax30) & 15;
                            eax18 = reinterpret_cast<void**>(1);
                        } else {
                            eax18 = reinterpret_cast<void**>(0);
                        }
                        if (eax18) 
                            goto addr_41f249_22;
                    }
                    ++edx27;
                } while (reinterpret_cast<signed char>(edx27) <= reinterpret_cast<signed char>(7));
                goto addr_41f1e2_40;
            }
        } else {
            ebx2->f70 = edi7;
            eax18 = fun_41ee90(ecx9);
            if (eax18) {
                eax32 = fun_41d460(ecx9, v31);
                ebx2->f74 = reinterpret_cast<unsigned char>(eax32) & 15;
                eax18 = reinterpret_cast<void**>(1);
            }
            if (eax18) 
                goto addr_41f249_22; else 
                goto addr_41f1a1_25;
        }
    } else {
        ebx2->f70 = v13;
        eax18 = fun_41ee90(ecx9);
        if (eax18) {
            eax34 = fun_41d460(ecx9, v33);
            ebx2->f74 = reinterpret_cast<unsigned char>(eax34) & 15;
            eax18 = reinterpret_cast<void**>(1);
        }
        if (eax18) 
            goto addr_41f249_22; else 
            goto addr_41f176_24;
    }
    addr_41f21b_47:
    if (ecx9 == 8) {
        addr_41f242_48:
        ebx2->f70 = reinterpret_cast<void**>(8);
        goto addr_41f249_22;
    } else {
        ebx2->f70 = ecx9;
        eax18 = fun_41ee90(ecx9);
        if (eax18) {
            eax36 = fun_41d460(ecx9, v35);
            ebx2->f74 = reinterpret_cast<unsigned char>(eax36) & 15;
            eax18 = reinterpret_cast<void**>(1);
        }
        if (eax18) 
            goto addr_41f249_22; else 
            goto addr_41f242_48;
    }
    addr_41f1e2_40:
    goto addr_41f21b_47;
    addr_41f121_21:
    ebx2->f70 = v12;
    eax18 = fun_41ee90(ecx9);
    if (eax18) {
        eax38 = fun_41d460(ecx9, v37);
        ebx2->f74 = reinterpret_cast<unsigned char>(eax38) & 15;
        eax18 = reinterpret_cast<void**>(1);
    }
    if (eax18) 
        goto addr_41f249_22; else 
        goto addr_41f147_23;
}

struct s192 {
    signed char[120] pad120;
    void** f78;
};

void** fun_41ed30(void** ecx) {
    struct s192* eax2;
    void** ecx3;
    void** eax4;
    void** eax5;

    if (eax2->f78) {
        ecx3 = eax2->f78;
        eax4 = fun_423fa0(ecx3);
        if (reinterpret_cast<signed char>(eax4) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx3 + 92) + 64) + 0x2c0000)) {
            eax5 = fun_427cb0(ecx3);
            if (eax5) {
                eax5 = reinterpret_cast<void**>(1);
            }
        } else {
            return 0;
        }
    } else {
        eax5 = reinterpret_cast<void**>(0);
    }
    return eax5;
}

struct s194 {
    signed char[40] pad40;
    int32_t f28;
};

struct s195 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s193 {
    signed char[16] pad16;
    void* f10;
    signed char[68] pad88;
    void** f58;
    signed char[3] pad92;
    struct s194* f5c;
    signed char[8] pad104;
    unsigned char f68;
    signed char[15] pad120;
    struct s195* f78;
    int32_t f7c;
};

void** fun_41ed90(void** ecx) {
    void** eax2;
    struct s193* eax3;
    void** ecx4;
    void** eax5;
    void* edx6;
    void** edx7;
    void** ecx8;
    void** ebp9;
    void** eax10;

    eax2 = fun_427cb0(ecx);
    if (eax2) {
        if (!(eax3->f68 & 64)) {
            if (!eax3->f7c) {
                ecx4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax3->f10) - eax3->f78->f10);
                eax5 = fun_423fa0(ecx4);
                edx6 = reinterpret_cast<void*>(eax5 + 0xffc00000);
                if (!eax3->f5c->f28) {
                    edx6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx6) - 0x800000);
                }
                edx7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx6) >> 16);
                if (!reinterpret_cast<int1_t>(eax3->f58 == 3) || reinterpret_cast<signed char>(edx7) <= reinterpret_cast<signed char>(0x380)) {
                    if (reinterpret_cast<int1_t>(eax3->f58 == 5)) {
                        if (reinterpret_cast<signed char>(edx7) >= reinterpret_cast<signed char>(0xc4)) {
                            edx7 = reinterpret_cast<void**>(reinterpret_cast<signed char>(edx7) >> 1);
                        } else {
                            return 0;
                        }
                    }
                    ecx8 = eax3->f58;
                    if (ecx8 == 21 || (ecx8 == 19 || reinterpret_cast<int1_t>(ecx8 == 18))) {
                        edx7 = reinterpret_cast<void**>(reinterpret_cast<signed char>(edx7) >> 1);
                    }
                    if (reinterpret_cast<signed char>(edx7) > reinterpret_cast<signed char>(0xc8)) {
                        edx7 = reinterpret_cast<void**>(0xc8);
                    }
                    if (reinterpret_cast<int1_t>(eax3->f58 == 21) && reinterpret_cast<signed char>(edx7) > reinterpret_cast<signed char>(0xa0)) {
                        edx7 = reinterpret_cast<void**>(0xa0);
                    }
                    eax10 = fun_41d460(ecx8, ebp9);
                    if (reinterpret_cast<signed char>(eax10) >= reinterpret_cast<signed char>(edx7)) {
                        eax2 = reinterpret_cast<void**>(1);
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
            eax2 = reinterpret_cast<void**>(1);
            eax3->f68 = reinterpret_cast<unsigned char>(eax3->f68 & 0xbf);
        }
    }
    return eax2;
}

struct s196 {
    signed char[120] pad120;
    int32_t f78;
};

struct s198 {
    signed char[16] pad16;
    void** f10;
    signed char[89] pad106;
    unsigned char f6a;
};

struct s197 {
    signed char[32] pad32;
    void** f20;
    signed char[71] pad104;
    unsigned char f68;
    signed char[15] pad120;
    struct s198* f78;
};

struct s199 {
    signed char[104] pad104;
    unsigned char f68;
};

void fun_41f670(void** ecx) {
    struct s196* eax2;
    struct s197* eax3;
    struct s199* eax4;
    void** ecx5;
    void** eax6;
    void** esi7;
    void** eax8;
    void** eax9;

    if (eax2->f78 && (eax3->f68 = reinterpret_cast<unsigned char>(eax4->f68 & 0xdf), ecx5 = eax3->f78->f10, eax6 = fun_42db10(ecx5), eax3->f20 = eax6, !!(eax3->f78->f6a & 4))) {
        eax8 = fun_41d460(ecx5, esi7);
        eax9 = fun_41d460(ecx5, esi7);
        eax3->f20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax3->f20) + (reinterpret_cast<unsigned char>(eax8) - reinterpret_cast<unsigned char>(eax9) << 21));
    }
    return;
}

void** g483760 = reinterpret_cast<void**>(2);

uint32_t g483758 = 0x45069868;

struct s200 {
    signed char[16] pad16;
    void* f10;
};

void*** g483768 = reinterpret_cast<void***>(0xc8680002);

struct s201 {
    signed char[68] pad68;
    int32_t f44;
};

struct s202 {
    signed char[20] pad20;
    void* f14;
};

void** g4837b0 = reinterpret_cast<void**>(0xe8);

void** fun_424860(void* ecx, uint32_t a2, int32_t a3);

int32_t fun_423700(int32_t ecx);

void** g483764 = reinterpret_cast<void**>(4);

void** fun_423b30(void** ecx) {
    void* ecx2;
    uint32_t edx3;
    int32_t ebx4;
    void** eax5;
    uint32_t ebx6;
    void* ebp7;
    struct s200* eax8;
    struct s201* eax9;
    struct s202* eax10;
    int1_t zf11;
    void** eax12;

    ecx2 = reinterpret_cast<void*>(*reinterpret_cast<int32_t*>((edx3 >> 19) * 4 + 0x46a9e0) * (ebx4 >> 16));
    g483760 = eax5;
    g483758 = ebx6;
    ebp7 = eax8->f10;
    g483768 = reinterpret_cast<void***>((eax9->f44 >> 1) + reinterpret_cast<int32_t>(eax10->f14) + 0x80000);
    g48468c = reinterpret_cast<void**>(0xa000);
    g484684 = reinterpret_cast<void**>(0xffff6000);
    g4837b0 = reinterpret_cast<void**>(0);
    fun_424860(reinterpret_cast<int32_t>(ecx2) + reinterpret_cast<uint32_t>(ebp7), 3, fun_423700);
    zf11 = g4837b0 == 0;
    if (zf11) {
        return 0;
    } else {
        eax12 = g483764;
        return eax12;
    }
}

void** g48375c = reinterpret_cast<void**>(0);

struct s203 {
    signed char[16] pad16;
    void* f10;
};

struct s204 {
    signed char[20] pad20;
    void* f14;
};

struct s205 {
    signed char[68] pad68;
    int32_t f44;
};

uint32_t fun_423880(int32_t ecx);

void** fun_423be0(void** ecx, void** a2) {
    void** eax3;
    void* ecx4;
    int32_t ebx5;
    uint32_t edx6;
    void* edx7;
    struct s203* eax8;
    void* ebp9;
    struct s204* eax10;
    void* edx11;
    struct s205* eax12;
    uint32_t ebx13;
    void** eax14;

    g483760 = eax3;
    g48375c = a2;
    ecx4 = reinterpret_cast<void*>((ebx5 >> 16) * *reinterpret_cast<int32_t*>((edx6 >> 19) * 4 + 0x46a9e0));
    edx7 = eax8->f10;
    ebp9 = eax10->f14;
    edx11 = reinterpret_cast<void*>(eax12->f44 >> 1);
    g483758 = ebx13;
    g483768 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(edx11) + reinterpret_cast<int32_t>(ebp9) + 0x80000);
    g483764 = ecx;
    eax14 = fun_424860(reinterpret_cast<int32_t>(ecx4) + reinterpret_cast<uint32_t>(edx7), 3, fun_423880);
    return eax14;
}

struct s206 {
    signed char[16] pad16;
    void** f10;
    signed char[3] pad20;
    int32_t f14;
    signed char[82] pad106;
    unsigned char f6a;
};

struct s207 {
    signed char[4631008] pad4631008;
    uint32_t f46a9e0;
};

void** fun_425850(void** ecx);

void** fun_4258c0(void** ecx) {
    void** ebx2;
    void** eax3;
    void** ebp4;
    void** eax5;
    void** ecx6;
    struct s206* edx7;
    void** eax8;
    void** eax9;
    void** eax10;
    struct s207* ecx11;
    uint32_t* ebx12;
    void** ecx13;
    void** eax14;
    void** ecx15;
    int32_t eax16;
    int32_t ebx17;

    eax3 = fun_425180(ebx2);
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax3 + 92) + 16)) {
        fun_4312d0(ebx2, ebp4);
    }
    *reinterpret_cast<void***>(eax3 + 0x78) = eax5;
    ecx6 = edx7->f10;
    eax8 = fun_42db10(ecx6);
    if (edx7->f6a & 4) {
        eax9 = fun_41d460(ecx6, ebp4);
        eax10 = fun_41d460(ecx6, ebp4);
        eax8 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax9) - reinterpret_cast<unsigned char>(eax10) << 20) + reinterpret_cast<unsigned char>(eax8));
    }
    *reinterpret_cast<void***>(eax3 + 32) = eax8;
    ecx11 = reinterpret_cast<struct s207*>((reinterpret_cast<unsigned char>(eax8) >> 19) * 4);
    ebx12 = image_base_;
    __asm__("shrd eax, edx, 0x10");
    *reinterpret_cast<void***>(eax3 + 72) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax3 + 92) + 60)) * *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx11) + reinterpret_cast<int32_t>(ebx12)));
    __asm__("shrd eax, edx, 0x10");
    *reinterpret_cast<void***>(eax3 + 76) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax3 + 92) + 60)) * ecx11->f46a9e0);
    ecx13 = *reinterpret_cast<void***>(eax5 + 16);
    eax14 = fun_423fa0(ecx13);
    ecx15 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax3 + 92) + 60);
    eax16 = reinterpret_cast<signed char>(eax14) / reinterpret_cast<signed char>(ecx15);
    ebx17 = eax16;
    if (eax16 < 1) {
        ebx17 = 1;
    }
    *reinterpret_cast<void***>(eax3 + 80) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx7->f14 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 20))) / ebx17);
    fun_425850(ecx15);
    return eax3;
}

struct s208 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s210 {
    signed char[4] pad4;
    int32_t f4;
    signed char[4] pad12;
    void** fc;
    signed char[19] pad32;
    void** f20;
    signed char[39] pad72;
    int32_t f48;
};

struct s212 {
    signed char[32] pad32;
    uint32_t f20;
};

struct s211 {
    struct s212* f0;
    signed char[28] pad32;
    uint32_t f20;
    uint32_t f24;
    int32_t f28;
    int32_t f2c;
    signed char[64] pad112;
    int32_t f70;
    signed char[80] pad196;
    unsigned char fc4;
    signed char[23] pad220;
    uint32_t fdc;
    signed char[4] pad228;
    struct s209* fe4;
};

struct s209 {
    signed char[16] pad16;
    void** f10;
    signed char[3] pad20;
    int32_t f14;
    signed char[28] pad52;
    void*** f34;
    signed char[16] pad72;
    uint32_t f48;
    uint32_t f4c;
    uint32_t f50;
    signed char[4] pad88;
    int32_t f58;
    struct s210* f5c;
    signed char[4] pad100;
    void** f64;
    signed char[3] pad104;
    unsigned char f68;
    unsigned char f69;
    signed char[1] pad107;
    unsigned char f6b;
    void** f6c;
    signed char[11] pad120;
    struct s209* f78;
    int32_t f7c;
    void** f80;
    signed char[3] pad132;
    struct s211* f84;
};

struct s213 {
    signed char[4631008] pad4631008;
    uint32_t f46a9e0;
};

void** fun_422120(void** ecx, void** a2, void** a3);

void** g618240 = reinterpret_cast<void**>(0);

struct s214 {
    signed char[4631008] pad4631008;
    int32_t f46a9e0;
};

void** fun_422370(void** ecx) {
    void** ebp2;
    struct s208* eax3;
    struct s209* eax4;
    void** eax5;
    uint32_t eax6;
    struct s211* edi7;
    int1_t zf8;
    void** edx9;
    struct s209* ebx10;
    void** ecx11;
    void** v12;
    void** eax13;
    void** v14;
    int32_t v15;
    void** v16;
    void** eax17;
    uint32_t ebx18;
    uint32_t v19;
    struct s213* v20;
    uint32_t* eax21;
    void** ecx22;
    struct s210* edx23;
    void** v24;
    void** eax25;
    struct s210* edx26;
    int1_t zf27;
    int1_t zf28;
    void** edx29;
    struct s211* eax30;
    void** eax31;
    struct s214* v32;
    uint32_t* eax33;
    int32_t ecx34;
    uint32_t v35;
    int32_t eax36;
    uint32_t eax37;
    uint32_t ecx38;
    uint32_t edx39;

    ebp2 = ecx;
    if (!(eax3->f68 & 4) || reinterpret_cast<signed char>(eax4->f6c) <= reinterpret_cast<signed char>(0)) {
        addr_4226d5_2:
        return eax5;
    } else {
        if (eax4->f6b & 1) {
            eax4->f50 = 0;
            eax6 = eax4->f50;
            eax4->f4c = eax6;
            eax4->f48 = eax6;
        }
        edi7 = eax4->f84;
        if (edi7 && (zf8 = g482a58 == 0, zf8)) {
            ebp2 = reinterpret_cast<void**>(reinterpret_cast<signed char>(ebp2) >> 1);
        }
        if (!edx9 || (eax4->f69 & 16 || ebx10 && (ebx10->f84 && ebx10->f84->f70 == 7))) {
            ecx11 = reinterpret_cast<void**>(0);
        } else {
            v12 = eax4->f10;
            eax13 = fun_42db10(v12);
            v14 = eax13;
            ecx11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(ebp2 + (reinterpret_cast<unsigned char>(ebp2) * 4 - reinterpret_cast<unsigned char>(ebp2)) * 8) << 15) / eax4->f5c->f48);
            if (reinterpret_cast<signed char>(ebp2) < reinterpret_cast<signed char>(40) && (reinterpret_cast<signed char>(ebp2) > reinterpret_cast<signed char>(eax4->f6c) && ((v15 = eax4->f14, reinterpret_cast<int32_t>(v15 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx9 + 20))) > reinterpret_cast<int32_t>(0x400000)) && (eax17 = fun_41d460(ecx11, v16), !!(*reinterpret_cast<unsigned char*>(&eax17) & 1))))) {
                ecx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx11) * 4);
                v14 = eax13 + 0x80000000;
            }
            ebx18 = reinterpret_cast<unsigned char>(v14) >> 19;
            v19 = ebx18;
            v20 = reinterpret_cast<struct s213*>(ebx18 * 4);
            eax21 = image_base_;
            __asm__("shrd eax, edx, 0x10");
            eax4->f48 = eax4->f48 + reinterpret_cast<unsigned char>(ecx11) * *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<uint32_t>(v20));
            __asm__("shrd eax, edx, 0x10");
            eax4->f4c = eax4->f4c + reinterpret_cast<unsigned char>(ecx11) * v20->f46a9e0;
        }
        if (edi7) 
            goto addr_4224cb_13;
    }
    addr_422628_14:
    ecx22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax4->f6c) - reinterpret_cast<unsigned char>(ebp2));
    eax4->f6c = ecx22;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx22 == 0))) {
        edx23 = eax4->f5c;
        eax25 = fun_41d460(ecx22, v24);
        if (reinterpret_cast<signed char>(eax25) < reinterpret_cast<signed char>(edx23->f20) && !(eax4->f6b & 1)) {
            *reinterpret_cast<unsigned char*>(&ecx22) = reinterpret_cast<unsigned char>(eax4->f68 | 64);
            eax4->f68 = *reinterpret_cast<unsigned char*>(&ecx22);
            fun_424ae0(ecx22, v24, edx9);
        }
        eax5 = eax4->f80;
        eax4->f7c = 0;
        if ((!eax5 || eax4->f58 == 3) && (ebx10 && (eax4 != ebx10 && (ebx10->f58 != 3 && ((eax4->f80 = reinterpret_cast<void**>(100), edx26 = eax4->f5c, eax4->f78 = ebx10, eax5 = reinterpret_cast<void**>((edx26->f4 * 8 - edx26->f4) * 4 + 0x45a184), eax5 == eax4->f64) && (eax5 = edx26->fc, !!eax5)))))) {
            eax5 = fun_424ae0(ecx22, v24, edx9);
            goto addr_4226d5_2;
        }
    } else {
        eax5 = fun_422120(ecx22, v24, edx9);
        goto addr_4226d5_2;
    }
    addr_4224cb_13:
    zf27 = g618240 == 0;
    if (!zf27 && ((zf28 = g482a64 == 0, zf28) && ((edx29 = g482a7c, eax30 = reinterpret_cast<struct s211*>((reinterpret_cast<uint32_t>(edx29 + reinterpret_cast<unsigned char>(edx29) * 8) * 4 - reinterpret_cast<unsigned char>(edx29)) * 8 + 0x482518), edi7 == eax30) && ecx11))) {
        eax31 = reinterpret_cast<void**>(v19 - (eax30->f0->f20 >> 19) - 0x40000000 & 0x1fff);
        v24 = eax31;
        v32 = reinterpret_cast<struct s214*>(reinterpret_cast<unsigned char>(eax31) * 4);
        eax33 = image_base_;
        ecx34 = reinterpret_cast<signed char>(ecx11) >> 3;
        __asm__("shrd eax, edx, 0x10");
        v35 = ecx34 * *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(eax33) + reinterpret_cast<uint32_t>(v32));
        eax36 = ecx34 * v32->f46a9e0;
        __asm__("shrd eax, edx, 0x10");
        g618240(4, v35, eax36, v24);
    }
    eax5 = *eax4->f34;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax5 + 14) == 11) && (eax5 = eax4->f6c, reinterpret_cast<signed char>(ebp2) >= reinterpret_cast<signed char>(eax5))) {
        ebp2 = eax5 + 0xffffffff;
    }
    if (reinterpret_cast<signed char>(ebp2) >= reinterpret_cast<signed char>(0x3e8)) 
        goto addr_4225ad_24;
    if (edi7->fc4 & 2) 
        goto addr_4226d5_2;
    if (edi7->f2c) 
        goto addr_4226d5_2;
    addr_4225ad_24:
    if (edi7->f28) {
        if (edi7->f28 != 1) {
            eax37 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(ebp2) - (reinterpret_cast<signed char>(ebp2) >> 31)) >> 1);
        } else {
            eax37 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(ebp2) / 3);
        }
        if (reinterpret_cast<int32_t>(eax37) >= reinterpret_cast<int32_t>(edi7->f24)) {
            eax37 = edi7->f24;
            edi7->f28 = 0;
        }
        ebp2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp2) - eax37);
        edi7->f24 = edi7->f24 - eax37;
    }
    ecx38 = edi7->f20 - reinterpret_cast<unsigned char>(ebp2);
    edi7->f20 = ecx38;
    if (reinterpret_cast<int32_t>(ecx38) < reinterpret_cast<int32_t>(0)) {
        edi7->f20 = 0;
    }
    edx39 = edi7->fdc + reinterpret_cast<unsigned char>(ebp2);
    edi7->fe4 = ebx10;
    edi7->fdc = edx39;
    if (reinterpret_cast<int32_t>(edx39) > reinterpret_cast<int32_t>(100)) {
        edi7->fdc = 100;
        goto addr_422628_14;
    }
}

void** fun_425760(void** ecx) {
    void** esi2;
    void** eax3;
    void** eax4;
    void** eax5;
    void** eax6;
    void** ecx7;
    int1_t zf8;

    eax3 = fun_41d460(ecx, esi2);
    fun_41d460(eax3, esi2);
    eax4 = fun_425180(37);
    *reinterpret_cast<void***>(eax4 + 80) = reinterpret_cast<void**>(0x10000);
    eax5 = fun_41d460(37, esi2);
    eax6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) & 3);
    ecx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 96)) - reinterpret_cast<unsigned char>(eax6));
    *reinterpret_cast<void***>(eax4 + 96) = ecx7;
    if (reinterpret_cast<signed char>(ecx7) < reinterpret_cast<signed char>(1)) {
        *reinterpret_cast<void***>(eax4 + 96) = reinterpret_cast<void**>(1);
    }
    zf8 = g483758 == 0x400000;
    if (zf8) {
        eax6 = fun_424ae0(ecx7, esi2, ecx);
    }
    return eax6;
}

void** g4845a4 = reinterpret_cast<void**>(0xff);

void** g4845bc = reinterpret_cast<void**>(0x74);

void** g4845b8 = reinterpret_cast<void**>(0x6d);

void** fun_424597(int32_t a1);

void** fun_424560() {
    int32_t v1;
    int32_t ebx2;
    int32_t eax3;
    int32_t edx4;
    void** ebx5;
    void** eax6;
    int1_t less7;
    void** edx8;
    void** edx9;
    void** edx10;
    int32_t eax11;
    int32_t edx12;
    void** eax13;

    v1 = ebx2;
    if (eax3 < 0 || (edx4 < 0 || ((ebx5 = g4845a4, reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(ebx5)) || ((less7 = reinterpret_cast<signed char>(edx8) < reinterpret_cast<signed char>(g4845bc), !less7) || (edx9 = g4845b8, edx10 = *reinterpret_cast<void***>(edx9 + (eax11 + edx12 * reinterpret_cast<unsigned char>(ebx5)) * 4), edx10 == 0))))) {
        addr_4245a2_2:
        eax13 = reinterpret_cast<void**>(1);
    } else {
        do {
            eax13 = fun_424597(v1);
            if (!eax13) 
                break;
            edx10 = *reinterpret_cast<void***>(edx10 + 44);
        } while (edx10);
        goto addr_4245a2_2;
    }
    return eax13;
}

struct s215 {
    signed char[124] pad124;
    void* f7c;
};

struct s216 {
    signed char[124] pad124;
    void** f7c;
};

struct s218 {
    signed char[104] pad104;
    unsigned char f68;
    signed char[3] pad108;
    int32_t f6c;
};

struct s217 {
    signed char[32] pad32;
    void** f20;
    signed char[2] pad35;
    signed char f23;
    signed char[56] pad92;
    void** f5c;
    signed char[11] pad104;
    unsigned char f68;
    signed char[7] pad112;
    uint32_t f70;
    int32_t f74;
    struct s218* f78;
    signed char[4] pad128;
    void** f80;
};

void** fun_41f490(void** ecx) {
    struct s215* eax2;
    struct s216* eax3;
    struct s217* eax4;
    void** eax5;
    void** edx6;
    uint1_t less7;
    void** ebp8;
    void** edi9;
    void** eax10;
    int1_t less11;
    int1_t zf12;
    void** eax13;
    int1_t zf14;
    void** eax15;
    int32_t edx16;
    void** eax17;
    void** eax18;
    void** eax19;
    void** ebp20;
    int1_t zf21;
    void** eax22;

    if (eax2->f7c) {
        ecx = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax2->f7c) + 0xffffffff);
        eax3->f7c = ecx;
    }
    if (eax4->f80) {
        if (!eax4->f78 || eax4->f78->f6c <= 0) {
            eax4->f80 = reinterpret_cast<void**>(0);
        } else {
            eax5 = eax4->f80 + 0xffffffff;
            eax4->f80 = eax5;
        }
    }
    if (reinterpret_cast<int32_t>(eax4->f70) < reinterpret_cast<int32_t>(8)) {
        ecx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax4->f20) & 0xe0000000);
        edx6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx) - (eax4->f70 << 29));
        eax4->f20 = ecx;
        eax5 = edx6;
        less7 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx6) < reinterpret_cast<signed char>(0));
        if (less7 | reinterpret_cast<uint1_t>(edx6 == 0)) {
            if (less7) {
                eax4->f23 = reinterpret_cast<signed char>(eax4->f23 + 32);
            }
        } else {
            eax4->f20 = ecx + 0xe0000000;
        }
    }
    if (!eax4->f78 || !(eax4->f78->f68 & 4)) {
        eax5 = fun_41f260(ecx);
        if (!eax5) {
            eax5 = fun_424ae0(ecx, ebp8, edi9);
        }
    } else {
        if (!(eax4->f68 & 0x80)) {
            if (!*reinterpret_cast<void***>(eax4->f5c + 40) || (eax10 = fun_41ed30(ecx), eax10 == 0)) {
                if (!*reinterpret_cast<void***>(eax4->f5c + 44) || ((less11 = reinterpret_cast<signed char>(g482a58) < reinterpret_cast<signed char>(4), less11) && ((zf12 = g481270 == 0, zf12) && eax4->f74) || (eax13 = fun_41ed90(ecx), eax13 == 0))) {
                    zf14 = g482a84 == 0;
                    if (zf14 || (eax4->f80 || ((eax15 = fun_427cb0(ecx), !!eax15) || (eax5 = fun_41f260(ecx), !eax5)))) {
                        edx16 = eax4->f74 - 1;
                        eax4->f74 = edx16;
                        if (edx16 < 0 || (eax17 = fun_41ee90(ecx), !eax17)) {
                            fun_41eff0(ecx);
                        }
                        eax5 = eax4->f5c;
                        if (*reinterpret_cast<void***>(eax5 + 80) && (eax5 = fun_41d460(ecx, ebp8), reinterpret_cast<signed char>(eax5) < reinterpret_cast<signed char>(3))) {
                            eax5 = fun_4312d0(ecx, ebp8);
                        }
                    }
                } else {
                    eax18 = fun_424ae0(ecx, ebp8, edi9);
                    eax4->f68 = reinterpret_cast<unsigned char>(eax4->f68 | 0x80);
                    return eax18;
                }
            } else {
                if (*reinterpret_cast<void***>(eax4->f5c + 24)) {
                    fun_4312d0(ecx, ebp8);
                }
                eax19 = fun_424ae0(ecx, ebp8, edi9);
                return eax19;
            }
        } else {
            *reinterpret_cast<unsigned char*>(&ecx + 1) = reinterpret_cast<unsigned char>(eax4->f68 & 0x7f);
            ebp20 = g482a58;
            eax4->f68 = *reinterpret_cast<unsigned char*>(&ecx + 1);
            if (ebp20 != 4 && (zf21 = g481270 == 0, zf21)) {
                eax22 = fun_41eff0(ecx);
                return eax22;
            }
        }
    }
    return eax5;
}

struct s219 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s221 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s220 {
    signed char[24] pad24;
    struct s221* f18;
};

struct s222 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s224 {
    signed char[24] pad24;
    int32_t f18;
};

struct s223 {
    signed char[28] pad28;
    struct s224* f1c;
};

struct s226 {
    signed char[70] pad70;
    int32_t f46;
};

struct s225 {
    signed char[52] pad52;
    struct s226** f34;
};

struct s227 {
    signed char[24] pad24;
    int32_t f18;
};

struct s228 {
    signed char[24] pad24;
    int32_t f18;
};

struct s229 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s231 {
    signed char[48] pad48;
    int32_t f30;
};

struct s230 {
    signed char[44] pad44;
    struct s231* f2c;
};

struct s232 {
    signed char[48] pad48;
    int32_t f30;
};

struct s234 {
    signed char[44] pad44;
    int32_t f2c;
};

struct s233 {
    signed char[48] pad48;
    struct s234* f30;
};

struct s235 {
    signed char[12] pad12;
    int32_t fc;
};

struct s236 {
    signed char[16] pad16;
    int32_t f10;
};

struct s237 {
    signed char[44] pad44;
    void** f2c;
};

struct s238 {
    signed char[44] pad44;
    int32_t f2c;
};

void fun_424370(void** ecx) {
    struct s219* eax2;
    struct s220* eax3;
    struct s222* eax4;
    struct s223* eax5;
    struct s225* eax6;
    struct s227* eax7;
    struct s228* eax8;
    struct s229* eax9;
    struct s230* eax10;
    struct s232* eax11;
    struct s233* eax12;
    uint32_t edi13;
    void** ebp14;
    void** ebx15;
    struct s235* eax16;
    void** edx17;
    struct s236* eax18;
    void** ecx19;
    int1_t less20;
    void** ebx21;
    struct s237* eax22;
    struct s238* eax23;

    if (!(eax2->f68 & 8)) {
        if (eax3->f18) {
            eax3->f18->f1c = eax4->f1c;
        }
        if (!eax5->f1c) {
            (*eax6->f34)->f46 = eax7->f18;
        } else {
            eax5->f1c->f18 = eax8->f18;
        }
    }
    if (!(eax9->f68 & 16)) {
        if (eax10->f2c) {
            eax10->f2c->f30 = eax11->f30;
        }
        if (!eax12->f30) {
            edi13 = g4845ac;
            ebp14 = g4845b0;
            ebx15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax16->fc - edi13) >> 23);
            edx17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax18->f10 - reinterpret_cast<unsigned char>(ebp14)) >> 23);
            if (reinterpret_cast<signed char>(ebx15) >= reinterpret_cast<signed char>(0) && ((ecx19 = g4845a4, reinterpret_cast<signed char>(ebx15) < reinterpret_cast<signed char>(ecx19)) && (reinterpret_cast<signed char>(edx17) >= reinterpret_cast<signed char>(0) && (less20 = reinterpret_cast<signed char>(edx17) < reinterpret_cast<signed char>(g4845bc), less20)))) {
                ebx21 = g4845b8;
                *reinterpret_cast<void***>(ebx21 + (reinterpret_cast<unsigned char>(edx17) * reinterpret_cast<unsigned char>(ecx19) + reinterpret_cast<unsigned char>(ebx15)) * 4) = eax22->f2c;
            }
        } else {
            eax12->f30->f2c = eax23->f2c;
        }
    }
    return;
}

void fun_424420(void** ecx) {
    void** eax2;
    void** dl3;
    void** eax4;
    void** eax5;
    void** edx6;
    uint32_t ecx7;
    void** esi8;
    void** edx9;
    void** eax10;
    void** edi11;
    int1_t less12;
    void** eax13;
    void*** eax14;
    void** edx15;

    eax2 = fun_42e2f0(ecx);
    dl3 = *reinterpret_cast<void***>(eax4 + 0x68);
    *reinterpret_cast<void***>(eax4 + 52) = eax2;
    if (!(reinterpret_cast<unsigned char>(dl3) & 8)) {
        eax5 = *reinterpret_cast<void***>(eax2);
        *reinterpret_cast<void***>(eax4 + 28) = reinterpret_cast<void**>(0);
        edx6 = *reinterpret_cast<void***>(eax5 + 70);
        *reinterpret_cast<void***>(eax4 + 24) = edx6;
        if (edx6) {
            *reinterpret_cast<void***>(edx6 + 28) = eax4;
        }
        *reinterpret_cast<void***>(eax5 + 70) = eax4;
    }
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 0x68)) & 16)) {
        ecx7 = g4845ac;
        esi8 = g4845b0;
        edx9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 12)) - ecx7) >> 23);
        eax10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 16)) - reinterpret_cast<unsigned char>(esi8)) >> 23);
        if (reinterpret_cast<signed char>(edx9) < reinterpret_cast<signed char>(0) || ((edi11 = g4845a4, reinterpret_cast<signed char>(edx9) >= reinterpret_cast<signed char>(edi11)) || (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(0) || (less12 = reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(g4845bc), !less12)))) {
            *reinterpret_cast<void***>(eax4 + 48) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(eax4 + 44) = *reinterpret_cast<void***>(eax4 + 48);
        } else {
            eax13 = g4845b8;
            eax14 = reinterpret_cast<void***>(eax13 + (reinterpret_cast<unsigned char>(edx9) + reinterpret_cast<unsigned char>(eax10) * reinterpret_cast<unsigned char>(edi11)) * 4);
            *reinterpret_cast<void***>(eax4 + 48) = reinterpret_cast<void**>(0);
            edx15 = *eax14;
            *reinterpret_cast<void***>(eax4 + 44) = edx15;
            if (edx15) {
                *reinterpret_cast<void***>(edx15 + 48) = eax4;
            }
            *eax14 = eax4;
        }
    }
    return;
}

struct s239 {
    signed char[12] pad12;
    void*** fc;
    void*** f10;
    void** f14;
    signed char[11] pad32;
    uint32_t f20;
};

struct s240 {
    signed char[150] pad150;
    struct s239* f96;
};

void fun_41ffa0(void** ecx) {
    struct s239* esi2;
    struct s240* eax3;
    void** eax4;
    void** eax5;
    uint32_t edi6;
    uint32_t* ebx7;
    uint32_t edi8;

    esi2 = eax3->f96;
    if (esi2 && (eax5 = fun_427cb0(eax4), !!eax5)) {
        edi6 = esi2->f20;
        fun_424370(eax4);
        ebx7 = image_base_;
        edi8 = edi6 >> 19;
        __asm__("shrd eax, edx, 0x10");
        *reinterpret_cast<void***>(eax4 + 12) = reinterpret_cast<void**>(esi2->fc + 0x180000 * ebx7[edi8]);
        __asm__("shrd eax, edx, 0x10");
        *reinterpret_cast<void***>(eax4 + 16) = reinterpret_cast<void**>(esi2->f10 + 0x180000 * *reinterpret_cast<uint32_t*>(edi8 * 4 + 0x46a9e0));
        *reinterpret_cast<void***>(eax4 + 20) = esi2->f14;
        fun_424420(eax4);
    }
    return;
}

struct s241 {
    signed char[16] pad16;
    int32_t f10;
};

struct s242 {
    signed char[12] pad12;
    int32_t fc;
};

struct s243 {
    signed char[16] pad16;
    int32_t f10;
};

uint32_t g483750 = 0xe804c483;

struct s244 {
    signed char[12] pad12;
    int32_t fc;
};

int32_t g483748 = 0xe8004506;

void* g48374c = reinterpret_cast<void*>(0x2d4f0);

void** fun_423dc0(void** ecx) {
    int32_t ecx2;
    int32_t ebx3;
    void** edi4;
    int32_t v5;
    struct s241* eax6;
    uint32_t ebp7;
    int32_t edi8;
    struct s242* eax9;
    int32_t v10;
    struct s243* eax11;
    uint32_t esi12;
    uint32_t eax13;
    int32_t esi14;
    struct s244* eax15;
    int32_t edx16;
    void* ebx17;
    int32_t edi18;
    int32_t esi19;
    int32_t ebp20;
    int32_t ecx21;
    void** eax22;

    ecx2 = ebx3 + 0x200000 << 16;
    edi4 = g4845b0;
    v5 = reinterpret_cast<int32_t>(eax6->f10 + ecx2 - reinterpret_cast<unsigned char>(edi4)) >> 23;
    ebp7 = g4845ac;
    edi8 = eax9->fc;
    v10 = reinterpret_cast<int32_t>(eax11->f10 - ecx2 - reinterpret_cast<unsigned char>(edi4)) >> 23;
    esi12 = g4845ac;
    g483750 = eax13;
    esi14 = eax15->fc;
    g483748 = edx16;
    g48374c = ebx17;
    edi18 = reinterpret_cast<int32_t>(edi8 + ecx2 - esi12) >> 23;
    esi19 = v10;
    ebp20 = reinterpret_cast<int32_t>(esi14 - ecx2 - ebp7) >> 23;
    if (esi19 <= v5) {
        do {
            ecx21 = ebp20;
            if (ebp20 <= edi18) {
                do {
                    ++ecx21;
                    eax22 = fun_424560();
                } while (ecx21 <= edi18);
            }
            ++esi19;
        } while (esi19 <= v5);
    }
    return eax22;
}

struct s245 {
    signed char[120] pad120;
    void** f78;
};

void** fun_420320(void** ecx);

void** fun_4203d0(void** ecx) {
    struct s245* esi2;
    struct s245* eax3;
    void** eax4;
    int32_t edx5;
    void** eax6;
    void** eax7;

    esi2 = eax3;
    eax4 = g484cfc;
    edx5 = 0;
    if (eax4 != "H") {
        do {
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax4 + 8) == 0x4250d0) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax4 + 88) == 18)) {
                ++edx5;
            }
            eax4 = *reinterpret_cast<void***>(eax4 + 4);
        } while (!reinterpret_cast<int1_t>(eax4 == "H"));
    }
    if (edx5 <= 20) {
        __asm__("shrd eax, edx, 0x10");
        __asm__("shrd eax, edx, 0x10");
        eax6 = fun_425180(18);
        eax7 = fun_4231b0(18);
        if (eax7) {
            *reinterpret_cast<void***>(eax6 + 0x78) = esi2->f78;
            eax4 = fun_420320(18);
        } else {
            eax4 = fun_422370(0x2710);
        }
    }
    return eax4;
}

void** fun_420f30(void** ecx) {
    void** v2;
    void** edx3;
    void** v4;
    void** v5;
    void** eax6;
    void** ecx7;
    void** edi8;
    void** eax9;

    v2 = edx3;
    v4 = reinterpret_cast<void**>(0);
    v5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v2) * 4);
    do {
        eax6 = fun_428190(ecx);
        if (reinterpret_cast<signed char>(eax6) < reinterpret_cast<signed char>(0)) 
            break;
        ecx7 = g4845e0;
        ecx = ecx7 + reinterpret_cast<unsigned char>(eax6) * 86;
        edi8 = *reinterpret_cast<void***>(ecx + 74);
    } while (edi8 || (eax9 = fun_4375e0(ecx, v5, v4), v4 = reinterpret_cast<void**>(1), fun_42af30(), *reinterpret_cast<void***>(ecx + 74) = eax9, *reinterpret_cast<void***>(eax9 + 8) = reinterpret_cast<void**>(0x420e50), *reinterpret_cast<void***>(eax9 + 12) = v2, *reinterpret_cast<void***>(eax9 + 16) = edi8, reinterpret_cast<unsigned char>(v2) > reinterpret_cast<unsigned char>(12)));
    goto addr_420fc4_4;
    return v4;
    addr_420fc4_4:
    goto *reinterpret_cast<int32_t*>(v5 + 0x420ef4);
}

int32_t g482998 = 0x4500e4ba;

void** fun_417720(void** ecx) {
    void** eax2;

    g482998 = 0;
    g482a8c = reinterpret_cast<void**>(6);
    return eax2;
}

void** g48379c = reinterpret_cast<void**>(28);

int32_t g483798 = 0xbe0000;

struct s246 {
    signed char[104] pad104;
    int32_t f68;
};

uint32_t g483790 = 0x8d000000;

uint32_t g483730 = 1;

void** g483794 = reinterpret_cast<void**>(0xbc);

uint32_t g483734 = 0x45065468;

void* g48373c = reinterpret_cast<void*>(0xc4830002);

void** g483738 = reinterpret_cast<void**>(0);

int32_t g4837a8 = 0x680d74d2;

void** fun_422ba0(void** ecx) {
    void** v2;
    void** eax3;
    void** v4;
    void** edx5;
    void** v6;
    void** ebx7;
    void** eax8;
    struct s246* eax9;
    void** eax10;
    uint32_t ebx11;
    int32_t ebx12;
    uint32_t ecx13;
    int32_t ebx14;
    void** edx15;
    void** eax16;
    void* edx17;
    void** ecx18;
    void* edx19;
    void** eax20;
    uint32_t esi21;
    void** ebp22;
    void** eax23;
    void** ecx24;
    void** edx25;
    void** eax26;
    void* eax27;
    int32_t ecx28;
    void** ecx29;
    int32_t v30;
    uint32_t eax31;
    uint32_t eax32;
    int32_t ecx33;
    int32_t esi34;
    int32_t ebp35;
    int32_t edi36;
    void** eax37;
    void** eax38;
    void** eax39;
    int32_t ecx40;

    v2 = eax3;
    v4 = edx5;
    v6 = ebx7;
    g48379c = eax8;
    g483798 = eax9->f68;
    eax10 = *reinterpret_cast<void***>(v2 + 64);
    g483790 = ebx11;
    g483730 = ebx12 + reinterpret_cast<unsigned char>(eax10);
    ecx13 = ebx14 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v2 + 64));
    g483794 = edx15;
    eax16 = *reinterpret_cast<void***>(v2 + 64);
    g483734 = ecx13;
    g48373c = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx17) + reinterpret_cast<unsigned char>(eax16));
    ecx18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx19) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v2 + 64)));
    g483738 = ecx18;
    eax20 = fun_42e2f0(ecx18);
    esi21 = g4845ac;
    ebp22 = g4845b0;
    eax23 = *reinterpret_cast<void***>(eax20);
    g4837a8 = 0;
    g48378c = 0;
    ecx24 = *reinterpret_cast<void***>(eax23);
    edx25 = g4845b0;
    g483788 = ecx24;
    eax26 = *reinterpret_cast<void***>(eax23 + 4);
    g4837a0 = ecx24;
    g4837ac = eax26;
    eax27 = g48373c;
    ecx28 = g4654c4;
    g4654c4 = ecx28 + 1;
    ecx29 = g483738;
    v30 = reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax27) - esi21 + 0x200000) >> 23;
    eax31 = g483734;
    eax32 = g483730;
    ecx33 = reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(ecx29) - esi21 - 0x200000) >> 23;
    esi34 = ecx33;
    ebp35 = reinterpret_cast<int32_t>(eax31 - reinterpret_cast<unsigned char>(ebp22) + 0xffe00000) >> 23;
    edi36 = reinterpret_cast<int32_t>(eax32 - reinterpret_cast<unsigned char>(edx25) + 0x200000) >> 23;
    if (ecx33 > v30) {
        addr_422cd0_2:
        fun_424370(v2);
        eax37 = g4837a0;
        *reinterpret_cast<void***>(v2 + 56) = eax37;
        eax38 = g4837ac;
        *reinterpret_cast<void***>(v2 + 60) = eax38;
        *reinterpret_cast<void***>(v2 + 12) = v4;
        *reinterpret_cast<void***>(v2 + 16) = v6;
        fun_424420(v2);
        eax39 = reinterpret_cast<void**>(1);
    } else {
        do {
            ecx40 = ebp35;
            if (ebp35 <= edi36) {
                do {
                    eax39 = fun_424560();
                    if (!eax39) 
                        goto addr_422d06_5;
                    ++ecx40;
                } while (ecx40 <= edi36);
            }
            ++esi34;
        } while (esi34 <= v30);
        goto addr_422cd0_2;
    }
    addr_422d06_5:
    return eax39;
}

struct s247 {
    signed char[26] pad26;
    int32_t f1a;
    int32_t f1e;
    signed char[4] pad38;
    int32_t f26;
};

int32_t g483740 = 0xe3ae804;

struct s248 {
    signed char[34] pad34;
    int32_t f22;
};

struct s249 {
    signed char[38] pad38;
    int32_t f26;
};

void** g483744 = reinterpret_cast<void**>(2);

void** fun_423f50(void** ecx) {
    struct s247* edi2;
    struct s247* eax3;
    int32_t edx4;
    int32_t esi5;
    struct s248* eax6;
    int32_t ecx7;
    struct s249* eax8;
    int32_t ecx9;
    void** eax10;

    edi2 = eax3;
    g483740 = edx4;
    esi5 = eax6->f22;
    ecx7 = eax8->f26;
    g483744 = reinterpret_cast<void**>(0);
    if (esi5 <= ecx7) {
        do {
            ecx9 = edi2->f1e;
            if (ecx9 <= edi2->f1a) {
                do {
                    fun_424560();
                    ++ecx9;
                } while (ecx9 <= edi2->f1a);
            }
            ++esi5;
        } while (esi5 <= edi2->f26);
    }
    eax10 = g483744;
    return eax10;
}

struct s250 {
    signed char[16] pad16;
    int16_t f10;
};

int32_t fun_427f30(void** a1) {
    void** ebx2;
    int16_t ax3;
    int32_t eax4;
    int32_t edx5;
    int16_t ax6;

    ebx2 = g4845e0;
    ax3 = ((*reinterpret_cast<struct s250***>(reinterpret_cast<uint32_t>(ebx2 + eax4 * 86) + 82))[edx5])->f10;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax6) + 1) = 0;
    *reinterpret_cast<unsigned char*>(&ax6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax3) & 4);
    return static_cast<int32_t>(ax6);
}

struct s251 {
    signed char[10] pad10;
    int16_t fa;
    signed char[2] pad14;
    int32_t fe;
};

struct s251* fun_427ed0(void** ecx, void** a2) {
    void** ecx3;
    void* edx4;
    int32_t eax5;
    int32_t edx6;
    int32_t ebx7;
    void* eax8;
    void** edx9;

    ecx3 = g4845e0;
    edx4 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>((*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ecx3 + eax5 * 86) + 82))[edx6]) + ebx7 * 2 + 22)));
    eax8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx4) * 8 + reinterpret_cast<int32_t>(edx4));
    edx9 = g4845d4;
    return reinterpret_cast<int32_t>(eax8) + reinterpret_cast<int32_t>(eax8) + reinterpret_cast<unsigned char>(edx9);
}

void** fun_427f00(void** ecx, void** a2) {
    void** eax3;
    int32_t edx4;
    int32_t eax5;
    int32_t edx6;
    int32_t ebx7;
    void** edx8;

    eax3 = g4845e0;
    edx4 = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>((*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax3 + eax5 * 86) + 82))[edx6]) + ebx7 * 2 + 22);
    edx8 = g4845d4;
    return *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx8 + (edx4 * 8 + edx4) * 2) + 14);
}

struct s252 {
    signed char[112] pad112;
    int32_t f70;
    int32_t f74;
    signed char[8] pad128;
    int32_t f80;
    int32_t f84;
    int32_t f88;
    int32_t f8c;
};

struct s253 {
    signed char[156] pad156;
    int32_t f9c;
    signed char[12] pad172;
    int32_t fac;
};

void** fun_4214b0(void** ecx, void** a2, void** a3) {
    int32_t edx4;
    int32_t edx5;
    int32_t edx6;
    void** edx7;
    void** ebp8;
    uint32_t edx9;
    struct s252* eax10;
    int32_t ebx11;
    int32_t ebx12;
    int32_t ebx13;
    void** edx14;
    struct s253* eax15;
    int32_t edx16;
    int32_t ecx17;
    int32_t ebp18;

    if (edx4 == 5) {
        goto a3;
    }
    if (edx5 < 0 || edx6 > 4) {
        fun_43bd40(ecx, "P_GiveAmmo: bad type %i", edx7, ebp8);
    }
    edx9 = reinterpret_cast<unsigned char>(edx7) * 4;
    if (*reinterpret_cast<int32_t*>(edx9 + reinterpret_cast<int32_t>(eax10) + 0x9c) == *reinterpret_cast<int32_t*>(edx9 + reinterpret_cast<int32_t>(eax10) + 0xac)) {
        goto a3;
    }
    if (!ebx11) {
        ebx12 = *reinterpret_cast<int32_t*>(edx9 + reinterpret_cast<int32_t>("\n")) - (*reinterpret_cast<int32_t*>(edx9 + reinterpret_cast<int32_t>("\n")) >> 31) >> 1;
    } else {
        ebx12 = ebx13 * *reinterpret_cast<int32_t*>(edx9 + reinterpret_cast<int32_t>("\n"));
    }
    edx14 = g482a58;
    if (!edx14 || reinterpret_cast<int1_t>(edx14 == 4)) {
        ebx12 = ebx12 + ebx12;
    }
    eax15 = reinterpret_cast<struct s253*>(reinterpret_cast<unsigned char>(edx7) * 4 + reinterpret_cast<int32_t>(eax10));
    edx16 = eax15->f9c;
    ecx17 = edx16 + ebx12;
    ebp18 = eax15->fac;
    eax15->f9c = ecx17;
    if (ecx17 > ebp18) {
        eax15->f9c = ebp18;
    }
    if (edx16) 
        goto addr_4215fb_15;
    if (reinterpret_cast<unsigned char>(edx7) <= reinterpret_cast<unsigned char>(3)) 
        goto addr_421561_17;
    addr_4215fb_15:
    goto a3;
    addr_421561_17:
    switch (edx7) {
    case 0:
        if (!eax10->f70) {
            if (!eax10->f84) {
                eax10->f74 = 1;
                goto a3;
            } else {
                eax10->f74 = 3;
                goto addr_4215fb_15;
            }
        }
    case 1:
        if ((!eax10->f70 || eax10->f70 == 1) && eax10->f80) {
            eax10->f74 = 2;
            goto a3;
        }
    case 2:
        if ((!eax10->f70 || eax10->f70 == 1) && eax10->f8c) {
            eax10->f74 = 5;
            goto a3;
        }
    case 3:
        if (!eax10->f70 && eax10->f88) {
            eax10->f74 = 4;
            goto addr_4215fb_15;
        }
    }
}

struct s254 {
    signed char[96] pad96;
    int32_t f60;
};

void** fun_413a10(void** ecx) {
    struct s254* ebx2;
    struct s254* eax3;
    int1_t zf4;
    void** eax5;
    void** edx6;
    void** ecx7;
    int1_t zf8;
    void** edi9;
    void** edx10;
    void** edi11;
    int32_t eax12;
    void** edx13;
    void** edx14;
    void** eax15;
    uint32_t eax16;

    ebx2 = eax3;
    zf4 = g464cc4 == 0;
    if (!zf4 && (eax5 = fun_4137f0(ecx), edx6 = g481610, ecx7 = g482a64, *reinterpret_cast<void***>(edx6) = eax5, !ecx7)) {
        zf8 = g482a84 == 0;
        if (zf8) {
            fun_43bd40(ecx7, "Tried to transmit to another node", edi9, edx10);
        }
        edi11 = g482a7c;
        eax12 = 0;
        edx13 = reinterpret_cast<void**>(0);
        do {
            if (edx13 == edi11) {
                eax12 = eax12 - ebx2->f60;
            } else {
                eax12 = eax12 + ebx2->f60;
            }
            ++edx13;
            ebx2 = reinterpret_cast<struct s254*>(reinterpret_cast<int32_t>(ebx2) + 4);
        } while (reinterpret_cast<signed char>(edx13) < reinterpret_cast<signed char>(4));
        edx14 = g48160c;
        *reinterpret_cast<void***>(edx14 + 8) = *reinterpret_cast<void***>(&eax12);
        eax15 = g481610;
        *reinterpret_cast<void***>(edx14 + 6) = reinterpret_cast<void**>(3);
        eax15 = *reinterpret_cast<void***>(eax15 + 7);
        eax16 = (reinterpret_cast<unsigned char>(eax15) & 0xff) * 8 + 8;
        *reinterpret_cast<void***>(edx14 + 10) = *reinterpret_cast<void***>(&eax16);
        eax5 = fun_43ebe0(ecx7);
    }
    return eax5;
}

struct s256 {
    signed char[8] pad8;
    int32_t f8;
    signed char[40] pad52;
    int32_t f34;
};

struct s255 {
    signed char[68] pad68;
    int32_t f44;
    signed char[16] pad88;
    void** f58;
    signed char[3] pad92;
    struct s256* f5c;
    uint32_t f60;
    signed char[4] pad104;
    unsigned char f68;
    unsigned char f69;
    unsigned char f6a;
    signed char[1] pad108;
    int32_t f6c;
    signed char[20] pad132;
    void** f84;
};

struct s257 {
    signed char[104] pad104;
    uint32_t f68;
};

int32_t g4825e4 = 0xb8000000;

void** fun_426250(void** ecx);

void** fun_422120(void** ecx, void** a2, void** a3) {
    void** ecx4;
    void** eax5;
    void** esi6;
    struct s255* edx7;
    struct s257* edx8;
    int32_t ebp9;
    int1_t zf10;
    int32_t eax11;
    int32_t edi12;
    int1_t zf13;
    void** edx14;
    int32_t eax15;
    int32_t ebp16;
    int1_t zf17;
    void** edx18;
    void** eax19;
    void** edx20;
    int1_t zf21;
    void** ebp22;
    void** edi23;
    void** esi24;
    void** ebx25;
    void** eax26;
    uint32_t edx27;
    void** eax28;
    void** ecx29;

    ecx4 = eax5;
    esi6 = edx7->f58;
    edx7->f68 = reinterpret_cast<unsigned char>(edx8->f68 & 0xfeffbffb);
    if (esi6 != 18) {
        edx7->f69 = reinterpret_cast<unsigned char>(edx7->f69 & 0xfd);
    }
    ebp9 = edx7->f44 >> 2;
    edx7->f68 = reinterpret_cast<unsigned char>(edx7->f68 | 0x100400);
    edx7->f44 = ebp9;
    if (!ecx4 || !*reinterpret_cast<void***>(ecx4 + 0x84)) {
        zf10 = g482a84 == 0;
        if (zf10 && edx7->f6a & 64) {
            ++g4825e4;
        }
    } else {
        if (edx7->f6a & 64) {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx4 + 0x84) + 0xcc) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx4 + 0x84) + 0xcc) + 1;
        }
        if (edx7->f84 && ((eax11 = reinterpret_cast<int32_t>(edx7->f84 - 0x482518) / 0x118, edi12 = g464cc4, *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx4 + 0x84) + eax11 * 4) + 96) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx4 + 0x84) + eax11 * 4) + 96) + 1, !!edi12) && ((zf13 = g482a84 == 0, !zf13) && (edx14 = g482a7c, reinterpret_cast<int1_t>((reinterpret_cast<uint32_t>(edx14 + reinterpret_cast<unsigned char>(edx14) * 8) * 4 - reinterpret_cast<unsigned char>(edx14)) * 8 + 0x482518 == *reinterpret_cast<void***>(ecx4 + 0x84)))))) {
            fun_413a10(ecx4);
        }
    }
    if (edx7->f84) {
        if (!ecx4 && ((ecx4 = reinterpret_cast<void**>(0x118), eax15 = reinterpret_cast<int32_t>(edx7->f84 - 0x482518) / reinterpret_cast<signed char>(0x118), ebp16 = g464cc4, *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx7->f84 + eax15 * 4) + 96) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx7->f84 + eax15 * 4) + 96) + 1, !!ebp16) && ((zf17 = g482a84 == 0, !zf17) && (edx18 = g482a7c, reinterpret_cast<int1_t>((reinterpret_cast<uint32_t>(edx18 + reinterpret_cast<unsigned char>(edx18) * 8) * 4 - reinterpret_cast<unsigned char>(edx18)) * 8 + 0x482518 == edx7->f84))))) {
            fun_413a10(0x118);
        }
        *reinterpret_cast<unsigned char*>(&ecx4) = reinterpret_cast<unsigned char>(edx7->f68 & 0xfd);
        eax19 = edx7->f84;
        edx7->f68 = *reinterpret_cast<unsigned char*>(&ecx4);
        *reinterpret_cast<void***>(eax19 + 4) = reinterpret_cast<void**>(1);
        fun_426250(ecx4);
        edx20 = g482a7c;
        ecx4 = edx7->f84;
        if (reinterpret_cast<int1_t>((reinterpret_cast<uint32_t>(edx20 + reinterpret_cast<unsigned char>(edx20) * 8) * 4 - reinterpret_cast<unsigned char>(edx20)) * 8 + 0x482518 == ecx4) && (zf21 = g45973c == 0, !zf21)) {
            fun_4107f0(ecx4, ebp22, edi23, esi24, ecx, ebx25, __return_address(), a2, a3);
        }
    }
    if (-edx7->f5c->f8 <= edx7->f6c || !edx7->f5c->f34) {
    }
    fun_424ae0(ecx4, ebp22, edi23);
    eax26 = fun_41d460(ecx4, ebp22);
    edx27 = edx7->f60 - (reinterpret_cast<unsigned char>(eax26) & 3);
    edx7->f60 = edx27;
    if (reinterpret_cast<int32_t>(edx27) < reinterpret_cast<int32_t>(1)) {
        edx7->f60 = 1;
    }
    eax28 = edx7->f58;
    if (reinterpret_cast<unsigned char>(eax28) < reinterpret_cast<unsigned char>(2)) {
        if (!reinterpret_cast<int1_t>(eax28 == 1)) {
            addr_422363_22:
            return eax28;
        } else {
            addr_42233c_23:
            ecx29 = reinterpret_cast<void**>(63);
        }
    } else {
        if (reinterpret_cast<unsigned char>(eax28) <= reinterpret_cast<unsigned char>(2)) {
            ecx29 = reinterpret_cast<void**>(77);
        } else {
            if (reinterpret_cast<unsigned char>(eax28) < reinterpret_cast<unsigned char>(10)) 
                goto addr_422363_22;
            if (reinterpret_cast<unsigned char>(eax28) <= reinterpret_cast<unsigned char>(10)) 
                goto addr_42234a_28; else 
                goto addr_422330_29;
        }
    }
    addr_42234f_30:
    eax28 = fun_425180(ecx29);
    *reinterpret_cast<unsigned char*>(eax28 + 0x6a) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax28 + 0x6a) | 2);
    goto addr_422363_22;
    addr_42234a_28:
    ecx29 = reinterpret_cast<void**>(73);
    goto addr_42234f_30;
    addr_422330_29:
    if (eax28 == 23) 
        goto addr_42233c_23;
    goto addr_422363_22;
}

void** fun_4281e0(void** ecx);

void fun_422870(void** ecx) {
    void** eax2;
    void** ebp3;
    void** edi4;
    void** eax5;
    void** edx6;
    void** eax7;
    void** edx8;
    int32_t ebx9;
    void** eax10;

    eax5 = fun_4375e0(eax2, ebp3, edi4);
    fun_42af30();
    *reinterpret_cast<void***>(eax5 + 32) = reinterpret_cast<void**>(5);
    *reinterpret_cast<void***>(eax5 + 8) = reinterpret_cast<void**>(fun_422830);
    *reinterpret_cast<void***>(eax5 + 12) = eax2;
    *reinterpret_cast<void***>(eax5 + 28) = edx6;
    *reinterpret_cast<void***>(eax5 + 24) = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax2 + 12))));
    eax7 = fun_4281e0(eax2);
    edx8 = *reinterpret_cast<void***>(eax5 + 24);
    *reinterpret_cast<void***>(eax5 + 20) = eax7;
    if (eax7 == edx8) {
        *reinterpret_cast<void***>(eax5 + 20) = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(eax2 + 14) = reinterpret_cast<void**>(0);
    if (ebx9) {
        *reinterpret_cast<void***>(eax5 + 16) = reinterpret_cast<void**>(1);
        return;
    } else {
        eax10 = fun_41d460(eax2, ebp3);
        *reinterpret_cast<void***>(eax5 + 16) = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax10) & 7) + 1);
        return;
    }
}

struct s258 {
    signed char[12] pad12;
    int16_t fc;
};

struct s259 {
    signed char[16] pad16;
    unsigned char f10;
};

struct s260 {
    signed char[46] pad46;
    struct s258* f2e;
};

struct s261 {
    signed char[50] pad50;
    struct s258* f32;
};

struct s258* fun_427f50() {
    struct s259* eax1;
    struct s258* edx2;
    struct s260* eax3;
    struct s261* eax4;

    if (eax1->f10 & 4) {
        if (edx2 != eax3->f2e) {
            return eax3->f2e;
        } else {
            return eax4->f32;
        }
    } else {
        return 0;
    }
}

struct s262 {
    signed char[42] pad42;
    int32_t f2a;
};

struct s263 {
    uint32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    uint32_t fc;
};

struct s264 {
    signed char[4] pad4;
    uint32_t f4;
};

unsigned char fun_424090(void** ecx) {
    struct s262* edx2;
    uint32_t eax3;
    struct s263* eax4;
    struct s264** edx5;
    unsigned char v6;
    void** eax7;
    void** edx8;
    unsigned char eax9;
    unsigned char ebx10;
    uint32_t eax11;
    uint32_t** edx12;
    void** edx13;
    void** eax14;
    unsigned char eax15;
    unsigned char eax16;
    unsigned char eax17;
    unsigned char eax18;

    switch (edx2->f2a) {
    case 0:
        eax3 = eax4->f0;
        *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax3) > reinterpret_cast<int32_t>((*edx5)->f4));
        v6 = reinterpret_cast<unsigned char>(eax3 & 0xff);
        eax7 = *reinterpret_cast<void***>(edx8);
        *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax4->f4) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax7 + 4)));
        eax9 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax7) & 0xff);
        ebx10 = eax9;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx8 + 8)) >= reinterpret_cast<signed char>(0)) {
            addr_42417f_4:
            if (ebx10 == v6) {
                return v6;
            }
        } else {
            eax9 = reinterpret_cast<unsigned char>(eax9 ^ 1);
            v6 = reinterpret_cast<unsigned char>(v6 ^ 1);
            if (eax9 == v6) {
                return v6;
            }
        }
    case 1:
        eax11 = eax4->fc;
        *reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax11) < reinterpret_cast<int32_t>(**edx12));
        edx13 = *reinterpret_cast<void***>(edx8);
        v6 = reinterpret_cast<unsigned char>(eax11 & 0xff);
        eax14 = eax4->f8;
        *reinterpret_cast<unsigned char*>(&eax14) = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax14) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx13)));
        eax15 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax14) & 0xff);
        ebx10 = eax15;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx8 + 12)) >= reinterpret_cast<signed char>(0)) 
            goto addr_42417f_4;
        eax15 = reinterpret_cast<unsigned char>(eax15 ^ 1);
        v6 = reinterpret_cast<unsigned char>(v6 ^ 1);
        if (eax15 == v6) {
            return v6;
        }
    case 2:
        eax16 = fun_423fd0(edx8);
        v6 = eax16;
        goto addr_424178_12;
    case 3:
        eax17 = fun_423fd0(edx8);
        v6 = eax17;
        goto addr_424178_12;
    }
    return 0xffffffff;
    addr_424178_12:
    eax18 = fun_423fd0(edx8);
    ebx10 = eax18;
    goto addr_42417f_4;
}

struct s265 {
    signed char[36] pad36;
    void* f24;
    signed char[66] pad106;
    unsigned char f6a;
};

struct s266 {
    signed char[68] pad68;
    void** f44;
};

struct s267 {
    signed char[20] pad20;
    void* f14;
};

struct s268 {
    signed char[20] pad20;
    uint32_t f14;
};

struct s269 {
    signed char[108] pad108;
    void** f6c;
};

struct s270 {
    signed char[132] pad132;
    void** f84;
};

void** fun_421610(void** ecx);

void** fun_421930(void** ecx) {
    void** v2;
    void** edi3;
    void** v4;
    void** ebp5;
    struct s265* ebp6;
    struct s265* eax7;
    void** ecx8;
    struct s266* edx9;
    void** eax10;
    struct s267* eax11;
    struct s268* edx12;
    struct s269* edx13;
    void** esi14;
    struct s270* edx15;
    void** edx16;
    void** ebx17;
    int1_t zf18;
    void** eax19;
    int1_t zf20;
    void** eax21;
    int1_t zf22;
    void** eax23;
    int1_t zf24;
    void** eax25;
    int1_t zf26;
    void** eax27;
    int1_t zf28;
    void** ebx29;
    void** eax30;
    void** edi31;
    int1_t zf32;
    void** eax33;
    void** edx34;
    int1_t zf35;
    void** eax36;
    void** edx37;

    v2 = edi3;
    v4 = ebp5;
    ebp6 = eax7;
    ecx8 = edx9->f44;
    eax10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax11->f14) - edx12->f14);
    if (reinterpret_cast<signed char>(eax10) > reinterpret_cast<signed char>(ecx8)) 
        goto addr_422111_2;
    if (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(0xfff80000)) 
        goto addr_422111_2;
    eax10 = edx13->f6c;
    esi14 = edx15->f84;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax10 == 0)) 
        goto addr_422111_2;
    eax10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6->f24) - 55);
    switch (eax10) {
    default:
        fun_43bd40(ecx8, "P_SpecialThing: Unknown gettable thing", v4, v2);
        break;
    case 0:
        ecx8 = *reinterpret_cast<void***>(esi14 + 36);
        if (reinterpret_cast<signed char>(100) > reinterpret_cast<signed char>(ecx8)) {
            *reinterpret_cast<void***>(esi14 + 40) = reinterpret_cast<void**>(1);
            eax10 = reinterpret_cast<void**>(1);
            *reinterpret_cast<void***>(esi14 + 36) = reinterpret_cast<void**>(100);
        } else {
            eax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi14) ^ reinterpret_cast<unsigned char>(esi14));
        }
        if (!eax10) {
            addr_422111_2:
            return eax10;
        } else {
            *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up the armor.");
            break;
        }
    case 1:
        ecx8 = *reinterpret_cast<void***>(esi14 + 36);
        if (reinterpret_cast<signed char>(0xc8) > reinterpret_cast<signed char>(ecx8)) {
            *reinterpret_cast<void***>(esi14 + 40) = reinterpret_cast<void**>(2);
            eax10 = reinterpret_cast<void**>(1);
            *reinterpret_cast<void***>(esi14 + 36) = reinterpret_cast<void**>(0xc8);
        } else {
            eax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi14) ^ reinterpret_cast<unsigned char>(esi14));
        }
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up the MegaArmor!");
        break;
    case 5:
        edx16 = *reinterpret_cast<void***>(esi14 + 32) + 1;
        *reinterpret_cast<void***>(esi14 + 32) = edx16;
        if (reinterpret_cast<signed char>(edx16) > reinterpret_cast<signed char>(0xc8)) {
            *reinterpret_cast<void***>(esi14 + 32) = reinterpret_cast<void**>(0xc8);
        }
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi14) + 0x6c) = *reinterpret_cast<void***>(esi14 + 32);
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a health bonus.");
        break;
    case 6:
        ebx17 = *reinterpret_cast<void***>(esi14 + 36) + 1;
        *reinterpret_cast<void***>(esi14 + 36) = ebx17;
        if (reinterpret_cast<signed char>(ebx17) > reinterpret_cast<signed char>(0xc8)) {
            *reinterpret_cast<void***>(esi14 + 36) = reinterpret_cast<void**>(0xc8);
        }
        if (!*reinterpret_cast<void***>(esi14 + 40)) {
            *reinterpret_cast<void***>(esi14 + 40) = reinterpret_cast<void**>(1);
        }
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up an armor bonus.");
        break;
    case 7:
        if (!*reinterpret_cast<void***>(esi14 + 68)) {
            *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a blue keycard.");
        }
        if (!*reinterpret_cast<void***>(esi14 + 68)) {
            *reinterpret_cast<void***>(esi14 + 0xe0) = reinterpret_cast<void**>(6);
            *reinterpret_cast<void***>(esi14 + 68) = reinterpret_cast<void**>(1);
        }
        zf18 = g482a84 == 0;
        if (!zf18) {
            return eax10;
        }
    case 8:
        if (!*reinterpret_cast<void***>(esi14 + 76)) {
            *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a red keycard.");
        }
        eax19 = esi14 + 8;
        if (!*reinterpret_cast<void***>(eax19 + 68)) {
            *reinterpret_cast<void***>(esi14 + 0xe0) = reinterpret_cast<void**>(6);
            *reinterpret_cast<void***>(eax19 + 68) = reinterpret_cast<void**>(1);
        }
        zf20 = g482a84 == 0;
        if (!zf20) {
            return eax19;
        }
    case 9:
        if (!*reinterpret_cast<void***>(esi14 + 72)) {
            *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a yellow keycard.");
        }
        eax21 = esi14 + 4;
        if (!*reinterpret_cast<void***>(eax21 + 68)) {
            *reinterpret_cast<void***>(esi14 + 0xe0) = reinterpret_cast<void**>(6);
            *reinterpret_cast<void***>(eax21 + 68) = reinterpret_cast<void**>(1);
        }
        zf22 = g482a84 == 0;
        if (!zf22) {
            return eax21;
        }
    case 10:
        if (!*reinterpret_cast<void***>(esi14 + 80)) {
            *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a blue skull key.");
        }
        eax23 = esi14 + 12;
        if (!*reinterpret_cast<void***>(eax23 + 68)) {
            *reinterpret_cast<void***>(esi14 + 0xe0) = reinterpret_cast<void**>(6);
            *reinterpret_cast<void***>(eax23 + 68) = reinterpret_cast<void**>(1);
        }
        zf24 = g482a84 == 0;
        if (!zf24) {
            return eax23;
        }
    case 11:
        if (!*reinterpret_cast<void***>(esi14 + 88)) {
            *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a red skull key.");
        }
        eax25 = esi14 + 20;
        if (!*reinterpret_cast<void***>(eax25 + 68)) {
            *reinterpret_cast<void***>(esi14 + 0xe0) = reinterpret_cast<void**>(6);
            *reinterpret_cast<void***>(eax25 + 68) = reinterpret_cast<void**>(1);
        }
        zf26 = g482a84 == 0;
        if (!zf26) {
            return eax25;
        }
    case 12:
        if (!*reinterpret_cast<void***>(esi14 + 84)) {
            *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a yellow skull key.");
        }
        eax27 = esi14 + 16;
        if (!*reinterpret_cast<void***>(eax27 + 68)) {
            *reinterpret_cast<void***>(esi14 + 0xe0) = reinterpret_cast<void**>(6);
            *reinterpret_cast<void***>(eax27 + 68) = reinterpret_cast<void**>(1);
        }
        zf28 = g482a84 == 0;
        if (!zf28) {
            return eax27;
        }
    case 13:
        ecx8 = *reinterpret_cast<void***>(esi14 + 32);
        if (reinterpret_cast<signed char>(ecx8) < reinterpret_cast<signed char>(100)) {
            ebx29 = ecx8 + 10;
            *reinterpret_cast<void***>(esi14 + 32) = ebx29;
            if (reinterpret_cast<signed char>(ebx29) > reinterpret_cast<signed char>(100)) {
                *reinterpret_cast<void***>(esi14 + 32) = reinterpret_cast<void**>(100);
            }
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi14) + 0x6c) = *reinterpret_cast<void***>(esi14 + 32);
            eax10 = reinterpret_cast<void**>(1);
        } else {
            eax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi14) ^ reinterpret_cast<unsigned char>(esi14));
        }
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a stimpack.");
        break;
    case 14:
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi14 + 32)) < reinterpret_cast<signed char>(100)) {
            ecx8 = *reinterpret_cast<void***>(esi14 + 32) + 25;
            *reinterpret_cast<void***>(esi14 + 32) = ecx8;
            if (reinterpret_cast<signed char>(ecx8) > reinterpret_cast<signed char>(100)) {
                *reinterpret_cast<void***>(esi14 + 32) = reinterpret_cast<void**>(100);
            }
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi14) + 0x6c) = *reinterpret_cast<void***>(esi14 + 32);
            eax10 = reinterpret_cast<void**>(1);
        } else {
            eax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi14) ^ reinterpret_cast<unsigned char>(esi14));
        }
        if (!eax10) 
            goto addr_422111_2;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi14 + 32)) >= reinterpret_cast<signed char>(25)) {
            *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a medikit.");
            break;
        } else {
            *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a medikit that you REALLY need!");
            break;
        }
    case 15:
        eax30 = *reinterpret_cast<void***>(esi14 + 32) + 100;
        *reinterpret_cast<void***>(esi14 + 32) = eax30;
        if (reinterpret_cast<signed char>(eax30) > reinterpret_cast<signed char>(0xc8)) {
            *reinterpret_cast<void***>(esi14 + 32) = reinterpret_cast<void**>(0xc8);
        }
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi14) + 0x6c) = *reinterpret_cast<void***>(esi14 + 32);
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Supercharge!");
        break;
    case 16:
        eax10 = fun_4217d0(ecx8);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Invulnerability!");
        break;
    case 17:
        eax10 = fun_4217d0(ecx8);
        if (!eax10) 
            goto addr_422111_2;
        edi31 = *reinterpret_cast<void***>(esi14 + 0x70);
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Berserk!");
        if (edi31) {
            *reinterpret_cast<void***>(esi14 + 0x74) = reinterpret_cast<void**>(0);
        }
        break;
    case 18:
        eax10 = fun_4217d0(ecx8);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Partial Invisibility");
        break;
    case 19:
        zf32 = g481264 == 0;
        if (zf32) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 32) = reinterpret_cast<void**>(0xc8);
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi14) + 0x6c) = *reinterpret_cast<void***>(esi14 + 32);
        ecx8 = *reinterpret_cast<void***>(esi14 + 36);
        if (reinterpret_cast<signed char>(0xc8) > reinterpret_cast<signed char>(ecx8)) {
            *reinterpret_cast<void***>(esi14 + 40) = reinterpret_cast<void**>(2);
            *reinterpret_cast<void***>(esi14 + 36) = reinterpret_cast<void**>(0xc8);
        }
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("MegaSphere!");
        break;
    case 20:
        eax10 = fun_4217d0(ecx8);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Radiation Shielding Suit");
        break;
    case 21:
        eax10 = fun_4217d0(ecx8);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Computer Area Map");
        break;
    case 22:
        eax10 = fun_4217d0(ecx8);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Light Amplification Visor");
        break;
    case 23:
        if (!(ebp6->f6a & 2)) {
        }
        eax10 = fun_4214b0(ecx8, v4, v2);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a clip.");
        break;
    case 24:
        eax10 = fun_4214b0(ecx8, v4, v2);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a box of bullets.");
        break;
    case 25:
        eax10 = fun_4214b0(ecx8, v4, v2);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a rocket.");
        break;
    case 26:
        eax10 = fun_4214b0(ecx8, v4, v2);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a box of rockets.");
        break;
    case 27:
        eax10 = fun_4214b0(ecx8, v4, v2);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up an energy cell.");
        break;
    case 28:
        eax10 = fun_4214b0(ecx8, v4, v2);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up an energy cell pack.");
        break;
    case 29:
        eax10 = fun_4214b0(ecx8, v4, v2);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up 4 shotgun shells.");
        break;
    case 30:
        eax10 = fun_4214b0(ecx8, v4, v2);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a box of shotgun shells.");
        break;
    case 31:
        if (!*reinterpret_cast<void***>(esi14 + 92)) {
            eax33 = esi14;
            edx34 = esi14 + 16;
            do {
                eax33 = eax33 + 4;
                *reinterpret_cast<void***>(eax33 + 0xa8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax33 + 0xac)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax33 + 0xac)));
            } while (eax33 != edx34);
            *reinterpret_cast<void***>(esi14 + 92) = reinterpret_cast<void**>(1);
        }
        ecx8 = reinterpret_cast<void**>(0);
        do {
            ++ecx8;
            fun_4214b0(ecx8, v4, v2);
        } while (reinterpret_cast<signed char>(ecx8) < reinterpret_cast<signed char>(4));
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("Picked up a backpack full of ammo!");
        break;
    case 32:
        eax10 = fun_421610(ecx8);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("You got the BFG9000!  Oh, yes.");
        break;
    case 33:
        eax10 = fun_421610(ecx8);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("You got the chaingun!");
        break;
    case 34:
        eax10 = fun_421610(ecx8);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("A chainsaw!  Find some meat!");
        break;
    case 35:
        eax10 = fun_421610(ecx8);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("You got the rocket launcher!");
        break;
    case 36:
        eax10 = fun_421610(ecx8);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("You got the plasma gun!");
        break;
    case 37:
        eax10 = fun_421610(ecx8);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("You got the shotgun!");
        break;
    case 38:
        eax10 = fun_421610(ecx8);
        if (!eax10) 
            goto addr_422111_2;
        *reinterpret_cast<void***>(esi14 + 0xd8) = reinterpret_cast<void**>("You got the super shotgun!");
    }
    zf35 = g618240 == 0;
    if (!zf35 && (eax36 = g482a64, !eax36)) {
        g618240(5, eax36, eax36, eax36);
    }
    if (ebp6->f6a & 0x80) {
        *reinterpret_cast<void***>(esi14 + 0xd0) = *reinterpret_cast<void***>(esi14 + 0xd0) + 1;
    }
    fun_4252a0(ecx8);
    edx37 = g482a7c;
    eax10 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(edx37 + reinterpret_cast<unsigned char>(edx37) * 8) * 4 - reinterpret_cast<unsigned char>(edx37)) * 8 + 0x482518);
    *reinterpret_cast<void***>(esi14 + 0xe0) = *reinterpret_cast<void***>(esi14 + 0xe0) + 6;
    if (esi14 == eax10) {
        eax10 = fun_4312d0(ecx8, v4);
        goto addr_422111_2;
    }
}

