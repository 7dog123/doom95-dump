int32_t CreateDirectoryA = 0x220e00;

int32_t fun_449dae() {
    goto CreateDirectoryA;
}

int32_t g459984 = 25;

int32_t g45998c = 24;

int32_t g459990 = 40;

void fun_43ffb0(void** ecx) {
    void* esp2;
    void** v3;
    void** v4;
    void** ebx5;
    int32_t eax6;
    void* esp7;
    int1_t zf8;
    void** v9;
    void** v10;
    void** ebx11;
    int32_t eax12;
    void*** esp13;
    void** esp14;
    void* v15;
    void** esp16;
    void* v17;
    void* v18;
    int32_t v19;
    int1_t zf20;
    void** ebx21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    int32_t edx26;
    void** edx27;
    int32_t edx28;
    int32_t edx29;
    void* v30;
    int32_t eax31;
    void* v32;
    int32_t v33;
    int32_t edx34;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 48);
    v3 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp2) + 8);
    v4 = reinterpret_cast<void**>(0x80000001);
    ebx5 = reinterpret_cast<void**>(0);
    eax6 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001));
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4 + 4);
    if (!eax6) {
        RegQueryValueExA(v3, "turbo");
        ecx = reinterpret_cast<void**>(0);
        RegCloseKey(0, v3, "turbo");
        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
        if (1) {
            ebx5 = reinterpret_cast<void**>(0);
        } else {
            ebx5 = reinterpret_cast<void**>(1);
        }
    }
    zf8 = ebx5 == 0;
    if (zf8) {
        v9 = ebx5;
    }
    if (!zf8 && !0) {
        v10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 24);
        ebx11 = reinterpret_cast<void**>(0);
        eax12 = reinterpret_cast<int32_t>(RegOpenKeyA());
        esp13 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 + 4);
        if (!eax12) {
            esp14 = reinterpret_cast<void**>(esp13 - 4);
            v15 = reinterpret_cast<void*>(esp13 + 36);
            esp16 = esp14 - 1;
            v17 = reinterpret_cast<void*>(esp14 + 9);
            v18 = reinterpret_cast<void*>(esp16 + 9);
            RegQueryValueExA(v19, "turbovalue", 0, v18, v17, v15);
            RegCloseKey(0x80000001, v19, "turbovalue", 0, v18, v17, v15);
            esp13 = reinterpret_cast<void***>(esp16 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1);
            if (1) {
                ebx11 = reinterpret_cast<void**>(0);
            } else {
                ebx11 = reinterpret_cast<void**>(1);
            }
        }
        zf20 = ebx11 == 0;
        if (zf20) {
            v4 = ebx11;
        }
        if (!zf20) {
            ebx21 = reinterpret_cast<void**>(0x80000001);
            if (!0) {
                ebx21 = reinterpret_cast<void**>(10);
            }
            if (reinterpret_cast<signed char>(ebx21) > reinterpret_cast<signed char>(0x190)) {
                ebx21 = reinterpret_cast<void**>(0x190);
            }
            fun_440840(ecx, "turbo scale: %i%%\n", ebx21, 0x80000001, "Software\\id\\Doom95\\Session", v10, v4, "Software\\id\\Doom95\\Session", v3, v22, v9, v23, v24, v25, 4, 4);
            edx26 = g459984;
            edx27 = g459988;
            g459984 = reinterpret_cast<int32_t>(edx26 * reinterpret_cast<unsigned char>(ebx21)) / 100;
            edx28 = g45998c;
            g459988 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edx27) * reinterpret_cast<unsigned char>(ebx21)) / 100);
            edx29 = g459990;
            g45998c = reinterpret_cast<int32_t>(edx28 * reinterpret_cast<unsigned char>(ebx21)) / 100;
            esp13 = esp13 - 4 - 4 - 4 + 4 + 8;
            g459990 = reinterpret_cast<int32_t>(edx29 * reinterpret_cast<unsigned char>(ebx21)) / 100;
        }
        v30 = reinterpret_cast<void*>(esp13 + 44);
        eax31 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v30));
        if (!eax31) {
            v32 = reinterpret_cast<void*>(esp13 - 4 - 4 - 4 - 4 + 4 - 4 + 44);
            RegSetValueExA(v33, "turbo", 0, 4, v32, 4, 0x80000001, "Software\\id\\Doom95\\Session", v30);
            RegCloseKey(v10, v33, "turbo", 0, 4, v32, 4, 0x80000001, "Software\\id\\Doom95\\Session", v30);
        }
    }
    goto edx34;
}

struct s629 {
    signed char f0;
    signed char f1;
};

void fun_43fa40(void** ecx) {
    int32_t v2;
    int32_t edx3;
    void* esp4;
    void* v5;
    int32_t ebx6;
    int32_t eax7;
    void* esp8;
    void** esp9;
    void* v10;
    void** esp11;
    void* v12;
    void* v13;
    int32_t v14;
    void** v15;
    int32_t v16;
    int1_t zf17;
    int32_t v18;
    void** v19;
    int32_t ebx20;
    int32_t eax21;
    void** esp22;
    void* v23;
    void** esp24;
    void* v25;
    void* v26;
    int32_t v27;
    int32_t v28;
    int32_t v29;
    uint32_t v30;
    struct s629* esi31;
    void* esp32;
    signed char al33;
    signed char al34;

    v2 = edx3;
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x420);
    v5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) + 0x400);
    ebx6 = 0;
    eax7 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v5));
    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 + 4);
    if (!eax7) {
        esp9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp8) - 4);
        v10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) + 0x40c);
        esp11 = esp9 - 1;
        v12 = reinterpret_cast<void*>(esp9 + 0x103);
        v13 = reinterpret_cast<void*>(esp11 + 0x109);
        RegQueryValueExA(v14, "playdemo", 0, v13, v12, v10, 0x80000001, "Software\\id\\Doom95\\Session", v5);
        ecx = v15;
        RegCloseKey(ecx, v14, "playdemo", 0, v13, v12, v10, 0x80000001, "Software\\id\\Doom95\\Session", v5);
        esp8 = reinterpret_cast<void*>(esp11 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1);
        if (v16 != 4) {
            ebx6 = 0;
        } else {
            ebx6 = 1;
        }
    }
    zf17 = ebx6 == 0;
    if (zf17) {
    }
    if (!zf17 && v18) {
        v19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp8) + 0x410);
        ebx20 = 0;
        eax21 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v19, 0x80000001, "Software\\id\\Doom95\\Session", v5));
        esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 - 4 - 4 + 4);
        if (!eax21 && ((esp22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp8) - 4), v23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) + 0x418), esp24 = esp22 - 1, v25 = reinterpret_cast<void*>(esp22 + 0x81), v26 = reinterpret_cast<void*>(esp24 + 0x107), RegQueryValueExA(v27, "playdemofile", 0, v26, v25, v23, 0x80000001, "Software\\id\\Doom95\\Session", v19, 0x80000001, "Software\\id\\Doom95\\Session", v5), RegCloseKey(v28, v27, "playdemofile", 0, v26, v25, v23, 0x80000001, "Software\\id\\Doom95\\Session", v19, 0x80000001, "Software\\id\\Doom95\\Session", v5), esp8 = reinterpret_cast<void*>(esp24 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1), ebx20 = v29, ebx20 != 1) || 0x200 < v30)) {
            ebx20 = 0;
        }
        if (!ebx20) {
            esi31 = reinterpret_cast<struct s629*>(0x457a2f);
            esp32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4);
            do {
                al33 = esi31->f0;
                if (!al33) 
                    break;
                al34 = esi31->f1;
                ++esi31;
            } while (al34);
            esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) + 4);
        }
        if (ebx20) {
            wsprintfA(reinterpret_cast<int32_t>(esp8) - 4 - 4 + 8, "%s.lmp", reinterpret_cast<int32_t>(esp8) + 0x200, 0x80000001, "Software\\id\\Doom95\\Session", v19, 0x80000001, "Software\\id\\Doom95\\Session", v5);
            fun_412690(ecx, 0x80000001, "Software\\id\\Doom95\\Session", v19, 0x80000001, "Software\\id\\Doom95\\Session", v5);
        }
    }
    goto v2;
}

int32_t fun_43d320(void** ecx);

void fun_434180(void** ecx) {
    int32_t eax2;
    int32_t edx3;
    int32_t eax4;

    eax2 = fun_43d320(ecx);
    edx3 = eax2;
    eax4 = 0;
    do {
        *reinterpret_cast<int32_t*>(eax4 + 0x5f27a0) = edx3;
        eax4 = eax4 + 4;
        edx3 = edx3 + 0x4b000;
    } while (eax4 != 16);
    return;
}

void** g4835e0 = reinterpret_cast<void**>(0);

void** g4835e4 = reinterpret_cast<void**>(0xf8);

void** g455194 = reinterpret_cast<void**>(100);

void** g455198 = reinterpret_cast<void**>(0x75);

void fun_443f01(void** ecx, void* a2);

void** g4835a4 = reinterpret_cast<void**>(57);

void** g4835c4 = reinterpret_cast<void**>(0xac);

void fun_41da70(void** ecx) {
    int32_t v2;
    int32_t edx3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    int32_t ebx11;
    void* esp12;
    void** eax13;
    void** ecx14;
    int32_t esi15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void* esp26;
    void** v27;
    void** v28;
    int32_t eax29;
    void* v30;
    void** ebp31;
    void*** esp32;
    void* v33;
    int32_t v34;
    int32_t eax35;
    void** edi36;
    int32_t v37;
    void** ebx38;
    int1_t less39;
    uint32_t eax40;
    void** edi41;
    void** eax42;
    void** edx43;
    void** eax44;
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
    void** ecx58;
    void* esp59;
    void* esp60;
    void** esp61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void* esp66;
    void*** esp67;
    int32_t eax68;
    void* esp69;
    void** edx70;
    void** edi71;
    int32_t esi72;
    void** v73;
    void* esp74;
    void** v75;
    void** v76;
    int32_t eax77;
    int32_t v78;
    void** eax79;
    void* esp80;
    void** v81;
    void*** esp82;
    void** v83;
    void** v84;
    void** ecx85;
    void** v86;
    void** v87;
    int32_t eax88;
    int32_t v89;
    void** v90;
    void** v91;
    void** v92;
    void** edx93;
    void*** esp94;
    void** v95;
    void*** esp96;
    void** v97;
    void** v98;
    int32_t eax99;
    void* esp100;
    int32_t v101;
    void*** esp102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    int32_t eax107;
    int32_t v108;
    void** v109;
    int1_t less110;
    void** eax111;
    int1_t less_or_equal112;
    int1_t less113;
    void** eax114;
    int1_t less_or_equal115;
    void** edx116;
    void** eax117;
    int32_t ebx118;
    uint32_t edx119;
    void** esi120;

    v2 = edx3;
    fun_437a90(ecx, "M_LoadConfig: entry", v4, v5, v6, v7, v8, v9, v10);
    ebx11 = 0;
    esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x418 - 4 - 4 + 4 + 4);
    eax13 = reinterpret_cast<void**>(0);
    g4835e0 = reinterpret_cast<void**>(55);
    do {
        ecx14 = g4835e0;
        ebx11 = ebx11 + 20;
        ++eax13;
        **reinterpret_cast<int32_t**>(ebx11 + 0x4647e0) = *reinterpret_cast<int32_t*>(ebx11 + 0x4647e4);
    } while (reinterpret_cast<signed char>(eax13) < reinterpret_cast<signed char>(ecx14));
    esi15 = g60b6dc;
    if (!esi15) {
        eax25 = fun_442e73(ecx14, v16, v17, v18, v19, v20, v21, v22, v23, v24);
        esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 + 4);
        g4835e4 = eax25;
        v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp26) + 0x404);
        v28 = reinterpret_cast<void**>("SOFTWARE\\ID\\Doom95\\Config");
        eax29 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "SOFTWARE\\ID\\Doom95\\Config", v27));
        esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 - 4 + 4);
        if (!eax29) {
            v30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) + 0x410);
            ebp31 = g4835e4;
            esp32 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp12) - 4 - 4);
            v33 = reinterpret_cast<void*>(esp32 + 0x414);
            eax35 = reinterpret_cast<int32_t>(RegQueryValueExA(v34, "current", esi15, v33, ebp31, v30, 0x80000001, "SOFTWARE\\ID\\Doom95\\Config", v27));
            if (eax35) {
                edi36 = g4835e4;
                *reinterpret_cast<void***>(edi36) = g455194;
                *reinterpret_cast<void***>(edi36 + 4) = g455198;
            }
            RegCloseKey(v37, v34, "current", esi15, v33, ebp31, v30, 0x80000001, "SOFTWARE\\ID\\Doom95\\Config", v27);
            esp12 = reinterpret_cast<void*>(esp32 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
        }
    } else {
        ebx38 = reinterpret_cast<void**>(1);
        less39 = reinterpret_cast<signed char>(1) < reinterpret_cast<signed char>(g4835f4);
        if (!less39) {
            addr_41dafb_14:
            ebx38 = reinterpret_cast<void**>(0);
        } else {
            ecx14 = reinterpret_cast<void**>("-config");
            do {
                eax40 = fun_442f62("-config");
                esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 + 4);
                if (!eax40) 
                    break;
                edi41 = g4835f4;
                ++ebx38;
            } while (reinterpret_cast<signed char>(ebx38) < reinterpret_cast<signed char>(edi41));
            goto addr_41dafb_14;
        }
        if (!ebx38 || (eax42 = g4835f4, reinterpret_cast<signed char>(ebx38) >= reinterpret_cast<signed char>(eax42 - 1))) {
            g4835e4 = reinterpret_cast<void**>(0x480a20);
        } else {
            edx43 = g4835f8;
            eax44 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx43 + reinterpret_cast<unsigned char>(ebx38) * 4) + 4);
            g4835e4 = eax44;
            fun_440840(ecx14, "\tconfig entry: %s\n", eax44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57);
            esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 + 4 + 8);
        }
    }
    ecx58 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp12) + 0x104);
    fun_443f01(ecx58, reinterpret_cast<int32_t>(esp12) + 0x204);
    esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 + 4 + 4);
    esp60 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 - 4);
    wsprintfA(ecx58, reinterpret_cast<int32_t>(esp60) + 8, "SOFTWARE\\ID\\Doom95\\Config\\%s", reinterpret_cast<int32_t>(esp59) + 0x104);
    esp61 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp60) - 4 - 4 + 4 + 12);
    fun_437a90(ecx58, "Using '%s' as the config key", esp61, 0x80000001, "SOFTWARE\\ID\\Doom95\\Config", v62, v63, v64, v65);
    esp66 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp61 - 4) - 4 - 4 + 4 + 8);
    esp67 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp66) - 4);
    v27 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp66) + 0x404);
    v28 = reinterpret_cast<void**>(esp67 + 4);
    eax68 = reinterpret_cast<int32_t>(RegOpenKeyA(ecx58, 0x80000001, v28, v27));
    esp69 = reinterpret_cast<void*>(esp67 - 4 - 4 - 4 + 4);
    if (!eax68) {
        edx70 = g4835e0;
        edi71 = reinterpret_cast<void**>(0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx70) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx70 == 0))) {
            esi72 = 0;
            do {
                v73 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp69) + 0x410);
                esp74 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp69) - 4 - 4);
                v75 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp74) + 0x414);
                v76 = *reinterpret_cast<void***>(esi72 + reinterpret_cast<int32_t>(",ME"));
                eax77 = reinterpret_cast<int32_t>(RegQueryValueExA(0, v76, 0, v75, 0, v73, 0x80000001, v28, v27));
                esp69 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp74) - 4 - 4 - 4 - 4 - 4 + 4);
                if (!eax77 && 0 < v78) {
                    eax79 = fun_442e73(0, 0, v76, 0, v75, 0, v73, 0x80000001, v28, v27);
                    esp80 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp69) - 4 + 4);
                    if (!eax79) {
                        fun_43bd40(0, "Failed allocation of 'pVoid' (2) in M_LoadConfig", 0, v76, 0, "Failed allocation of 'pVoid' (2) in M_LoadConfig", 0, v76);
                        esp80 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp80) - 4 - 4 + 4 + 4);
                    }
                    v81 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp80) + 0x410);
                    esp82 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp80) - 4 - 4);
                    v83 = reinterpret_cast<void**>(esp82 + 0x414);
                    v84 = *reinterpret_cast<void***>(esi72 + reinterpret_cast<int32_t>(",ME"));
                    ecx85 = v86;
                    v87 = ecx85;
                    eax88 = reinterpret_cast<int32_t>(RegQueryValueExA(v87, v84, 0, v83, eax79, v81, 0, v76, 0, v75, 0, v73, 0x80000001, v28, v27));
                    esp69 = reinterpret_cast<void*>(esp82 - 4 - 4 - 4 - 4 - 4 + 4);
                    if (!eax88) {
                        if (v89 != 1) {
                            if (v89 == 4 && ((ecx85 = *reinterpret_cast<void***>(eax79), reinterpret_cast<signed char>(ecx85) > reinterpret_cast<signed char>(0xffff0001)) && reinterpret_cast<signed char>(ecx85) < reinterpret_cast<signed char>(0xffff))) {
                                **reinterpret_cast<void****>(esi72 + 0x4647e0) = ecx85;
                            }
                            fun_4440d1(ecx85, v87, v84, 0, v83, eax79, v81, 0, v76, 0, v75, 0, v73, 0x80000001, v28, v27, 0x80000001, "SOFTWARE\\ID\\Doom95\\Config", v90, v91, v92);
                            esp69 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp69) - 4 + 4);
                        } else {
                            **reinterpret_cast<void****>(esi72 + 0x4647e0) = eax79;
                        }
                    }
                }
                edx93 = g4835e0;
                ++edi71;
                esi72 = esi72 + 20;
            } while (reinterpret_cast<signed char>(edi71) < reinterpret_cast<signed char>(edx93));
        }
        esp94 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp69) - 4);
        v95 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp69) + 0x410);
        esp96 = esp94 - 4;
        v97 = reinterpret_cast<void**>(esp94 + 0x40c);
        v98 = reinterpret_cast<void**>(esp96 + 0x414);
        eax99 = reinterpret_cast<int32_t>(RegQueryValueExA(0, "MouseXMul", 0, v98, v97, v95, 0x80000001, v28, v27));
        esp100 = reinterpret_cast<void*>(esp96 - 4 - 4 - 4 - 4 - 4 + 4);
        if (eax99) {
            g477628 = 4;
        } else {
            g477628 = v101;
        }
        esp102 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp100) - 4);
        v103 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp100) + 0x410);
        v104 = reinterpret_cast<void**>(esp102 + 0x40c);
        v105 = reinterpret_cast<void**>(esp102 - 4 + 0x414);
        eax107 = reinterpret_cast<int32_t>(RegQueryValueExA(v106, "MouseYMul", 0, v105, v104, v103, 0, "MouseXMul", 0, v98, v97, v95, 0x80000001, v28, v27));
        if (eax107) {
            g47762c = 5;
        } else {
            g47762c = v108;
        }
        RegCloseKey(v109, v106, "MouseYMul", 0, v105, v104, v103, 0, "MouseXMul", 0, v98, v97, v95, 0x80000001, v28, v27);
        less110 = reinterpret_cast<signed char>(g4835a4) < reinterpret_cast<signed char>(0);
        if (less110) {
            fun_440840(0, "LoadConfig: Fixing Sound Volume\n", v109, v106, "MouseYMul", 0, v105, v104, v103, 0, "MouseXMul", 0, v98, v97, v95, 0x80000001, 0, "LoadConfig: Fixing Sound Volume\n", v109, v106, "MouseYMul", 0, v105, v104, v103, 0, "MouseXMul", 0, v98, v97, v95, 0x80000001);
            eax111 = g4835a4;
            __asm__("cdq ");
            g4835a4 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax111) ^ reinterpret_cast<unsigned char>(v109)) - reinterpret_cast<unsigned char>(v109));
        }
        less_or_equal112 = reinterpret_cast<signed char>(g4835a4) <= reinterpret_cast<signed char>(15);
        if (!less_or_equal112) {
            g4835a4 = reinterpret_cast<void**>(15);
        }
        less113 = reinterpret_cast<signed char>(g4835c4) < reinterpret_cast<signed char>(0);
        if (less113) {
            fun_440840(0, "LoadConfig: Fixing Music Volume\n", v109, v106, "MouseYMul", 0, v105, v104, v103, 0, "MouseXMul", 0, v98, v97, v95, 0x80000001, 0, "LoadConfig: Fixing Music Volume\n", v109, v106, "MouseYMul", 0, v105, v104, v103, 0, "MouseXMul", 0, v98, v97, v95, 0x80000001);
            eax114 = g4835c4;
            __asm__("cdq ");
            g4835c4 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax114) ^ reinterpret_cast<unsigned char>(v109)) - reinterpret_cast<unsigned char>(v109));
        }
        less_or_equal115 = reinterpret_cast<signed char>(g4835c4) <= reinterpret_cast<signed char>(15);
        if (!less_or_equal115) {
            g4835c4 = reinterpret_cast<void**>(15);
        }
    }
    edx116 = g4835e0;
    eax117 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx116) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx116 == 0))) {
        ebx118 = 0;
        do {
            if (*reinterpret_cast<int32_t*>(ebx118 + 0x4647e8)) {
                edx119 = **reinterpret_cast<uint32_t**>(ebx118 + 0x4647e0);
                *reinterpret_cast<uint32_t*>(ebx118 + 0x4647ec) = edx119;
                **reinterpret_cast<uint32_t**>(ebx118 + 0x4647e0) = *reinterpret_cast<unsigned char*>(edx119 + 0x4776d4);
            }
            esi120 = g4835e0;
            ++eax117;
            ebx118 = ebx118 + 20;
        } while (reinterpret_cast<signed char>(eax117) < reinterpret_cast<signed char>(esi120));
    }
    goto v2;
}

void** fun_43d2c0(void** ecx);

void fun_437500(void** ecx) {
    void** eax2;
    void** v3;
    void** eax4;
    void** ebx5;

    eax2 = fun_43d2c0(ecx);
    g60aff8 = eax2;
    *reinterpret_cast<void***>(eax2 + 12) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(eax2) = v3;
    eax4 = eax2 + 32;
    *reinterpret_cast<void***>(eax2 + 24) = eax4;
    *reinterpret_cast<void***>(eax2 + 20) = eax4;
    *reinterpret_cast<void***>(eax2 + 8) = eax2;
    *reinterpret_cast<void***>(eax2 + 28) = eax4;
    ebx5 = eax2 + 4;
    *reinterpret_cast<void***>(eax4 + 4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax4 + 16) = ebx5;
    *reinterpret_cast<void***>(eax4 + 20) = ebx5;
    *reinterpret_cast<void***>(eax4) = *reinterpret_cast<void***>(eax2) - 32;
    return;
}

