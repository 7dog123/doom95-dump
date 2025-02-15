
int32_t g10003028 = 0;

int32_t g1000302c = 0;

int32_t GetVersion = 0x415e;

int32_t* _adjust_fdiv = reinterpret_cast<int32_t*>(0x40e8);

int32_t g1000307c = 0;

int32_t* g10003084 = reinterpret_cast<int32_t*>(0);

int32_t* g10003080 = reinterpret_cast<int32_t*>(0);

int32_t GlobalFree = 0x4142;

int32_t free = 0x40ca;

int32_t GlobalAlloc = 0x4150;

int32_t malloc = 0x40de;

void fun_1000177a(int32_t a1, int32_t a2);

int32_t fun_10001550(int32_t a1, int32_t a2, int32_t a3) {
    int1_t less_or_equal4;
    int1_t zf5;
    uint32_t eax6;
    int32_t* eax7;
    int1_t less8;
    int1_t zf9;
    int1_t zf10;
    int32_t* esi11;
    int32_t* esi12;
    int1_t below_or_equal13;
    int32_t eax14;
    int1_t below_or_equal15;
    int1_t less16;
    int32_t* eax17;
    int1_t less18;
    int1_t zf19;
    int1_t less20;
    int1_t zf21;
    int32_t* eax22;
    int32_t* eax23;
    int32_t* eax24;
    int32_t* eax25;

    if (a2 != 1) {
        if (!a2) {
            less_or_equal4 = g10003028 <= 0;
            if (less_or_equal4) {
                return 0;
            } else {
                --g10003028;
            }
        }
    } else {
        ++g10003028;
    }
    zf5 = g1000302c == 0;
    if (zf5) {
        eax6 = reinterpret_cast<uint32_t>(GetVersion());
        if (*reinterpret_cast<signed char*>(&eax6) != 3 || !(eax6 & 0x80000000)) {
            --g1000302c;
        } else {
            ++g1000302c;
        }
    }
    eax7 = _adjust_fdiv;
    g1000307c = *eax7;
    if (a2 != 1) {
        if (!a2 && (((less8 = g1000302c < 0, less8) || (zf9 = g10003028 == 0, zf9)) && (zf10 = g10003084 == 0, !zf10))) {
            esi11 = g10003080;
            esi12 = esi11 - 1;
            below_or_equal13 = reinterpret_cast<uint32_t>(g10003084) <= reinterpret_cast<uint32_t>(esi12);
            if (below_or_equal13) {
                do {
                    eax14 = *esi12;
                    if (eax14) {
                        eax14();
                    }
                    --esi12;
                    below_or_equal15 = reinterpret_cast<uint32_t>(g10003084) <= reinterpret_cast<uint32_t>(esi12);
                } while (below_or_equal15);
            }
            less16 = g1000302c < 0;
            eax17 = g10003084;
            if (!less16) {
                GlobalFree(eax17);
            } else {
                free(eax17);
            }
            g10003084 = reinterpret_cast<int32_t*>(0);
        }
    } else {
        less18 = g1000302c < 0;
        if (less18) 
            goto addr_100015d8_22;
        zf19 = g10003028 == 1;
        if (zf19) 
            goto addr_100015cf_24;
    }
    return 1;
    addr_100015cf_24:
    less20 = g1000302c < 0;
    if (!less20) {
        zf21 = g10003028 == 1;
        if (zf21 && (eax22 = reinterpret_cast<int32_t*>(GlobalAlloc()), g10003084 = eax22, !eax22)) {
            goto 0x80;
        }
    } else {
        addr_100015d8_22:
        eax23 = reinterpret_cast<int32_t*>(malloc(0x80));
        g10003084 = eax23;
        if (!eax23) {
            return 0;
        }
    }
    eax24 = g10003084;
    *eax24 = 0;
    eax25 = g10003084;
    g10003080 = eax25;
    fun_1000177a(0x10003000, 0x10003004);
    return 1;
}