struct s630 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

void** fun_434580(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebx8;
    void** v9;
    void** v10;
    void** edx11;
    void** v12;
    void** esi13;
    struct s630* edx14;
    struct s630* eax15;
    void** eax16;
    void** ecx17;
    int1_t zf18;
    void** eax19;
    void** eax20;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebx8;
    v9 = ecx;
    v10 = edx11;
    v12 = esi13;
    edx14 = eax15;
    g60ae74 = reinterpret_cast<void**>(0);
    eax16 = fun_442e73(ecx, v12, v10, v9, v7, v6, a2, a3, a4, a5);
    ecx17 = edx14->f0;
    g60ae70 = eax16;
    if (ecx17) {
        do {
            fun_434240(ecx17);
            edx14 = reinterpret_cast<struct s630*>(&edx14->f4);
        } while (edx14->f4);
    }
    zf18 = g60ae74 == 0;
    if (zf18) {
        fun_43bd40(ecx17, "W_InitFiles: no files found", v12, v10);
    }
    eax19 = fun_442e73(ecx17, v12, v10, v9, v7, v6, a2, a3, a4, a5);
    g60ae64 = eax19;
    if (!eax19) {
        fun_43bd40(ecx17, "Couldn't allocate lumpcache", v12, v10);
    }
    eax20 = fun_442b80(ecx17, v12, v10, v9, v7, v6);
    return eax20;
}

void fun_42c070(void** ecx);

void fun_42c4d0(void** ecx);

void fun_42c560(void** ecx);

void fun_42ceb0(void** ecx);

void** fun_42c6c0(void** ecx);

struct s631 {
    signed char[4751152] pad4751152;
    signed char f487f30;
};

void** fun_42cef0(void** ecx) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** eax6;
    void** v7;
    void** eax8;
    void* esp9;
    void** edx10;
    uint32_t v11;
    void** v12;
    void** v13;
    void** eax14;
    void** ebx15;
    void** edx16;
    void** v17;
    void** v18;
    void** eax19;
    void** v20;
    int1_t zf21;
    void* v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void* esp28;
    struct s631* eax29;
    struct s631* ebx30;
    int32_t edx31;
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
    void* esp42;
    uint32_t eax43;
    uint32_t v44;
    void* v45;
    void** v46;
    void** v47;
    void* v48;
    void** edx49;
    signed char* ebx50;
    void** ebp51;
    void** esi52;
    signed char* edi53;
    signed char* esi54;
    void* esp55;
    uint32_t ecx56;
    void** edi57;
    void** eax58;
    void** esi59;
    void* edx60;
    void* ebx61;
    void** v62;
    void** edi63;
    void** esi64;
    void** edx65;
    void* ebx66;
    void** esi67;
    void* v68;
    void** eax69;
    signed char* eax70;
    void** eax71;
    void* ebx72;
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

    fun_42c070(ecx);
    fun_440950(ecx);
    fun_42c4d0(ecx);
    fun_440950(ecx);
    fun_42c560(ecx);
    fun_440950(ecx);
    fun_42ceb0(ecx);
    fun_42c6c0(ecx);
    fun_4346d0(ecx, v2, v3);
    eax6 = fun_4348a0(ecx, v4, v5);
    v7 = eax6;
    if (eax6) {
        eax8 = fun_434700(ecx);
        esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 0x224 - 4 + 4 - 4 + 4 - 4 + 4);
        edx10 = g4653f4;
        v11 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(eax8) / 0x300);
        if (!edx10) {
            eax14 = fun_4375e0(ecx, v12, v13);
            esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 + 4);
            g4653f4 = eax14;
        }
        ebx15 = g4653f4;
        if (!ebx15) 
            goto addr_42cb59_6;
    } else {
        edx16 = reinterpret_cast<void**>("R_DATA - ReduceColorMaps: Failed to locate PLAYPAL\n");
        goto addr_42ce4b_8;
    }
    fun_434740(ecx);
    fun_4346d0(ecx, v17, v18);
    eax19 = fun_434700(ecx);
    v20 = eax19;
    fun_434740(ecx);
    zf21 = reinterpret_cast<int1_t>(g4775e0 == 1);
    if (!zf21) {
        v22 = reinterpret_cast<void*>(0);
    } else {
        v22 = reinterpret_cast<void*>(20);
    }
    fun_442b80(ecx, v23, v24, v25, v26, v27);
    esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v22) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(v22 == 0))) {
        *reinterpret_cast<signed char*>(&ecx) = 1;
        eax29 = reinterpret_cast<struct s631*>(0);
        ebx30 = reinterpret_cast<struct s631*>(reinterpret_cast<uint32_t>(v22) + reinterpret_cast<uint32_t>(v22));
        do {
            edx31 = 0;
            *reinterpret_cast<signed char*>(&edx31) = eax29->f487f30;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp28) + edx31) = 1;
            eax29 = reinterpret_cast<struct s631*>(reinterpret_cast<uint32_t>(eax29) + 2);
        } while (reinterpret_cast<int32_t>(eax29) < reinterpret_cast<int32_t>(ebx30));
    }
    fun_442b80(ecx, v32, v33, v34, v35, v36);
    fun_442b80(ecx, v37, v38, v39, v40, v41);
    esp42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 + 4 - 4 + 4);
    eax43 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v22) >> 1);
    v44 = eax43;
    v45 = reinterpret_cast<void*>(eax43 * 4 - eax43);
    v46 = reinterpret_cast<void**>(0);
    v47 = reinterpret_cast<void**>(0);
    v48 = reinterpret_cast<void*>(v11 * 4 - v11 << 8);
    do {
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp42) + reinterpret_cast<unsigned char>(v46))) {
            if (reinterpret_cast<int32_t>(v11) > reinterpret_cast<int32_t>(0)) {
                edx49 = v47;
                ebx50 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v7) + reinterpret_cast<uint32_t>(v45));
                ebp51 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v47) + reinterpret_cast<uint32_t>(v48));
                do {
                    esi52 = g4653f4;
                    edi53 = ebx50;
                    esi54 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi52) + reinterpret_cast<unsigned char>(edx49));
                    esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp42) - 4);
                    ecx56 = 0;
                    do {
                        if (!ecx56) 
                            break;
                        --ecx56;
                        *edi53 = *esi54;
                        edi53 = edi53 + 4;
                        esi54 = esi54 + 4;
                    } while (0);
                    *reinterpret_cast<unsigned char*>(&ecx56) = 3;
                    do {
                        if (!ecx56) 
                            break;
                        --ecx56;
                        *edi53 = *esi54;
                        ++edi53;
                        ++esi54;
                    } while (1);
                    esp42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) + 4);
                    edx49 = edx49 + 0x300;
                    ebx50 = ebx50 + 0x300;
                } while (reinterpret_cast<signed char>(edx49) < reinterpret_cast<signed char>(ebp51));
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp42) + reinterpret_cast<unsigned char>(v46) + 0x100) = *reinterpret_cast<signed char*>(&v44);
            v45 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v45) + 3);
            ++v44;
        }
        edi57 = v46 + 1;
        v47 = v47 + 3;
        v46 = edi57;
    } while (reinterpret_cast<signed char>(edi57) < reinterpret_cast<signed char>(0x100));
    if (reinterpret_cast<int32_t>(v22) > reinterpret_cast<int32_t>(0)) {
        eax58 = reinterpret_cast<void**>(0);
        esi59 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v22) + reinterpret_cast<uint32_t>(v22));
        do {
            edx60 = reinterpret_cast<void*>(0);
            ebx61 = reinterpret_cast<void*>(0);
            *reinterpret_cast<signed char*>(&edx60) = *reinterpret_cast<signed char*>(eax58 + 0x487f31);
            *reinterpret_cast<signed char*>(&ebx61) = *reinterpret_cast<signed char*>(eax58 + 0x487f30);
            eax58 = eax58 + 2;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp42) + reinterpret_cast<int32_t>(ebx61) + 0x100) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp42) + reinterpret_cast<int32_t>(edx60) + 0x100);
        } while (reinterpret_cast<signed char>(eax58) < reinterpret_cast<signed char>(esi59));
    }
    v62 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v20) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v20 == 0))) {
        edi63 = v20;
        do {
            esi64 = v62 + 0x100;
            eax58 = v62;
            do {
                edx65 = g487fb4;
                ebx66 = reinterpret_cast<void*>(0);
                *reinterpret_cast<signed char*>(&ebx66) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx65) + reinterpret_cast<unsigned char>(eax58));
                ++eax58;
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx65) + reinterpret_cast<unsigned char>(eax58) + 0xffffffff) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp42) + reinterpret_cast<int32_t>(ebx66) + 0x100);
            } while (eax58 != esi64);
            esi67 = v62 + 0x100;
            v62 = esi67;
        } while (reinterpret_cast<signed char>(esi67) < reinterpret_cast<signed char>(edi63));
    }
    v68 = reinterpret_cast<void*>(0);
    while (eax69 = g487fb4, eax70 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax69) + reinterpret_cast<uint32_t>(v68)), *reinterpret_cast<signed char*>(&eax70) = *eax70, eax71 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax70) & 0xff), ebx72 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v68) + 1), *reinterpret_cast<signed char*>(eax71 + 0x487e30) = *reinterpret_cast<signed char*>(&v68), v68 = ebx72, reinterpret_cast<int32_t>(ebx72) < reinterpret_cast<int32_t>(0x100)) {
    }
    addr_42ce60_39:
    return eax71;
    addr_42cb59_6:
    edx16 = reinterpret_cast<void**>("R_DATA - ReduceColorMaps: Failed to allocate temporary palette array\n");
    addr_42ce4b_8:
    fun_412670(ecx, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86);
    eax71 = fun_437a90(ecx, "FAILED! %s\r\n", edx16, v87, v88, v89, v90, v91, v92);
    goto addr_42ce60_39;
}

void fun_42e520() {
    return;
}

void fun_42dd80(void** ecx) {
    void** v2;
    void** esi3;
    void** v4;
    void** edi5;
    void** v6;
    void** ebp7;
    void** esi8;
    uint32_t ebp9;
    void** v10;
    int32_t edx11;
    int32_t ebx12;
    void** ecx13;
    int32_t edi14;
    void** eax15;
    int32_t eax16;
    uint32_t edx17;
    uint32_t eax18;
    void** eax19;
    void** ebx20;

    v2 = esi3;
    v4 = edi5;
    v6 = ebp7;
    esi8 = g4775d0;
    ebp9 = 0x3c0;
    v10 = reinterpret_cast<void**>(0);
    do {
        edx11 = reinterpret_cast<int32_t>(ebp9) >> 31 << 4;
        ebx12 = 0x100000;
        ecx13 = v10;
        edi14 = reinterpret_cast<int32_t>(ebp9 - (edx11 + reinterpret_cast<uint1_t>(ebp9 < edx11 + __intrinsic()))) >> 4;
        do {
            g4775d0 = esi8;
            eax15 = fun_411d60(ecx13, v10, v6, v4, v2);
            eax16 = reinterpret_cast<signed char>(eax15) >> 12;
            edx17 = edi14 - reinterpret_cast<uint32_t>(eax16 - (eax16 >> 31) >> 1);
            esi8 = g4775d0;
            eax18 = edx17;
            if (reinterpret_cast<int32_t>(edx17) < reinterpret_cast<int32_t>(0)) {
                eax18 = eax18 ^ edx17;
            }
            if (reinterpret_cast<int32_t>(eax18) >= reinterpret_cast<int32_t>(32)) {
                eax18 = 31;
            }
            eax19 = g487fb4;
            ecx13 = ecx13 + 4;
            ebx12 = ebx12 + 0x100000;
            *reinterpret_cast<void****>(ecx13 + 0x48faac) = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax19) + (eax18 << 8));
        } while (ebx12 != 0x8100000);
        ebx20 = v10 + 0x200;
        ebp9 = ebp9 - 64;
        v10 = ebx20;
    } while (!reinterpret_cast<int1_t>(ebx20 == 0x2000));
    g4775d0 = esi8;
    return;
}

void fun_42d520(void** ecx) {
    void** ecx2;
    void** edx3;
    void** eax4;
    void** eax5;
    void** ecx6;
    void* eax7;
    unsigned char bl8;

    ecx2 = g48ae60;
    eax4 = fun_4375e0(ecx2, edx3, ecx);
    eax5 = eax4 + 0xff;
    *reinterpret_cast<signed char*>(&eax5) = 0;
    ecx6 = eax5;
    eax7 = reinterpret_cast<void*>(0);
    do {
        if (reinterpret_cast<int32_t>(eax7) < reinterpret_cast<int32_t>(0x70) || reinterpret_cast<int32_t>(eax7) > reinterpret_cast<int32_t>(0x7f)) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<uint32_t>(eax7) + 0x200) = *reinterpret_cast<unsigned char*>(&eax7);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<uint32_t>(eax7) + 0x100) = *reinterpret_cast<unsigned char*>(&eax7);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<uint32_t>(eax7)) = *reinterpret_cast<unsigned char*>(&eax7);
        } else {
            bl8 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) & 15);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<uint32_t>(eax7)) = reinterpret_cast<unsigned char>(bl8 + 96);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<uint32_t>(eax7) + 0x100) = reinterpret_cast<unsigned char>(bl8 + 64);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<uint32_t>(eax7) + 0x200) = reinterpret_cast<unsigned char>(bl8 + 32);
        }
        eax7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax7) + 1);
    } while (reinterpret_cast<int32_t>(eax7) < reinterpret_cast<int32_t>(0x100));
    g48ae60 = ecx6;
    return;
}

struct s632 {
    signed char[4607992] pad4607992;
    void** f464ff8;
    signed char[17] pad4608010;
    int16_t f46500a;
};

void fun_4291b0(void** ecx) {
    void** edx2;
    int32_t edi3;
    int1_t zf4;
    int32_t edx5;
    struct s632* ebx6;
    int32_t esi7;
    void** ecx8;
    void** eax9;
    void** eax10;

    edx2 = g481258;
    edi3 = 1;
    if (!edx2) {
        zf4 = g481264 == 0;
        if (!zf4) {
            edi3 = 3;
        }
    } else {
        edi3 = 2;
    }
    edx5 = 0;
    ebx6 = reinterpret_cast<struct s632*>(0);
    do {
        esi7 = edx5 * 4;
        if (!ebx6->f46500a) 
            break;
        if (static_cast<int32_t>(ebx6->f46500a) <= edi3) {
            ecx8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>("SW1BRCOM") + reinterpret_cast<uint32_t>(ebx6));
            eax9 = fun_42d020(ecx8);
            *reinterpret_cast<void***>(esi7 + 0x484a20) = eax9;
            edx5 = edx5 + 1 + 1;
            eax10 = fun_42d020(ecx8);
            *reinterpret_cast<void***>(edx5 * 4 + 0x484a1c) = eax10;
        }
        ebx6 = reinterpret_cast<struct s632*>(reinterpret_cast<uint32_t>(ebx6) + 20);
    } while (reinterpret_cast<int32_t>(ebx6) < reinterpret_cast<int32_t>(0x3e8));
    goto addr_429241_10;
    *reinterpret_cast<void***>(esi7 + 0x484a20) = reinterpret_cast<void**>(0xffffffff);
    g484cf0 = reinterpret_cast<void*>(edx5 - (edx5 >> 31) >> 1);
    addr_429241_10:
    return;
}

int32_t g464da0 = 0;

struct s633 {
    signed char[4607392] pad4607392;
    void** f464da0;
    signed char[21] pad4607414;
    void** f464db6;
    signed char[3] pad4607418;
    int32_t f464dba;
};

struct s634 {
    signed char[1] pad1;
    void** f1;
};

struct s635 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[8] pad13;
    void** fd;
};

void fun_427dd0(int32_t a1, int32_t a2) {
    int32_t ecx3;
    struct s633* ebx4;
    void** ecx5;
    void** eax6;
    void** eax7;
    void** ecx8;
    void** eax9;
    void** eax10;
    void** eax11;
    void** ecx12;
    void** edx13;
    void** edx14;
    struct s634* ecx15;
    void** ecx16;
    struct s635* eax17;
    void** edx18;
    void** edx19;

    ecx3 = g464da0;
    ebx4 = reinterpret_cast<struct s633*>(0);
    g484a18 = reinterpret_cast<void**>(0x484690);
    if (ecx3 != -1) {
        while (1) {
            ecx5 = reinterpret_cast<void**>(&ebx4->f464da0 + 4);
            if (!ebx4->f464da0) {
                eax6 = fun_434640(ecx5);
                if (eax6 == 0xffffffff) {
                    addr_427eb1_4:
                    ebx4 = reinterpret_cast<struct s633*>(reinterpret_cast<int32_t>(ebx4) + 26);
                    if (ebx4->f464dba != -1) 
                        continue; else 
                        break;
                } else {
                    eax7 = fun_42cf60(ecx5);
                    ecx8 = g484a18;
                    *reinterpret_cast<void***>(ecx8 + 4) = eax7;
                    eax9 = fun_42cf60(ecx8);
                }
            } else {
                eax10 = fun_42cfc0(ecx5);
                if (eax10 == 0xffffffff) 
                    goto addr_427eb1_4;
                eax11 = fun_42d020(ecx5);
                ecx12 = g484a18;
                *reinterpret_cast<void***>(ecx12 + 4) = eax11;
                eax9 = fun_42d020(ecx12);
            }
            edx13 = g484a18;
            *reinterpret_cast<void***>(edx13 + 8) = eax9;
            edx14 = g484a18;
            ecx15 = reinterpret_cast<struct s634*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx14 + 4)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx14 + 8)));
            *reinterpret_cast<void***>(edx14) = ebx4->f464da0;
            ecx16 = reinterpret_cast<void**>(&ecx15->f1);
            *reinterpret_cast<void***>(edx14 + 12) = ecx16;
            if (reinterpret_cast<signed char>(ecx16) < reinterpret_cast<signed char>(2)) {
                eax17 = reinterpret_cast<struct s635*>(&ebx4->f464da0);
                fun_43bd40(ecx16, "P_InitPicAnims: bad cycle from %s to %s", &eax17->fd, &eax17->f4);
            }
            edx18 = g484a18;
            edx19 = edx18 + 20;
            *reinterpret_cast<void***>(edx19 + 0xfffffffc) = ebx4->f464db6;
            g484a18 = edx19;
            goto addr_427eb1_4;
        }
    }
    goto a2;
}

void** fun_430ec0(void** ecx) {
    int32_t eax2;
    int32_t eax3;
    void** eax4;
    void** edx5;
    void** eax6;

    if (eax2 < 0 || eax3 > 0x7f) {
        eax6 = fun_43bd40(ecx, "Attempt to set sfx volume at %d", eax4, edx5);
    }
    g5f1368 = eax4;
    return eax6;
}

int32_t g4654e4 = 0;

void fun_41abf0(void** ecx);

void fun_430ac0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** esi11;
    void** v12;
    void** edi13;
    void** v14;
    void** ebp15;
    void* esp16;
    void** ebx17;
    void** eax18;
    int32_t eax19;
    int32_t eax20;
    void** v21;
    int1_t zf22;
    void** edi23;
    void** ebp24;
    int1_t less_or_equal25;
    void** ecx26;
    int32_t ecx27;
    void** esi28;
    void** ecx29;
    void** ecx30;
    void** ecx31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** ecx41;
    void** edi42;

    v9 = reinterpret_cast<void**>(__return_address());
    v10 = esi11;
    v12 = edi13;
    v14 = ebp15;
    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 36);
    ebx17 = eax18;
    if (eax19 < 0 || eax20 > 0x7f) {
        fun_43bd40(ecx, "Attempt to set music volume at %d", ebx17, v21);
        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 - 4 + 4 + 8);
    }
    ++g4654e4;
    if (ebx17 || (ecx = g4654d4, ecx == 0)) {
        if (ebx17 && ((zf22 = g5f1360 == 0, zf22) && (edi23 = g4654d4, !!edi23))) {
            fun_41abe0(ecx);
            goto addr_430bcf_6;
        }
        if (!ebx17 || ((ebp24 = g5f1360, !!ebp24) || (less_or_equal25 = g4654e4 <= 1, less_or_equal25))) {
            addr_430bcf_6:
            fun_41abf0(ecx);
            fun_41abf0(ecx);
        } else {
            ecx26 = g481264;
            g5f22c0 = ebp24;
            if (!ecx26) {
                ecx27 = 9;
                while (ecx27) {
                    --ecx27;
                }
                esi28 = g482a80;
                if (reinterpret_cast<signed char>(esi28) >= reinterpret_cast<signed char>(4)) 
                    goto addr_430b98_13; else 
                    goto addr_430b7e_14;
            } else {
                ecx29 = g482a5c;
                ecx30 = ecx29 + 32;
                goto addr_430ba2_16;
            }
        }
    } else {
        fun_41abd0(ecx);
    }
    g5f1360 = ebx17;
    goto a4;
    addr_430b98_13:
    ecx31 = g482a5c;
    ecx30 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp16) + reinterpret_cast<unsigned char>(ecx31) * 4 - 4);
    addr_430ba2_16:
    fun_41abf0(ecx30);
    fun_41abf0(ecx30);
    g5f1360 = ebx17;
    fun_430c80(ecx30, v32, v33, v34, v35, v36, v37, v38, v39, v40, v14, v12, v10, v9, a2, a3, a4, a5, a6, a7, a8);
    goto a4;
    addr_430b7e_14:
    ecx41 = esi28 + 0xffffffff;
    edi42 = g482a5c;
    ecx30 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx41 + reinterpret_cast<unsigned char>(ecx41) * 8) + 1 + reinterpret_cast<unsigned char>(edi42) + 0xffffffff);
    goto addr_430ba2_16;
}

void** g5f2748 = reinterpret_cast<void**>(0);

void fun_432fe0(void** ecx, void** a2) {
    void** eax3;
    void* esp4;
    void** ebx5;
    void** ecx6;
    void* esp7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void* esp13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    void** eax21;
    void* esp22;
    void** ebx23;
    void** ecx24;
    void* esp25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void** esi31;
    void** v32;
    void** v33;
    void** eax34;
    void* esp35;
    void** ecx36;
    int32_t ebx37;
    void* esp38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** eax43;
    void** edx44;
    void* esp45;
    void** v46;
    void** v47;
    int32_t esi48;
    void** v49;
    void** v50;
    void** eax51;
    void** edi52;
    void** v53;
    void** v54;
    void** eax55;
    void* esp56;
    void** ecx57;
    void** ebx58;
    void* esp59;
    void** v60;
    void** v61;
    void** v62;
    void** eax63;
    void* esp64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** eax69;
    void* esp70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** eax75;
    void* esp76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** eax81;
    void* esp82;
    void** v83;
    void** v84;
    int32_t esi85;
    void** v86;
    void** v87;
    void** eax88;
    void* esp89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** eax94;
    void** v95;
    void** v96;
    void** eax97;
    void** v98;
    void** v99;
    void** eax100;

    eax3 = fun_4346d0(ecx, __return_address(), a2);
    g5f2748 = eax3;
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 12);
    ebx5 = reinterpret_cast<void**>(0);
    ecx6 = reinterpret_cast<void**>(0);
    do {
        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4);
        fun_442b4a(ecx6, reinterpret_cast<int32_t>(esp7) + 8, "STTNUM%d", ebx5, v8, v9);
        eax12 = fun_434890(ecx6, v10, v11);
        esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 12 - 4 + 4 - 4 - 4);
        *reinterpret_cast<void***>(ecx6 + 0x5f2508) = eax12;
        ecx6 = ecx6 + 4;
        fun_442b4a(ecx6, reinterpret_cast<int32_t>(esp13) + 8, "STYSNUM%d", ebx5, v14, v15);
        ++ebx5;
        eax18 = fun_434890(ecx6, v16, v17);
        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 + 4 + 12 - 4 + 4);
        *reinterpret_cast<void***>(ecx6 + 0x5f2414) = eax18;
    } while (reinterpret_cast<signed char>(ebx5) < reinterpret_cast<signed char>(10));
    eax21 = fun_434890(ecx6, v19, v20);
    esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 + 4);
    ebx23 = reinterpret_cast<void**>(0);
    ecx24 = reinterpret_cast<void**>(0);
    g5f2744 = eax21;
    do {
        esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 - 4);
        ecx24 = ecx24 + 4;
        fun_442b4a(ecx24, reinterpret_cast<int32_t>(esp25) + 8, "STKEYS%d", ebx23, v26, v27);
        ++ebx23;
        eax30 = fun_434890(ecx24, v28, v29);
        esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 - 4 + 4 + 12 - 4 + 4);
        *reinterpret_cast<void***>(ecx24 + 0x5f23fc) = eax30;
    } while (reinterpret_cast<signed char>(ebx23) < reinterpret_cast<signed char>(6));
    esi31 = reinterpret_cast<void**>(2);
    eax34 = fun_434890(ecx24, v32, v33);
    esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 + 4);
    ecx36 = reinterpret_cast<void**>(0);
    ebx37 = 0;
    g5f26ac = eax34;
    do {
        esp38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 - 4);
        ebx37 = ebx37 + 8;
        fun_442b4a(ecx36, reinterpret_cast<int32_t>(esp38) + 8, "STGNUM%d", esi31, v39, v40);
        ecx36 = ecx36 + 4;
        eax43 = fun_434890(ecx36, v41, v42);
        esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp38) - 4 - 4 + 4 + 12 - 4 + 4);
        *reinterpret_cast<void***>(ebx37 + 0x5f2528) = eax43;
        ++esi31;
        *reinterpret_cast<int32_t*>(ebx37 + 0x5f252c) = *reinterpret_cast<int32_t*>(ecx36 + 0x5f241c);
    } while (!reinterpret_cast<int1_t>(ecx36 == 24));
    edx44 = g482a7c;
    esp45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 - 4);
    fun_442b4a(ecx36, reinterpret_cast<int32_t>(esp45) + 8, "STFB%d", edx44, v46, v47);
    esi48 = 0;
    eax51 = fun_434890(ecx36, v49, v50);
    g5f26b0 = eax51;
    edi52 = reinterpret_cast<void**>(0);
    eax55 = fun_434890(ecx36, v53, v54);
    esp56 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp45) - 4 - 4 + 4 + 12 - 4 + 4 - 4 + 4);
    g5f26b4 = eax55;
    do {
        ecx57 = reinterpret_cast<void**>(esi48 * 4);
        ebx58 = reinterpret_cast<void**>(0);
        do {
            esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp56) - 4 - 4 - 4);
            ecx57 = ecx57 + 4;
            ++esi48;
            fun_442b4a(ecx57, reinterpret_cast<int32_t>(esp59) + 12, "STFST%d%d", edi52, ebx58, v60);
            ++ebx58;
            eax63 = fun_434890(ecx57, v61, v62);
            esp56 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 - 4 + 4 + 16 - 4 + 4);
            *reinterpret_cast<void***>(ecx57 + 0x5f255c) = eax63;
        } while (reinterpret_cast<signed char>(ebx58) < reinterpret_cast<signed char>(3));
        esp64 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp56) - 4 - 4);
        fun_442b4a(ecx57, reinterpret_cast<int32_t>(esp64) + 8, "STFTR%d0", edi52, v65, v66);
        eax69 = fun_434890(ecx57, v67, v68);
        esp70 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp64) - 4 - 4 + 4 + 12 - 4 + 4 - 4 - 4);
        *reinterpret_cast<void***>(esi48 * 4 + 0x5f2560) = eax69;
        fun_442b4a(ecx57, reinterpret_cast<int32_t>(esp70) + 8, "STFTL%d0", edi52, v71, v72);
        eax75 = fun_434890(ecx57, v73, v74);
        esp76 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp70) - 4 - 4 + 4 + 12 - 4 + 4 - 4 - 4);
        *reinterpret_cast<void***>(esi48 * 4 + 0x5f2564) = eax75;
        fun_442b4a(ecx57, reinterpret_cast<int32_t>(esp76) + 8, "STFOUCH%d", edi52, v77, v78);
        eax81 = fun_434890(ecx57, v79, v80);
        *reinterpret_cast<void***>(esi48 * 4 + 0x5f2568) = eax81;
        esp82 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp76) - 4 - 4 + 4 + 12 - 4 + 4 - 4 - 4);
        fun_442b4a(ecx57, reinterpret_cast<int32_t>(esp82) + 8, "STFEVL%d", edi52, v83, v84);
        esi85 = esi48 + 1 + 1 + 1;
        eax88 = fun_434890(ecx57, v86, v87);
        *reinterpret_cast<void***>(esi85 * 4 + 0x5f2560) = eax88;
        esp89 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp82) - 4 - 4 + 4 + 12 - 4 + 4 - 4 - 4);
        esi48 = esi85 + 1 + 1;
        fun_442b4a(ecx57, reinterpret_cast<int32_t>(esp89) + 8, "STFKILL%d", edi52, v90, v91);
        ++edi52;
        eax94 = fun_434890(ecx57, v92, v93);
        esp56 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp89) - 4 - 4 + 4 + 12 - 4 + 4);
        *reinterpret_cast<void***>(esi48 * 4 + 0x5f255c) = eax94;
    } while (reinterpret_cast<signed char>(edi52) < reinterpret_cast<signed char>(5));
    eax97 = fun_434890(ecx57, v95, v96);
    *reinterpret_cast<void***>(esi48 * 4 + 0x5f2560) = eax97;
    eax100 = fun_434890(ecx57, v98, v99);
    *reinterpret_cast<void***>((esi48 + 1) * 4 + 0x5f2560) = eax100;
    return;
}

struct s636 {
    signed char f0;
    signed char f1;
};

void fun_43f870(void** ecx) {
    int32_t v2;
    int32_t edx3;
    void* esp4;
    void** v5;
    int32_t ebx6;
    int32_t eax7;
    void* esp8;
    void** esp9;
    void* v10;
    void** esp11;
    void* v12;
    void* v13;
    int32_t v14;
    void** v15;
    int32_t v16;
    int1_t zf17;
    int32_t v18;
    int32_t v19;
    void** v20;
    int32_t ebx21;
    int32_t eax22;
    void** esp23;
    void* v24;
    void** esp25;
    void* v26;
    void* v27;
    int32_t v28;
    int32_t v29;
    int32_t v30;
    uint32_t v31;
    struct s636* esi32;
    void* esp33;
    signed char al34;
    signed char al35;
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
    void* esp52;
    void* v53;
    int32_t eax54;
    void* v55;
    int32_t v56;

    v2 = edx3;
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x228);
    v5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp4) + 0x204);
    ebx6 = 0;
    eax7 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v5));
    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 + 4);
    if (!eax7) {
        esp9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp8) - 4);
        v10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) + 0x210);
        esp11 = esp9 - 1;
        v12 = reinterpret_cast<void*>(esp9 + 0x84);
        v13 = reinterpret_cast<void*>(esp11 + 0x84);
        RegQueryValueExA(v14, "recorddemo", 0, v13, v12, v10, 0x80000001, "Software\\id\\Doom95\\Session", v5);
        ecx = v15;
        RegCloseKey(ecx, v14, "recorddemo", 0, v13, v12, v10, 0x80000001, "Software\\id\\Doom95\\Session", v5);
        esp8 = reinterpret_cast<void*>(esp11 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1);
        if (v16 != 4) {
            ebx6 = 0;
        } else {
            ebx6 = 1;
        }
    }
    zf17 = ebx6 == 0;
    if (zf17) {
        v18 = ebx6;
    }
    if (!zf17 && v19) {
        v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp8) + 0x214);
        ebx21 = 0;
        eax22 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5));
        esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 - 4 - 4 + 4);
        if (!eax22 && ((esp23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp8) - 4), v24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) + 0x21c), esp25 = esp23 - 1, v26 = reinterpret_cast<void*>(esp23 + 1), v27 = reinterpret_cast<void*>(esp25 + 0x88), RegQueryValueExA(v28, "recorddemofile", 0, v27, v26, v24, 0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5), RegCloseKey(v29, v28, "recorddemofile", 0, v27, v26, v24, 0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5), esp8 = reinterpret_cast<void*>(esp25 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1), ebx21 = v30, ebx21 != 1) || 0x200 < v31)) {
            ebx21 = 0;
        }
        if (!ebx21) {
            esi32 = reinterpret_cast<struct s636*>(0x457a2f);
            esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4);
            do {
                al34 = esi32->f0;
                if (!al34) 
                    break;
                al35 = esi32->f1;
                ++esi32;
            } while (al35);
            esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) + 4);
        }
        if (ebx21 && (fun_418290(ecx, 0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51), esp52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 + 4), v53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp52) + 0x224), g48123c = reinterpret_cast<void**>(1), eax54 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v53, 0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5)), !eax54)) {
            v55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp52) - 4 - 4 - 4 - 4 + 4 - 4 + 0x224);
            RegSetValueExA(v18, "recorddemo", 0, 4, v55, 4, 0x80000001, "Software\\id\\Doom95\\Session", v53, 0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5);
            RegCloseKey(v56, v18, "recorddemo", 0, 4, v55, 4, 0x80000001, "Software\\id\\Doom95\\Session", v53, 0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5);
        }
    }
    goto v2;
}

struct s637 {
    signed char f0;
    signed char f1;
};

void fun_43fbe0(void** ecx) {
    int32_t v2;
    int32_t edx3;
    void* esp4;
    void** v5;
    int32_t ebx6;
    int32_t eax7;
    void* esp8;
    void** esp9;
    void* v10;
    void** esp11;
    void* v12;
    void* v13;
    int32_t v14;
    void** v15;
    int32_t v16;
    int1_t zf17;
    int32_t v18;
    int32_t v19;
    void** v20;
    int32_t ebx21;
    int32_t eax22;
    void** esp23;
    void* v24;
    void** esp25;
    void* v26;
    void* v27;
    int32_t v28;
    int32_t v29;
    int32_t v30;
    uint32_t v31;
    struct s637* esi32;
    void* esp33;
    signed char al34;
    signed char al35;
    void** v36;
    int32_t eax37;
    void* v38;
    int32_t v39;
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
    void** v59;
    void** v60;
    void** v61;
    void** v62;
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

    v2 = edx3;
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x228);
    v5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp4) + 0x204);
    ebx6 = 0;
    eax7 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v5));
    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 + 4);
    if (!eax7) {
        esp9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp8) - 4);
        v10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) + 0x210);
        esp11 = esp9 - 1;
        v12 = reinterpret_cast<void*>(esp9 + 0x84);
        v13 = reinterpret_cast<void*>(esp11 + 0x84);
        RegQueryValueExA(v14, "playdemo", 0, v13, v12, v10, 0x80000001, "Software\\id\\Doom95\\Session", v5);
        ecx = v15;
        RegCloseKey(ecx, v14, "playdemo", 0, v13, v12, v10, 0x80000001, "Software\\id\\Doom95\\Session", v5);
        esp8 = reinterpret_cast<void*>(esp11 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1);
        if (v16 != 4) {
            ebx6 = 0;
        } else {
            ebx6 = 1;
        }
    }
    zf17 = ebx6 == 0;
    if (zf17) {
        v18 = ebx6;
    }
    if (!zf17 && v19) {
        v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp8) + 0x214);
        ebx21 = 0;
        eax22 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5));
        esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 - 4 - 4 + 4);
        if (!eax22 && ((esp23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp8) - 4), v24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) + 0x21c), esp25 = esp23 - 1, v26 = reinterpret_cast<void*>(esp23 + 1), v27 = reinterpret_cast<void*>(esp25 + 0x88), RegQueryValueExA(v28, "playdemofile", 0, v27, v26, v24, 0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5), RegCloseKey(v29, v28, "playdemofile", 0, v27, v26, v24, 0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5), esp8 = reinterpret_cast<void*>(esp25 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1), ebx21 = v30, ebx21 != 1) || 0x200 < v31)) {
            ebx21 = 0;
        }
        if (!ebx21) {
            esi32 = reinterpret_cast<struct s637*>(0x457a2f);
            esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4);
            do {
                al34 = esi32->f0;
                if (!al34) 
                    break;
                al35 = esi32->f1;
                ++esi32;
            } while (al35);
            esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) + 4);
        }
        if (ebx21) {
            v36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp8) + 0x224);
            eax37 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v36, 0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5));
            if (!eax37) {
                v38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 - 4 - 4 + 4 - 4 + 0x224);
                RegSetValueExA(v18, "playdemo", 0, 4, v38, 4, 0x80000001, "Software\\id\\Doom95\\Session", v36, 0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5);
                RegCloseKey(v39, v18, "playdemo", 0, 4, v38, 4, 0x80000001, "Software\\id\\Doom95\\Session", v36, 0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5);
            }
            g482a3c = 1;
            fun_4183e0(0x80000001, "Software\\id\\Doom95\\Session", v36, 0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5);
            fun_4122e0(ecx, 0x80000001, "Software\\id\\Doom95\\Session", v36, 0x80000001, "Software\\id\\Doom95\\Session", v20, 0x80000001, "Software\\id\\Doom95\\Session", v5, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73);
        }
    }
    goto v2;
}

void fun_43fdc0(void** ecx) {
    void* esp2;
    void* v3;
    int32_t ebx4;
    int32_t eax5;
    void* esp6;
    void** esp7;
    void* v8;
    void** esp9;
    void* v10;
    void* v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    int1_t zf15;
    int32_t v16;
    void* v17;
    int32_t ebx18;
    int32_t eax19;
    void* esp20;
    void** esp21;
    void* v22;
    void** esp23;
    void* v24;
    void* v25;
    int32_t v26;
    int32_t v27;
    int32_t v28;
    int1_t zf29;
    int32_t v30;
    int32_t v31;
    int32_t v32;
    int32_t* esp33;
    int32_t v34;
    int32_t v35;
    void* esp36;
    void* v37;
    int32_t eax38;
    void* v39;
    int32_t v40;
    int32_t v41;
    int32_t edx42;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x230);
    v3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) + 0x208);
    ebx4 = 0;
    eax5 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v3));
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4 + 4);
    if (!eax5) {
        esp7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp6) - 4);
        v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) + 0x214);
        esp9 = esp7 - 1;
        v10 = reinterpret_cast<void*>(esp7 + 0x85);
        v11 = reinterpret_cast<void*>(esp9 + 0x85);
        RegQueryValueExA(v12, "loadgame", 0, v11, v10, v8, 0x80000001, "Software\\id\\Doom95\\Session", v3);
        RegCloseKey(v13, v12, "loadgame", 0, v11, v10, v8, 0x80000001, "Software\\id\\Doom95\\Session", v3);
        esp6 = reinterpret_cast<void*>(esp9 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1);
        if (v14 != 4) {
            ebx4 = 0;
        } else {
            ebx4 = 1;
        }
    }
    zf15 = ebx4 == 0;
    if (zf15) {
    }
    if (!zf15 && v16) {
        v17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) + 0x218);
        ebx18 = 0;
        eax19 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v17, 0x80000001, "Software\\id\\Doom95\\Session", v3));
        esp20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 - 4 - 4 + 4);
        if (!eax19) {
            esp21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp20) - 4);
            v22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) + 0x224);
            esp23 = esp21 - 1;
            v24 = reinterpret_cast<void*>(esp21 + 0x89);
            v25 = reinterpret_cast<void*>(esp23 + 0x89);
            RegQueryValueExA(v26, "cdrom", 0, v25, v24, v22, 0x80000001, "Software\\id\\Doom95\\Session", v17, 0x80000001, "Software\\id\\Doom95\\Session", v3);
            RegCloseKey(v27, v26, "cdrom", 0, v25, v24, v22, 0x80000001, "Software\\id\\Doom95\\Session", v17, 0x80000001, "Software\\id\\Doom95\\Session", v3);
            esp20 = reinterpret_cast<void*>(esp23 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1);
            if (v28 != 4) {
                ebx18 = 0;
            } else {
                ebx18 = 1;
            }
        }
        zf29 = ebx18 == 0;
        if (zf29) {
        }
        if (zf29 || !v30) {
            v31 = v32 - 1;
            esp33 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp20) - 4 - 4);
            v34 = reinterpret_cast<int32_t>("doomsav%d.dsg");
        } else {
            v31 = v35 - 1;
            esp33 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp20) - 4 - 4);
            v34 = reinterpret_cast<int32_t>("c:\\doomdata\\doomsav%d.dsg");
        }
        wsprintfA(esp33 + 2, v34, v31, 0x80000001, "Software\\id\\Doom95\\Session", v17, 0x80000001, "Software\\id\\Doom95\\Session", v3);
        fun_417b40(0x80000001, "Software\\id\\Doom95\\Session", v17, 0x80000001, "Software\\id\\Doom95\\Session", v3);
        esp36 = reinterpret_cast<void*>(esp33 - 1 - 1 + 1 + 3 - 1 + 1);
        v37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) + 0x22c);
        eax38 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v37, 0x80000001, "Software\\id\\Doom95\\Session", v17, 0x80000001, "Software\\id\\Doom95\\Session", v3));
        if (!eax38) {
            v39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 - 4 - 4 + 4 - 4 + 0x22c);
            RegSetValueExA(v40, "loadgame", 0, 4, v39, 4, 0x80000001, "Software\\id\\Doom95\\Session", v37, 0x80000001, "Software\\id\\Doom95\\Session", v17, 0x80000001, "Software\\id\\Doom95\\Session", v3);
            RegCloseKey(v41, v40, "loadgame", 0, 4, v39, 4, 0x80000001, "Software\\id\\Doom95\\Session", v37, 0x80000001, "Software\\id\\Doom95\\Session", v17, 0x80000001, "Software\\id\\Doom95\\Session", v3);
        }
    }
    goto edx42;
}

struct s638 {
    signed char f0;
    signed char f1;
};

struct s639 {
    signed char f0;
    signed char f1;
};

void fun_417b40(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, void* a6) {
    struct s638* edi7;
    struct s639* esi8;
    struct s639* eax9;
    signed char al10;
    signed char al11;

    edi7 = reinterpret_cast<struct s638*>(0x481e20);
    esi8 = eax9;
    do {
        al10 = esi8->f0;
        edi7->f0 = al10;
        if (!al10) 
            break;
        al11 = esi8->f1;
        ++esi8;
        edi7->f1 = al11;
        ++edi7;
    } while (al11);
    g482a8c = reinterpret_cast<void**>(3);
    return;
}

void fun_4435a2(int32_t ecx, int32_t a2) {
    __asm__("fnstcw word [esp]");
    __asm__("wait ");
    __asm__("fldcw word [esp]");
    __asm__("frndint ");
    __asm__("fldcw word [esp+0x4]");
    __asm__("wait ");
    goto a2;
}

void fun_4340f0(void* ecx, void** a2, void*** a3) {
    void*** ebp4;
    void* v5;
    void* edi6;
    int32_t edx7;
    void*** edx8;
    int32_t ebx9;
    void* eax10;
    void** ecx11;
    void*** esi12;
    void*** edi13;
    void* eax14;
    uint32_t ecx15;
    int1_t zf16;
    int1_t zf17;
    void** eax18;

    ebp4 = a3;
    v5 = ecx;
    fun_41d4e0();
    fun_41d4e0();
    edi6 = reinterpret_cast<void*>(edx7 * reinterpret_cast<unsigned char>(g4775d0));
    edx8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx9 * 4 + 0x5f27a0)) + reinterpret_cast<uint32_t>(edi6) + reinterpret_cast<int32_t>(eax10));
    while (ecx11 = a2 - 1, a2 = ecx11, ecx11 != 0xffffffff) {
        esi12 = ebp4;
        edi13 = edx8;
        eax14 = v5;
        ecx15 = reinterpret_cast<uint32_t>(v5) >> 2;
        zf16 = ecx15 == 0;
        do {
            if (!ecx15) 
                break;
            --ecx15;
            *edi13 = *esi12;
            edi13 = edi13 + 4;
            esi12 = esi12 + 4;
        } while (!zf16);
        *reinterpret_cast<unsigned char*>(&ecx15) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax14) & 3);
        zf17 = *reinterpret_cast<unsigned char*>(&ecx15) == 0;
        do {
            if (!ecx15) 
                break;
            --ecx15;
            *edi13 = *esi12;
            ++edi13;
            ++esi12;
        } while (!zf17);
        eax18 = g4775d0;
        ebp4 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<uint32_t>(v5));
        edx8 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx8) + reinterpret_cast<unsigned char>(eax18));
    }
    return;
}

struct s640 {
    signed char[8] pad8;
    void* f8;
};

struct s641 {
    signed char f0;
    signed char f1;
    signed char[1] pad3;
    signed char f3;
};

struct s642 {
    signed char[1] pad1;
    signed char f1;
};

struct s643 {
    signed char[4] pad4;
    signed char f4;
};

struct s644 {
    signed char f0;
    signed char f1;
    signed char[1] pad3;
    signed char f3;
};

struct s645 {
    signed char[4] pad4;
    signed char f4;
};