int32_t g10003088 = 0;

int32_t DisableThreadLibraryCalls = 0x416c;

int32_t fun_10001780(int32_t a1, int32_t a2, int32_t a3) {
    int1_t zf4;

    if (a2 == 1 && (zf4 = g10003088 == 0, zf4)) {
        DisableThreadLibraryCalls(a1);
    }
    return 1;
}

int32_t _initterm = 0x40d2;

void fun_1000177a(int32_t a1, int32_t a2) {
    goto _initterm;
}

int32_t GetEnvironmentVariableA = 0x4128;

int32_t GetEnvironmentStrings = 0x4110;

int32_t atol = 0x40b4;

int32_t g10003074 = 0;

int32_t g10003078 = 0;

int32_t WriteFile = 0x4104;

int32_t ReadFile = 0x40f8;

void* g10003048 = reinterpret_cast<void*>(0);

int32_t g1000304c = 0;

void _XBInit(int32_t* a1) {
    void* esp2;
    int32_t* ebx3;
    void* v4;
    int32_t edi5;
    int32_t eax6;
    void* esp7;
    int32_t v8;
    int32_t esi9;
    int32_t eax10;
    void* esp11;
    void* v12;
    void* esp13;
    int32_t eax14;
    void* esp15;
    int32_t eax16;
    int32_t esi17;
    signed char* edi18;
    int1_t zf19;
    signed char* esi20;
    int32_t ecx21;
    int1_t zf22;
    int1_t zf23;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 52);
    ebx3 = a1;
    v4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) + 16);
    edi5 = GetEnvironmentVariableA;
    *ebx3 = -1;
    eax6 = reinterpret_cast<int32_t>(edi5());
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    if (!eax6) {
        GetEnvironmentStrings();
        goto v8;
    }
    esi9 = atol;
    eax10 = reinterpret_cast<int32_t>(esi9(reinterpret_cast<int32_t>(esp7) + 28));
    esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4);
    g10003074 = eax10;
    v12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) + 32);
    edi5("XBUIWRITE");
    esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) + 4 - 4 - 4 - 4 - 4 + 4);
    eax14 = reinterpret_cast<int32_t>(esi9(reinterpret_cast<int32_t>(esp13) + 28, "XBUIWRITE"));
    g10003078 = eax14;
    WriteFile();
    esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    eax16 = g10003074;
    esi17 = ReadFile;
    esi17(eax16, reinterpret_cast<int32_t>(esp15) - 4 + 20, 8, reinterpret_cast<int32_t>(esp15) + 12, 0);
    esi17();
    edi18 = "XBUIREAD";
    zf19 = 0;
    if (0) {
        *ebx3 = 1;
        goto v12;
    } else {
        esi20 = reinterpret_cast<signed char*>(0x10003038);
        ecx21 = 16;
        do {
            if (!ecx21) 
                break;
            --ecx21;
            zf19 = *esi20 == *edi18;
            ++edi18;
            ++esi20;
        } while (zf19);
        if (!zf19) 
            goto addr_100010e3_9;
    }
    zf22 = v4 == g10003048;
    if (zf22) {
        zf23 = 20 == g1000304c;
        if (!zf23) {
            goto v12;
        }
    } else {
        goto v12;
    }
    addr_100010e3_9:
    goto v12;
}

uint32_t g10003058 = 0;

int32_t _XBGetPlayerData(int32_t a1, uint32_t a2, uint32_t a3) {
    int1_t cf4;
    int32_t eax5;
    void* esp6;
    int32_t edx7;
    int32_t edi8;
    void** v9;

    if (a1 != -1) {
        cf4 = g10003058 < a2;
        if (!cf4) {
            if (a3 <= 5) {
                eax5 = g10003078;
                WriteFile();
                esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
                edx7 = g10003074;
                edi8 = ReadFile;
                edi8(edx7, reinterpret_cast<int32_t>(esp6) - 4 + 12, 8);
                edi8();
                if (reinterpret_cast<uint32_t>(*v9) >= reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esp6) + 16)) {
                    *v9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) + 16);
                    goto eax5;
                } else {
                    *v9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) + 16);
                    goto eax5;
                }
            } else {
                return 6;
            }
        } else {
            return 7;
        }
    } else {
        return 5;
    }
}