void** fun_416320(void** ecx) {
    void** edi2;
    struct s640* ebx3;
    int32_t ebx4;
    void* edx5;
    void** eax6;
    void* eax7;
    void* eax8;
    struct s641* ebp9;
    void* edx10;
    void*** edx11;
    void* edx12;
    void* v13;
    void** esi14;
    int32_t eax15;
    void* eax16;
    struct s642* eax17;
    int32_t ebx18;
    signed char* edx19;
    signed char* eax20;
    signed char cl21;
    signed char* eax22;
    struct s643* ebp23;
    struct s644* esi24;
    void* edx25;
    void*** ebp26;
    signed char* ebp27;
    void* eax28;
    int32_t eax29;
    int32_t ebx30;
    signed char* edx31;
    signed char* eax32;
    struct s645* esi33;

    edi2 = g4775d0;
    ebx3 = reinterpret_cast<struct s640*>(ebx4 * 4 + reinterpret_cast<int32_t>(edx5));
    if (!reinterpret_cast<int1_t>(edi2 == 0x140)) {
        eax6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax7) + reinterpret_cast<uint32_t>(eax8));
        ebp9 = reinterpret_cast<struct s641*>(reinterpret_cast<int32_t>(ebx3->f8) + reinterpret_cast<int32_t>(edx10));
        edx11 = g5f27a0;
        edx12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx11) + reinterpret_cast<unsigned char>(eax6));
        *reinterpret_cast<signed char*>(&eax6 + 1) = ebp9->f0;
        v13 = edx12;
        if (*reinterpret_cast<signed char*>(&eax6 + 1) != -1) {
            esi14 = edi2 + 0xffffffff;
            do {
                eax15 = 0;
                *reinterpret_cast<signed char*>(&eax15) = ebp9->f0;
                eax16 = reinterpret_cast<void*>(eax15 * reinterpret_cast<unsigned char>(edi2));
                eax17 = reinterpret_cast<struct s642*>(reinterpret_cast<uint32_t>(eax16) + reinterpret_cast<uint32_t>(eax16) + reinterpret_cast<uint32_t>(v13));
                ebx18 = 0;
                edx19 = &ebp9->f3;
                *reinterpret_cast<signed char*>(&ebx18) = ebp9->f1;
                while (--ebx18, ebx18 != -1) {
                    eax20 = &eax17->f1;
                    cl21 = *edx19;
                    *(eax20 - 1) = cl21;
                    *eax20 = cl21;
                    eax22 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax20) + reinterpret_cast<unsigned char>(esi14) + 1);
                    *(eax22 - 1) = cl21;
                    ++edx19;
                    *eax22 = cl21;
                    eax17 = reinterpret_cast<struct s642*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<unsigned char>(esi14));
                }
                eax6 = reinterpret_cast<void**>(0);
                *reinterpret_cast<signed char*>(&eax6) = ebp9->f1;
                ebp23 = reinterpret_cast<struct s643*>(reinterpret_cast<uint32_t>(ebp9) + reinterpret_cast<unsigned char>(eax6));
                ebp9 = reinterpret_cast<struct s641*>(&ebp23->f4);
            } while (ebp23->f4 != -1);
        }
    } else {
        esi24 = reinterpret_cast<struct s644*>(reinterpret_cast<int32_t>(ebx3->f8) + reinterpret_cast<int32_t>(edx25));
        ebp26 = g5f27a0;
        ebp27 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp26) + reinterpret_cast<uint32_t>(eax28));
        if (esi24->f0 != -1) {
            do {
                eax29 = 0;
                *reinterpret_cast<signed char*>(&eax29) = esi24->f0;
                ebx30 = 0;
                edx31 = &esi24->f3;
                *reinterpret_cast<signed char*>(&ebx30) = esi24->f1;
                eax32 = reinterpret_cast<signed char*>(eax29 * reinterpret_cast<unsigned char>(edi2) + reinterpret_cast<uint32_t>(ebp27));
                while (--ebx30, ebx30 != -1) {
                    ++edx31;
                    *eax32 = *edx31;
                    eax32 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax32) + reinterpret_cast<unsigned char>(edi2));
                }
                eax6 = reinterpret_cast<void**>(0);
                *reinterpret_cast<signed char*>(&eax6) = esi24->f1;
                esi33 = reinterpret_cast<struct s645*>(reinterpret_cast<uint32_t>(esi24) + reinterpret_cast<unsigned char>(eax6));
                esi24 = reinterpret_cast<struct s644*>(&esi33->f4);
            } while (esi33->f4 != -1);
        }
    }
    g4775d0 = edi2;
    return eax6;
}

void** fun_4161d0(void** ecx) {
    void** v2;
    void** esi3;
    void** v4;
    void** edi5;
    void** v6;
    void** ebp7;
    void** ecx8;
    void** eax9;
    signed char* esi10;
    signed char* eax11;
    int32_t edx12;
    int32_t eax13;
    void** eax14;
    uint32_t eax15;
    void** eax16;
    void** edi17;
    void** eax18;

    v2 = esi3;
    v4 = edi5;
    v6 = ebp7;
    ecx8 = eax9;
    esi10 = eax11;
    edx12 = 0;
    if (eax13) {
        do {
            ++esi10;
            if (!*esi10) 
                break;
            eax14 = fun_4435c2(ecx8, v6, v4, v2);
            eax15 = reinterpret_cast<uint32_t>(eax14 - 33);
            if (reinterpret_cast<int32_t>(eax15) < reinterpret_cast<int32_t>(0) || reinterpret_cast<int32_t>(eax15) > reinterpret_cast<int32_t>(63)) {
                edx12 = edx12 + 4;
            } else {
                edx12 = edx12 + **reinterpret_cast<int16_t**>(eax15 * 4 + 0x482f08);
            }
        } while (esi10);
    }
    eax16 = reinterpret_cast<void**>(edx12 - (edx12 >> 31) >> 1);
    edi17 = ecx8;
    if (ecx8) {
        do {
            eax16 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi17))));
            ++edi17;
            if (!eax16) 
                break;
            eax18 = fun_4435c2(ecx8, v6, v4, v2);
            eax16 = eax18 - 33;
            if (!(reinterpret_cast<signed char>(eax16) < reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(eax16) > reinterpret_cast<signed char>(63))) {
                ecx8 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax16) * 4 + 0x482f08);
                eax16 = fun_433a50(ecx8, v6, v4, *reinterpret_cast<signed char*>(&v2));
            }
        } while (edi17);
    }
    return eax16;
}

void** g481e18 = reinterpret_cast<void**>(0);

void** fun_416400(void** ecx) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** ecx6;
    void* esp7;
    void** edx8;
    uint32_t edx9;
    int32_t ebx10;
    int32_t esi11;
    void** ecx12;
    void** eax13;
    void** edx14;
    void** eax15;
    void** ebx16;
    int1_t less_or_equal17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    void** v24;
    void** v25;
    signed char v26;
    void** v27;
    void** v28;
    void** eax29;
    void** v30;
    void** v31;
    signed char v32;

    fun_434890(ecx, v2, v3);
    fun_434890(ecx, v4, v5);
    ecx6 = g4775d4;
    fun_433970(ecx6);
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 12 - 4 + 4 - 4 + 4 - 4 + 4);
    edx8 = g481e10;
    edx9 = reinterpret_cast<uint32_t>(edx8 - 0xe6);
    ebx10 = 0x140 - (reinterpret_cast<int32_t>(edx9 - (reinterpret_cast<int32_t>(edx9) >> 31)) >> 1);
    if (ebx10 > 0x140) {
        ebx10 = 0x140;
    }
    if (ebx10 < 0) {
        ebx10 = 0;
    }
    esi11 = ebx10;
    ecx12 = reinterpret_cast<void**>(0);
    do {
        if (esi11 >= 0x140) {
        }
        eax13 = fun_416320(ecx12);
        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 + 4);
        ++ecx12;
        ++esi11;
    } while (reinterpret_cast<signed char>(ecx12) < reinterpret_cast<signed char>(0x140));
    edx14 = g481e10;
    if (reinterpret_cast<signed char>(edx14) >= reinterpret_cast<signed char>(0x46a)) {
        if (reinterpret_cast<signed char>(edx14) >= reinterpret_cast<signed char>(0x49c)) {
            eax15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx14 - 0x49c) / 5);
            ebx16 = eax15;
            if (reinterpret_cast<signed char>(eax15) > reinterpret_cast<signed char>(6)) {
                ebx16 = reinterpret_cast<void**>(6);
            }
            less_or_equal17 = reinterpret_cast<signed char>(ebx16) <= reinterpret_cast<signed char>(g481e18);
            if (!less_or_equal17) {
                fun_4312d0(ecx12, v18);
                esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 + 4);
                g481e18 = ebx16;
            }
            fun_442b4a(ecx12, reinterpret_cast<int32_t>(esp7) - 4 - 4 + 8, "END%i", ebx16, v19, v20);
            eax23 = fun_434890(ecx12, v21, v22);
            eax13 = fun_433a50(eax23, v24, v25, v26);
        } else {
            eax29 = fun_434890(ecx12, v27, v28);
            eax13 = fun_433a50(eax29, v30, v31, v32);
            g481e18 = reinterpret_cast<void**>(0);
        }
    }
    return eax13;
}

signed char fun_419260() {
    uint32_t edx1;
    uint32_t ebx2;
    signed char al3;

    edx1 = g459dc0;
    ebx2 = g459dc4;
    if (edx1 == ebx2) {
        return 0;
    } else {
        al3 = *reinterpret_cast<signed char*>(ebx2 + 0x482ae4);
        g459dc4 = ebx2 + 1 & 0x7f;
        return al3;
    }
}

struct s646 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s647 {
    signed char[4] pad4;
    uint32_t f4;
};

int32_t g459790 = 0;

uint32_t g459794 = 0;

struct s648 {
    signed char[4] pad4;
    int32_t f4;
};

void** fun_4108e0(void** ecx, void** a2) {
    void** edx3;
    void** ecx4;
    int32_t* eax5;
    struct s646* eax6;
    int1_t zf7;
    int1_t zf8;
    int1_t zf9;
    int1_t zf10;
    uint32_t eax11;
    struct s647* eax12;
    void** ebp13;
    void** edi14;
    void** esi15;
    void** edx16;
    void** ebx17;
    uint1_t zf18;
    uint32_t eax19;
    void** eax20;
    void** eax21;
    void** eax22;
    void* eax23;
    void** eax24;
    void** eax25;
    uint1_t zf26;
    void** eax27;
    void** eax28;
    void** edx29;
    uint1_t zf30;
    uint32_t eax31;
    void** eax32;
    void** edx33;
    void** ebp34;
    void** eax35;
    void** eax36;
    void** edx37;
    void** eax38;
    void* eax39;
    void* tmp32_40;
    void** edx41;
    int1_t zf42;
    void** ebx43;
    void** eax44;
    int1_t zf45;
    void** ebx46;
    int1_t zf47;
    void** ebx48;
    int1_t zf49;
    void** ebx50;
    void** eax51;
    int32_t* eax52;
    struct s648* eax53;
    int1_t zf54;
    int32_t eax55;
    int32_t edx56;
    int32_t eax57;
    void** eax58;

    edx3 = g45973c;
    ecx4 = reinterpret_cast<void**>(0);
    if (edx3) {
        if (*eax5) {
            if (*eax5 == 1) {
                if (eax6->f4 < 0xac) {
                    if (eax6->f4 >= 45) {
                        if (eax6->f4 <= 45 || eax6->f4 == 61) {
                            g480110 = 0x10000;
                            g4800e8 = 0x10000;
                        } else {
                            return 0;
                        }
                    }
                } else {
                    if (eax6->f4 <= 0xac) {
                        zf7 = g459750 == 0;
                        if (zf7) {
                            g480090 = reinterpret_cast<void**>(0);
                            return 0;
                        }
                    } else {
                        if (eax6->f4 < 0xae) {
                            zf8 = g459750 == 0;
                            if (zf8) {
                                g480094 = reinterpret_cast<void**>(0);
                                return 0;
                            }
                        } else {
                            if (eax6->f4 <= 0xae) {
                                zf9 = g459750 == 0;
                                if (zf9) {
                                    g480090 = reinterpret_cast<void**>(0);
                                    return 0;
                                }
                            } else {
                                if (eax6->f4 == 0xaf) {
                                    zf10 = g459750 == 0;
                                    if (zf10) {
                                        g480094 = reinterpret_cast<void**>(0);
                                        return 0;
                                    }
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            eax11 = eax12->f4;
            ecx4 = reinterpret_cast<void**>(1);
            if (eax11 < 0x66) {
                if (eax11 < 48) {
                    if (eax11 < 9) {
                        addr_410c57_25:
                        ecx4 = reinterpret_cast<void**>(0);
                        g459790 = 0;
                        goto addr_410c61_26;
                    } else {
                        if (eax11 <= 9) {
                            g482a2c = reinterpret_cast<void**>(1);
                            g459794 = 0;
                            fun_4107f0(1, ebp13, edi14, esi15, edx16, ecx, ebx17, __return_address(), a2);
                            goto addr_410c61_26;
                        } else {
                            if (eax11 == 45) {
                                g480110 = 0xfafa;
                                g4800e8 = 0x1051e;
                                goto addr_410c61_26;
                            } else {
                                goto addr_410c57_25;
                            }
                        }
                    }
                } else {
                    if (eax11 <= 48) {
                        zf18 = reinterpret_cast<uint1_t>(g459794 == 0);
                        *reinterpret_cast<unsigned char*>(&eax11) = zf18;
                        eax19 = eax11 & 0xff;
                        g459794 = eax19;
                        if (!eax19) {
                            fun_410170(1);
                            goto addr_410c61_26;
                        } else {
                            eax20 = g48010c;
                            g4800a4 = eax20;
                            eax21 = g480108;
                            g4800a8 = eax21;
                            eax22 = g480104;
                            g4800a0 = eax22;
                            eax23 = g480100;
                            g480098 = eax23;
                            eax24 = g4800b8;
                            g459748 = eax24;
                            eax25 = fun_411d60(1, ebp13, edi14, esi15, edx16);
                            g4800b0 = eax25;
                            fun_410070(1);
                            goto addr_410c61_26;
                        }
                    } else {
                        if (eax11 < 61) 
                            goto addr_410c57_25;
                        if (eax11 <= 61) 
                            goto addr_410a85_38; else 
                            goto addr_410994_39;
                    }
                }
            } else {
                if (eax11 <= 0x66) {
                    zf26 = reinterpret_cast<uint1_t>(g459750 == 0);
                    *reinterpret_cast<unsigned char*>(&eax11) = zf26;
                    eax27 = reinterpret_cast<void**>(eax11 & 0xff);
                    g459750 = eax27;
                    g480010 = reinterpret_cast<void**>(0x7fffffff);
                    if (!eax27) {
                        eax28 = reinterpret_cast<void**>("Follow Mode OFF");
                    } else {
                        eax28 = reinterpret_cast<void**>("Follow Mode ON");
                    }
                    edx29 = g4800b4;
                    *reinterpret_cast<void***>(edx29 + 0xd8) = eax28;
                    goto addr_410c61_26;
                } else {
                    if (eax11 < 0xac) {
                        if (eax11 <= 0x67) {
                            zf30 = reinterpret_cast<uint1_t>(g459734 == 0);
                            *reinterpret_cast<unsigned char*>(&eax11) = zf30;
                            eax31 = eax11 & 0xff;
                            g459734 = eax31;
                            if (!eax31) {
                                eax32 = reinterpret_cast<void**>("Grid OFF");
                            } else {
                                eax32 = reinterpret_cast<void**>("Grid ON");
                            }
                            edx33 = g4800b4;
                            *reinterpret_cast<void***>(edx33 + 0xd8) = eax32;
                            goto addr_410c61_26;
                        } else {
                            if (eax11 == 0x6d) {
                                ebp34 = g45974c;
                                fun_442b4a(1, 0x480114, "%s %d", "Marked Spot", ebp34, ebp13);
                                eax35 = g4800b4;
                                *reinterpret_cast<void***>(eax35 + 0xd8) = reinterpret_cast<void**>(0x480114);
                                eax36 = g480104;
                                edx37 = g48010c;
                                eax38 = g45974c;
                                *reinterpret_cast<void**>("@" + reinterpret_cast<unsigned char>(eax38) * 8) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx37) + (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax36) - (reinterpret_cast<signed char>(eax36) >> 31)) >> 1));
                                eax39 = g480100;
                                tmp32_40 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax39) - (reinterpret_cast<int32_t>(eax39) >> 31)) >> 1) + reinterpret_cast<unsigned char>(g480108));
                                edx41 = g45974c;
                                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx41) * 8 + 0x48001c) = tmp32_40;
                                g45974c = reinterpret_cast<void**>(reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(edx41) + reinterpret_cast<unsigned char>(1)) % 10);
                                goto addr_410c61_26;
                            } else {
                                goto addr_410c57_25;
                            }
                        }
                    } else {
                        if (eax11 <= 0xac) {
                            zf42 = g459750 == 0;
                            if (!zf42) {
                                addr_4109e3_56:
                                ecx4 = reinterpret_cast<void**>(0);
                                goto addr_410c61_26;
                            } else {
                                ebx43 = g4800b0;
                                eax44 = reinterpret_cast<void**>(0x40000 * reinterpret_cast<unsigned char>(ebx43));
                                __asm__("shrd eax, edx, 0x10");
                                g480090 = eax44;
                                g480090 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax44));
                                goto addr_410c61_26;
                            }
                        } else {
                            if (eax11 < 0xae) {
                                zf45 = g459750 == 0;
                                if (!zf45) 
                                    goto addr_4109e3_56;
                                ebx46 = g4800b0;
                                __asm__("shrd eax, edx, 0x10");
                                g480094 = reinterpret_cast<void**>(0x40000 * reinterpret_cast<unsigned char>(ebx46));
                                goto addr_410c61_26;
                            } else {
                                if (eax11 <= 0xae) {
                                    zf47 = g459750 == 0;
                                    if (!zf47) 
                                        goto addr_4109e3_56;
                                    ebx48 = g4800b0;
                                    __asm__("shrd eax, edx, 0x10");
                                    g480090 = reinterpret_cast<void**>(0x40000 * reinterpret_cast<unsigned char>(ebx48));
                                    goto addr_410c61_26;
                                } else {
                                    if (eax11 != 0xaf) {
                                        goto addr_410c57_25;
                                    }
                                    zf49 = g459750 == 0;
                                    if (!zf49) 
                                        goto addr_4109e3_56;
                                    ebx50 = g4800b0;
                                    eax51 = reinterpret_cast<void**>(0x40000 * reinterpret_cast<unsigned char>(ebx50));
                                    __asm__("shrd eax, edx, 0x10");
                                    g480094 = eax51;
                                    g480094 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax51));
                                    goto addr_410c61_26;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (!*eax52 && eax53->f4 == 9) {
            fun_410820(0, ebp13, edi14, esi15, edx16, ecx);
            g482a2c = reinterpret_cast<void**>(0);
            ecx4 = reinterpret_cast<void**>(1);
        }
    }
    return ecx4;
    addr_410c61_26:
    zf54 = g482a6c == 0;
    if (zf54 && (eax55 = fun_414e50(ecx4), !!eax55)) {
        edx56 = g459730;
        g459730 = (edx56 + 1) % 3;
        return 0;
    }
    addr_410a85_38:
    g480110 = 0x1051e;
    g4800e8 = 0xfafa;
    goto addr_410c61_26;
    addr_410994_39:
    if (eax11 == 99) {
        eax57 = 0;
        ecx4 = reinterpret_cast<void**>(1);
        do {
            eax57 = eax57 + 8;
            *reinterpret_cast<int32_t*>(eax57 + 0x480010) = -1;
        } while (eax57 != 80);
        eax58 = g4800b4;
        g45974c = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax58 + 0xd8) = reinterpret_cast<void**>("All Marks Cleared");
        goto addr_410c61_26;
    } else {
        goto addr_410c57_25;
    }
}

void** g482a54 = reinterpret_cast<void**>(0);

void** fun_416a60(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** ebx11;
    void** v12;
    void** v13;
    void** edx14;
    void** v15;
    void** esi16;
    void** v17;
    void** edi18;
    void** eax19;
    void** edx20;
    void** ecx21;
    int32_t edi22;
    uint32_t eax23;
    void** ecx24;
    void** eax25;
    void* eax26;
    void** eax27;

    v9 = reinterpret_cast<void**>(__return_address());
    v10 = ebx11;
    v12 = ecx;
    v13 = edx14;
    v15 = esi16;
    v17 = edi18;
    eax19 = g482a44;
    edx20 = g4597dc;
    g482a54 = eax19;
    if (!edx20) {
        g4597dc = reinterpret_cast<void**>(0xffffffff);
    }
    ecx21 = reinterpret_cast<void**>(0);
    edi22 = 0;
    g482a68 = reinterpret_cast<void**>(0);
    do {
        if (*reinterpret_cast<int32_t*>(edi22 + 0x482978) && (eax23 = reinterpret_cast<unsigned char>(ecx21) * 0x118, *reinterpret_cast<int32_t*>(eax23 + 0x48251c) == 1)) {
            *reinterpret_cast<int32_t*>(eax23 + 0x48251c) = 2;
        }
        fun_442b80(ecx21, v17, v15, v13, v12, v10);
        edi22 = edi22 + 4;
        ++ecx21;
    } while (reinterpret_cast<signed char>(ecx21) < reinterpret_cast<signed char>(4));
    ecx24 = g482a58;
    fun_427730(ecx24, v17, v15, v13, v12, v10, v9, a2, a3, a4, a5, a6, a7, a8);
    eax25 = g482a7c;
    g482a78 = eax25;
    eax26 = fun_43c1e0(0);
    g482a1c = eax26;
    g482a8c = reinterpret_cast<void**>(0);
    fun_4378a0(0);
    fun_442b80(0, v17, v15, v13, v12, v10);
    g4829b4 = reinterpret_cast<void**>(0);
    g4829b8 = reinterpret_cast<void**>(0);
    g482a88 = reinterpret_cast<void**>(0);
    g482a24 = reinterpret_cast<void**>(0);
    g482a28 = reinterpret_cast<void**>(0);
    eax27 = fun_442b80(0, v17, v15, v13, v12, v10);
    return eax27;
}

void** fun_41d560(void** ecx);

void** g482a48 = reinterpret_cast<void**>(49);