int32_t g10003070 = 0;

int32_t _XBGetCommHandle(int32_t a1, int32_t* a2) {
    int32_t ecx3;

    if (a1 != -1) {
        ecx3 = g10003070;
        *a2 = ecx3;
        return 0;
    } else {
        return 5;
    }
}

int32_t _XBGetGameData(int32_t a1, uint32_t a2) {
    int32_t eax3;
    void* esp4;
    int32_t edx5;
    int32_t edi6;
    void** v7;

    if (a1 != -1) {
        if (a2 <= 1) {
            eax3 = g10003078;
            WriteFile();
            esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            edx5 = g10003074;
            edi6 = ReadFile;
            edi6(edx5, reinterpret_cast<int32_t>(esp4) - 4 + 12, 8);
            edi6();
            if (reinterpret_cast<uint32_t>(*v7) >= reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esp4) + 16)) {
                *v7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) + 16);
                goto eax3;
            } else {
                *v7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) + 16);
                goto eax3;
            }
        } else {
            return 6;
        }
    } else {
        return 5;
    }
}

uint32_t g1000305c = 0;

uint32_t g10003060 = 0;

uint32_t g10003064 = 0;

uint32_t g10003068 = 0;

uint32_t g1000306c = 0;

uint32_t g10003050 = 0;

uint32_t g10003054 = 0;

int32_t _XBGetGameNumeric(int32_t a1, uint32_t a2, uint32_t* a3) {
    uint32_t eax4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t eax10;
    uint32_t eax11;

    if (a1 == -1) {
        return 5;
    }
    if (a2 > 7) {
        return 6;
    }
    goto *reinterpret_cast<int32_t*>(a2 * 4 + 0x100012a4);
    eax4 = g10003058;
    *a3 = eax4;
    return 0;
    eax5 = g1000305c;
    *a3 = eax5;
    return 0;
    eax6 = g10003060;
    *a3 = eax6;
    return 0;
    eax7 = g10003064;
    *a3 = eax7;
    return 0;
    eax8 = g10003068;
    *a3 = eax8;
    return 0;
    eax9 = g1000306c;
    *a3 = eax9;
    return 0;
    eax10 = g10003050;
    *a3 = eax10;
    return 0;
    eax11 = g10003054;
    *a3 = eax11;
    return 0;
}

int32_t XBGetPlayerNumeric(int32_t a1, uint32_t a2, uint32_t a3) {
    int1_t cf4;
    void* esp5;
    int32_t edx6;
    void* esp7;
    int32_t eax8;
    int32_t esi9;

    if (a1 != -1) {
        cf4 = g10003058 < a2;
        if (!cf4) {
            if (a3 <= 2) {
                esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 4 - 4);
                edx6 = g10003078;
                WriteFile(edx6, reinterpret_cast<int32_t>(esp5) + 12);
                esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 - 4 + 4);
                eax8 = g10003074;
                esi9 = ReadFile;
                esi9(eax8, reinterpret_cast<int32_t>(esp7) - 4 + 28, 8, reinterpret_cast<int32_t>(esp7) + 4);
                esi9();
                goto 0;
            } else {
                return 6;
            }
        } else {
            return 7;
        }
    } else {
        return 5;
    }
}

int32_t _XBSendGameData(int32_t a1, int32_t a2) {
    int32_t edx3;
    int32_t edi4;

    if (a1 != -1) {
        edx3 = g10003078;
        edi4 = WriteFile;
        edi4(edx3, reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 4 - 4 - 4 - 4 + 20);
        edi4();
        goto 16;
    } else {
        return 5;
    }
}