void** fun_417b80(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    void** v13;
    void** ebx14;
    void** v15;
    void** v16;
    void** edx17;
    void** v18;
    void** esi19;
    void** esi20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    void** esi28;
    void** esi29;
    void** esi30;
    void** eax31;
    void** esi32;
    void** eax33;
    void** esi34;
    int32_t eax35;
    int32_t ebx36;
    void** v37;
    void** v38;
    void** esi39;
    int32_t edx40;
    void** esi41;
    int32_t ebx42;
    uint32_t eax43;
    void** esi44;
    int1_t zf45;
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

    v12 = reinterpret_cast<void**>(__return_address());
    v13 = ebx14;
    v15 = ecx;
    v16 = edx17;
    v18 = esi19;
    g482a8c = reinterpret_cast<void**>(0);
    fun_41d560(ecx);
    esi20 = g482a48;
    g482a40 = esi20 + 24;
    fun_442b80(ecx, v21, v22, v23, v24, v18);
    fun_442b4a(ecx, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 16 - 4 + 4 - 4 + 4 - 4 - 4 + 8, "version %i", 0x6d, v25, v26);
    eax27 = fun_4435d0(ecx);
    esi28 = g482a40;
    if (eax27) {
        addr_417cb5_2:
        return eax27;
    } else {
        esi29 = esi28 + 16;
        eax27 = *reinterpret_cast<void***>(esi29);
        esi30 = esi29 + 1;
        g482a58 = eax27;
        eax31 = reinterpret_cast<void**>(0);
        eax31 = *reinterpret_cast<void***>(esi30);
        esi32 = esi30 + 1;
        g482a80 = eax31;
        eax33 = reinterpret_cast<void**>(0);
        eax33 = *reinterpret_cast<void***>(esi32);
        esi34 = esi32 + 1;
        g482a5c = eax33;
        eax35 = 0;
        do {
            ebx36 = 0;
            eax35 = eax35 + 4;
            *reinterpret_cast<void***>(&ebx36) = *reinterpret_cast<void***>(esi34);
            ++esi34;
            *reinterpret_cast<int32_t*>(eax35 + 0x482974) = ebx36;
        } while (eax35 != 16);
        g482a40 = esi34;
        fun_417f70(ecx, v37, v38);
        esi39 = g482a40;
        edx40 = 0;
        esi41 = esi39 + 1;
        ebx42 = 0;
        eax43 = 0;
        *reinterpret_cast<void***>(&edx40) = *reinterpret_cast<void***>(esi41 + 0xffffffff);
        *reinterpret_cast<void***>(&ebx42) = *reinterpret_cast<void***>(esi41);
        *reinterpret_cast<void***>(&eax43) = *reinterpret_cast<void***>(esi41 + 1);
        g482a40 = esi41 + 1 + 1;
        g484d04 = (edx40 << 16) + (ebx42 << 8) + eax43;
        fun_42a0e0(ecx);
        fun_42a340(ecx);
        fun_42a580(ecx);
        fun_42aad0(ecx);
        esi44 = g482a40;
        if (*reinterpret_cast<void***>(esi44) != 29) 
            goto addr_417c8b_6;
    }
    addr_417c98_7:
    fun_437550(ecx);
    zf45 = g491b70 == 0;
    if (!zf45) {
        fun_42de80(ecx, v46, v47, v48, v49, v18, v16, v15, v13, v12, a2, a3, a4, a5, a6, a7);
    }
    eax27 = fun_43eed0(ecx, v50, v51, v52, v53, v18, v16, v15, v13, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    goto addr_417cb5_2;
    addr_417c8b_6:
    fun_43bd40(ecx, "Bad savegame", v54, v55);
    goto addr_417c98_7;
}

void** fun_417d10(void** ecx) {
    int32_t v2;
    int32_t edi3;
    void** v4;
    void** ebp5;
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
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
    void* esp35;
    void** edx36;
    void** v37;
    int32_t* esp38;
    int32_t v39;
    void** ebx40;
    void** v41;
    void** v42;
    struct s29* eax43;
    void*** esi44;
    void** eax45;
    void** edi46;
    void* esp47;
    void** ecx48;
    void** ebp49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** edi57;
    uint32_t ecx58;
    void** ebp59;
    void** ebp60;
    signed char al61;
    void** al62;
    void** al63;
    int32_t eax64;
    uint32_t eax65;
    void** ebp66;
    int32_t eax67;
    uint32_t eax68;
    void** ebp69;
    int32_t eax70;
    void** al71;
    int32_t v72;
    int32_t v73;
    void** ebp74;
    void** ebp75;
    void** ecx76;
    void** v77;
    void** v78;
    void** edx79;
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
    void** eax99;

    v2 = edi3;
    v4 = ebp5;
    eax34 = fun_41d410(ecx, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33);
    esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x74 - 4 + 4);
    if (!eax34) {
        edx36 = g4829bc;
        v37 = edx36;
        esp38 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp35) - 4 - 4);
        v39 = reinterpret_cast<int32_t>("doomsav%d.dsg");
    } else {
        ebx40 = g4829bc;
        v37 = ebx40;
        esp38 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp35) - 4 - 4);
        v39 = reinterpret_cast<int32_t>("c:\\doomdata\\doomsav%d.dsg");
    }
    fun_442b4a(ecx, esp38 + 2, v39, v37, v41, v42);
    eax43 = g5f27a4;
    esi44 = reinterpret_cast<void***>(0x482330);
    eax45 = reinterpret_cast<void**>(&eax43->f4000);
    g482a48 = eax45;
    edi46 = eax45;
    g482a40 = eax45;
    esp47 = reinterpret_cast<void*>(esp38 - 1 - 1 + 1 + 3 - 1);
    ecx48 = reinterpret_cast<void**>(6);
    do {
        if (!ecx48) 
            break;
        --ecx48;
        *reinterpret_cast<void***>(edi46) = *esi44;
        edi46 = edi46 + 4;
        esi44 = esi44 + 4;
    } while (1);
    *reinterpret_cast<unsigned char*>(&ecx48) = 0;
    do {
        if (!ecx48) 
            break;
        --ecx48;
        *reinterpret_cast<void***>(edi46) = *esi44;
        ++edi46;
        ++esi44;
    } while (0);
    ebp49 = g482a40;
    g482a40 = ebp49 + 24;
    fun_442b80(ecx48, v50, v51, v52, v53, v54);
    fun_442b4a(16, reinterpret_cast<int32_t>(esp47) + 4 - 4 + 4 - 4 - 4 + 0x6c, "version %i", 0x6d, v55, v56);
    edi57 = g482a40;
    ecx58 = 4;
    do {
        if (!ecx58) 
            break;
        --ecx58;
        *reinterpret_cast<void***>(edi57) = v4;
        edi57 = edi57 + 4;
    } while (1);
    *reinterpret_cast<unsigned char*>(&ecx58) = 0;
    do {
        if (!ecx58) 
            break;
        --ecx58;
        *reinterpret_cast<void***>(edi57) = *reinterpret_cast<void***>(&v2);
        ++edi57;
    } while (0);
    ebp59 = g482a40;
    ebp60 = ebp59 + 16 + 1 + 1 + 1;
    al61 = *reinterpret_cast<signed char*>(&g482a58);
    *reinterpret_cast<signed char*>(ebp60 + 0xfffffffd) = al61;
    al62 = g482a80;
    *reinterpret_cast<void***>(ebp60 + 0xfffffffe) = al62;
    al63 = g482a5c;
    *reinterpret_cast<void***>(ebp60 + 0xffffffff) = al63;
    eax64 = 0;
    do {
        ++ebp60;
        eax64 = eax64 + 4;
        *reinterpret_cast<void***>(ebp60 + 0xffffffff) = *reinterpret_cast<void***>(eax64 + 0x482978);
    } while (eax64 != 16);
    eax65 = g484d04;
    ebp66 = ebp60 + 1 + 1;
    eax67 = reinterpret_cast<int32_t>(eax65) >> 16;
    *reinterpret_cast<void***>(ebp66 + 0xfffffffe) = *reinterpret_cast<void***>(&eax67);
    eax68 = g484d04;
    ebp69 = ebp66 + 1;
    eax70 = reinterpret_cast<int32_t>(eax68) >> 8;
    *reinterpret_cast<void***>(ebp69 + 0xfffffffe) = *reinterpret_cast<void***>(&eax70);
    al71 = *reinterpret_cast<void***>(&g484d04);
    g482a40 = ebp69;
    *reinterpret_cast<void***>(ebp69 + 0xffffffff) = al71;
    fun_42a010(v72, v73);
    fun_42a1e0(ecx58);
    fun_42a4a0(ecx58);
    fun_42a6e0(ecx58);
    ebp74 = g482a40;
    *reinterpret_cast<void***>(ebp74) = reinterpret_cast<void**>(29);
    ebp75 = ebp74 + 1;
    ecx76 = g482a48;
    g482a40 = ebp75;
    if (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(ebp75) - reinterpret_cast<unsigned char>(ecx76)) > reinterpret_cast<int32_t>(0x2c000)) {
        fun_43bd40(ecx76, "Savegame buffer overrun", v77, v78);
    }
    fun_41d510(ecx76);
    edx79 = g482a7c;
    *reinterpret_cast<signed char*>(&g482330) = 0;
    g482a8c = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(edx79 + reinterpret_cast<unsigned char>(edx79) * 8) * 4 - reinterpret_cast<unsigned char>(edx79)) * 8 + 0x4825f0) = reinterpret_cast<int32_t>("game saved.");
    eax99 = fun_43eed0(ecx76, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98);
    return eax99;
}

void fun_418400(void** ecx) {
    void** v2;
    void** edi3;
    void** v4;
    void** ebp5;
    void** ecx6;
    void** eax7;
    void** ecx8;
    void** eax9;
    void** ecx10;
    void** eax11;
    void** ecx12;
    void** eax13;
    void** ecx14;
    void** eax15;
    void** ecx16;
    void** eax17;
    void** ecx18;
    int32_t eax19;
    int32_t ecx20;
    int1_t zf21;

    v2 = edi3;
    v4 = ebp5;
    ecx6 = g4829e0;
    g482a8c = reinterpret_cast<void**>(0);
    eax7 = fun_434890(ecx6, v4, v2);
    g482a18 = eax7;
    ecx8 = eax7 + 1 + 1 + 1;
    eax9 = reinterpret_cast<void**>(0);
    eax9 = *reinterpret_cast<void***>(ecx8 + 1);
    g482a6c = eax9;
    ecx10 = ecx8 + 1 + 1;
    eax11 = reinterpret_cast<void**>(0);
    eax11 = *reinterpret_cast<void***>(ecx10);
    ecx12 = ecx10 + 1;
    g481278 = eax11;
    eax13 = reinterpret_cast<void**>(0);
    eax13 = *reinterpret_cast<void***>(ecx12);
    ecx14 = ecx12 + 1;
    g481270 = eax13;
    eax15 = reinterpret_cast<void**>(0);
    eax15 = *reinterpret_cast<void***>(ecx14);
    ecx16 = ecx14 + 1;
    g48126c = eax15;
    eax17 = reinterpret_cast<void**>(0);
    eax17 = *reinterpret_cast<void***>(ecx16);
    ecx18 = ecx16 + 1;
    g482a7c = eax17;
    eax19 = 0;
    do {
        ecx20 = 0;
        eax19 = eax19 + 4;
        *reinterpret_cast<void***>(&ecx20) = *reinterpret_cast<void***>(ecx18);
        *reinterpret_cast<int32_t*>(eax19 + 0x482974) = ecx20;
        ++ecx18;
    } while (eax19 != 16);
    zf21 = g48297c == 0;
    if (!zf21) {
        g482a84 = reinterpret_cast<void**>(1);
        g482a00 = reinterpret_cast<void**>(1);
    }
    g4829e0 = ecx18;
    g459980 = reinterpret_cast<void**>(0);
    fun_417f70(ecx18, v4, v2);
    g482a90 = reinterpret_cast<void**>(0);
    g459980 = reinterpret_cast<void**>(1);
    g482a64 = reinterpret_cast<void**>(1);
    return;
}

int32_t g482454 = 0;

void** g482450 = reinterpret_cast<void**>(0);

void** g482458 = reinterpret_cast<void**>(1);

int32_t g482460 = 0x8dd02900;

int32_t g482464 = 0xc504;

int32_t g482468 = 0x18050000;

void** g482474 = reinterpret_cast<void**>(0x83);

void** g4829a4 = reinterpret_cast<void**>(0x68);

void** fun_437430(void** ecx);

void** fun_417790(void** ecx) {
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
    void** edx14;
    int32_t ebx15;
    void** v16;
    int1_t zf17;
    void** v18;
    int1_t zf19;
    void** eax20;
    void** edx21;
    void** eax22;
    void** eax23;
    void** ebx24;
    int1_t zf25;
    void** esi26;
    void** eax27;
    int1_t zf28;
    void** eax29;
    void** eax30;
    int32_t eax31;
    int32_t eax32;
    int32_t eax33;
    int32_t eax34;
    void** edx35;
    void** edx36;
    void** edx37;
    int32_t edx38;
    void** edx39;
    void** eax40;
    int32_t edx41;
    signed char* ebp42;
    signed char* ebx43;
    int32_t v44;
    int32_t eax45;
    int32_t ecx46;
    int32_t ecx47;
    signed char* edi48;
    uint32_t ecx49;
    signed char* esi50;
    void** ecx51;
    void** edx52;
    void*** esi53;
    void** edi54;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ebx4;
    v5 = ecx;
    v6 = edx7;
    v8 = esi9;
    v10 = edi11;
    v12 = ebp13;
    edx14 = reinterpret_cast<void**>(0);
    ebx15 = 0;
    g482a8c = reinterpret_cast<void**>(0);
    do {
        if (*reinterpret_cast<int32_t*>(ebx15 + 0x482978)) {
            fun_417230(ecx, v16);
        }
        ++edx14;
        ebx15 = ebx15 + 4;
    } while (reinterpret_cast<signed char>(edx14) < reinterpret_cast<signed char>(4));
    zf17 = g45973c == 0;
    if (!zf17) {
        fun_4107f0(ecx, v18, v12, v10, v8, v6, v5, v3, v2);
    }
    zf19 = g481264 == 0;
    if (!zf19 || (eax20 = g482a5c, reinterpret_cast<unsigned char>(eax20) < reinterpret_cast<unsigned char>(8))) {
        addr_41780e_8:
        edx21 = g482a7c;
        g482454 = *reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(edx21 + reinterpret_cast<unsigned char>(edx21) * 8) * 4 - reinterpret_cast<unsigned char>(edx21)) * 8 + 0x48262c);
        eax22 = g482a80;
        g482450 = eax22 - 1;
        eax23 = g482a5c;
        ebx24 = g481264;
        g482458 = eax23 - 1;
        if (!ebx24) {
            zf25 = g482998 == 0;
            if (zf25) {
                esi26 = g482a5c;
                if (!reinterpret_cast<int1_t>(esi26 == 9)) {
                    g48245c = esi26;
                } else {
                    eax27 = g482a80;
                    switch (eax27 - 1) {
                    case 0:
                        g48245c = reinterpret_cast<void**>(3);
                        break;
                    case 1:
                        g48245c = reinterpret_cast<void**>(5);
                        break;
                    case 2:
                        g48245c = reinterpret_cast<void**>(6);
                        break;
                    case 3:
                        g48245c = reinterpret_cast<void**>(2);
                    }
                }
            } else {
                g48245c = reinterpret_cast<void**>(8);
            }
        } else {
            zf28 = g482998 == 0;
            if (zf28) {
                eax29 = g482a5c;
                if (reinterpret_cast<unsigned char>(eax29) < reinterpret_cast<unsigned char>(31) || reinterpret_cast<unsigned char>(eax29) > reinterpret_cast<unsigned char>(32)) {
                    eax30 = g482a5c;
                    goto addr_4178a7_22;
                } else {
                    g48245c = reinterpret_cast<void**>(15);
                }
            } else {
                eax30 = g482a5c;
                if (reinterpret_cast<unsigned char>(eax30) >= reinterpret_cast<unsigned char>(15)) {
                    if (reinterpret_cast<unsigned char>(eax30) <= reinterpret_cast<unsigned char>(15)) {
                        g48245c = reinterpret_cast<void**>(30);
                    } else {
                        if (eax30 == 31) {
                            addr_4178a7_22:
                            g48245c = eax30;
                        }
                    }
                }
            }
        }
    } else {
        if (reinterpret_cast<unsigned char>(eax20) <= reinterpret_cast<unsigned char>(8)) {
            g482a8c = reinterpret_cast<void**>(7);
            goto addr_417a73_31;
        } else {
            if (eax20 == 9) {
                eax31 = 0;
                do {
                    eax31 = eax31 + 0x118;
                    *reinterpret_cast<int32_t*>(eax31 + 0x482514) = 1;
                } while (eax31 != 0x460);
                goto addr_41780e_8;
            } else {
                goto addr_41780e_8;
            }
        }
    }
    eax32 = g482a70;
    g482460 = eax32;
    eax33 = g482a4c;
    g482464 = eax33;
    eax34 = g482a50;
    g482468 = eax34;
    edx35 = g481264;
    g48246c = 0;
    if (!edx35) {
        edx36 = g482a80;
        edx37 = g482a5c;
        edx38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx37) * 4 + reinterpret_cast<uint32_t>(edx36 + reinterpret_cast<unsigned char>(edx36) * 4) * 8 + 0x4599a8);
    } else {
        edx39 = g482a5c;
        edx38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx39) * 4 + 0x459a44);
    }
    g482470 = (edx38 * 8 + edx38) * 4 - edx38;
    eax40 = g482a7c;
    edx41 = 0;
    g482474 = eax40;
    ebp42 = "h*H";
    ebx43 = reinterpret_cast<signed char*>(0x482578);
    v44 = 0;
    do {
        eax45 = edx41 * 40;
        *reinterpret_cast<int32_t*>(eax45 + reinterpret_cast<int32_t>("H")) = *reinterpret_cast<int32_t*>(v44 + 0x482978);
        ecx46 = edx41 * 0x118;
        *reinterpret_cast<int32_t*>(eax45 + 0x48247c) = *reinterpret_cast<int32_t*>(ecx46 + 0x4825e4);
        ecx47 = *reinterpret_cast<int32_t*>(ecx46 + 0x4825ec);
        *reinterpret_cast<int32_t*>(eax45 + reinterpret_cast<int32_t>("*H")) = *reinterpret_cast<int32_t*>(ecx46 + 0x4825e8);
        edi48 = ebp42;
        *reinterpret_cast<int32_t*>(eax45 + 0x482484) = ecx47;
        ecx49 = g484d04;
        esi50 = ebx43;
        *reinterpret_cast<uint32_t*>(eax45 + reinterpret_cast<int32_t>("n")) = ecx49;
        ebp42 = ebp42 + 40;
        ecx51 = reinterpret_cast<void**>(4);
        do {
            if (!ecx51) 
                break;
            --ecx51;
            *edi48 = *esi50;
            edi48 = edi48 + 4;
            esi50 = esi50 + 4;
        } while (1);
        *reinterpret_cast<unsigned char*>(&ecx51) = 0;
        do {
            if (!ecx51) 
                break;
            --ecx51;
            *edi48 = *esi50;
            ++edi48;
            ++esi50;
        } while (0);
        ++edx41;
        ebx43 = ebx43 + 0x118;
        v44 = v44 + 4;
    } while (edx41 < 4);
    edx52 = g4829a4;
    g482a68 = reinterpret_cast<void**>(1);
    g482a2c = reinterpret_cast<void**>(0);
    g45973c = reinterpret_cast<void**>(0);
    if (edx52) {
        esi53 = reinterpret_cast<void***>(0x482450);
        edi54 = edx52;
        ecx51 = reinterpret_cast<void**>(50);
        do {
            if (!ecx51) 
                break;
            --ecx51;
            *reinterpret_cast<void***>(edi54) = *esi53;
            edi54 = edi54 + 4;
            esi53 = esi53 + 4;
        } while (1);
        *reinterpret_cast<unsigned char*>(&ecx51) = 0;
        do {
            if (!ecx51) 
                break;
            --ecx51;
            *reinterpret_cast<void***>(edi54) = *esi53;
            ++edi54;
            ++esi53;
        } while (0);
    }
    eax20 = fun_437430(ecx51);
    addr_417a73_31:
    return eax20;
}

void** g455250 = reinterpret_cast<void**>(68);

void** g455254 = reinterpret_cast<void**>(48);

int16_t g455258 = 0x7863;

signed char g45525a = 0;

void fun_41dea0(void** ecx, void** a2, void** a3, void** a4, int24_t a5);

void fun_41dfd0(void** ecx) {
    void** v2;
    void** ebp3;
    int32_t ebx4;
    void** v5;
    void** v6;
    void** v7;
    void** edi8;
    void** esi9;
    void** edx10;
    void** v11;
    void** v12;
    void** v13;
    int32_t eax14;
    int32_t edx15;
    int32_t eax16;
    void** eax17;
    void** ecx18;
    void** edx19;

    v2 = ebp3;
    ebx4 = 0;
    fun_43c950(ecx, v5, v6, v7, v2, edi8, esi9, edx10);
    v11 = g455250;
    v12 = g455254;
    *reinterpret_cast<int16_t*>(&v13) = g455258;
    *reinterpret_cast<signed char*>(&v13 + 2) = g45525a;
    do {
        eax14 = ebx4 / reinterpret_cast<signed char>(10) + 48;
        *reinterpret_cast<signed char*>(&v12) = *reinterpret_cast<signed char*>(&eax14);
        edx15 = ebx4 % reinterpret_cast<signed char>(10) + 48;
        *reinterpret_cast<signed char*>(&v12 + 1) = *reinterpret_cast<signed char*>(&edx15);
        eax16 = fun_442fa9(10, v11, v12, v13, v2);
        if (eax16 == -1) 
            break;
        ++ebx4;
    } while (ebx4 <= 99);
    if (ebx4 == 100) {
        fun_43bd40(10, "M_ScreenShot: Couldn't create a PCX", v11, v12, 10, "M_ScreenShot: Couldn't create a PCX", v11, v12);
    }
    eax17 = fun_434890(10, v11, v12, 10, v11, v12);
    ecx18 = g4775d4;
    fun_41dea0(ecx18, eax17, v11, v12, *reinterpret_cast<int24_t*>(&v13));
    edx19 = g482a7c;
    *reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(edx19 + reinterpret_cast<unsigned char>(edx19) * 8) * 4 - reinterpret_cast<unsigned char>(edx19)) * 8 + 0x4825f0) = reinterpret_cast<int32_t>("screen shot");
    return;
}

void fun_42afc0(void** ecx) {
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    void** ebx6;
    int32_t edx7;

    zf2 = g482a88 == 0;
    if (zf2 && ((zf3 = g482a84 == 0, !zf3) || ((zf4 = g4835cc == 0, zf4) || ((zf5 = g482a64 == 0, !zf5) || (ebx6 = g482a7c, *reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(ebx6 + reinterpret_cast<unsigned char>(ebx6) * 8) * 4 - reinterpret_cast<unsigned char>(ebx6)) * 8 + 0x482528) == 1))))) {
        edx7 = 0;
        do {
            if (*reinterpret_cast<int32_t*>(edx7 + 0x482978)) {
                fun_42b3d0(ecx);
            }
            edx7 = edx7 + 4;
        } while (edx7 != 16);
        fun_42af70(ecx);
        fun_428bc0(ecx);
        fun_425330(ecx);
        ++g484d04;
    }
    return;
}

void** g5f2750 = reinterpret_cast<void**>(0);

void fun_432bd0(void** ecx);

void fun_432d40(void** ecx) {
    uint32_t eax2;
    void** eax3;

    ++g5f2750;
    eax2 = fun_41d480(ecx);
    g5f2608 = eax2;
    fun_432bd0(ecx);
    eax3 = g5f274c;
    g466884 = *reinterpret_cast<void***>(eax3 + 32);
    return;
}

void fun_410f40(void** ecx) {
    int1_t zf2;
    void** ebx3;
    void** ecx4;
    int1_t zf5;
    uint32_t ebx6;
    void** eax7;
    void** edi8;
    void** edx9;
    void** ebx10;
    void** eax11;
    void** edi12;
    void** eax13;
    int1_t less_or_equal14;
    int1_t zf15;
    int1_t zf16;

    zf2 = g45973c == 0;
    if (!zf2) {
        ebx3 = g4800c4;
        ecx4 = g459750;
        g4800c4 = ebx3 + 1;
        if (ecx4) {
            fun_410df0(ecx4);
        }
        zf5 = g4800e8 == 0x10000;
        if (!zf5) {
            ebx6 = g480110;
            eax7 = g459748;
            __asm__("shrd eax, edx, 0x10");
            g459748 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) * ebx6);
            eax11 = fun_411d60(ecx4, edi8, edx9, ecx, ebx10);
            edi12 = g4800b8;
            g4800b0 = eax11;
            eax13 = g459748;
            if (reinterpret_cast<signed char>(eax13) >= reinterpret_cast<signed char>(edi12)) {
                less_or_equal14 = reinterpret_cast<signed char>(eax13) <= reinterpret_cast<signed char>(g4800bc);
                if (less_or_equal14) {
                    fun_410070(ecx4);
                } else {
                    fun_4108b0(ecx4, edi8, edx9);
                }
            } else {
                fun_410880(ecx4, edi8, edx9);
            }
        }
        zf15 = g480090 == 0;
        if (!zf15 || (zf16 = g480094 == 0, !zf16)) {
            fun_4103d0(ecx4);
        }
    }
    return;
}

int32_t g4835a8 = 0x35f8158b;

void** fun_419010(void** ecx) {
    void** edx2;
    void** ebx3;
    int1_t zf4;
    int1_t zf5;
    void** eax6;
    int1_t zf7;
    void** eax8;
    int1_t zf9;
    void** eax10;
    void** eax11;
    int1_t zf12;
    void** ecx13;
    int32_t edi14;
    int32_t ebp15;
    void** v16;
    int1_t zf17;
    signed char bl18;
    int32_t eax19;
    void* edx20;
    void** v21;
    void** eax22;
    void** eax23;
    void** ebx24;

    edx2 = g482b74;
    if (edx2 && (ebx3 = edx2 + 0xffffffff, g482b74 = ebx3, !ebx3)) {
        g482b6c = ebx3;
        g482f00 = ebx3;
    }
    zf4 = g4835a8 == 0;
    if ((!zf4 || (zf5 = g482b70 == 0, !zf5)) && ((eax6 = g483004, !!*reinterpret_cast<void***>(eax6 + 0xd8)) && (zf7 = g482f00 == 0, zf7) || (eax8 = g483004, !!*reinterpret_cast<void***>(eax8 + 0xd8)) && (zf9 = g482b70 == 0, !zf9))) {
        fun_418960(ecx);
        eax10 = g483004;
        *reinterpret_cast<void***>(eax10 + 0xd8) = reinterpret_cast<void**>(0);
        eax11 = g482b70;
        g482b6c = reinterpret_cast<void**>(1);
        g482f00 = eax11;
        eax8 = reinterpret_cast<void**>(0);
        g482b74 = reinterpret_cast<void**>(0x8c);
        g482b70 = reinterpret_cast<void**>(0);
    }
    zf12 = g482a84 == 0;
    if (!zf12) {
        ecx13 = reinterpret_cast<void**>(0);
        edi14 = 0;
        ebp15 = 0;
        v16 = reinterpret_cast<void**>(0x482b88);
        do {
            if (*reinterpret_cast<int32_t*>(edi14 + 0x482978) && ((zf17 = ecx13 == g482a7c, !zf17) && (bl18 = *reinterpret_cast<signed char*>(ebp15 + 0x482526), !!bl18))) {
                if (bl18 > 5) {
                    if (bl18 >= 97 && bl18 <= 0x7a) {
                        eax19 = 0;
                        edx20 = g482b64;
                        *reinterpret_cast<signed char*>(&eax19) = bl18;
                        bl18 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx20) + eax19);
                    }
                    v21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx13) * 0x75);
                    eax22 = fun_418ba0(ecx13);
                    if (eax22 && bl18 == 13) {
                        if (*reinterpret_cast<int32_t*>(v21 + 0x482bd9) && ((eax23 = g482a7c, static_cast<int32_t>(*reinterpret_cast<signed char*>(ecx13 + 0x482b68)) == eax23 + 1) || *reinterpret_cast<signed char*>(ecx13 + 0x482b68) == 5)) {
                            fun_418960(ecx13);
                            g482f00 = reinterpret_cast<void**>(1);
                            g482b6c = reinterpret_cast<void**>(1);
                            ebx24 = g481264;
                            g482b74 = reinterpret_cast<void**>(0x8c);
                            if (!ebx24) {
                            }
                            fun_4312d0(ecx13, v21);
                        }
                        fun_418b40();
                    }
                } else {
                    *reinterpret_cast<signed char*>(ecx13 + 0x482b68) = bl18;
                }
                *reinterpret_cast<signed char*>(ebp15 + 0x482526) = 0;
            }
            edi14 = edi14 + 4;
            ebp15 = ebp15 + 0x118;
            eax8 = v16 + 0x75;
            ++ecx13;
            v16 = eax8;
        } while (reinterpret_cast<signed char>(ecx13) < reinterpret_cast<signed char>(4));
    }
    return eax8;
}

void fun_4364f0();

void** fun_435f40(void** ecx);

void** fun_436570(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** edx18;
    void** edx19;
    int1_t zf20;
    void** esi21;
    void** edx22;
    void** ebx23;
    void** eax24;
    uint1_t less25;
    void** eax26;
    void** ebx27;
    void** ebx28;
    int1_t zf29;
    int1_t zf30;
    void** eax31;
    void** eax32;
    void** eax33;
    void** esi34;
    void** esi35;
    int1_t zf36;
    void** eax37;
    uint32_t eax38;
    void** eax39;

    edx18 = g60afe8;
    edx19 = edx18 + 1;
    g60afe8 = edx19;
    if (reinterpret_cast<int1_t>(edx19 == 1)) {
        zf20 = g481264 == 0;
        if (zf20) {
        }
        fun_430c80(ecx, esi21, edx22, ebx23, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    }
    fun_4364f0();
    eax24 = g60afe0;
    less25 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax24) < reinterpret_cast<signed char>(0));
    if (less25) {
        if (eax24 == 0xffffffff) {
            eax26 = fun_434f50(ecx);
            ebx27 = g60aff4;
            ebx28 = ebx27 - 1;
            g60aff4 = ebx28;
            if (!ebx28) {
                fun_436ab0(ecx);
                eax26 = fun_417a80(ecx, esi21, edx22, ebx23, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            }
            return eax26;
        } else {
            return eax24;
        }
    } else {
        if (less25 | reinterpret_cast<uint1_t>(eax24 == 0)) {
            zf29 = g482a6c == 0;
            if (zf29) {
                zf30 = g482a84 == 0;
                if (zf30) {
                    eax31 = fun_435f40(ecx);
                    return eax31;
                } else {
                    eax32 = fun_435b10(ecx);
                    return eax32;
                }
            } else {
                eax33 = fun_435580(ecx);
                return eax33;
            }
        } else {
            if (eax24 == 1) {
                fun_434f50(ecx);
                esi34 = g60aff4;
                esi35 = esi34 - 1;
                g60aff4 = esi35;
                if (!esi35 || (zf36 = g60aff0 == 0, !zf36)) {
                    eax37 = fun_4352b0(ecx);
                    return eax37;
                } else {
                    eax38 = reinterpret_cast<unsigned char>(esi35) & 31;
                    *reinterpret_cast<unsigned char*>(&eax38) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax38) < reinterpret_cast<int32_t>(20));
                    eax39 = reinterpret_cast<void**>(eax38 & 0xff);
                    g4775a0 = eax39;
                    return eax39;
                }
            } else {
                return eax24;
            }
        }
    }
}

void** fun_412420() {
    int32_t edx1;
    int32_t edx2;
    void** eax3;

    edx1 = g481228;
    edx2 = edx1 - 1;
    g481228 = edx2;
    if (edx2 < 0) {
        g48122c = reinterpret_cast<void**>(1);
    }
    return eax3;
}

struct s649 {
    signed char[104] pad104;
    int32_t f68;
};

struct s650 {
    signed char[64] pad64;
    void* f40;
};

void** fun_423010(void** ecx) {
    struct s649* eax2;
    void* esi3;
    struct s650* eax4;
    uint32_t ebx5;
    void** eax6;
    int32_t ebx7;
    void** edx8;
    int32_t ebx9;
    void** eax10;
    int32_t ecx11;
    void** eax12;
    void** edx13;
    void** eax14;
    unsigned char ah15;
    void** edx16;
    uint32_t esi17;
    void* eax18;
    void** ebp19;
    uint32_t edi20;
    void** ebx21;
    int32_t edx22;
    int32_t v23;
    uint32_t eax24;
    int32_t edi25;
    int32_t esi26;
    int32_t ebp27;
    void** eax28;
    uint32_t edx29;
    uint32_t ebx30;
    uint32_t ebp31;
    void** ecx32;
    uint32_t edi33;
    int32_t ebp34;
    void* eax35;
    int32_t edi36;
    int32_t edx37;
    int32_t eax38;
    int32_t esi39;
    int32_t v40;
    void** eax41;
    int32_t ecx42;
    int32_t ecx43;

    g483798 = eax2->f68;
    esi3 = eax4->f40;
    g483790 = ebx5;
    g48379c = eax6;
    g483730 = ebx7 + reinterpret_cast<uint32_t>(esi3);
    g483794 = edx8;
    g483734 = ebx9 - reinterpret_cast<uint32_t>(esi3);
    g48373c = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx8) + reinterpret_cast<uint32_t>(esi3));
    g483738 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx8) - reinterpret_cast<uint32_t>(esi3));
    eax10 = fun_42e2f0(edx8);
    ecx11 = g4654c4;
    g48378c = 0;
    eax12 = *reinterpret_cast<void***>(eax10);
    g4837a8 = 0;
    g4654c4 = ecx11 + 1;
    edx13 = *reinterpret_cast<void***>(eax12);
    eax14 = *reinterpret_cast<void***>(eax12 + 4);
    g483788 = edx13;
    g4837ac = eax14;
    ah15 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g483798) + 1);
    g4837a0 = edx13;
    if (ah15 & 16) 
        goto addr_4231a2_2;
    edx16 = g483738;
    esi17 = g4845ac;
    eax18 = g48373c;
    ebp19 = g4845b0;
    edi20 = g483730;
    ebx21 = g4845b0;
    edx22 = reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edx16) - esi17 - 0x200000) >> 23;
    v23 = reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax18) - esi17 + 0x200000) >> 23;
    eax24 = g483734;
    edi25 = reinterpret_cast<int32_t>(edi20 - reinterpret_cast<unsigned char>(ebx21) + 0x200000) >> 23;
    esi26 = edx22;
    ebp27 = reinterpret_cast<int32_t>(eax24 - reinterpret_cast<unsigned char>(ebp19) + 0xffe00000) >> 23;
    if (edx22 > v23) {
        addr_423134_4:
        eax28 = g483738;
        edx29 = g4845ac;
        ebx30 = g4845ac;
        ebp31 = g483734;
        ecx32 = g4845b0;
        edi33 = g483730;
        ebp34 = reinterpret_cast<int32_t>(ebp31 - reinterpret_cast<unsigned char>(ecx32)) >> 23;
        eax35 = g48373c;
        edi36 = reinterpret_cast<int32_t>(edi33 - reinterpret_cast<unsigned char>(ecx32)) >> 23;
        edx37 = reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax28) - edx29) >> 23;
        eax38 = reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax35) - ebx30) >> 23;
        esi39 = edx37;
        v40 = eax38;
        if (edx37 > eax38) {
            addr_4231a2_2:
            eax41 = reinterpret_cast<void**>(1);
        } else {
            do {
                ecx42 = ebp34;
                if (ebp34 <= edi36) {
                    do {
                        eax41 = fun_4244e0();
                        if (!eax41) 
                            goto addr_4231a7_7;
                        ++ecx42;
                    } while (ecx42 <= edi36);
                }
                ++esi39;
            } while (esi39 <= v40);
            goto addr_4231a2_2;
        }
    } else {
        do {
            ecx43 = ebp27;
            if (ebp27 <= edi25) {
                do {
                    eax41 = fun_424560();
                    if (!eax41) 
                        goto addr_4231a7_7;
                    ++ecx43;
                } while (ecx43 <= edi25);
            }
            ++esi26;
        } while (esi26 <= v23);
        goto addr_423134_4;
    }
    addr_4231a7_7:
    return eax41;
}

void fun_436660(void** ecx);

void** g60af64 = reinterpret_cast<void**>(0);

void** g60afa8 = reinterpret_cast<void**>(0);

void** g60afbc = reinterpret_cast<void**>(0);

void** fun_437430(void** ecx) {
    void** edx2;
    int1_t zf3;
    void** eax4;
    void** eax5;
    void** eax6;

    fun_4373a0(ecx);
    fun_436660(ecx);
    edx2 = g482a6c;
    if (!edx2) {
        zf3 = g482a84 == 0;
        if (zf3) {
            g60afe0 = edx2;
            g60aff0 = edx2;
            g60af64 = reinterpret_cast<void**>(1);
            g60af54 = reinterpret_cast<void**>(0xffffffff);
            g60af2c = reinterpret_cast<void**>(0xffffffff);
            g60af44 = reinterpret_cast<void**>(0xffffffff);
            g60afa8 = reinterpret_cast<void**>(0xffffffff);
            g60afbc = reinterpret_cast<void**>(0xffffffff);
            g60afd4 = reinterpret_cast<void**>(35);
            eax4 = fun_434ea0(ecx);
            return eax4;
        } else {
            eax5 = fun_435a80(ecx);
            return eax5;
        }
    } else {
        eax6 = fun_435510(ecx);
        return eax6;
    }
}

void fun_41d4a0() {
    g4647d8 = 0;
    g4647d4 = 0;
    return;
}

struct s651 {
    signed char[105] pad105;
    int32_t f69;
};

struct s652 {
    signed char[113] pad113;
    int32_t f71;
};

struct s653 {
    signed char[4] pad4;
    int32_t f4;
};

struct s654 {
    signed char[8] pad8;
    int32_t f8;
};

struct s655 {
    signed char[109] pad109;
    int32_t f6d;
};

struct s656 {
    signed char[12] pad12;
    int32_t fc;
};

void** fun_418aa0(int32_t ecx, int32_t a2, int32_t a3) {
    struct s651* eax4;
    struct s652* eax5;
    int32_t* eax6;
    int32_t edx7;
    struct s653* eax8;
    int32_t ebx9;
    struct s654* eax10;
    struct s655* eax11;
    struct s656* eax12;
    void** eax13;

    eax4->f69 = 0;
    eax5->f71 = 1;
    *eax6 = edx7;
    eax8->f4 = ebx9;
    eax10->f8 = ecx;
    eax11->f6d = a3;
    eax12->fc = a2;
    eax13 = fun_418670();
    return eax13;
}

struct s657 {
    signed char[101] pad101;
    int32_t f65;
    signed char[315] pad420;
    int32_t f1a4;
    int32_t f1a8;
};

struct s658 {
    signed char[424] pad424;
    int32_t f1a8;
};

struct s659 {
    signed char[420] pad420;
    int32_t f1a4;
};

struct s660 {
    signed char[424] pad424;
    int32_t f1a8;
};

struct s661 {
    signed char[424] pad424;
    int32_t f1a8;
};

void fun_4188e0(struct s106* ecx) {
    struct s657* ebx2;
    struct s657* eax3;
    int32_t edx4;
    struct s658* eax5;
    int32_t ecx6;
    struct s659* eax7;
    struct s660* eax8;
    struct s661* eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    struct s657* edx13;

    ebx2 = eax3;
    edx4 = eax5->f1a8 + 1;
    ecx6 = eax7->f1a4;
    eax8->f1a8 = edx4;
    if (edx4 == ecx6) {
        eax9->f1a8 = 0;
    }
    eax10 = ebx2->f1a8 * 8 - ebx2->f1a8;
    eax11 = (eax10 << 4) - eax10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx2) + eax11 + 97) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx2) + eax11 + 16) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx2) + eax11 + 0x65) = 1;
    eax12 = 0;
    if (!(reinterpret_cast<uint1_t>(ebx2->f1a4 < 0) | reinterpret_cast<uint1_t>(ebx2->f1a4 == 0))) {
        edx13 = ebx2;
        do {
            edx13->f65 = 4;
            ++eax12;
            edx13 = reinterpret_cast<struct s657*>(&edx13->pad420);
        } while (eax12 < ebx2->f1a4);
    }
    return;
}

struct s662 {
    signed char[97] pad97;
    int32_t f61;
};

struct s663 {
    signed char[105] pad105;
    int32_t f69;
};

struct s664 {
    signed char[97] pad97;
    int32_t f61;
};

struct s665 {
    signed char[97] pad97;
    int32_t f61;
};

struct s666 {
    signed char[97] pad97;
    int32_t f61;
};

struct s667 {
    signed char[101] pad101;
    int32_t f65;
};

void** fun_418ba0(void** ecx) {
    unsigned char dl2;
    unsigned char dl3;
    signed char dl4;
    signed char dl5;
    struct s662* eax6;
    struct s663* eax7;
    int32_t ebx8;
    struct s664* eax9;
    struct s665* eax10;
    int32_t eax11;
    signed char dl12;
    struct s666* eax13;
    int32_t eax14;
    struct s667* eax15;

    if (dl2 < 32 || dl3 > 95) {
        if (dl4 != 0x7f) {
            if (dl5 != 13) {
                return 0;
            }
        } else {
            if (eax6->f61 != eax7->f69) {
                fun_418700();
            }
        }
    } else {
        ebx8 = eax9->f61;
        if (ebx8 != 80) {
            eax10->f61 = ebx8 + 1;
            *reinterpret_cast<signed char*>(ebx8 + eax11 + 16) = dl12;
            *reinterpret_cast<signed char*>(eax13->f61 + eax14 + 16) = 0;
            eax15->f65 = 4;
        }
    }
    return 1;
}

void** fun_41b210(void** ecx) {
    void** v2;
    void** esi3;
    void** v4;
    void** edi5;
    void** v6;
    void** ebp7;
    void** eax8;
    void** ecx9;
    int32_t edi10;
    void** eax11;
    void** eax12;
    void** eax13;

    v2 = esi3;
    v4 = edi5;
    v6 = ebp7;
    eax8 = fun_434890(ecx, v6, v4);
    ecx9 = eax8;
    fun_433eb0(ecx9, v6, v4, v2);
    edi10 = 0;
    do {
        eax11 = fun_434890(ecx9, v6, v4);
        ecx9 = eax11;
        ++edi10;
        fun_433eb0(ecx9, v6, v4, v2);
    } while (edi10 < 24);
    eax12 = fun_434890(ecx9, v6, v4);
    eax13 = fun_433eb0(eax12, v6, v4, v2);
    return eax13;
}

void fun_41bd30() {
    int32_t eax1;
    void** edx2;
    int32_t ebx3;
    uint32_t eax4;

    eax1 = 1 - g4835a8;
    edx2 = g482a7c;
    g4835a8 = eax1;
    ebx3 = g4835a8;
    eax4 = (reinterpret_cast<uint32_t>(edx2 + reinterpret_cast<unsigned char>(edx2) * 8) * 4 - reinterpret_cast<unsigned char>(edx2)) * 8;
    if (ebx3) {
        *reinterpret_cast<int32_t*>(eax4 + 0x4825f0) = reinterpret_cast<int32_t>("Messages ON");
    } else {
        *reinterpret_cast<int32_t*>(eax4 + 0x4825f0) = reinterpret_cast<int32_t>("Messages OFF");
    }
    g482b70 = reinterpret_cast<void**>(1);
    return;
}

void fun_41b6d0(void** ecx) {
    void** ebx2;
    int1_t zf3;
    void** ecx4;
    void** ebp5;
    void** edi6;
    void** eax7;

    ebx2 = g4835cc;
    zf3 = g482a84 == 0;
    if (zf3) {
        ecx4 = g4835bc;
        if (reinterpret_cast<signed char>(ecx4) >= reinterpret_cast<signed char>(0)) {
            fun_442b4a(ecx4, 0x483360, "do you want to quickload the game named\n\n'%s'?\n\npress y or n.", (reinterpret_cast<unsigned char>(ecx4) * 4 - reinterpret_cast<unsigned char>(ecx4)) * 8 + 0x483450, ebp5, edi6);
            eax7 = g4835cc;
            g4835b8 = reinterpret_cast<void**>(1);
            g4835b0 = reinterpret_cast<void**>(0x483360);
            g48359c = reinterpret_cast<void**>(0x41b6b0);
            g483588 = reinterpret_cast<void**>(1);
            g48358c = eax7;
        } else {
            g48358c = ebx2;
            g4835b8 = reinterpret_cast<void**>(1);
            g48359c = reinterpret_cast<void**>(0);
            g483588 = reinterpret_cast<void**>(0);
            g4835b0 = reinterpret_cast<void**>("you haven't picked a quicksave slot yet!\n\npress a key.");
            g4835cc = reinterpret_cast<void**>(1);
            return;
        }
    } else {
        g48358c = ebx2;
        g4835b8 = reinterpret_cast<void**>(1);
        g4835b0 = reinterpret_cast<void**>("you can't quickload during a netgame!\n\npress a key.");
        g483588 = reinterpret_cast<void**>(0);
        g48359c = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx2) ^ reinterpret_cast<unsigned char>(ebx2));
    }
    g4835cc = reinterpret_cast<void**>(1);
    return;
}