int32_t _XBSendPlayerData(int32_t a1, int32_t a2, int32_t a3) {
    int32_t edx4;
    int32_t edi5;

    if (a1 != -1) {
        edx4 = g10003078;
        edi5 = WriteFile;
        edi5(edx4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 4 - 4 - 4 + 16);
        edi5();
        goto 16;
    } else {
        return 5;
    }
}

int32_t _XBClose() {
    return 0;
}

int32_t fun_100016d0(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int1_t zf5;
    int32_t eax6;
    int32_t esi7;
    int32_t ebp8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;

    ebx4 = 1;
    if (!a2 && (zf5 = g10003028 == 0, zf5)) {
        return 0;
    }
    if (a2 == 1 || a2 == 2) {
        eax6 = g10003088;
        if (!eax6) {
            esi7 = a1;
            ebp8 = a3;
        } else {
            ebp8 = a3;
            esi7 = a1;
            eax9 = reinterpret_cast<int32_t>(eax6(esi7, a2, ebp8));
            ebx4 = eax9;
        }
        if (ebx4) 
            goto addr_10001723_8;
    } else {
        esi7 = a1;
        ebp8 = a3;
        goto addr_10001737_10;
    }
    addr_10001745_11:
    if (!a2 || a2 == 3) {
        eax10 = fun_10001550(esi7, a2, ebp8);
        if (!eax10) {
            ebx4 = 0;
        }
        if (ebx4 && (eax11 = g10003088, !!eax11)) {
            eax12 = reinterpret_cast<int32_t>(eax11(esi7, a2, ebp8));
            ebx4 = eax12;
        }
    }
    return ebx4;
    addr_10001723_8:
    eax13 = fun_10001550(esi7, a2, ebp8);
    ebx4 = eax13;
    addr_10001737_10:
    if (ebx4) {
        eax14 = fun_10001780(esi7, a2, ebp8);
        ebx4 = eax14;
        goto addr_10001745_11;
    }
}