struct s668 {
    signed char[4603142] pad4603142;
    void** f463d06;
    signed char[639] pad4603782;
    void** f463f86;
};

void fun_41bf20(void** ecx) {
    void** edx2;
    uint32_t edx3;
    void** edx4;
    struct s668* eax5;
    void** v6;
    int32_t v7;
    int1_t zf8;
    void** edi9;
    void** esi10;
    void** eax11;

    edx2 = g482a44;
    edx3 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(edx2) >> 2) & 7;
    edx4 = g481264;
    eax5 = reinterpret_cast<struct s668*>(edx3 * 4 + edx3 << 4);
    if (!edx4) {
        v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax5) + reinterpret_cast<uint32_t>("are you sure you want to\nquit this great game?"));
        v7 = reinterpret_cast<int32_t>("%s\n\n(press y to quit to dos.)");
    } else {
        zf8 = g481260 == 0;
        if (zf8) {
            v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax5) + reinterpret_cast<uint32_t>("are you sure you want to\nquit this great game?"));
            v7 = reinterpret_cast<int32_t>("%s\n\n(press y to quit to dos.)");
        } else {
            v6 = reinterpret_cast<void**>("are you sure you want to\nquit this great game?");
            v7 = reinterpret_cast<int32_t>("%s\n\n(press y to quit to dos.)");
        }
    }
    fun_442b4a(ecx, 0x4833b0, v7, v6, edi9, esi10);
    eax11 = g4835cc;
    g48358c = eax11;
    g4835b8 = reinterpret_cast<void**>(1);
    g4835b0 = reinterpret_cast<void**>(0x4833b0);
    g48359c = reinterpret_cast<void**>(0x41bec0);
    g483588 = reinterpret_cast<void**>(1);
    g4835cc = reinterpret_cast<void**>(1);
    return;
}

void** fun_41bdc0(void** ecx) {
    int1_t zf2;
    int1_t zf3;
    void** eax4;
    void** eax5;
    void** edi6;

    zf2 = g482a90 == 0;
    if (!zf2) {
        zf3 = g482a84 == 0;
        if (zf3) {
            eax4 = g4835cc;
            g48358c = eax4;
            g4835b8 = reinterpret_cast<void**>(1);
            g4835b0 = reinterpret_cast<void**>("are you sure you want to end the game?\n\npress y or n.");
            g48359c = reinterpret_cast<void**>(0x41bd90);
            g483588 = reinterpret_cast<void**>(1);
            g4835cc = reinterpret_cast<void**>(1);
        } else {
            eax5 = g4835cc;
            g48358c = eax5;
            g4835b8 = reinterpret_cast<void**>(1);
            g4835b0 = reinterpret_cast<void**>("you can't end a netgame!\n\npress a key.");
            g48359c = reinterpret_cast<void**>(0);
            g483588 = reinterpret_cast<void**>(0);
            g4835cc = reinterpret_cast<void**>(1);
            return eax5;
        }
    } else {
        eax4 = fun_4312d0(ecx, edi6);
    }
    return eax4;
}

void** fun_41b560(void** ecx);

void** fun_41b5b0(void** ecx) {
    int1_t zf2;
    int1_t zf3;
    void** ecx4;
    void** ebp5;
    void** edi6;
    void** eax7;
    int1_t zf8;
    void** ax9;
    void** eax10;

    zf2 = g482a90 == 0;
    if (!zf2) {
        zf3 = g482a68 == 0;
        if (zf3) {
            ecx4 = g4835bc;
            if (reinterpret_cast<signed char>(ecx4) >= reinterpret_cast<signed char>(0)) {
                fun_442b4a(ecx4, 0x483360, "quicksave over your game named\n\n'%s'?\n\npress y or n.", (reinterpret_cast<unsigned char>(ecx4) * 4 - reinterpret_cast<unsigned char>(ecx4)) * 8 + 0x483450, ebp5, edi6);
                eax7 = g4835cc;
                g4835b8 = reinterpret_cast<void**>(1);
                g4835b0 = reinterpret_cast<void**>(0x483360);
                g48359c = reinterpret_cast<void**>(fun_41b560);
                g483588 = reinterpret_cast<void**>(1);
                g48358c = eax7;
                g4835cc = reinterpret_cast<void**>(1);
            } else {
                zf8 = g4835cc == 0;
                if (zf8) {
                    ax9 = g4642fa;
                    g4835cc = reinterpret_cast<void**>(1);
                    g48357c = reinterpret_cast<void**>(0x4642e8);
                    g4835d4 = ax9;
                }
                fun_41b0a0(ebp5, edi6);
                eax10 = g464656;
                g48357c = reinterpret_cast<void**>(0x464644);
                g4835d4 = eax10;
                g4835bc = reinterpret_cast<void**>(0xfffffffe);
                return eax10;
            }
        }
    } else {
        eax7 = fun_4312d0(ecx, ebp5);
    }
    return eax7;
}

struct s669 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[7] pad16;
    void** f10;
    signed char[7] pad24;
    void** f18;
    signed char[3] pad28;
    void** f1c;
    signed char[3] pad32;
    void** f20;
};

struct s670 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[7] pad16;
    void** f10;
    signed char[7] pad24;
    void** f18;
    signed char[3] pad28;
    void** f1c;
    signed char[3] pad32;
    void** f20;
    signed char[3] pad36;
    void** f24;
    signed char[3] pad40;
    void** f28;
    signed char[3] pad44;
    int32_t f2c;
};

void** fun_443a1e(void** ecx) {
    void* esp2;
    void* ebp3;
    void** v4;
    void** edx5;
    void** v6;
    void** ebx7;
    void** edx8;
    void** v9;
    int32_t eax10;
    void** eax11;
    void** edx12;
    void** ebx13;
    void*** esp14;
    void** eax15;
    void** v16;
    int32_t eax17;
    unsigned char* eax18;
    void* esp19;
    void** esi20;
    unsigned char* eax21;
    void*** edi22;
    void** v23;
    void** v24;
    void** v25;
    signed char* eax26;
    void** ebx27;
    int1_t zf28;
    struct s669* esp29;
    int32_t eax30;
    struct s669* esp31;
    void** esp32;
    void*** esp33;
    void**** esp34;
    void*** esp35;
    struct s670* esp36;
    int32_t eax37;
    struct s669* esp38;
    void** eax39;
    int1_t zf40;
    struct s669* esp41;
    int32_t eax42;
    struct s669* esp43;
    void** esp44;
    void*** esp45;
    void**** esp46;
    void*** esp47;
    struct s670* esp48;
    int32_t eax49;
    struct s669* esp50;
    void** eax51;
    int1_t zf52;
    struct s669* esp53;
    int32_t eax54;
    struct s669* esp55;
    void** esp56;
    void*** esp57;
    void**** esp58;
    void*** esp59;
    struct s670* esp60;
    int32_t eax61;
    struct s669* esp62;
    struct s669* esp63;
    void** eax64;
    struct s669* esp65;
    struct s669* esp66;
    void** eax67;
    struct s669* esp68;
    int1_t zf69;
    int32_t eax70;
    void** v71;
    void** v72;
    int32_t v73;
    int32_t eax74;
    void** eax75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4);
    ebp3 = esp2;
    v4 = edx5;
    v6 = ebx7;
    edx8 = g61835c;
    v9 = *reinterpret_cast<void***>(edx8 + eax10 * 4);
    eax11 = fun_445f5a(ecx);
    edx12 = eax11;
    ebx13 = eax11;
    if (eax11) {
        if (*reinterpret_cast<unsigned char*>(&eax11) & 2) {
            image_base_();
            esp14 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp2) - 16 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
            if (!(*reinterpret_cast<unsigned char*>(&edx12) & 0x80)) 
                goto addr_443a9a_4;
            eax17 = fun_449d9c(v9, 0, 0, 2, v6, v4, eax15, v16);
            esp14 = esp14 - 4 - 4 - 4 - 4 - 4 + 4;
            if (eax17 == -1) 
                goto addr_443a87_6;
            addr_443a9a_4:
            if (*reinterpret_cast<unsigned char*>(&ebx13) & 64) 
                goto addr_443a9f_7;
        } else {
            goto addr_443a4b_9;
        }
    } else {
        goto addr_443a4b_9;
    }
    eax18 = fun_444203();
    esp19 = reinterpret_cast<void*>(esp14 - 4 + 4);
    if (reinterpret_cast<uint32_t>(eax18) < 0xb0) {
        fun_445fd3(ecx);
        esp19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp19) - 4 + 4);
    }
    esi20 = reinterpret_cast<void**>(0x200);
    if (reinterpret_cast<uint32_t>(eax18) < 0x230) {
        esi20 = reinterpret_cast<void**>(0x80);
    }
    eax21 = reinterpret_cast<unsigned char*>(esi20 + 3);
    *reinterpret_cast<unsigned char*>(&eax21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax21) & 0xfc);
    ecx = reinterpret_cast<void**>(0);
    esp14 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp19) - reinterpret_cast<uint32_t>(eax21));
    edi22 = esp14;
    v23 = reinterpret_cast<void**>(0);
    v24 = reinterpret_cast<void**>(0);
    v25 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<unsigned char>(v23) < reinterpret_cast<unsigned char>(v6)) {
        eax26 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v4) + reinterpret_cast<unsigned char>(v23));
        *reinterpret_cast<signed char*>(&eax26) = *eax26;
        if ((reinterpret_cast<uint32_t>(eax26) & 0xff) == 10 && (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi22) + reinterpret_cast<unsigned char>(v24)) = 13, ebx27 = v24 + 1, v24 = ebx27, esi20 == ebx27)) {
            zf28 = g477afc == 0;
            if (zf28 || (esp29 = reinterpret_cast<struct s669*>(esp14 - 4), esp29->f0 = 0x443b85, eax30 = reinterpret_cast<int32_t>(g477ad0()), esp14 = &esp29->f4, eax30 == 0)) {
                esp31 = reinterpret_cast<struct s669*>(esp14 - 4);
                esp31->f0 = 0;
                esp32 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp31) - 4);
                *esp32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 16);
                esp33 = reinterpret_cast<void***>(esp32 - 1);
                *esp33 = esi20;
                esp34 = reinterpret_cast<void****>(esp33 - 4);
                *esp34 = edi22;
                esp35 = reinterpret_cast<void***>(esp34 - 1);
                *esp35 = v9;
                esp36 = reinterpret_cast<struct s670*>(esp35 - 4);
                esp36->f0 = 0x443ba7;
                eax37 = fun_449d96(esp36->f4, esp36->f8, 0x200, esp36->f10, 0, esp36->f18, esp36->f1c, esp36->f20, esp36->f24, esp36->f28, esp36->f2c);
                esp14 = &esp36->f4;
                if (!eax37) 
                    goto addr_443a87_6;
            } else {
                esp38 = reinterpret_cast<struct s669*>(esp14 - 4);
                esp38->f0 = 0x443b91;
                eax39 = reinterpret_cast<void**>(g477afc());
                esp14 = &esp38->f4;
                v24 = eax39;
            }
            if (esi20 != v24) 
                goto addr_443bb4_22;
            v25 = v23;
            v24 = reinterpret_cast<void**>(0);
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v24) + reinterpret_cast<uint32_t>(edi22)) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v4) + reinterpret_cast<unsigned char>(v23));
        ecx = v24 + 1;
        ++v23;
        v24 = ecx;
        if (esi20 != ecx) 
            continue;
        zf40 = g477afc == 0;
        if (zf40 || (esp41 = reinterpret_cast<struct s669*>(esp14 - 4), esp41->f0 = 0x443c13, eax42 = reinterpret_cast<int32_t>(g477ad0()), esp14 = &esp41->f4, eax42 == 0)) {
            esp43 = reinterpret_cast<struct s669*>(esp14 - 4);
            esp43->f0 = 0;
            esp44 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp43) - 4);
            *esp44 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 16);
            esp45 = reinterpret_cast<void***>(esp44 - 1);
            *esp45 = esi20;
            esp46 = reinterpret_cast<void****>(esp45 - 4);
            *esp46 = edi22;
            esp47 = reinterpret_cast<void***>(esp46 - 1);
            *esp47 = v9;
            esp48 = reinterpret_cast<struct s670*>(esp47 - 4);
            esp48->f0 = 0x443c37;
            eax49 = fun_449d96(esp48->f4, esp48->f8, 0x200, esp48->f10, 0, esp48->f18, esp48->f1c, esp48->f20, esp48->f24, esp48->f28, esp48->f2c);
            esp14 = &esp48->f4;
            if (!eax49) 
                goto addr_443a87_6;
        } else {
            esp50 = reinterpret_cast<struct s669*>(esp14 - 4);
            esp50->f0 = 0x443c21;
            eax51 = reinterpret_cast<void**>(g477afc());
            esp14 = &esp50->f4;
            v24 = eax51;
        }
        if (esi20 != v24) 
            goto addr_443bb4_22;
        v25 = v23;
        v24 = reinterpret_cast<void**>(0);
    }
    if (!v24) 
        goto addr_443cc3_31;
    zf52 = g477afc == 0;
    if (zf52 || (esp53 = reinterpret_cast<struct s669*>(esp14 - 4), esp53->f0 = 0x443c70, eax54 = reinterpret_cast<int32_t>(g477ad0()), esp14 = &esp53->f4, eax54 == 0)) {
        esp55 = reinterpret_cast<struct s669*>(esp14 - 4);
        esp55->f0 = 0;
        esp56 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp55) - 4);
        *esp56 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 12);
        esp57 = reinterpret_cast<void***>(esp56 - 1);
        *esp57 = v24;
        esp58 = reinterpret_cast<void****>(esp57 - 4);
        *esp58 = edi22;
        esp59 = reinterpret_cast<void***>(esp58 - 1);
        *esp59 = v9;
        esp60 = reinterpret_cast<struct s670*>(esp59 - 4);
        esp60->f0 = 0x443c98;
        eax61 = fun_449d96(esp60->f4, esp60->f8, 0, esp60->f10, 0, esp60->f18, esp60->f1c, esp60->f20, esp60->f24, esp60->f28, esp60->f2c);
        esp14 = &esp60->f4;
        if (!eax61) {
            addr_443a87_6:
            esp62 = reinterpret_cast<struct s669*>(esp14 - 4);
            esp62->f0 = 0x443a90;
            image_base_();
            esp63 = reinterpret_cast<struct s669*>(&esp62->f4 - 4);
            esp63->f0 = 0x443a95;
            eax64 = fun_4457b6(ecx, esp63->f4, esp63->f8, 0, esp63->f10, 0, esp63->f18, esp63->f1c, esp63->f20);
        } else {
            addr_443ca0_34:
            if (v23 == v24) {
                addr_443cc3_31:
                *reinterpret_cast<int32_t*>(esp14 - 4) = 0x443ccc;
                image_base_();
                eax64 = v6;
            } else {
                esp65 = reinterpret_cast<struct s669*>(esp14 - 4);
                esp65->f0 = 0x443cb2;
                fun_44515b(esp65->f4, esp65->f8, 0, esp65->f10, 0);
                *reinterpret_cast<int32_t*>(&esp65->f4 - 4) = 0x443cbb;
                image_base_();
                eax64 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v25) + reinterpret_cast<unsigned char>(v23));
            }
        }
    } else {
        esp66 = reinterpret_cast<struct s669*>(esp14 - 4);
        esp66->f0 = 0x443c7f;
        eax67 = reinterpret_cast<void**>(g477afc());
        esp14 = &esp66->f4;
        v23 = eax67;
        goto addr_443ca0_34;
    }
    addr_443ccf_37:
    return eax64;
    addr_443bb4_22:
    esp68 = reinterpret_cast<struct s669*>(esp14 - 4);
    esp68->f0 = 0x443bbe;
    fun_44515b(esp68->f4, esp68->f8, 0x200, esp68->f10, 0);
    *reinterpret_cast<int32_t*>(&esp68->f4 - 4) = 0x443bc7;
    image_base_();
    eax64 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v25) + reinterpret_cast<unsigned char>(v24));
    goto addr_443ccf_37;
    addr_443a9f_7:
    zf69 = g477afc == 0;
    if (zf69 || (eax70 = reinterpret_cast<int32_t>(g477ad0()), esp14 = esp14 - 4 + 4, eax70 == 0)) {
        ecx = v6;
        eax74 = fun_449d96(v9, v4, ecx, reinterpret_cast<int32_t>(ebp3) + 0xfffffff8, 0, v6, v4, eax15, v71, v72, v73);
        esp14 = esp14 - 4 - 4 - 4 - 4 - 4 - 4 + 4;
        if (!eax74) 
            goto addr_443a87_6;
    } else {
        eax75 = reinterpret_cast<void**>(g477afc());
        esp14 = esp14 - 4 + 4;
        v76 = eax75;
    }
    if (v76 != v6) {
        fun_44515b(v6, v4, eax15, v77, 0);
        esp14 = esp14 - 4 + 4;
        v6 = v76;
        goto addr_443cc3_31;
    }
    addr_443a4b_9:
    fun_44515b(v6, v4, eax15, v78, v79);
    eax64 = reinterpret_cast<void**>(0xffffffff);
    goto addr_443ccf_37;
}

void** g477b78 = reinterpret_cast<void**>(20);

/* (image base) */
void*** image_base_ = reinterpret_cast<void***>(0x477b7c);

struct s671 {
    void** f0;
    unsigned char f1;
};

void** fun_445f5a(void** ecx) {
    int1_t cf2;
    void** eax3;
    int32_t eax4;
    void*** eax5;
    int32_t ebx6;
    int32_t eax7;
    struct s671* eax8;
    int32_t eax9;
    void*** eax10;
    void*** eax11;
    int32_t eax12;

    cf2 = reinterpret_cast<unsigned char>(eax3) < reinterpret_cast<unsigned char>(g477b78);
    if (cf2) {
        if (eax4 <= 3 && ((eax5 = image_base_, ebx6 = eax7 << 2, eax8 = reinterpret_cast<struct s671*>(reinterpret_cast<int32_t>(eax5) + ebx6), *reinterpret_cast<unsigned char*>(&ecx) = eax8->f1, !(*reinterpret_cast<unsigned char*>(&ecx) & 64)) && (*reinterpret_cast<unsigned char*>(&ecx + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | 64), eax8->f1 = *reinterpret_cast<unsigned char*>(&ecx + 1), eax9 = fun_445f19(ecx), !!eax9))) {
            eax10 = image_base_;
            *reinterpret_cast<unsigned char*>(ebx6 + reinterpret_cast<int32_t>(eax10) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx6 + reinterpret_cast<int32_t>(eax10) + 1) | 32);
        }
        eax11 = image_base_;
        return eax11[eax12 * 4];
    } else {
        return 0;
    }
}

struct s672 {
    unsigned char f0;
    signed char f1;
};

struct s673 {
    signed char[1] pad1;
    signed char f1;
};

struct s674 {
    signed char[2] pad2;
    signed char f2;
};

void fun_443f01(void** ecx, void* a2) {
    struct s672* esi3;
    struct s672* eax4;
    void* v5;
    void* ebx6;
    void** v7;
    signed char* eax8;
    int32_t eax9;
    int32_t edx10;
    signed char* edx11;
    int32_t edx12;
    unsigned char al13;
    struct s673* edx14;
    struct s674* edx15;
    unsigned char* edx16;
    struct s672* edi17;
    uint32_t eax18;
    int1_t zf19;
    uint32_t eax20;
    uint32_t eax21;

    esi3 = eax4;
    v5 = ebx6;
    v7 = ecx;
    if (!*eax8 || (eax9 = 0, *reinterpret_cast<signed char*>(&eax9) = esi3->f1, eax9 != 58)) {
        if (edx10) {
            *edx11 = 0;
        }
    } else {
        if (edx12) {
            al13 = esi3->f0;
            edx14->f1 = 58;
            edx15->f2 = 0;
            *edx16 = al13;
        }
        ++esi3;
    }
    while (1) {
        edi17 = reinterpret_cast<struct s672*>(0);
        while (esi3->f0) {
            eax18 = fun_4464b1();
            if (eax18 != 46) {
                zf19 = g477be4 == 0;
                if (zf19) {
                    eax20 = 0;
                } else {
                    eax21 = 0;
                    *reinterpret_cast<unsigned char*>(&eax21) = esi3->f0;
                    *reinterpret_cast<unsigned char*>(&eax21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax21 + 0x477be9) & 1);
                    eax20 = eax21 & 0xff;
                }
                esi3 = reinterpret_cast<struct s672*>(reinterpret_cast<uint32_t>(&esi3->f1) + eax20);
                if (eax18 == 92) 
                    goto addr_443f86_15;
                if (eax18 == 47) 
                    goto addr_443f86_15;
            } else {
                edi17 = esi3;
                esi3 = reinterpret_cast<struct s672*>(&esi3->f1);
            }
        }
        break;
        addr_443f86_15:
    }
    fun_443ecb(0xff, v5, v7);
    if (!edi17) {
    }
    fun_443ecb(0xff, v5, v7);
    fun_443ecb(0xff, v5, v7);
    return;
}

uint32_t fun_443fda(void** ecx);

int32_t fun_443ff6(void** ecx, void** a2, void** a3);

uint32_t fun_446618(int32_t ecx, int32_t a2, int32_t a3, int32_t a4);

uint32_t fun_443ffe(void** ecx, void* a2) {
    int32_t eax3;
    uint32_t eax4;

    image_base_();
    image_base_(fun_443fda, fun_443ff6, eax3);
    eax4 = fun_446618(eax3, fun_443fda, fun_443ff6, eax3);
    return eax4;
}

int32_t GetFileAttributesA = 0x220f5e;

int32_t fun_449db4() {
    goto GetFileAttributesA;
}

void fun_41dea0(void** ecx, void** a2, void** a3, void** a4, int24_t a5) {
    void** ebp6;
    void*** esi7;
    void*** edx8;
    void** v9;
    int32_t ebx10;
    void** eax11;
    void** eax12;
    void** eax13;
    void** ebx14;
    void** eax15;
    void** eax16;
    void** v17;
    void** eax18;
    void** v19;
    void** eax20;
    void** ebx21;
    void** v22;
    void** edx23;
    void*** edi24;
    int32_t esi25;
    void** eax26;

    ebp6 = a2;
    esi7 = edx8;
    v9 = reinterpret_cast<void**>(ebx10 * reinterpret_cast<unsigned char>(ecx));
    eax12 = fun_4375e0(ecx, v9, eax11);
    *reinterpret_cast<void***>(eax12) = reinterpret_cast<void**>(10);
    *reinterpret_cast<void***>(eax12 + 1) = reinterpret_cast<void**>(5);
    *reinterpret_cast<void***>(eax12 + 2) = reinterpret_cast<void**>(1);
    *reinterpret_cast<unsigned char*>(eax12 + 3) = 8;
    *reinterpret_cast<void***>(eax12 + 4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax12 + 6) = reinterpret_cast<void**>(0);
    eax13 = ebx14 - 1;
    *reinterpret_cast<void***>(eax12 + 8) = eax13;
    eax15 = ecx - 1;
    *reinterpret_cast<void***>(eax12 + 10) = eax15;
    eax16 = ebx14;
    *reinterpret_cast<void***>(eax12 + 12) = eax16;
    *reinterpret_cast<void***>(eax12 + 14) = ecx;
    fun_442b80(ecx, v9, eax11, eax12, ebx14, v17);
    eax18 = ebx14;
    *reinterpret_cast<signed char*>(eax12 + 65) = 1;
    *reinterpret_cast<int16_t*>(eax12 + 66) = *reinterpret_cast<int16_t*>(&eax18);
    *reinterpret_cast<void***>(eax12 + 68) = reinterpret_cast<void**>(2);
    fun_442b80(ecx, v9, eax11, eax12, ebx14, v19);
    eax20 = eax12 + 0x80;
    ebx21 = reinterpret_cast<void**>(0);
    v22 = v9;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v9 == 0))) {
        do {
            edx23 = eax20 + 1;
            edi24 = esi7 + 1;
            if ((reinterpret_cast<unsigned char>(*esi7) & 0xc0) == 0xc0) {
                *reinterpret_cast<void***>(eax20) = reinterpret_cast<void**>(0xc1);
                esi7 = edi24;
                *reinterpret_cast<void***>(edx23) = *esi7;
                eax20 = edx23 + 1;
            } else {
                esi7 = edi24;
                *reinterpret_cast<void***>(eax20) = *esi7;
                eax20 = edx23;
            }
            ecx = v22;
            ++ebx21;
        } while (reinterpret_cast<signed char>(ebx21) < reinterpret_cast<signed char>(ecx));
    }
    *reinterpret_cast<void***>(eax20) = reinterpret_cast<void**>(12);
    esi25 = 0;
    eax26 = eax20 + 1;
    do {
        ++eax26;
        ++ebp6;
        ++esi25;
        *reinterpret_cast<void***>(eax26 + 0xffffffff) = *reinterpret_cast<void***>(ebp6);
    } while (esi25 < 0x300);
    fun_41d510(ecx);
    fun_437550(ecx);
    return;
}

struct s675 {
    int32_t f0;
    int32_t f4;
};

void** fun_420ca0(void** ecx, int32_t a2, void** a3, void** a4, void** a5) {
    struct s675* eax6;
    int32_t edx7;
    int32_t ebx8;
    int32_t ebx9;
    void** eax10;
    int32_t ebx11;
    void** eax12;
    int32_t ebx13;
    void** eax14;
    void** eax15;
    int32_t ebx16;
    void** eax17;
    int32_t ebx18;
    void** eax19;
    int32_t ebx20;
    void** eax21;

    if (!a4) {
        if (reinterpret_cast<signed char>(a5) < reinterpret_cast<signed char>(0xffffffff)) {
            addr_420e41_3:
        } else {
            if (reinterpret_cast<signed char>(a5) <= reinterpret_cast<signed char>(0xffffffff)) {
                if (eax6->f0 - edx7 < ebx8) {
                    ebx9 = eax6->f0;
                    eax6->f0 = ebx8;
                    eax10 = fun_423f50(ecx);
                    if (reinterpret_cast<int1_t>(eax10 == 1)) {
                        eax6->f0 = ebx9;
                        fun_423f50(ecx);
                    }
                    goto a3;
                }
                ebx11 = eax6->f0;
                eax6->f0 = ebx11 - edx7;
                eax12 = fun_423f50(ecx);
                if (!reinterpret_cast<int1_t>(eax12 == 1)) 
                    goto addr_420e41_3; else 
                    goto addr_420d22_10;
            } else {
                if (a5 != 1) {
                    goto a3;
                }
                if (eax6->f0 + edx7 > ebx8) {
                    ebx13 = eax6->f0;
                    eax6->f0 = ebx8;
                    eax14 = fun_423f50(ecx);
                    if (reinterpret_cast<int1_t>(eax14 == 1)) {
                        eax6->f0 = ebx13;
                        fun_423f50(ecx);
                    }
                    goto a3;
                }
                ebx11 = eax6->f0;
                eax6->f0 = ebx11 + edx7;
                eax15 = fun_423f50(ecx);
                if (!reinterpret_cast<int1_t>(eax15 == 1)) 
                    goto addr_420e41_3; else 
                    goto addr_420d7f_18;
            }
        }
    } else {
        if (a4 != 1) {
            goto addr_420e41_3;
        }
        if (reinterpret_cast<signed char>(a5) < reinterpret_cast<signed char>(0xffffffff)) 
            goto addr_420e41_3;
        if (reinterpret_cast<signed char>(a5) <= reinterpret_cast<signed char>(0xffffffff)) 
            goto addr_420d9e_23; else 
            goto addr_420d93_24;
    }
    goto a3;
    addr_420d22_10:
    eax6->f0 = ebx11;
    fun_423f50(ecx);
    goto a3;
    addr_420d7f_18:
    if (ecx == eax15) {
        goto a3;
    }
    addr_420d9e_23:
    if (eax6->f4 - edx7 < ebx8) {
        ebx16 = eax6->f4;
        eax6->f4 = ebx8;
        eax17 = fun_423f50(ecx);
        if (eax17 == a4) {
            eax6->f4 = ebx16;
            fun_423f50(ecx);
        }
        goto a3;
    }
    ebx18 = eax6->f4;
    eax6->f4 = ebx18 - edx7;
    eax19 = fun_423f50(ecx);
    if (eax19 != a4) 
        goto addr_420e41_3;
    if (ecx != a4) {
        eax6->f4 = ebx18;
        fun_423f50(ecx);
        goto a3;
    }
    addr_420d93_24:
    if (a5 == a4) {
        if (eax6->f4 + edx7 <= ebx8) {
            eax6->f4 = eax6->f4 + edx7;
            fun_423f50(ecx);
            goto addr_420e41_3;
        } else {
            ebx20 = eax6->f4;
            eax6->f4 = ebx8;
            eax21 = fun_423f50(ecx);
            if (eax21 == a4) {
                eax6->f4 = ebx20;
                fun_423f50(ecx);
            }
            goto a3;
        }
    } else {
        goto a3;
    }
}

struct s676 {
    signed char[4] pad4;
    int32_t f4;
    signed char[70] pad78;
    int32_t f4e;
};

struct s677 {
    signed char[78] pad78;
    int32_t f4e;
};

struct s678 {
    signed char[16] pad16;
    unsigned char f10;
    signed char[29] pad46;
    struct s676* f2e;
    struct s676* f32;
};

struct s679 {
    signed char[82] pad82;
    struct s678** f52;
};

int32_t fun_428130(int32_t ecx, int32_t a2) {
    struct s676* ecx3;
    struct s676* eax4;
    int32_t esi5;
    int32_t edx6;
    struct s677* eax7;
    struct s678** ebx8;
    struct s679* eax9;
    struct s676* eax10;

    ecx3 = eax4;
    esi5 = 0;
    edx6 = 0;
    if (!(reinterpret_cast<uint1_t>(eax7->f4e < 0) | reinterpret_cast<uint1_t>(eax7->f4e == 0))) {
        ebx8 = eax9->f52;
        do {
            if ((*ebx8)->f10 & 4) {
                if (ecx3 != (*ebx8)->f2e) {
                    eax10 = (*ebx8)->f2e;
                } else {
                    eax10 = (*ebx8)->f32;
                }
            } else {
                eax10 = reinterpret_cast<struct s676*>(0);
            }
            if (eax10 && esi5 < eax10->f4) {
                esi5 = eax10->f4;
            }
            ++edx6;
            ++ebx8;
        } while (edx6 < ecx3->f4e);
    }
    return esi5;
}

struct s680 {
    signed char[4] pad4;
    void** f4;
    signed char[73] pad78;
    int32_t f4e;
};

struct s681 {
    signed char[78] pad78;
    int32_t f4e;
};

struct s682 {
    signed char[16] pad16;
    unsigned char f10;
    signed char[29] pad46;
    struct s680* f2e;
    struct s680* f32;
};

struct s683 {
    signed char[82] pad82;
    struct s682** f52;
};

void** fun_4280d0(void** ecx, void** a2) {
    struct s680* ecx3;
    struct s680* eax4;
    void** esi5;
    int32_t edx6;
    struct s681* eax7;
    struct s682** ebx8;
    struct s683* eax9;
    struct s680* eax10;

    ecx3 = eax4;
    esi5 = reinterpret_cast<void**>(0x7fffffff);
    edx6 = 0;
    if (!(reinterpret_cast<uint1_t>(eax7->f4e < 0) | reinterpret_cast<uint1_t>(eax7->f4e == 0))) {
        ebx8 = eax9->f52;
        do {
            if ((*ebx8)->f10 & 4) {
                if (ecx3 != (*ebx8)->f2e) {
                    eax10 = (*ebx8)->f2e;
                } else {
                    eax10 = (*ebx8)->f32;
                }
            } else {
                eax10 = reinterpret_cast<struct s680*>(0);
            }
            if (eax10 && reinterpret_cast<signed char>(esi5) > reinterpret_cast<signed char>(eax10->f4)) {
                esi5 = eax10->f4;
            }
            ++edx6;
            ++ebx8;
        } while (edx6 < ecx3->f4e);
    }
    return esi5;
}

struct s684 {
    signed char[18] pad18;
    void** f12;
    signed char[3] pad22;
    void** f16;
    signed char[43] pad66;
    int32_t f42;
    signed char[8] pad78;
    int32_t f4e;
    int32_t f52;
};

struct s685 {
    signed char[66] pad66;
    int32_t f42;
};

void** g48370c = reinterpret_cast<void**>(0xd0);

struct s686 {
    signed char[16] pad16;
    unsigned char f10;
    signed char[5] pad22;
    int16_t f16;
};

struct s687 {
    void** f0;
    signed char[13] pad14;
    struct s684* fe;
};

void fun_41ec50(void** ecx) {
    struct s684* ebx2;
    struct s684* eax3;
    void** ecx4;
    void** edx5;
    int32_t edx6;
    struct s685* eax7;
    int32_t eax8;
    int32_t edi9;
    void** eax10;
    int32_t esi11;
    int32_t ebp12;
    struct s686* edx13;
    int1_t less_or_equal14;
    void** edi15;
    struct s687* eax16;

    ebx2 = eax3;
    ecx4 = edx5;
    edx6 = g4654c4;
    if ((edx6 != eax7->f42 || reinterpret_cast<signed char>(ecx4 + 1) < reinterpret_cast<signed char>(ebx2->f12)) && (eax8 = g4654c4, ebx2->f42 = eax8, edi9 = ebx2->f4e, ebx2->f12 = ecx4 + 1, eax10 = g48370c, esi11 = 0, ebx2->f16 = eax10, !(reinterpret_cast<uint1_t>(edi9 < 0) | reinterpret_cast<uint1_t>(edi9 == 0)))) {
        ebp12 = 0;
        while (1) {
            edx13 = *reinterpret_cast<struct s686**>(ebx2->f52 + ebp12);
            if (!(edx13->f10 & 4)) 
                goto addr_41ecf6_4;
            fun_424300(ecx4);
            less_or_equal14 = reinterpret_cast<int32_t>(g483dd8) <= reinterpret_cast<int32_t>(0);
            if (less_or_equal14) 
                goto addr_41ecf6_4;
            edi15 = g4845d4;
            eax16 = reinterpret_cast<struct s687*>(edi15 + edx13->f16 * 18);
            if (ebx2 != eax16->fe) {
            }
            if (edx13->f10 & 64) 
                goto addr_41ece4_10;
            addr_41ecf1_12:
            fun_41ec50(ecx4);
            goto addr_41ecf6_4;
            addr_41ece4_10:
            if (ecx4) {
                addr_41ecf6_4:
                ++esi11;
                ebp12 = ebp12 + 4;
                if (esi11 >= ebx2->f4e) 
                    break;
            } else {
                goto addr_41ecf1_12;
            }
        }
    }
    return;
}

uint32_t g483dc8 = 0x158b0045;

uint32_t g4837b4 = 0x4c48300;

uint32_t g4837b8 = 0x12583d83;

uint32_t g4837bc = 0x74000048;

uint32_t g4837c0 = 0x249c8d2e;

void** fun_424860(void* ecx, uint32_t a2, int32_t a3) {
    uint32_t esi4;
    uint32_t eax5;
    uint32_t ebp6;
    uint32_t edx7;
    int32_t ebx8;
    uint32_t edi9;
    void** edx10;
    uint32_t ebx11;
    void** edi12;
    void* ebx13;
    void** edx14;
    uint32_t esi15;
    uint32_t ebp16;
    void** v17;
    void** ecx18;
    void** v19;
    void** v20;
    uint32_t edi21;
    void** v22;
    void* v23;
    void** v24;
    void** v25;
    void** eax26;
    void** v27;
    void** eax28;
    void** v29;
    void*** edi30;
    void** ecx31;
    void* v32;
    void** v33;
    void** eax34;
    void** eax35;
    void** ecx36;
    void* ebp37;
    void** esi38;
    int32_t v39;
    void** eax40;
    int32_t eax41;

    esi4 = eax5;
    ebp6 = edx7;
    ebx8 = g4654c4;
    edi9 = g4845ac;
    g483ddc = reinterpret_cast<int32_t*>(0x4837c4);
    g483dc8 = a2 & 4;
    g4654c4 = ebx8 + 1;
    if (!(esi4 - edi9 & 0x7fffff)) {
        esi4 = esi4 + 0x10000;
    }
    edx10 = g4845b0;
    if (!(ebp6 - reinterpret_cast<unsigned char>(edx10) & 0x7fffff)) {
        ebp6 = ebp6 + 0x10000;
    }
    ebx11 = g4845ac;
    edi12 = g4845b0;
    g4837b4 = esi4;
    g4837b8 = ebp6;
    g4837bc = reinterpret_cast<int32_t>(ebx13) - esi4;
    edx14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx13) - ebx11);
    esi15 = esi4 - ebx11;
    g4837c0 = reinterpret_cast<uint32_t>(ecx) - ebp6;
    ebp16 = ebp6 - reinterpret_cast<unsigned char>(edi12);
    v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi15) >> 23);
    ecx18 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx) - reinterpret_cast<unsigned char>(edi12));
    v19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp16) >> 23);
    v20 = reinterpret_cast<void**>(reinterpret_cast<signed char>(edx14) >> 23);
    edi21 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esi15) >> 7) & 0xffff;
    v22 = reinterpret_cast<void**>(reinterpret_cast<signed char>(ecx18) >> 23);
    if (reinterpret_cast<signed char>(v20) <= reinterpret_cast<signed char>(v17)) {
        if (reinterpret_cast<signed char>(v20) >= reinterpret_cast<signed char>(v17)) {
            v23 = reinterpret_cast<void*>(0);
            v24 = reinterpret_cast<void**>(0x1000000);
            edi21 = 0x10000;
        } else {
            v23 = reinterpret_cast<void*>(0xffffffff);
            __asm__("cdq ");
            eax26 = fun_411d60(ecx18, v25, v19, v17, edx14);
            v24 = eax26;
        }
    } else {
        v23 = reinterpret_cast<void*>(1);
        edi21 = 0x10000 - edi21;
        __asm__("cdq ");
        eax28 = fun_411d60(ecx18, v27, v19, v17, edx14);
        v24 = eax28;
    }
    v29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp16) >> 7);
    __asm__("shrd eax, edx, 0x10");
    edi30 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v29) + edi21 * reinterpret_cast<unsigned char>(v24));
    ecx31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v29) & 0xffff);
    if (reinterpret_cast<signed char>(v22) <= reinterpret_cast<signed char>(v19)) {
        if (reinterpret_cast<signed char>(v22) >= reinterpret_cast<signed char>(v19)) {
            ecx31 = reinterpret_cast<void**>(0x10000);
            v32 = reinterpret_cast<void*>(0);
            v33 = reinterpret_cast<void**>(0x1000000);
        } else {
            __asm__("cdq ");
            v32 = reinterpret_cast<void*>(0xffffffff);
            eax34 = fun_411d60(ecx31, v29, v19, v17, edx14);
            v33 = eax34;
        }
    } else {
        v32 = reinterpret_cast<void*>(1);
        ecx31 = reinterpret_cast<void**>(0x10000 - reinterpret_cast<unsigned char>(ecx31));
        __asm__("cdq ");
        eax35 = fun_411d60(ecx31, v29, v19, v17, edx14);
        v33 = eax35;
    }
    __asm__("shrd eax, edx, 0x10");
    ecx36 = v17;
    ebp37 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(esi15) >> 7) + reinterpret_cast<unsigned char>(ecx31) * reinterpret_cast<unsigned char>(v33));
    esi38 = v19;
    v39 = 0;
    do {
        if (!(*reinterpret_cast<unsigned char*>(&a2) & 1)) 
            goto addr_424a61_17;
        eax40 = fun_4244e0();
        if (!eax40) 
            break;
        addr_424a61_17:
        if (!(*reinterpret_cast<unsigned char*>(&a2) & 2)) 
            goto addr_424a7a_19;
        eax40 = fun_424560();
        if (!eax40) 
            break;
        addr_424a7a_19:
        if (ecx36 != v20) 
            goto addr_424a86_21;
        if (esi38 == v22) 
            goto addr_424ac0_23;
        addr_424a86_21:
        if (!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(edi30) >> 16 == esi38)) {
            if (reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(ebp37) >> 16 == ecx36)) {
                ebp37 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp37) + reinterpret_cast<unsigned char>(v33));
                esi38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi38) + reinterpret_cast<uint32_t>(v32));
            }
        } else {
            edi30 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi30) + reinterpret_cast<unsigned char>(v24));
            ecx36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx36) + reinterpret_cast<uint32_t>(v23));
        }
        eax41 = v39 + 1;
        v39 = eax41;
    } while (eax41 < 64);
    goto addr_424ac0_23;
    addr_424ace_28:
    return eax40;
    addr_424ac0_23:
    eax40 = fun_4247d0(ecx36);
    goto addr_424ace_28;
}

struct s689 {
    signed char[20] pad20;
    int32_t f14;
    signed char[44] pad68;
    int32_t f44;
};

struct s688 {
    signed char[120] pad120;
    struct s689* f78;
};

struct s690 {
    signed char[107] pad107;
    unsigned char f6b;
};

void** fun_420320(void** ecx) {
    struct s688* eax2;
    struct s689* esi3;
    void** eax4;
    struct s690* eax5;
    void** ebp6;
    uint32_t* eax7;
    uint32_t edi8;
    void** eax9;
    int32_t eax10;
    int32_t ebx11;
    void** eax12;

    if (eax2->f78) {
        esi3 = eax2->f78;
        *reinterpret_cast<unsigned char*>(eax4 + 0x6b) = reinterpret_cast<unsigned char>(eax5->f6b | 1);
        fun_4312d0(eax4, ebp6);
        fun_41f670(eax4);
        eax7 = image_base_;
        edi8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 32)) >> 19;
        __asm__("shrd eax, edx, 0x10");
        *reinterpret_cast<void***>(eax4 + 72) = reinterpret_cast<void**>(0x140000 * eax7[edi8]);
        __asm__("shrd eax, edx, 0x10");
        *reinterpret_cast<void***>(eax4 + 76) = reinterpret_cast<void**>(0x140000 * *reinterpret_cast<uint32_t*>(edi8 * 4 + 0x46a9e0));
        eax9 = fun_423fa0(eax4);
        eax10 = reinterpret_cast<signed char>(eax9) / 0x140000;
        ebx11 = eax10;
        if (eax10 < 1) {
            ebx11 = 1;
        }
        eax12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>((esi3->f44 >> 1) + esi3->f14 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 20))) / ebx11);
        *reinterpret_cast<void***>(eax4 + 80) = eax12;
    }
    return eax12;
}

struct s691 {
    int32_t f0;
    signed char[74] pad78;
    int32_t f4e;
    int32_t f52;
};

struct s692 {
    signed char[78] pad78;
    int32_t f4e;
};

struct s693 {
    signed char[16] pad16;
    unsigned char f10;
    signed char[29] pad46;
    struct s691* f2e;
    struct s691* f32;
};

int32_t fun_428020(void** ecx, void** a2) {
    int32_t* esp3;
    struct s691* ebx4;
    struct s691* eax5;
    int32_t v6;
    int32_t edx7;
    int32_t v8;
    int32_t edx9;
    int32_t esi10;
    int32_t ebp11;
    struct s692* eax12;
    int32_t edx13;
    void* ecx14;
    struct s691* eax15;
    int32_t edx16;
    int32_t v17;
    void* eax18;
    void* ebp19;
    int32_t eax20;

    esp3 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 0x7d8);
    ebx4 = eax5;
    v6 = edx7;
    v8 = edx9;
    esi10 = 0;
    ebp11 = 0;
    if (!(reinterpret_cast<uint1_t>(eax12->f4e < 0) | reinterpret_cast<uint1_t>(eax12->f4e == 0))) {
        edx13 = 0;
        ecx14 = reinterpret_cast<void*>(0);
        do {
            if ((*reinterpret_cast<struct s693**>(edx13 + ebx4->f52))->f10 & 4) {
                if (ebx4 != (*reinterpret_cast<struct s693**>(edx13 + ebx4->f52))->f2e) {
                    eax15 = (*reinterpret_cast<struct s693**>(edx13 + ebx4->f52))->f2e;
                } else {
                    eax15 = (*reinterpret_cast<struct s693**>(edx13 + ebx4->f52))->f32;
                }
            } else {
                eax15 = reinterpret_cast<struct s691*>(0);
            }
            if (eax15 && eax15->f0 > v8) {
                ecx14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx14) + 4);
                ++ebp11;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp3) + reinterpret_cast<int32_t>(ecx14) - 4) = eax15->f0;
            }
            ++esi10;
            edx13 = edx13 + 4;
        } while (esi10 < ebx4->f4e);
    }
    if (ebp11) {
        edx16 = v17;
        if (ebp11 > 1) {
            eax18 = reinterpret_cast<void*>(4);
            ebp19 = reinterpret_cast<void*>(ebp11 * 4);
            do {
                if (edx16 > *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp3) + reinterpret_cast<int32_t>(eax18))) {
                    edx16 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp3) + reinterpret_cast<int32_t>(eax18));
                }
                eax18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax18) + 4);
            } while (reinterpret_cast<int32_t>(eax18) < reinterpret_cast<int32_t>(ebp19));
        }
        eax20 = edx16;
    } else {
        eax20 = v6;
    }
    return eax20;
}