void fun_100017a3() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    signed char* eax25;
    signed char* eax26;
    signed char al27;
    signed char* eax28;
    signed char* eax29;
    signed char al30;
    signed char* eax31;
    signed char* eax32;
    signed char al33;
    signed char* eax34;
    signed char* eax35;
    signed char al36;
    signed char* eax37;
    signed char* eax38;
    signed char al39;
    signed char* eax40;
    signed char* eax41;
    signed char al42;
    signed char* eax43;
    signed char* eax44;
    signed char al45;
    signed char* eax46;
    signed char* eax47;
    signed char al48;
    signed char* eax49;
    signed char* eax50;
    signed char al51;
    signed char* eax52;
    signed char* eax53;
    signed char al54;
    signed char* eax55;
    signed char* eax56;
    signed char al57;
    signed char* eax58;
    signed char* eax59;
    signed char al60;
    signed char* eax61;
    signed char* eax62;
    signed char al63;
    signed char* eax64;
    signed char* eax65;
    signed char al66;
    signed char* eax67;
    signed char* eax68;
    signed char al69;
    signed char* eax70;
    signed char* eax71;
    signed char al72;
    signed char* eax73;
    signed char* eax74;
    signed char al75;
    signed char* eax76;
    signed char* eax77;
    signed char al78;
    signed char* eax79;
    signed char* eax80;
    signed char al81;
    signed char* eax82;
    signed char* eax83;
    signed char al84;
    signed char* eax85;
    signed char* eax86;
    signed char al87;
    signed char* eax88;
    signed char* eax89;
    signed char al90;
    signed char* eax91;
    signed char* eax92;
    signed char al93;
    signed char* eax94;
    signed char* eax95;
    signed char al96;
    signed char* eax97;
    signed char* eax98;
    signed char al99;
    signed char* eax100;
    signed char* eax101;
    signed char al102;
    signed char* eax103;
    signed char* eax104;
    signed char al105;
    signed char* eax106;
    signed char* eax107;
    signed char al108;
    signed char* eax109;
    signed char* eax110;
    signed char al111;
    signed char* eax112;
    signed char* eax113;
    signed char al114;
    signed char* eax115;
    signed char* eax116;
    signed char al117;
    signed char* eax118;
    signed char* eax119;
    signed char al120;
    signed char* eax121;
    signed char* eax122;
    signed char al123;
    signed char* eax124;
    signed char* eax125;
    signed char al126;
    signed char* eax127;
    signed char* eax128;
    signed char al129;
    signed char* eax130;
    signed char* eax131;
    signed char al132;
    signed char* eax133;
    signed char* eax134;
    signed char al135;
    signed char* eax136;
    signed char* eax137;
    signed char al138;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
    *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
    *eax28 = reinterpret_cast<signed char>(*eax29 + al30);
    *eax31 = reinterpret_cast<signed char>(*eax32 + al33);
    *eax34 = reinterpret_cast<signed char>(*eax35 + al36);
    *eax37 = reinterpret_cast<signed char>(*eax38 + al39);
    *eax40 = reinterpret_cast<signed char>(*eax41 + al42);
    *eax43 = reinterpret_cast<signed char>(*eax44 + al45);
    *eax46 = reinterpret_cast<signed char>(*eax47 + al48);
    *eax49 = reinterpret_cast<signed char>(*eax50 + al51);
    *eax52 = reinterpret_cast<signed char>(*eax53 + al54);
    *eax55 = reinterpret_cast<signed char>(*eax56 + al57);
    *eax58 = reinterpret_cast<signed char>(*eax59 + al60);
    *eax61 = reinterpret_cast<signed char>(*eax62 + al63);
    *eax64 = reinterpret_cast<signed char>(*eax65 + al66);
    *eax67 = reinterpret_cast<signed char>(*eax68 + al69);
    *eax70 = reinterpret_cast<signed char>(*eax71 + al72);
    *eax73 = reinterpret_cast<signed char>(*eax74 + al75);
    *eax76 = reinterpret_cast<signed char>(*eax77 + al78);
    *eax79 = reinterpret_cast<signed char>(*eax80 + al81);
    *eax82 = reinterpret_cast<signed char>(*eax83 + al84);
    *eax85 = reinterpret_cast<signed char>(*eax86 + al87);
    *eax88 = reinterpret_cast<signed char>(*eax89 + al90);
    *eax91 = reinterpret_cast<signed char>(*eax92 + al93);
    *eax94 = reinterpret_cast<signed char>(*eax95 + al96);
    *eax97 = reinterpret_cast<signed char>(*eax98 + al99);
    *eax100 = reinterpret_cast<signed char>(*eax101 + al102);
    *eax103 = reinterpret_cast<signed char>(*eax104 + al105);
    *eax106 = reinterpret_cast<signed char>(*eax107 + al108);
    *eax109 = reinterpret_cast<signed char>(*eax110 + al111);
    *eax112 = reinterpret_cast<signed char>(*eax113 + al114);
    *eax115 = reinterpret_cast<signed char>(*eax116 + al117);
    *eax118 = reinterpret_cast<signed char>(*eax119 + al120);
    *eax121 = reinterpret_cast<signed char>(*eax122 + al123);
    *eax124 = reinterpret_cast<signed char>(*eax125 + al126);
    *eax127 = reinterpret_cast<signed char>(*eax128 + al129);
    *eax130 = reinterpret_cast<signed char>(*eax131 + al132);
    *eax133 = reinterpret_cast<signed char>(*eax134 + al135);
    *eax136 = reinterpret_cast<signed char>(*eax137 + al138);
}
