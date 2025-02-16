
int32_t g1000c390 = 0;

int32_t g1000c394 = 0;

void** g1000c398 = reinterpret_cast<void**>(0);

int32_t CreateFileA = 0x1464c;

int32_t WriteFile = 0x14640;

void** fun_10001000(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, ...) {
    void* esp10;
    int32_t esi11;
    int1_t zf12;
    void** edx13;
    void** eax14;
    void* eax15;
    void** esi16;
    void* v17;
    void** edi18;
    int32_t ecx19;
    int32_t eax20;

    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4);
    esi11 = 0;
    zf12 = g1000c390 == 0;
    if (!zf12) {
        esi11 = g1000c394;
        edx13 = g1000c398;
    } else {
        eax14 = reinterpret_cast<void**>(CreateFileA("\\\\.\\mailslot\\debugout", 0x40000000, 2, 0, 3, 0, 0));
        esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        g1000c398 = eax14;
        edx13 = eax14;
        if (!reinterpret_cast<int1_t>(eax14 == 0xffffffff)) {
            esi11 = 1;
        } else {
            edx13 = reinterpret_cast<void**>(0);
        }
        g1000c390 = 1;
    }
    g1000c394 = esi11;
    g1000c398 = edx13;
    if (esi11) {
        eax15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) + 8);
        esi16 = a1;
        v17 = eax15;
        edi18 = esi16;
        ecx19 = -1;
        eax20 = reinterpret_cast<int32_t>(eax15) - reinterpret_cast<int32_t>(eax15);
        do {
            if (!ecx19) 
                break;
            --ecx19;
            ++edi18;
            ++esi16;
        } while (*reinterpret_cast<void***>(edi18) != *reinterpret_cast<void***>(&eax20));
        eax14 = reinterpret_cast<void**>(WriteFile(edx13, esi16, ~ecx19 - 1, v17, 0));
    }
    return eax14;
}

void** g1000c0ec = reinterpret_cast<void**>(0);

int32_t MessageBoxA = 0x14872;

int32_t fun_100030c0();

int32_t fun_10003090() {
    void** eax1;
    int32_t eax2;
    int32_t eax3;

    eax1 = g1000c0ec;
    eax2 = reinterpret_cast<int32_t>(MessageBoxA());
    if (eax2 != 6 || (eax3 = fun_100030c0(), eax3 == 0)) {
        goto eax1;
    } else {
        goto eax1;
    }
}

void** fun_10002a20(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void** fun_1000602c();

int32_t fun_10002ec0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, ...);

void fun_10004820(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, ...);

int32_t LocalFree = 0x1468a;

void** fun_10002d00(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, signed char a12) {
    void** v13;
    void** v14;
    void** ebx15;
    void** eax16;
    void** ebx17;
    void** v18;
    void** esi19;
    void** v20;
    void** edi21;
    void** edi22;
    void** eax23;
    void** eax24;
    int32_t eax25;

    v13 = reinterpret_cast<void**>(__return_address());
    v14 = ebx15;
    eax16 = reinterpret_cast<void**>(0xa4);
    ebx17 = a3;
    v18 = esi19;
    v20 = edi21;
    edi22 = a2;
    while (eax23 = fun_10002a20(ecx, edi22, eax16, "lineGetCallStatus", v20, v18, v14, v13, a2, a3), edi22 = eax23, !!edi22) {
        do {
            eax24 = fun_1000602c();
            eax25 = fun_10002ec0(ecx, eax24, ebx17, edi22, v20, v18, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            if (!eax25) 
                goto addr_10002d52_4;
        } while (eax24);
        eax16 = *reinterpret_cast<void***>(edi22 + 4);
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi22)) >= reinterpret_cast<unsigned char>(eax16)) 
            goto addr_10002d4a_7;
    }
    return 0;
    addr_10002d52_4:
    fun_10004820(ecx, eax24, "lineGetCallStatus unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xbd1, ebx17, edi22, v20, v18, v14, v13, a2, a3);
    LocalFree();
    goto v20;
    addr_10002d4a_7:
    goto v18;
}

void** g1000c0f0 = reinterpret_cast<void**>(0);

void** g1000c0fc = reinterpret_cast<void**>(0);

void** fun_100012c0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16);

void** fun_10005fcc();

void** g1000c108 = reinterpret_cast<void**>(0);

void** g1000c2a0 = reinterpret_cast<void**>(0);

void** g1000c10c = reinterpret_cast<void**>(0);

void** g1000c110 = reinterpret_cast<void**>(0);

int32_t fun_10001220(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** v15;
    int1_t zf16;
    void** v17;
    void** esi18;
    int1_t zf19;
    void** eax20;
    void** eax21;
    int32_t eax22;

    v15 = reinterpret_cast<void**>(__return_address());
    zf16 = g1000c0f0 == 0;
    v17 = esi18;
    if (zf16) {
        return 1;
    }
    zf19 = g1000c0fc == 0;
    if (!zf19) {
        return 1;
    }
    g1000c0fc = reinterpret_cast<void**>(1);
    fun_100012c0(0x1f4, v17, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    do {
        eax20 = g1000c0f0;
        eax21 = fun_10005fcc();
        eax22 = fun_10002ec0(ecx, eax21, eax20, v17, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        if (!eax22) 
            break;
    } while (eax21);
    goto addr_10001270_8;
    fun_10004820(ecx, eax21, "lineShutdown unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x1fe, eax20, v17, v15, a2, a3, a4, a5, a6);
    addr_10001287_10:
    g1000c108 = reinterpret_cast<void**>(0);
    g1000c2a0 = reinterpret_cast<void**>(0);
    g1000c0f0 = reinterpret_cast<void**>(0);
    g1000c10c = reinterpret_cast<void**>(0);
    g1000c110 = reinterpret_cast<void**>(0);
    g1000c0fc = reinterpret_cast<void**>(0);
    fun_10001000("TAPI uninitialized.\r\n", eax20, v17, v15, a2, a3, a4, a5, a6);
    goto v17;
    addr_10001270_8:
    goto addr_10001287_10;
}

int32_t lineDrop = 0x14480;

void** fun_10005fde(void** a1, void** a2, void** a3) {
    goto lineDrop;
}

void** g10011384 = reinterpret_cast<void**>(0);

void** g10011f84;

void** g10011f70;

void** g10011f7c;

int32_t GetTickCount = 0x1465a;

int32_t TranslateMessage = 0x14842;

int32_t DispatchMessageA = 0x1481e;

int32_t PeekMessageA = 0x14832;

void** fun_100020b0(void** a1, void** a2, void** a3, void** a4) {
    void* esp5;
    int32_t esi6;
    int32_t edi7;
    int32_t ebx8;
    int1_t zf9;
    int32_t eax10;
    void** ecx11;
    void** eax12;
    void* v13;
    void* esp14;
    void** eax15;
    int32_t v16;

    g10011384 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<signed char>(a1) <= reinterpret_cast<signed char>(0)) {
        g10011384 = reinterpret_cast<void**>(1);
        return a1;
    }
    g10011f84 = reinterpret_cast<void**>(0);
    g10011f70 = a1;
    g10011f7c = reinterpret_cast<void**>(0x80000048);
    GetTickCount();
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 4 - 4 - 4 - 4 + 4);
    esi6 = TranslateMessage;
    edi7 = DispatchMessageA;
    ebx8 = PeekMessageA;
    do {
        zf9 = g10011f84 == 0;
        if (!zf9) 
            break;
        eax10 = reinterpret_cast<int32_t>(ebx8());
        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        ecx11 = g1000c108;
        eax12 = g10011384;
        if (eax10) {
            v13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) + 12);
            esi6(v13);
            esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4);
            edi7(reinterpret_cast<int32_t>(esp14) + 12, v13);
            esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 + 4);
            eax12 = g10011384;
            ecx11 = g1000c108;
        }
    } while (ecx11 && !eax12);
    goto addr_1000213f_8;
    eax15 = g10011f7c;
    g10011384 = reinterpret_cast<void**>(1);
    return eax15;
    addr_1000213f_8:
    g10011384 = reinterpret_cast<void**>(1);
    goto v16;
}

int32_t fun_10002ff0();

int32_t fun_10003010(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

int32_t fun_10003060();

int32_t fun_10003040();

int32_t fun_10003020();

int32_t fun_10002fd0();

int32_t fun_10002f80();

int32_t fun_10002ec0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, ...) {
    int32_t eax19;
    int32_t eax20;
    int32_t eax21;
    int32_t eax22;
    int32_t eax23;
    int32_t eax24;
    int32_t eax25;

    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(a2 == 0)) {
        if (reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(0x8000001e)) {
            if (reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(0x80000043)) {
                if (reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(0x80000048)) {
                    if (reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(0x80000052)) {
                        if (a2 == 0x80000056) {
                            eax19 = fun_10002ff0();
                            return eax19;
                        } else {
                            if (!a2) {
                                return 1;
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        if (a2 == 0x80000052) {
                            eax20 = fun_10003010(ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                            return eax20;
                        } else {
                            if (a2 == 0x8000004b) {
                                eax21 = fun_10003060();
                                return eax21;
                            } else {
                                return 0;
                            }
                        }
                    }
                } else {
                    if (a2 == 0x80000048) {
                        eax22 = fun_10003040();
                        return eax22;
                    } else {
                        if (a2 == 0x80000044) {
                            eax23 = fun_10003020();
                            return eax23;
                        } else {
                            return 0;
                        }
                    }
                }
            } else {
                if (a2 == 0x80000043) {
                    eax24 = fun_10002fd0();
                    return eax24;
                } else {
                    if (a2 != 0x8000002d) {
                        return 0;
                    }
                }
            }
        } else {
            if (a2 != 0x8000001e && a2 != 0x8000000e) {
                return 0;
            }
        }
        eax25 = fun_10002f80();
        return eax25;
    } else {
        return 0;
    }
}

void** fun_10006014();

void** fun_10003240(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** v15;
    void** v16;
    void** esi17;
    void*** esp18;
    void** v19;
    void** edi20;
    void** esi21;
    void** ecx22;
    void** v23;
    void** edx24;
    void** eax25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    int32_t eax31;

    v15 = reinterpret_cast<void**>(__return_address());
    v16 = esi17;
    esp18 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 4 - 4);
    v19 = edi20;
    esi21 = a1;
    do {
        ecx22 = reinterpret_cast<void**>(esp18 + 8);
        v23 = reinterpret_cast<void**>(esp18 + 12);
        edx24 = g1000c0f0;
        eax25 = fun_10006014();
        if (eax25 == 0x8000000c) 
            break;
        eax31 = fun_10002ec0(ecx22, eax25, edx24, esi21, 0x10003, 0x10004, ecx22, v23, v19, v16, v26, v27, v28, v29, v30, v15, a1, a2);
        esp18 = esp18 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 4;
        if (!eax31) 
            goto addr_100032a1_4;
    } while (eax25);
    goto addr_10003281_6;
    fun_10001000("INCOMPATIBLEAPIVERSION in Dial Dialog.\r\n", edx24, esi21, 0x10003, 0x10004, ecx22, v23, v19, v16);
    goto v16;
    addr_100032a1_4:
    fun_10004820(ecx22, eax25, "lineNegotiateAPIVersion in Dial Dialog unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xe89, edx24, esi21, 0x10003, 0x10004, ecx22, v23, v19, v16);
    goto v16;
    addr_10003281_6:
    goto v16;
}

void** fun_10006020();

void** fun_10002bf0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** v18;
    void** v19;
    void** ebx20;
    void** eax21;
    void** ebx22;
    void** v23;
    void** esi24;
    void** esi25;
    void** v26;
    void** edi27;
    void** edi28;
    void** v29;
    void** ebp30;
    void** eax31;
    void** eax32;
    void** eax33;
    int32_t eax34;

    v18 = reinterpret_cast<void**>(__return_address());
    v19 = ebx20;
    eax21 = reinterpret_cast<void**>(0x170);
    ebx22 = a4;
    v23 = esi24;
    esi25 = a2;
    v26 = edi27;
    edi28 = a3;
    v29 = ebp30;
    while (eax31 = fun_10002a20(ecx, esi25, eax21, "lineGetDevCaps", v29, v26, v23, v19, v18, a2), esi25 = eax31, !!esi25) {
        do {
            eax32 = g1000c0f0;
            eax33 = fun_10006020();
            eax34 = fun_10002ec0(ecx, eax33, eax32, edi28, ebx22, 0, esi25, v29, v26, v23, v19, v18, a2, a3, a4, a5, a6, a7);
            if (!eax34) 
                goto addr_10002c52_4;
        } while (eax33);
        eax21 = *reinterpret_cast<void***>(esi25 + 4);
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi25)) >= reinterpret_cast<unsigned char>(eax21)) 
            goto addr_10002c49_7;
    }
    return 0;
    addr_10002c52_4:
    fun_10004820(ecx, eax33, "lineGetDevCaps unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xb26, eax32, edi28, ebx22, 0, esi25, v29, v26, v23);
    LocalFree();
    goto 0;
    addr_10002c49_7:
    goto esi25;
}

void fun_10005220(void** ecx, void** a2, void** a3, void** a4);

void** fun_10002af0(void** a1, void** a2, void** a3, void** a4);

void** fun_10005fea(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

void** fun_10005fd2(void** a1);

void** fun_10002c80(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19);

void** fun_10006002(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

uint32_t fun_100032c0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, int32_t a21) {
    void** v22;
    void** v23;
    void** ebx24;
    void** v25;
    void** esi26;
    void** v27;
    void** edi28;
    void** esi29;
    void** edi30;
    void** v31;
    void** ebp32;
    void** eax33;
    void** ebx34;
    void** v35;
    void** eax36;
    void* esp37;
    void** v38;
    void** ecx39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** eax44;
    int32_t eax45;
    int32_t edi46;
    void** eax47;
    void** v48;
    void** eax49;
    void** eax50;
    int32_t eax51;

    v22 = reinterpret_cast<void**>(__return_address());
    v23 = ebx24;
    v25 = esi26;
    v27 = edi28;
    esi29 = reinterpret_cast<void**>(0);
    edi30 = a2;
    v31 = ebp32;
    fun_10005220(ecx, "Testing Line ID '0x%lx'", edi30, v31);
    eax33 = fun_10002af0(edi30, v31, v27, v25);
    ebx34 = eax33;
    if (!ebx34) {
        return 1;
    }
    eax36 = fun_10002bf0(ecx, 0, edi30, ebx34, v31, v27, v25, v23, 0, v35, 0, 0, v22, a2, a3, a4, a5);
    esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 8 - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 + 12 + 4);
    v38 = eax36;
    if (!eax36) {
        return 1;
    }
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v38 + 52)) & 1)) 
        goto addr_1000332c_6;
    if (*reinterpret_cast<unsigned char*>(v38 + 60) & 16) {
        if (*reinterpret_cast<unsigned char*>(v38 + 0xec) & 8) {
            do {
                ecx39 = g1000c0f0;
                v40 = ebx34;
                v41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp37) + 24);
                v42 = edi30;
                v43 = ecx39;
                eax44 = fun_10005fea(v43, v42, v41, v40, 0, 0, 1, 16, 0, v31, v27, v25);
                if (eax44 == 0x80000001) 
                    break;
                eax45 = fun_10002ec0(ecx39, eax44, v43, v42, v41, v40, 0, 0, 1, 16, 0, v31, v27, v25, v23, 0, v38, 0, eax44, v43, v42, v41, v40, 0, 0, 1, 16);
                esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 4);
                if (!eax45) 
                    goto addr_10003477_11;
            } while (eax44);
            goto addr_100033c0_13;
        } else {
            fun_10001000("LINEFEATURE_MAKECALL not supported\r\n", v31, v27, v25, v23, 4, v38, 0, 0);
            goto addr_10003494_15;
        }
    } else {
        fun_10001000("LINEMEDIAMODE_DATAMODEM not supported\r\n", v31, v27, v25, v23, 3, v38, 0, 0);
        goto addr_10003494_15;
    }
    fun_10001000("Line is already in use by a non-TAPI app or another Service Provider.\r\n", v43, v42, v41, v40, 0, 0, 1, 16, "Line is already in use by a non-TAPI app or another Service Provider.\r\n", v43, v42, v41, v40, 0, 0, 1, 16);
    addr_10003494_15:
    if (!1) {
        fun_10005fd2(0);
    }
    if (1) {
        edi46 = LocalFree;
    } else {
        edi46 = LocalFree;
        edi46(0);
    }
    if (v38) {
        edi46(v38);
    }
    if (esi29) {
        edi46(esi29);
    }
    goto v22;
    addr_10003477_11:
    fun_10004820(ecx39, eax44, "lineOpen unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xef9, v43, v42, v41, v40, 0, 0, 1, 16, ecx39, eax44, "lineOpen unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xef9, v43, v42, v41, v40, 0, 0, 1, 16);
    addr_1000348c_27:
    goto addr_10003494_15;
    addr_100033c0_13:
    eax47 = fun_10002c80(ecx39, 0, 1, 0, v43, v42, v41, v40, 0, 0, 1, 16, 0, v31, v27, v25, v23, 0, v38);
    v48 = eax47;
    if (eax47) {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v48 + 28)) & 2) {
            do {
                eax49 = fun_10002a20(ecx39, esi29, 24, "VerifyUsableLine:lineGetID: ", v43, v42, v41, v40, 0, 0);
                esi29 = eax49;
                if (!esi29) 
                    goto addr_1000348c_27;
                eax50 = fun_10006002(1, 0, 0, 1, esi29, "comm/datamodem", v43, v42, v41, v40, 0, 0);
                eax51 = fun_10002ec0(ecx39, eax50, 1, 0, 0, 1, esi29, "comm/datamodem", v43, v42, v41, v40, 0, 0, 1, v48, 0, v31, eax50, 1, 0, 0, 1, esi29, "comm/datamodem", v43, v42);
                if (!eax51) 
                    break;
            } while (eax50);
            goto addr_1000344c_32;
        } else {
            fun_10001000("LINEADDRFEATURE_MAKECALL not available\r\n", v43, v42, v41, v40, 0, 0, 1, v48, "LINEADDRFEATURE_MAKECALL not available\r\n", v43, v42, v41, v40, 0, 0, 1, v48);
            goto addr_10003494_15;
        }
    } else {
        goto addr_1000348c_27;
    }
    fun_10004820(ecx39, eax50, "lineGetID unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xf2d, 1, 0, 0, 1, esi29, "comm/datamodem", v43, v42, ecx39, eax50, "lineGetID unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xf2d, 1, 0, 0, 1, esi29, "comm/datamodem", v43, v42);
    goto addr_10003494_15;
    addr_1000344c_32:
    fun_10001000("Line is suitable and available for use.\r\n", 1, 0, 0, 1, esi29, "comm/datamodem", v43, v42, "Line is suitable and available for use.\r\n", 1, 0, 0, 1, esi29, "comm/datamodem", v43, v42);
    goto addr_10003494_15;
    addr_1000332c_6:
    fun_10001000("LINEBEARERMODE_VOICE not supported\r\n", v31, v27, v25, v23, 2, v38, 0, 0);
    goto addr_10003494_15;
}

int32_t GetModuleHandleA = 0x1466a;

void** g1000c0e4 = reinterpret_cast<void**>(0);

void** g1000c104 = reinterpret_cast<void**>(0);

void** fun_10005fc6();

void** fun_10002290(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** g1000c0e8 = reinterpret_cast<void**>(0);

int32_t fun_10001090(void** ecx, int32_t a2) {
    void** v3;
    void** ebx4;
    void** v5;
    void** esi6;
    void** v7;
    void** edi8;
    int32_t esi9;
    void** v10;
    void** ebp11;
    void** eax12;
    void* esp13;
    int1_t zf14;
    int32_t v15;
    int1_t zf16;
    int32_t v17;
    int32_t edi18;
    int32_t ebx19;
    void** eax20;
    void** v21;
    void** eax22;
    void* esp23;
    void** ebp24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    int32_t v31;
    int32_t v32;
    int32_t v33;
    int32_t v34;
    int32_t v35;
    int32_t v36;
    int32_t eax37;
    int32_t eax38;
    int32_t eax39;
    int32_t esi40;
    int32_t eax41;
    void* v42;
    int32_t eax43;
    void* esp44;
    void* v45;
    void* esp46;
    int32_t eax47;
    int32_t v48;
    int32_t v49;
    int32_t v50;
    int32_t v51;

    v3 = ebx4;
    v5 = esi6;
    v7 = edi8;
    esi9 = 1;
    v10 = ebp11;
    eax12 = reinterpret_cast<void**>(GetModuleHandleA());
    esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    zf14 = g1000c0f0 == 0;
    g1000c0e4 = eax12;
    if (!zf14) {
        goto v15;
    }
    zf16 = g1000c104 == 0;
    if (!zf16) {
        goto v17;
    }
    edi18 = TranslateMessage;
    ebx19 = GetTickCount;
    g1000c104 = reinterpret_cast<void**>(1);
    do {
        eax20 = g1000c0e4;
        v21 = eax20;
        eax22 = fun_10005fc6();
        esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        ebp24 = eax22;
        if (!reinterpret_cast<int1_t>(eax22 == 0x80000052)) {
            if (!reinterpret_cast<int1_t>(ebp24 == 0x80000042)) {
                eax37 = fun_10002ec0(ecx, ebp24, 0x1000c0f0, v21, fun_10002290, "DoomMdm", 0x1000c0f4, "doommdm.dll", v10, v7, v5, v3, v25, v26, v27, v28, v29, v30, ecx, ebp24, 0x1000c0f0, v21, fun_10002290, "DoomMdm", 0x1000c0f4, "doommdm.dll", v10, v7, v5, v3, v31, v32, v33, v34, v35, v36);
                esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 + 4 + 4);
                if (!eax37) 
                    break; else 
                    continue;
            } else {
                eax38 = fun_10003090();
                esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 + 4);
                if (eax38) 
                    continue; else 
                    goto addr_10001174_10;
            }
        } else {
            if (!esi9) 
                goto addr_100011df_12;
            eax39 = reinterpret_cast<int32_t>(ebx19());
            esi40 = eax39;
            eax41 = reinterpret_cast<int32_t>(ebx19());
            esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 + 4 - 4 + 4);
            if (reinterpret_cast<uint32_t>(eax41 - esi40) < 0x1388) 
                goto addr_1000112b_14;
        }
        addr_1000115f_15:
        esi9 = 0;
        continue;
        do {
            addr_1000112b_14:
            v42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) + 16);
            eax43 = reinterpret_cast<int32_t>(PeekMessageA(v42, 0, 0, 0, 1));
            esp44 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            if (eax43) {
                v45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp44) + 16);
                edi18(v45, v42, 0, 0, 0, 1);
                esp46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp44) - 4 - 4 + 4);
                DispatchMessageA(reinterpret_cast<int32_t>(esp46) + 16, v45, v42, 0, 0, 0, 1);
                esp44 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp46) - 4 - 4 + 4);
            }
            eax47 = reinterpret_cast<int32_t>(ebx19(v42, 0, 0, 0, 1));
            esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp44) - 4 + 4);
        } while (reinterpret_cast<uint32_t>(eax47 - esi40) < 0x1388);
        goto addr_1000115f_15;
    } while (ebp24);
    goto addr_100011a6_19;
    fun_10004820(ecx, ebp24, "lineInitialize unhandled error:", "C:\\doomutil\\doommdm\\tapicode.c", 0x1be, 0x1000c0f0, v21, fun_10002290, "DoomMdm", 0x1000c0f4, "doommdm.dll", v10, v7, ecx, ebp24, "lineInitialize unhandled error:", "C:\\doomutil\\doommdm\\tapicode.c", 0x1be, 0x1000c0f0, v21, fun_10002290, "DoomMdm", 0x1000c0f4, "doommdm.dll", v10, v7);
    g1000c104 = reinterpret_cast<void**>(0);
    goto v48;
    addr_100011a6_19:
    g1000c0e8 = reinterpret_cast<void**>(0);
    g1000c0ec = reinterpret_cast<void**>(0);
    g1000c10c = reinterpret_cast<void**>(0);
    g1000c110 = reinterpret_cast<void**>(0);
    fun_10001000("Tapi initialized.\r\n", 0x1000c0f0, v21, fun_10002290, "DoomMdm", 0x1000c0f4, "doommdm.dll", v10, v7, "Tapi initialized.\r\n", 0x1000c0f0, v21, fun_10002290, "DoomMdm", 0x1000c0f4, "doommdm.dll", v10, v7);
    g1000c104 = reinterpret_cast<void**>(0);
    goto v49;
    addr_10001174_10:
    fun_10001000("No devices installed.\r\n", 0x1000c0f0, v21, fun_10002290, "DoomMdm", 0x1000c0f4, "doommdm.dll", v10, v7, "No devices installed.\r\n", 0x1000c0f0, v21, fun_10002290, "DoomMdm", 0x1000c0f4, "doommdm.dll", v10, v7);
    g1000c104 = reinterpret_cast<void**>(0);
    goto v50;
    addr_100011df_12:
    g1000c104 = reinterpret_cast<void**>(0);
    goto v51;
}

int32_t wsprintfA = 0x14856;

void** g1000c0e0 = reinterpret_cast<void**>(0);

int32_t SetEvent = 0x1467e;

int32_t g10011f74;

void** fun_10001320(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

void** fun_100012c0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    void** ecx17;
    void** eax18;
    int1_t zf19;
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
    void** eax31;

    ecx17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x80);
    wsprintfA(ecx17, "HangupCall was called from %d", a1);
    eax18 = g1000c0e0;
    if (eax18) {
        SetEvent(eax18);
    }
    zf19 = g10011f74 == 0;
    if (zf19) {
        eax31 = fun_10001320(ecx17, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30);
        return eax31;
    } else {
        return 1;
    }
}

int32_t lineSetStatusMessages = 0x1448c;

void** fun_10005fe4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto lineSetStatusMessages;
}

void** g1000c0f4 = reinterpret_cast<void**>(0);

void** fun_10001570(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, int32_t a15) {
    void** v16;
    void** v17;
    void** ebx18;
    void** v19;
    void** esi20;
    void** v21;
    void** edi22;
    void** ebx23;
    void** v24;
    void** ebp25;
    void** edi26;
    void** esi27;
    int1_t below_or_equal28;
    void** eax29;
    void** eax30;
    uint32_t eax31;
    int1_t below_or_equal32;

    v16 = reinterpret_cast<void**>(__return_address());
    v17 = ebx18;
    v19 = esi20;
    v21 = edi22;
    ebx23 = reinterpret_cast<void**>(0xffffffff);
    v24 = ebp25;
    edi26 = reinterpret_cast<void**>(0);
    esi27 = reinterpret_cast<void**>(0);
    fun_10001000("GetDefaultLine\r\n", v24, v21, v19, v17, v16, a2, a3, a4);
    below_or_equal28 = reinterpret_cast<unsigned char>(g1000c0f4) <= reinterpret_cast<unsigned char>(0);
    if (!below_or_equal28) {
        do {
            if (!reinterpret_cast<int1_t>(ebx23 == 0xffffffff)) 
                break;
            eax29 = fun_10003240(esi27, v24, v21, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9);
            if (eax29 && ((eax30 = fun_10002bf0(ecx, edi26, esi27, eax29, v24, v21, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9), edi26 = eax30, !!edi26) && (*reinterpret_cast<unsigned char*>(edi26 + 60) & 16 && (eax31 = fun_100032c0(ecx, esi27, v24, v21, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15), !eax31)))) {
                ebx23 = esi27;
            }
            ++esi27;
            below_or_equal32 = reinterpret_cast<unsigned char>(g1000c0f4) <= reinterpret_cast<unsigned char>(esi27);
        } while (!below_or_equal32);
    }
    if (edi26) {
        LocalFree(edi26);
    }
    if (!reinterpret_cast<int1_t>(ebx23 == 0xffffffff)) {
        return ebx23;
    } else {
        return 0xffffffff;
    }
}

int32_t lineSetDevConfig = 0x144b0;

void fun_10005ff0(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19) {
    goto lineSetDevConfig;
}

void** g1000c118 = reinterpret_cast<void**>(0);

void** g1000c114 = reinterpret_cast<void**>(0);

void** fun_10002e30(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_10002000(void** a1, void** a2, void** a3);

struct s0 {
    uint32_t f0;
    signed char* f4;
};

int32_t LocalAlloc = 0x146c8;

void* fun_100062d0(void** ecx, void** a2, signed char* a3);

struct s1 {
    signed char f0;
    signed char f1;
};

void** fun_10005ff6(void** a1, void** a2, void** a3);

void** fun_10005ffc(void** a1, int32_t a2, void** a3, void** a4, void** a5);

struct s2 {
    void** f0;
    signed char[7] pad8;
    signed char* f8;
};

int32_t fun_10002190(void** a1, void** a2, void** a3, void** a4);

struct s3 {
    signed char* f0;
    void** f4;
};

int32_t GetLastError = 0x146b8;

void fun_100049b0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t fun_10001c40(void** a1, signed char* a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18) {
    void* v19;
    void** v20;
    void** ebx21;
    void** v22;
    void** esi23;
    void** v24;
    void** edi25;
    void** esi26;
    void*** esp27;
    void** v28;
    void** ebp29;
    int32_t ecx30;
    void** v31;
    void** ecx32;
    void** edx33;
    void** v34;
    void** eax35;
    void** v36;
    void** eax37;
    void* esp38;
    void** v39;
    void** eax40;
    struct s0* ebx41;
    void** edx42;
    signed char* edi43;
    int32_t ecx44;
    void* eax45;
    uint32_t ebp46;
    int32_t ecx47;
    signed char v48;
    uint32_t ecx49;
    uint32_t ecx50;
    signed char* edi51;
    int32_t ecx52;
    void* eax53;
    void** ecx54;
    void** v55;
    void** eax56;
    void* esp57;
    void** v58;
    void** ebx59;
    void** ecx60;
    void** esi61;
    void* eax62;
    void** edx63;
    void** edi64;
    uint32_t ecx65;
    void** edx66;
    struct s1* eax67;
    void** eax68;
    void** v69;
    void** v70;
    void** eax71;
    void* esp72;
    void** eax73;
    void* esp74;
    void** ebp75;
    int32_t eax76;
    void** eax77;
    struct s2* edx78;
    signed char* edi79;
    int32_t ecx80;
    void* eax81;
    int32_t ecx82;
    signed char v83;
    uint32_t ecx84;
    void** esi85;
    void** eax86;
    void** eax87;
    int32_t eax88;
    void* esp89;
    struct s3* eax90;
    int32_t esi91;
    int32_t v92;
    int32_t esi93;
    int32_t v94;
    void** eax95;
    void** eax96;

    v19 = __return_address();
    v20 = ebx21;
    v22 = esi23;
    v24 = edi25;
    esi26 = reinterpret_cast<void**>(0);
    esp27 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x74 - 4 - 4 - 4 - 4);
    v28 = ebp29;
    ecx30 = 20;
    v31 = reinterpret_cast<void**>(0);
    while (ecx30) {
        --ecx30;
        esi26 = esi26 + 4;
    }
    ecx32 = g1000c118;
    edx33 = g1000c114;
    v34 = esi26;
    eax35 = fun_10002e30(esi26, edx33, esi26, ecx32, esi26);
    v36 = eax35;
    if (eax35 == esi26) {
        return 0;
    }
    eax37 = fun_10002000(0, a3, v28);
    esp38 = reinterpret_cast<void*>(esp27 - 4 - 4 - 4 - 4 - 4 - 4 + 20 + 4 - 4 - 4 - 4 + 8 + 4);
    v39 = eax37;
    if (!eax37) {
        return 0;
    }
    eax40 = a1;
    ebx41 = reinterpret_cast<struct s0*>("@");
    edx42 = *reinterpret_cast<void***>(eax40 + 0x70);
    do {
        if (!(ebx41->f0 & reinterpret_cast<unsigned char>(edx42))) {
            edi43 = ebx41->f4;
            ecx44 = -1;
            eax45 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax40) - reinterpret_cast<unsigned char>(eax40));
            do {
                if (!ecx44) 
                    break;
                --ecx44;
                ++edi43;
            } while (*edi43 != *reinterpret_cast<signed char*>(&eax45));
            ebp46 = reinterpret_cast<uint32_t>(~ecx44);
            ecx47 = -1;
            eax40 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax45) - reinterpret_cast<uint32_t>(eax45));
            do {
                if (!ecx47) 
                    break;
                --ecx47;
            } while (v48 != *reinterpret_cast<signed char*>(&eax40));
            ecx49 = ebp46 >> 2;
            while (ecx49) {
                --ecx49;
            }
            ecx50 = ebp46 & 3;
            while (ecx50) {
                --ecx50;
            }
        }
        ebx41 = ebx41 + 2;
    } while (reinterpret_cast<uint32_t>(ebx41) < 0x1000c2fc);
    edi51 = a2;
    ecx52 = -1;
    eax53 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax40) - reinterpret_cast<unsigned char>(eax40));
    do {
        if (!ecx52) 
            break;
        --ecx52;
        ++edi51;
    } while (*edi51 != *reinterpret_cast<signed char*>(&eax53));
    ecx54 = reinterpret_cast<void**>(~ecx52 - 1);
    v55 = ecx54 + 1;
    eax56 = reinterpret_cast<void**>(LocalAlloc());
    esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp38) - 4 - 4 - 4 + 4);
    v58 = eax56;
    ebx59 = eax56;
    if (!ebx59) 
        goto addr_10001d3b_27;
    while (ecx60 = v31, reinterpret_cast<signed char>(ecx60) < reinterpret_cast<signed char>(v39)) {
        while (1) {
            esi61 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v19) + reinterpret_cast<unsigned char>(v31));
            eax62 = fun_100062d0(ecx60, esi61, reinterpret_cast<int32_t>(esp57) + 48);
            esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp57) - 4 - 4 - 4 + 4 + 8);
            edx63 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) + reinterpret_cast<uint32_t>(eax62));
            if (reinterpret_cast<signed char>(v39) <= reinterpret_cast<signed char>(edx63)) {
                ebx59 = esi61;
                ecx60 = v39;
                *reinterpret_cast<signed char*>(&v20) = 0;
                v31 = ecx60;
            } else {
                if (!(*reinterpret_cast<unsigned char*>(v34 + 0x6a) & 1)) 
                    goto addr_10001f4a_32;
                edi64 = ebx59;
                *reinterpret_cast<signed char*>(&v20) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax62) + reinterpret_cast<unsigned char>(esi61));
                ecx65 = reinterpret_cast<uint32_t>(eax62) >> 2;
                while (ecx65) {
                    --ecx65;
                    *reinterpret_cast<void***>(edi64) = *reinterpret_cast<void***>(esi61);
                    edi64 = edi64 + 4;
                    esi61 = esi61 + 4;
                }
                edx66 = edx63 + 1;
                ecx60 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax62) & 3);
                while (ecx60) {
                    --ecx60;
                    *reinterpret_cast<void***>(edi64) = *reinterpret_cast<void***>(esi61);
                    ++edi64;
                    ++esi61;
                }
                eax67 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax62) + reinterpret_cast<unsigned char>(ebx59));
                v31 = edx66;
                eax67->f0 = 59;
                eax67->f1 = 0;
            }
            do {
                if (!v36) {
                    eax68 = g1000c10c;
                    v69 = ebx59;
                    v70 = eax68;
                    eax71 = fun_10005ff6(v70, v69, 0);
                    esp72 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp57) - 4 - 4 - 4 - 4 + 4);
                } else {
                    ecx60 = g1000c110;
                    v69 = reinterpret_cast<void**>(0);
                    v70 = ebx59;
                    eax71 = fun_10005ffc(ecx60, 0x1000c10c, v70, 0, 0);
                    esp72 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp57) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
                }
                eax73 = fun_100020b0(eax71, v70, v69, 0);
                esp74 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp72) - 4 - 4 + 4 + 4);
                ebp75 = eax73;
                if (reinterpret_cast<signed char>(eax73) >= reinterpret_cast<signed char>(0x80000008)) {
                    if (reinterpret_cast<signed char>(ebp75) <= reinterpret_cast<signed char>(0x8000000b)) 
                        break;
                    if (ebp75 == 1) 
                        goto addr_10001f99_46;
                }
                eax76 = fun_10002ec0(ecx60, ebp75, v70, v69, 0, 64, v55, v28, v24, v22, v20, v31, 0, v34, v39, v36, v58, 1, ecx60, ebp75, v70, v69, 0, 64, v55, v28, v24, v22, v20, v31, 0, v34, v39, v36, v58, 1);
                esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp74) - 4 - 4 + 4 + 4);
                if (!eax76) 
                    goto addr_10001f64_48;
            } while (ebp75);
            break;
            eax77 = fun_10001000("Service Provider incorrectly sets dwDevCapFlags\r\n", v70, v69, 0, 64, v55, v28, v24, v22, "Service Provider incorrectly sets dwDevCapFlags\r\n", v70, v69, 0, 64, v55, v28, v24, v22);
            esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp74) - 4 - 4 + 4 + 4);
            edx78 = reinterpret_cast<struct s2*>(0x1000c2a8);
            do {
                if (edx78->f0 == ebp75) {
                    edi79 = edx78->f8;
                    ecx80 = -1;
                    eax81 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax77) - reinterpret_cast<unsigned char>(eax77));
                    do {
                        if (!ecx80) 
                            break;
                        --ecx80;
                        ++edi79;
                    } while (*edi79 != *reinterpret_cast<signed char*>(&eax81));
                    v28 = reinterpret_cast<void**>(~ecx80);
                    ecx82 = -1;
                    eax77 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax81) - reinterpret_cast<uint32_t>(eax81));
                    do {
                        if (!ecx82) 
                            break;
                        --ecx82;
                    } while (v83 != *reinterpret_cast<signed char*>(&eax77));
                    ecx84 = reinterpret_cast<unsigned char>(v28) >> 2;
                    while (ecx84) {
                        --ecx84;
                    }
                    ecx60 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v28) & 3);
                    while (ecx60) {
                        --ecx60;
                    }
                }
                edx78 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(edx78) + 16);
            } while (reinterpret_cast<uint32_t>(edx78) < 0x1000c2f8);
        }
        if (!*reinterpret_cast<signed char*>(&v28)) 
            continue;
        esi85 = reinterpret_cast<void**>(0x1000cfc8);
        do {
            eax86 = g1000c10c;
            eax87 = fun_10002d00(v55, v55, eax86, v70, v69, 0, 64, v55, v28, v24, v22, *reinterpret_cast<signed char*>(&v20));
            esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp57) - 4 - 4 - 4 + 8 + 4);
            v55 = eax87;
            if (!eax87) 
                goto addr_10001fa3_69;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax87 + 24)) & 64) 
                break;
            fun_10001000("Waiting for dialing to be enabled.\r\n", v70, v69, 0, 64, v55, v28, v24, v22, "Waiting for dialing to be enabled.\r\n", v70, v69, 0, 64, v55, v28, v24, v22);
            eax88 = fun_10002190(0, v70, v69, 0);
            esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp57) - 4 - 4 + 4 + 4 - 4 - 4 + 4 + 4);
        } while (!eax88);
        goto addr_10001e24_72;
        fun_10001000("Ok to continue dialing.\r\n", v70, v69, 0, 64, v55, v28, v24, v22, "Ok to continue dialing.\r\n", v70, v69, 0, 64, v55, v28, v24, v22);
        esp89 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp57) - 4 - 4 + 4 + 4);
        eax90 = reinterpret_cast<struct s3*>(0x1000c2b0);
        do {
            if (*eax90->f0 == *reinterpret_cast<signed char*>(&v28)) {
                esi85 = eax90->f4;
            }
            eax90 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(eax90) + 16);
        } while (reinterpret_cast<uint32_t>(eax90) < 0x1000c300);
        fun_10001000(esi85, v70, v69, 0, 64, v55, v28, v24, v22, esi85, v70, v69, 0, 64, v55, v28, v24, v22);
        esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp89) - 4 - 4 + 4 + 4);
    }
    esi91 = LocalFree;
    esi91();
    esi91();
    esi91();
    if (v55) {
        esi91(v55);
    }
    goto v92;
    addr_10001f64_48:
    if (1) {
        fun_10004820(ecx60, ebp75, "lineDial unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x60f, v70, v69, 0, 64, v55, v28, v24, v22, ecx60, ebp75, "lineDial unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x60f, v70, v69, 0, 64, v55, v28, v24, v22);
    } else {
        fun_10004820(ecx60, ebp75, "lineMakeCall unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x60d, v70, v69, 0, 64, v55, v28, v24, v22, ecx60, ebp75, "lineMakeCall unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x60d, v70, v69, 0, 64, v55, v28, v24, v22);
    }
    addr_10001fa3_69:
    if (!v22) {
        esi93 = LocalFree;
    } else {
        esi93 = LocalFree;
        esi93(v22);
    }
    if (v58) {
        esi93(v58);
    }
    if (!1) {
        esi93(0);
    }
    if (v34) {
        esi93(v34);
    }
    goto v94;
    addr_10001f99_46:
    fun_10001000("While Dialing, WaitForReply aborted.\r\n", v70, v69, 0, 64, v55, v28, v24, v22, "While Dialing, WaitForReply aborted.\r\n", v70, v69, 0, 64, v55, v28, v24, v22);
    goto addr_10001fa3_69;
    addr_10001f4a_32:
    eax95 = g1000c0ec;
    MessageBoxA(eax95, "This line doesn't support partial dialing.\n", "Warning", 0);
    goto addr_10001fa3_69;
    addr_10001e24_72:
    goto addr_10001fa3_69;
    addr_10001d3b_27:
    eax96 = reinterpret_cast<void**>(GetLastError("LocalAlloc failed: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x5ad));
    fun_100049b0(ecx54, eax96, "LocalAlloc failed: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x5ad, 64, v55);
    fun_10003020();
    goto addr_10001fa3_69;
}

void** fun_10006038();

void** fun_10002e30(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebx8;
    void** eax9;
    void** ebx10;
    void** v11;
    void** esi12;
    void** esi13;
    void** v14;
    void** edi15;
    void** edi16;
    void** v17;
    void** ebp18;
    void** ecx19;
    void** eax20;
    void** edx21;
    void** eax22;
    int32_t eax23;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebx8;
    eax9 = reinterpret_cast<void**>(0x134);
    ebx10 = a3;
    v11 = esi12;
    esi13 = a1;
    v14 = edi15;
    edi16 = a2;
    v17 = ebp18;
    while (eax20 = fun_10002a20(ecx19, esi13, eax9, "lineGetAddressCaps", v17, v14, v11, v7, v6, a1), esi13 = eax20, !!esi13) {
        do {
            ecx19 = a4;
            edx21 = g1000c0f0;
            eax22 = fun_10006038();
            eax23 = fun_10002ec0(ecx19, eax22, edx21, edi16, ebx10, ecx19, a5, esi13, v17, v14, v11, v7, v6, a1, a2, a3, a4, a5);
            if (!eax23) 
                goto addr_10002e9b_4;
        } while (eax22);
        eax9 = *reinterpret_cast<void***>(esi13 + 4);
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi13)) >= reinterpret_cast<unsigned char>(eax9)) 
            goto addr_10002e92_7;
    }
    return 0;
    addr_10002e9b_4:
    fun_10004820(ecx19, eax22, "lineGetAddressCaps unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xc8f, edx21, edi16, ebx10, ecx19, a5, esi13, v17, v14);
    LocalFree();
    goto ecx19;
    addr_10002e92_7:
    goto a5;
}

void fun_10006310(void** ecx, void** a2);

void** fun_10004a90(void** a1, void** a2, int32_t a3);

void fun_100049b0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    int32_t edi8;
    int32_t v9;
    void** v10;
    void** eax11;
    void* esp12;
    int32_t v13;
    void* esp14;
    int32_t* esp15;
    int32_t v16;
    void** edi17;
    void** esi18;
    int32_t v19;
    int32_t* esp20;
    int32_t v21;
    void* esp22;
    int32_t v23;

    fun_10006310(ecx, __return_address());
    edi8 = v9;
    if (!edi8) {
        edi8 = 0x1000cfc8;
    }
    eax11 = fun_10004a90(v10, 0, 0);
    esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 12 + 4);
    if (eax11) {
        if (!v13) {
            wsprintfA(reinterpret_cast<int32_t>(esp12) + 8, "%sGetLastError returned: \"%s\"\r\n", edi8, eax11);
            esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
        } else {
            esp15 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp12) - 4 - 4);
            wsprintfA(esp15 + 4, "%sGetLastError returned: \"%s\" in File \"%s\", Line %d\r\n", edi8, eax11, v13, v16);
            esp14 = reinterpret_cast<void*>(esp15 - 1 - 1 - 1 - 1 - 1 + 1 + 6);
        }
        LocalFree();
        fun_10001000(reinterpret_cast<int32_t>(esp14) - 4 - 4 + 4 + 8, eax11, edi17, esi18, __return_address(), a2, a3, a4, a5);
        goto v19;
    } else {
        if (v13) {
            esp20 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp12) - 4 - 4);
            wsprintfA(esp20 + 4, "%sOut of memory in file %s, line %d\r\n", edi8, v13, v21);
            esp22 = reinterpret_cast<void*>(esp20 - 1 - 1 - 1 - 1 + 1 + 5);
        } else {
            wsprintfA(reinterpret_cast<int32_t>(esp12) + 8, "%sOut of memory\r\n", edi8);
            esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 - 4 + 4 + 12);
        }
        fun_10001000(reinterpret_cast<int32_t>(esp22) + 8, edi17, esi18, __return_address(), a2, a3, a4, a5, a6);
        goto v23;
    }
}

int32_t fun_10003020() {
    void** eax1;

    eax1 = g1000c0ec;
    MessageBoxA();
    goto eax1;
}

int32_t lineMakeCall = 0x144d0;

void** fun_10005ffc(void** a1, int32_t a2, void** a3, void** a4, void** a5) {
    goto lineMakeCall;
}

int32_t g10011380 = 0;

int32_t g10011f80;

void** g1000c11c = reinterpret_cast<void**>(0);

int32_t fun_10002190(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** esi6;
    void** v7;
    void** edi8;
    int32_t ebx9;
    void** v10;
    void** ebp11;
    int32_t eax12;
    void* esp13;
    int32_t esi14;
    void** ebp15;
    int32_t edi16;
    int1_t zf17;
    void** v18;
    int32_t eax19;
    int32_t ecx20;
    void** edx21;
    int32_t eax22;
    void* v23;
    void* esp24;
    int32_t eax25;
    int32_t v26;
    int32_t v27;

    v5 = esi6;
    v7 = edi8;
    ebx9 = GetTickCount;
    v10 = ebp11;
    g10011380 = 0;
    eax12 = reinterpret_cast<int32_t>(ebx9());
    esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 4 - 4 - 4 - 4 - 4 + 4);
    esi14 = eax12;
    ebp15 = a1;
    g10011f80 = 0;
    edi16 = TranslateMessage;
    do {
        if (!ebp15) 
            goto addr_100021c9_3;
        zf17 = g1000c11c == ebp15;
        if (zf17) 
            break;
        addr_100021c9_3:
        v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp13) + 16);
        eax19 = reinterpret_cast<int32_t>(PeekMessageA());
        esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        ecx20 = g10011f80;
        edx21 = g1000c108;
        eax22 = g10011380;
        if (eax19) {
            v23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) + 16);
            edi16(v23);
            esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 + 4);
            DispatchMessageA(reinterpret_cast<int32_t>(esp24) + 16, v23);
            esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 + 4);
            eax22 = g10011380;
            ecx20 = g10011f80;
            edx21 = g1000c108;
        }
        if (ebp15) 
            goto addr_1000221c_7;
        if (ecx20) 
            break;
        addr_1000221c_7:
        if (!edx21) 
            goto addr_10002268_9;
        if (eax22) 
            goto addr_10002268_9;
        eax25 = reinterpret_cast<int32_t>(ebx9());
        esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 + 4);
    } while (reinterpret_cast<uint32_t>(eax25 - esi14) <= 0x7530);
    goto addr_1000222f_12;
    g10011380 = 1;
    return 0;
    addr_10002268_9:
    g10011380 = 1;
    fun_10001000("WAITABORTED\r\n", v18, 0, 0, 0, 1, v10, v7, v5);
    goto v26;
    addr_1000222f_12:
    g10011380 = 1;
    fun_10001000("WAITTIMEDOUT\r\n", v18, 0, 0, 0, 1, v10, v7, v5);
    goto v27;
}

void* fun_100062d0(void** ecx, void** a2, signed char* a3) {
    signed char* edx4;
    int32_t eax5;
    void** esi6;
    void* ecx7;

    edx4 = a3;
    eax5 = 0;
    while (*edx4) {
        ++edx4;
        __asm__("bts [esp], eax");
    }
    esi6 = a2;
    ecx7 = reinterpret_cast<void*>(0xffffffff);
    do {
        ecx7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx7) + 1);
        *reinterpret_cast<void***>(&eax5) = *reinterpret_cast<void***>(esi6);
        if (!*reinterpret_cast<void***>(&eax5)) 
            break;
        ++esi6;
    } while (!static_cast<int1_t>(0 >> eax5));
    return ecx7;
}

void** fun_10004900(uint32_t a1, void** a2, void* a3);

void fun_10004820(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, ...) {
    int32_t edi14;
    int32_t v15;
    uint32_t v16;
    void** eax17;
    void* esp18;
    int32_t v19;
    void* esp20;
    int32_t* esp21;
    int32_t v22;
    void** edi23;
    void** esi24;
    int32_t v25;
    int32_t* esp26;
    int32_t v27;
    void* esp28;
    int32_t v29;

    fun_10006310(ecx, __return_address());
    edi14 = v15;
    if (!edi14) {
        edi14 = 0x1000cfc8;
    }
    eax17 = fun_10004900(v16, 0, 0);
    esp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 12 + 4);
    if (eax17) {
        if (!v19) {
            wsprintfA(reinterpret_cast<int32_t>(esp18) + 8, "%s\r\n\tTapi Line Error: \"%s\"\r\n", edi14, eax17);
            esp20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp18) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
        } else {
            esp21 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp18) - 4 - 4);
            wsprintfA(esp21 + 4, "%s\r\n\tTapi Line Error: \"%s\" \r\n\tin File \"%s\", Line %d\r\n", edi14, eax17, v19, v22);
            esp20 = reinterpret_cast<void*>(esp21 - 1 - 1 - 1 - 1 - 1 + 1 + 6);
        }
        LocalFree();
        fun_10001000(reinterpret_cast<int32_t>(esp20) - 4 - 4 + 4 + 8, eax17, edi23, esi24, __return_address(), a2, a3, a4, a5);
        goto v25;
    } else {
        if (v19) {
            esp26 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp18) - 4 - 4);
            wsprintfA(esp26 + 4, "%sOut of memory in file %s, line %d\r\n", edi14, v19, v27);
            esp28 = reinterpret_cast<void*>(esp26 - 1 - 1 - 1 - 1 + 1 + 5);
        } else {
            wsprintfA(reinterpret_cast<int32_t>(esp18) + 8, "%sOut of memory", edi14);
            esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp18) - 4 - 4 - 4 - 4 + 4 + 12);
        }
        fun_10001000(reinterpret_cast<int32_t>(esp28) + 8, edi23, esi24, __return_address(), a2, a3, a4, a5, a6);
        goto v29;
    }
}

int32_t LocalSize = 0x146e4;

void** fun_10002a20(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** ebx13;
    void** v14;
    void** esi15;
    void** esi16;
    void** v17;
    void** edi18;
    void** edi19;
    void** v20;
    void** ebp21;
    void** ebp22;
    void** eax23;
    void** ebx24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** edi28;
    uint32_t ecx29;
    uint32_t ecx30;

    v11 = reinterpret_cast<void**>(__return_address());
    v12 = ebx13;
    v14 = esi15;
    esi16 = a2;
    v17 = edi18;
    edi19 = a4;
    v20 = ebp21;
    ebp22 = a3;
    while (esi16) {
        eax23 = reinterpret_cast<void**>(LocalSize());
        ebx24 = eax23;
        if (!ebx24) 
            goto addr_10002aa4_4;
        if (reinterpret_cast<unsigned char>(ebx24) >= reinterpret_cast<unsigned char>(ebp22)) 
            goto addr_10002ace_6;
        fun_10001000(edi19, esi16, v20, v17, v14, v12, v11, a2, a3);
        fun_10001000("Reallocating structure\r\n", esi16, v20, v17, v14, v12, v11, a2, a3);
        LocalFree(esi16);
        esi16 = reinterpret_cast<void**>(0);
    }
    ebx24 = ebp22;
    eax25 = reinterpret_cast<void**>(LocalAlloc());
    esi16 = eax25;
    if (!esi16) {
        fun_10001000(edi19, 64, ebp22, v20, v17, v14, v12, v11, a2);
        eax26 = reinterpret_cast<void**>(GetLastError("LocalAlloc : ", "C:\\doomutil\\doommdm\\tapicode.c", 0xa53));
        fun_100049b0(ecx, eax26, "LocalAlloc : ", "C:\\doomutil\\doommdm\\tapicode.c", 0xa53, 64, ebp22);
        fun_10003020();
        goto v14;
    }
    addr_10002ae0_10:
    *reinterpret_cast<void***>(esi16) = ebx24;
    goto v12;
    addr_10002aa4_4:
    fun_10001000(edi19, esi16, v20, v17, v14, v12, v11, a2, a3);
    eax27 = reinterpret_cast<void**>(GetLastError("LocalSize : ", "C:\\doomutil\\doommdm\\tapicode.c", 0xa61));
    fun_100049b0(ecx, eax27, "LocalSize : ", "C:\\doomutil\\doommdm\\tapicode.c", 0xa61, esi16, v20);
    goto v12;
    addr_10002ace_6:
    edi28 = esi16;
    ecx29 = reinterpret_cast<unsigned char>(ebx24) >> 2;
    while (ecx29) {
        --ecx29;
        *reinterpret_cast<void***>(edi28) = reinterpret_cast<void**>(0);
        edi28 = edi28 + 4;
        esi16 = esi16 + 4;
    }
    ecx30 = reinterpret_cast<unsigned char>(ebx24) & 3;
    while (ecx30) {
        --ecx30;
        *reinterpret_cast<void***>(edi28) = reinterpret_cast<void**>(0);
        ++edi28;
        ++esi16;
    }
    goto addr_10002ae0_10;
}

int32_t lineAnswer = 0x144ec;

void** fun_10006008() {
    goto lineAnswer;
}

int32_t lineGetID = 0x144e0;

void** fun_10006002(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    goto lineGetID;
}

struct s4 {
    signed char[28] pad28;
    int32_t f1c;
};

void** fun_1000601a();

struct s4* fun_10002b70(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void** v14;
    void** esi15;
    void** eax16;
    void** v17;
    void** edi18;
    void** edi19;
    void** eax20;
    void** eax21;
    void** eax22;
    int32_t eax23;

    v13 = reinterpret_cast<void**>(__return_address());
    v14 = esi15;
    eax16 = reinterpret_cast<void**>(0x1a8);
    v17 = edi18;
    edi19 = a2;
    while (eax20 = fun_10002a20(ecx, edi19, eax16, "lineCallInfo", v17, v14, v13, a2, a3, a4), edi19 = eax20, !!edi19) {
        do {
            eax21 = g1000c10c;
            eax22 = fun_1000601a();
            eax23 = fun_10002ec0(ecx, eax22, eax21, edi19, v17, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
            if (!eax23) 
                goto addr_10002bc0_4;
        } while (eax22);
        eax16 = *reinterpret_cast<void***>(edi19 + 4);
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi19)) >= reinterpret_cast<unsigned char>(eax16)) 
            goto addr_10002bb9_7;
    }
    return 0;
    addr_10002bc0_4:
    fun_10004820(ecx, eax22, "lineGetCallInfo unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xaf4, eax21, edi19, v17, v14, v13, a2, a3, a4);
    LocalFree();
    goto edi19;
    addr_10002bb9_7:
    goto v17;
}

int32_t lineGetCallInfo = 0x14522;

void** fun_1000601a() {
    goto lineGetCallInfo;
}

int32_t lineGetDevCaps = 0x14534;

void** fun_10006020() {
    goto lineGetDevCaps;
}

int32_t lineGetAddressStatus = 0x14546;

void** fun_10006026() {
    goto lineGetAddressStatus;
}

int32_t lineGetCallStatus = 0x1455e;

void** fun_1000602c() {
    goto lineGetCallStatus;
}

int32_t lineTranslateAddress = 0x14572;

void** fun_10006032() {
    goto lineTranslateAddress;
}

int32_t lineGetAddressCaps = 0x1458a;

void** fun_10006038() {
    goto lineGetAddressCaps;
}

int32_t CreateProcessA = 0x146f0;

int32_t CloseHandle = 0x146d6;

int32_t fun_100030c0() {
    int32_t eax1;
    void** eax2;
    int32_t esi3;
    int32_t v4;

    eax1 = reinterpret_cast<int32_t>(CreateProcessA());
    if (!eax1) {
        eax2 = reinterpret_cast<void**>(GetLastError("Unable to LaunchModemControlPanelAdd: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xe1d));
        fun_100049b0(0, eax2, "Unable to LaunchModemControlPanelAdd: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xe1d, 0, "CONTROL.EXE MODEM.CPL,,ADD");
        MessageBoxA();
        goto 0;
    } else {
        esi3 = CloseHandle;
        esi3(0);
        esi3();
        goto v4;
    }
}

void** fun_10002c80(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19) {
    void** v20;
    void** v21;
    void** ebx22;
    void** eax23;
    void** ebx24;
    void** v25;
    void** esi26;
    void** esi27;
    void** v28;
    void** edi29;
    void** edi30;
    void** v31;
    void** ebp32;
    void** eax33;
    void** eax34;
    int32_t eax35;

    v20 = reinterpret_cast<void**>(__return_address());
    v21 = ebx22;
    eax23 = reinterpret_cast<void**>(0xc0);
    ebx24 = a4;
    v25 = esi26;
    esi27 = a2;
    v28 = edi29;
    edi30 = a3;
    v31 = ebp32;
    while (eax33 = fun_10002a20(ecx, esi27, eax23, "lineGetAddressStatus", v31, v28, v25, v21, v20, a2), esi27 = eax33, !!esi27) {
        do {
            eax34 = fun_10006026();
            eax35 = fun_10002ec0(ecx, eax34, edi30, ebx24, esi27, v31, v28, v25, v21, v20, a2, a3, a4, a5, a6, a7, a8, a9);
            if (!eax35) 
                goto addr_10002cda_4;
        } while (eax34);
        eax23 = *reinterpret_cast<void***>(esi27 + 4);
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi27)) >= reinterpret_cast<unsigned char>(eax23)) 
            goto addr_10002cd1_7;
    }
    return 0;
    addr_10002cda_4:
    fun_10004820(ecx, eax34, "lineGetAddressStatus unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xb7c, edi30, ebx24, esi27, v31, v28, v25, v21, v20);
    LocalFree();
    goto v31;
    addr_10002cd1_7:
    goto v28;
}

int32_t lineClose = 0x1445e;

void** fun_10005fd2(void** a1) {
    goto lineClose;
}

int32_t wvsprintfA = 0x1493e;

void fun_10005220(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void* esp6;
    void** v7;
    void** esi8;
    void*** esp9;
    void** v10;
    void** edi11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void* eax16;
    void* esp17;
    signed char* edi18;
    int32_t ecx19;
    void* eax20;
    uint32_t edx21;
    int32_t ecx22;
    void* eax23;
    signed char v24;
    uint32_t ecx25;
    uint32_t ecx26;
    int32_t v27;

    v5 = reinterpret_cast<void**>(__return_address());
    fun_10006310(ecx, v5);
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4);
    v7 = esi8;
    esp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp6) - 4 - 4);
    v10 = edi11;
    v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp6) + 0x1008);
    v13 = v14;
    v15 = reinterpret_cast<void**>(esp9 + 8);
    eax16 = reinterpret_cast<void*>(wvsprintfA());
    esp17 = reinterpret_cast<void*>(esp9 - 4 - 4 - 4 - 4 + 4);
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp17) + reinterpret_cast<int32_t>(eax16) + 7) != 10) {
        edi18 = "\r\n";
        ecx19 = -1;
        eax20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax16) - reinterpret_cast<int32_t>(eax16));
        do {
            if (!ecx19) 
                break;
            --ecx19;
            ++edi18;
        } while (*edi18 != *reinterpret_cast<signed char*>(&eax20));
        edx21 = reinterpret_cast<uint32_t>(~ecx19);
        ecx22 = -1;
        eax23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax20) - reinterpret_cast<int32_t>(eax20));
        do {
            if (!ecx22) 
                break;
            --ecx22;
        } while (v24 != *reinterpret_cast<signed char*>(&eax23));
        ecx25 = edx21 >> 2;
        while (ecx25) {
            --ecx25;
        }
        ecx26 = edx21 & 3;
        while (ecx26) {
            --ecx26;
        }
    }
    fun_10001000(reinterpret_cast<int32_t>(esp17) + 8, v15, v13, v12, v10, v7, v5, a2, a3);
    goto v27;
}

int32_t lineGetCountry = 0x145c4;

void** fun_1000604a(void** a1, void** a2, void** a3) {
    goto lineGetCountry;
}

int32_t lineGetTranslateCaps = 0x145f0;

void** fun_10006056() {
    goto lineGetTranslateCaps;
}

struct s5 {
    signed char[16] pad16;
    int32_t f10;
    signed char[4] pad24;
    int32_t f18;
};

struct s5* fun_10002d80(void** a1, void** a2, void** a3, void** a4, void** a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, void** a10, int32_t a11, int32_t a12, int32_t a13, void* a14, void** a15) {
    void** v16;
    void** v17;
    void** ebx18;
    void** eax19;
    void** ebx20;
    void** v21;
    void** esi22;
    void** esi23;
    void** v24;
    void** edi25;
    void** edi26;
    void** v27;
    void** ebp28;
    void** ecx29;
    void** eax30;
    void** eax31;
    void** eax32;
    int32_t eax33;

    v16 = reinterpret_cast<void**>(__return_address());
    v17 = ebx18;
    eax19 = reinterpret_cast<void**>(0xa8);
    ebx20 = a3;
    v21 = esi22;
    esi23 = a1;
    v24 = edi25;
    edi26 = a2;
    v27 = ebp28;
    while (eax30 = fun_10002a20(ecx29, esi23, eax19, "lineTranslateOutput", v27, v24, v21, v17, v16, a1), esi23 = eax30, !!esi23) {
        do {
            ecx29 = g1000c0f0;
            eax31 = fun_10006032();
            if (reinterpret_cast<int1_t>(eax31 == 0x80000010)) {
                eax32 = g1000c0ec;
                MessageBoxA(eax32, "Unable to translate phone number", "Warning", 0);
            }
            eax33 = fun_10002ec0(ecx29, eax31, ecx29, edi26, ebx20, a4, 0, 2, esi23, v27, v24, v21, v17, v16, a1, a2, a3, a4);
            if (!eax33) 
                goto addr_10002e09_6;
        } while (eax31);
        eax19 = *reinterpret_cast<void***>(esi23 + 4);
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi23)) >= reinterpret_cast<unsigned char>(eax19)) 
            goto addr_10002e00_9;
    }
    return 0;
    addr_10002e09_6:
    fun_10004820(ecx29, eax31, "lineTranslateOutput unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xc34, ecx29, edi26, ebx20, a4, 0, 2, esi23, v27);
    LocalFree();
    goto a4;
    addr_10002e00_9:
    goto 0;
}

int32_t lineGetDevConfig = 0x14620;

void** fun_10006062() {
    goto lineGetDevConfig;
}

int32_t lineConfigDialogEdit = 0x14608;

void** fun_1000605c() {
    goto lineConfigDialogEdit;
}

struct s6 {
    int32_t f0;
    signed char[4] pad8;
    void* f8;
};

int32_t SendDlgItemMessageA = 0x148be;

struct s9 {
    signed char[12] pad12;
    int32_t fc;
};

struct s8 {
    struct s8* f0;
    int32_t f4;
    int32_t f8;
    struct s9* fc;
};

struct s7 {
    void* f0;
    signed char[8] pad12;
    void* fc;
    int32_t f10;
    signed char[24] pad44;
    struct s8* f2c;
};

struct s10 {
    signed char[1] pad1;
    void** f1;
};

struct s8* g0;

struct s11 {
    unsigned char f0;
    unsigned char f1;
};

struct s12 {
    unsigned char f0;
    unsigned char f1;
};

struct s13 {
    int32_t f0;
    signed char[16] pad20;
    void* f14;
    int32_t f18;
    signed char[24] pad52;
    void** f34;
};

void** fun_10006050(void** a1, int32_t a2);

void fun_10003960(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, int32_t a14, int32_t a15) {
    void** v16;
    void** v17;
    void** ebx18;
    void** v19;
    void** esi20;
    void** v21;
    void** edi22;
    void** ebx23;
    void** v24;
    void** ebp25;
    void** esi26;
    int32_t edi27;
    void** v28;
    void** eax29;
    void** v30;
    void** eax31;
    void** v32;
    void** eax33;
    void** ebp34;
    void** v35;
    int32_t eax36;
    void** v37;
    struct s6* ebp38;
    int32_t v39;
    struct s7* ebp40;
    struct s10* v41;
    struct s8* eax42;
    struct s8* edx43;
    int32_t ecx44;
    signed char* edi45;
    void* eax46;
    uint32_t ecx47;
    uint32_t eax48;
    uint32_t ecx49;
    void*** edi50;
    uint32_t ecx51;
    void** v52;
    struct s7* eax53;
    struct s11* esi54;
    struct s11* v55;
    struct s12* edx56;
    uint1_t cf57;
    uint1_t cf58;
    uint32_t ecx59;
    uint32_t ecx60;
    void** esi61;
    int32_t* edx62;
    void** eax63;
    int32_t* ecx64;
    void*** eax65;
    uint32_t v66;
    struct s13* ebp67;
    void** eax68;
    int32_t v69;
    void** eax70;
    int32_t v71;
    int32_t ecx72;
    signed char* edi73;
    void* eax74;
    uint32_t ecx75;
    uint32_t eax76;
    uint32_t ecx77;
    signed char* esi78;
    signed char* edi79;
    signed char* v80;
    uint32_t ecx81;

    v16 = reinterpret_cast<void**>(__return_address());
    v17 = ebx18;
    v19 = esi20;
    v21 = edi22;
    ebx23 = reinterpret_cast<void**>(0);
    v24 = ebp25;
    esi26 = reinterpret_cast<void**>(44);
    edi27 = -1;
    do {
        eax29 = fun_10002a20(ecx, ebx23, esi26, "FillLocationInfo", v24, v21, v19, v17, v28, v16);
        ebx23 = eax29;
        if (!ebx23) 
            break;
        v30 = ebx23;
        eax31 = g1000c0f0;
        v32 = eax31;
        eax33 = fun_10006056();
        ebp34 = eax33;
        eax36 = fun_10002ec0(ecx, eax33, v32, 0x10004, v30, v24, v21, v19, v17, v35, v16, a2, a3, a4, a5, a6, a7, a8);
        if (!eax36) 
            goto addr_10003bd2_4;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx23)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx23 + 4))) {
            esi26 = *reinterpret_cast<void***>(ebx23 + 4);
            ebp34 = reinterpret_cast<void**>(0xffffffff);
        }
    } while (ebp34);
    goto addr_100039bc_8;
    addr_10003bee_9:
    return;
    addr_10003bd2_4:
    fun_10004820(ecx, ebp34, "lineGetTranslateCaps unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x1111, v32, 0x10004, v30, v24, v21, v19, v17, v37);
    LocalFree(ebx23);
    goto addr_10003bee_9;
    addr_100039bc_8:
    ebp38 = reinterpret_cast<struct s6*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx23 + 20)) + reinterpret_cast<unsigned char>(ebx23));
    if (!v39) {
        SendDlgItemMessageA(v17);
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx23 + 12)) > reinterpret_cast<unsigned char>(0)) {
            ebp40 = reinterpret_cast<struct s7*>(&ebp38->f8);
            do {
                v41 = reinterpret_cast<struct s10*>(reinterpret_cast<int32_t>(ebp40->f0) + reinterpret_cast<unsigned char>(ebx23));
                eax42 = reinterpret_cast<struct s8*>(SendDlgItemMessageA(0x10004, 0x3f1, 0x143, 0));
                edx43 = eax42;
                if (*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp40) - 8) == *reinterpret_cast<void***>(ebx23 + 24)) {
                    if (!1) {
                        eax42 = ebp40->f2c;
                        g0 = eax42;
                    }
                    if (!1) {
                        ecx44 = -1;
                        edi45 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp40->fc) + reinterpret_cast<unsigned char>(ebx23));
                        eax46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax42) - reinterpret_cast<int32_t>(eax42));
                        do {
                            if (!ecx44) 
                                break;
                            --ecx44;
                            ++edi45;
                        } while (*edi45 != *reinterpret_cast<signed char*>(&eax46));
                        ecx47 = reinterpret_cast<uint32_t>(~ecx44);
                        eax48 = ecx47;
                        ecx49 = ecx47 >> 2;
                        esi26 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi45) - ecx47);
                        edi50 = reinterpret_cast<void***>(0);
                        while (ecx49) {
                            --ecx49;
                            *edi50 = *reinterpret_cast<void***>(esi26);
                            edi50 = edi50 + 4;
                            esi26 = esi26 + 4;
                        }
                        ecx51 = eax48 & 3;
                        while (ecx51) {
                            --ecx51;
                            *edi50 = *reinterpret_cast<void***>(esi26);
                            ++edi50;
                            ++esi26;
                        }
                    }
                    SendDlgItemMessageA(0x3f1, 0x3f1, 0x14e, edx43, 0, 0x10004, 0x3f1, 0x143, 0);
                    edi27 = ebp40->f10;
                }
                ebp40 = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(ebp40) + 68);
            } while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx23 + 12)) > reinterpret_cast<unsigned char>(&v41->f1));
        }
    } else {
        v21 = reinterpret_cast<void**>(0);
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx23 + 12)) <= reinterpret_cast<unsigned char>(0)) {
            addr_10003a82_28:
            if (edi27 == -1) {
                fun_10001000("lpszCurrentLocation not found\r\n", v32, 0x10004, v30, v24, v21, v19, v17, v52);
                SendDlgItemMessageA();
                LocalFree();
                goto "Invalid Location Selected";
            }
        } else {
            eax53 = reinterpret_cast<struct s7*>(&ebp38->f8);
            do {
                esi54 = v55;
                edx56 = reinterpret_cast<struct s12*>(reinterpret_cast<int32_t>(eax53->f0) + reinterpret_cast<unsigned char>(ebx23));
                do {
                    *reinterpret_cast<unsigned char*>(&ecx) = edx56->f0;
                    cf57 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ecx) < esi54->f0);
                    if (*reinterpret_cast<unsigned char*>(&ecx) != esi54->f0) 
                        break;
                    if (!*reinterpret_cast<unsigned char*>(&ecx)) 
                        goto addr_10003a05_34;
                    *reinterpret_cast<unsigned char*>(&ecx) = edx56->f1;
                    cf57 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ecx) < esi54->f1);
                    if (*reinterpret_cast<unsigned char*>(&ecx) != esi54->f1) 
                        break;
                    ++edx56;
                    ++esi54;
                } while (*reinterpret_cast<unsigned char*>(&ecx));
                goto addr_10003a05_34;
                cf58 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(ecx) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx) + cf57));
                ecx59 = reinterpret_cast<unsigned char>(ecx) - (reinterpret_cast<unsigned char>(ecx) + cf58);
                ecx60 = ecx59 - (1 - reinterpret_cast<uint1_t>(ecx59 < 1 - cf58));
                addr_10003a0e_38:
                if (!ecx60) 
                    goto addr_10003a24_39; else 
                    continue;
                addr_10003a05_34:
                ecx60 = 0;
                goto addr_10003a0e_38;
                eax53 = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(eax53) + 68);
                ++v21;
                ecx = v21;
            } while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx23 + 12)) > reinterpret_cast<unsigned char>(ecx));
            goto addr_10003a22_41;
        }
    }
    esi61 = reinterpret_cast<void**>(0);
    edx62 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx23 + 36)) + reinterpret_cast<unsigned char>(ebx23));
    eax63 = *reinterpret_cast<void***>(ebx23 + 28);
    if (!eax63) {
        addr_10003bc1_43:
        LocalFree();
        goto v21;
    } else {
        ecx64 = edx62;
        do {
            if (*ecx64 == edi27) 
                break;
            ecx64 = ecx64 + 11;
            ++esi61;
        } while (reinterpret_cast<unsigned char>(eax63) > reinterpret_cast<unsigned char>(esi61));
        goto addr_10003b9c_47;
    }
    eax65 = reinterpret_cast<void***>(esi61 + reinterpret_cast<unsigned char>(esi61) * 4);
    v66 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax65 + reinterpret_cast<uint32_t>(eax65) * 8) - reinterpret_cast<unsigned char>(esi61) + reinterpret_cast<uint32_t>(edx62) + 8) + reinterpret_cast<unsigned char>(ebx23);
    SendDlgItemMessageA(v17, 0x3ef, 12, 0, v66);
    goto addr_10003bc1_43;
    addr_10003b9c_47:
    goto addr_10003bc1_43;
    addr_10003a24_39:
    ebp67 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(ebp38) + ((reinterpret_cast<unsigned char>(v21) << 4) + reinterpret_cast<unsigned char>(v21)) * 4);
    eax68 = g1000c0f0;
    v69 = ebp67->f0;
    eax70 = fun_10006050(eax68, v69);
    if (v17) {
        eax70 = ebp67->f34;
        *reinterpret_cast<void***>(v17) = eax70;
    }
    if (v71) {
        ecx72 = -1;
        edi73 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp67->f14) + reinterpret_cast<unsigned char>(ebx23));
        eax74 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax70) - reinterpret_cast<unsigned char>(eax70));
        do {
            if (!ecx72) 
                break;
            --ecx72;
            ++edi73;
        } while (*edi73 != *reinterpret_cast<signed char*>(&eax74));
        ecx75 = reinterpret_cast<uint32_t>(~ecx72);
        eax76 = ecx75;
        ecx77 = ecx75 >> 2;
        esi78 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi73) - ecx75);
        edi79 = v80;
        while (ecx77) {
            --ecx77;
            *edi79 = *esi78;
            edi79 = edi79 + 4;
            esi78 = esi78 + 4;
        }
        ecx81 = eax76 & 3;
        while (ecx81) {
            --ecx81;
            *edi79 = *esi78;
            ++edi79;
            ++esi78;
        }
    }
    edi27 = ebp67->f18;
    goto addr_10003a82_28;
    addr_10003a22_41:
    goto addr_10003a82_28;
}

struct s14 {
    int32_t f0;
    signed char[8] pad12;
    int32_t fc;
};

void fun_10003860(void** ecx, void** a2, int32_t a3) {
    void** v4;
    void** ebx5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void** esi10;
    void*** esp11;
    void** v12;
    void** ebp13;
    void** edi14;
    void** v15;
    void** v16;
    void** eax17;
    void** v18;
    void** eax19;
    void** ebx20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    int32_t eax30;
    void** v31;
    void** ebx32;
    struct s14* ebp33;
    int32_t esi34;
    int32_t v35;
    int32_t v36;
    uint32_t v37;
    void* esp38;
    void* v39;
    int32_t eax40;
    int32_t v41;

    v4 = ebx5;
    v6 = esi7;
    v8 = edi9;
    esi10 = reinterpret_cast<void**>(24);
    esp11 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x100 - 4 - 4 - 4 - 4);
    v12 = ebp13;
    edi14 = reinterpret_cast<void**>(0);
    do {
        eax17 = fun_10002a20(ecx, edi14, esi10, "FillCountryCodeList", v12, v8, v6, v4, v15, v16);
        edi14 = eax17;
        if (!edi14) 
            break;
        v18 = edi14;
        eax19 = fun_1000604a(0, 0x10004, v18);
        ebx20 = eax19;
        eax30 = fun_10002ec0(ecx, eax19, 0, 0x10004, v18, v12, v8, v6, v4, v21, v22, v23, v24, v25, v26, v27, v28, v29);
        esp11 = esp11 - 4 - 4 - 4 - 4 + 12 + 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 4;
        if (!eax30) 
            goto addr_1000392c_4;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14 + 4))) {
            esi10 = *reinterpret_cast<void***>(edi14 + 4);
            ebx20 = reinterpret_cast<void**>(0xffffffff);
        }
    } while (ebx20);
    goto addr_100038b6_8;
    addr_10003948_9:
    return;
    addr_1000392c_4:
    fun_10004820(ecx, ebx20, "lineGetCountry unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x109b, 0, 0x10004, v18, v12, v8, v6, v4, v31);
    addr_10003941_10:
    LocalFree(edi14, 0, 0x10004, v18);
    goto addr_10003948_9;
    addr_100038b6_8:
    ebx32 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14 + 12)) > reinterpret_cast<unsigned char>(0)) {
        ebp33 = reinterpret_cast<struct s14*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14 + 20)) + reinterpret_cast<unsigned char>(edi14) + 4);
        esi34 = v35;
        do {
            v36 = ebp33->f0;
            v37 = ebp33->fc + reinterpret_cast<unsigned char>(edi14);
            wsprintfA(esp11 + 16, "%s (%lu)", v37, v36, 0, 0x10004, v18);
            esp38 = reinterpret_cast<void*>(esp11 - 4 - 4 - 4 - 4 - 4 + 4);
            v39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp38) + 32);
            eax40 = reinterpret_cast<int32_t>(SendDlgItemMessageA(esi34, 0x3e8, 0x143, 0, v39, 0, 0x10004, v18));
            esp11 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp38) + 16 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp33) - 4) == v41) {
                SendDlgItemMessageA(esi34, 0x3e8, 0x14e, eax40, 0, esi34, 0x3e8, 0x143, 0, v39, 0, 0x10004, v18);
                esp11 = esp11 - 4 - 4 - 4 - 4 - 4 - 4 + 4;
            }
            ebp33 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(ebp33) + 44);
            ++ebx32;
        } while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14 + 12)) > reinterpret_cast<unsigned char>(ebx32));
        goto addr_10003941_10;
    }
}

signed char g1000cfc8 = 0;

int32_t GetDlgItem = 0x148d4;

int32_t EnableWindow = 0x148e2;

signed char g1000c120 = 0;

signed char g1000c1a0 = 0;

signed char g1000c220 = 0;

void fun_10003cc0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, int32_t a10, int32_t a11) {
    signed char al12;
    signed char v13;
    int32_t v14;
    int32_t ebx15;
    int32_t v16;
    int32_t esi17;
    int32_t v18;
    int32_t edi19;
    int32_t ecx20;
    int32_t* esp21;
    int32_t v22;
    int32_t ebp23;
    int32_t ebp24;
    void** ebx25;
    int32_t eax26;
    int32_t v27;
    void** v28;
    int32_t eax29;
    void* esp30;
    void* v31;
    void** v32;
    int32_t eax33;
    void* esp34;
    signed char* edi35;
    int32_t ecx36;
    int32_t eax37;
    int32_t ebp38;
    void** v39;
    int32_t eax40;
    void* esp41;
    void* esi42;
    void* v43;
    int32_t v44;
    void** v45;
    int32_t eax46;
    void* esp47;
    int32_t ecx48;
    int32_t eax49;
    signed char v50;
    int32_t ecx51;
    int32_t ecx52;
    uint32_t ecx53;
    uint32_t edx54;
    signed char* esi55;
    int32_t ecx56;
    void** edi57;
    int32_t eax58;
    signed char* edi59;
    uint32_t ecx60;
    uint32_t ecx61;
    void* esp62;
    void** v63;
    void** eax64;
    void* esp65;
    struct s5* eax66;
    void* esp67;
    struct s5* ebp68;
    int1_t zf69;
    int32_t eax70;
    signed char* edi71;
    int32_t ecx72;
    int32_t eax73;
    uint32_t ecx74;
    uint32_t eax75;
    uint32_t ecx76;
    signed char* esi77;
    signed char* edi78;
    uint32_t ecx79;
    int32_t ecx80;
    signed char* edi81;
    uint32_t eax82;
    uint32_t ecx83;
    uint32_t edx84;
    uint32_t ecx85;
    signed char* esi86;
    signed char* edi87;
    uint32_t ecx88;
    int32_t ecx89;
    signed char* edi90;
    uint32_t eax91;
    uint32_t ecx92;
    uint32_t eax93;
    uint32_t ecx94;
    signed char* esi95;
    signed char* edi96;
    struct s5* v97;
    uint32_t ecx98;
    int32_t eax99;
    int32_t v100;
    int32_t eax101;
    int32_t eax102;

    al12 = g1000cfc8;
    v13 = al12;
    v14 = ebx15;
    v16 = esi17;
    v18 = edi19;
    ecx20 = 31;
    esp21 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x280 - 4 - 4 - 4 - 4);
    v22 = ebp23;
    while (ecx20) {
        --ecx20;
    }
    ebp24 = 0;
    ebx25 = a1;
    eax26 = reinterpret_cast<int32_t>(SendDlgItemMessageA(ebx25, 0x3ec, 14, 0, 0, v22, v18, v16, v14, v13));
    if (eax26) {
        v27 = 0x3f0;
        v28 = ebx25;
        eax29 = reinterpret_cast<int32_t>(SendDlgItemMessageA(v28));
        esp30 = reinterpret_cast<void*>(esp21 - 1 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 - 1 - 1 - 1 - 1 + 1);
        if (!eax29) {
            addr_10003df2_12:
            v31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) + 0x90);
            v32 = ebx25;
            eax33 = reinterpret_cast<int32_t>(SendDlgItemMessageA(v32, 0x3ec, 13, 0x1fe, v31, v28));
            esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            edi35 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp34) + 0x90);
            ecx36 = -1;
            eax37 = eax33 - eax33;
        } else {
            ebp38 = 1;
            v39 = ebx25;
            eax40 = reinterpret_cast<int32_t>(SendDlgItemMessageA(v39, 0x3e8, 0x147, 0, 0, v28));
            esp41 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            esi42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp41) + 0x90);
            v43 = esi42;
            v44 = eax40;
            v45 = ebx25;
            eax46 = reinterpret_cast<int32_t>(SendDlgItemMessageA(v45, 0x3e8, 0x148, v44, v43, v39, 0x3e8, 0x147, 0, 0, v28));
            esp47 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp41) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            ecx48 = -1;
            eax49 = eax46 - eax46;
            do {
                if (!ecx48) 
                    break;
                --ecx48;
                esi42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi42) + 1);
            } while (v50 != *reinterpret_cast<signed char*>(&eax49));
            ecx51 = ~ecx48 - 1;
            do {
                --ecx51;
            } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp47) + ecx51 + 0x90) != 40);
            ecx52 = ecx51 + 1;
            if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp47) + ecx52 + 0x90) == 41) 
                goto addr_10003db7_19; else 
                goto addr_10003d9c_20;
        }
    } else {
        GetDlgItem();
        EnableWindow();
        goto addr_10003f36_22;
    }
    do {
        if (!ecx36) 
            break;
        --ecx36;
        ++edi35;
    } while (*reinterpret_cast<signed char*>(&eax37));
    ecx53 = reinterpret_cast<uint32_t>(~ecx36);
    edx54 = ecx53;
    esi55 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi35) - ecx53);
    ecx56 = -1;
    edi57 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp34) + ebp24 + 16);
    eax58 = eax37 - eax37;
    do {
        if (!ecx56) 
            break;
        --ecx56;
        ++edi57;
        ++esi55;
    } while (*edi57 != *reinterpret_cast<void**>(&eax58));
    edi59 = reinterpret_cast<signed char*>(edi57 - 1);
    ecx60 = edx54 >> 2;
    while (ecx60) {
        --ecx60;
        *edi59 = *esi55;
        edi59 = edi59 + 4;
        esi55 = esi55 + 4;
    }
    ecx61 = edx54 & 3;
    esp62 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 - 4);
    while (ecx61) {
        --ecx61;
        *edi59 = *esi55;
        ++edi59;
        ++esi55;
    }
    v63 = ebx25;
    eax64 = reinterpret_cast<void**>(SendDlgItemMessageA(v63, 0x3e9, 0x147, 0, 0, v32, 0x3ec, 13, 0x1fe, v31, v28));
    esp65 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp62) - 4 - 4 - 4 - 4 + 4);
    eax66 = fun_10002d80(0, eax64, 0x10004, reinterpret_cast<int32_t>(esp65) + 16, v63, 0x3e9, 0x147, 0, 0, v32, 0x3ec, 13, 0x1fe, v31, v28);
    esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp65) - 4 - 4 - 4 - 4 - 4 + 16 + 4);
    ebp68 = eax66;
    if (ebp68) {
        zf69 = reinterpret_cast<int1_t>(g1000c114 == 0xffffffff);
        if (!zf69) {
            eax70 = reinterpret_cast<int32_t>(GetDlgItem(ebx25, 0x3ed, 1, v63, 0x3e9, 0x147, 0, 0, v32, 0x3ec, 13, 0x1fe, v31, v28));
            eax66 = reinterpret_cast<struct s5*>(EnableWindow(eax70, ebx25, 0x3ed, 1, v63, 0x3e9, 0x147, 0, 0, v32, 0x3ec, 13, 0x1fe, v31, v28));
            esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
        }
        edi71 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp67) + 16);
        ecx72 = -1;
        eax73 = reinterpret_cast<int32_t>(eax66) - reinterpret_cast<int32_t>(eax66);
        do {
            if (!ecx72) 
                break;
            --ecx72;
            ++edi71;
        } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v27) + 1) != *reinterpret_cast<signed char*>(&eax73));
        ecx74 = reinterpret_cast<uint32_t>(~ecx72);
        eax75 = ecx74;
        ecx76 = ecx74 >> 2;
        esi77 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi71) - ecx74);
        edi78 = reinterpret_cast<signed char*>(0x1000c120);
        while (ecx76) {
            --ecx76;
            *edi78 = *esi77;
            edi78 = edi78 + 4;
            esi77 = esi77 + 4;
        }
        ecx79 = eax75 & 3;
        while (ecx79) {
            --ecx79;
            *edi78 = *esi77;
            ++edi78;
            ++esi77;
        }
        ecx80 = -1;
        edi81 = reinterpret_cast<signed char*>(ebp68->f10 + reinterpret_cast<int32_t>(ebp68));
        eax82 = eax75 - eax75;
        do {
            if (!ecx80) 
                break;
            --ecx80;
            ++edi81;
        } while (*edi81 != *reinterpret_cast<signed char*>(&eax82));
        ecx83 = reinterpret_cast<uint32_t>(~ecx80);
        edx84 = ecx83;
        ecx85 = ecx83 >> 2;
        esi86 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi81) - ecx83);
        edi87 = reinterpret_cast<signed char*>(0x1000c220);
        while (ecx85) {
            --ecx85;
            *edi87 = *esi86;
            edi87 = edi87 + 4;
            esi86 = esi86 + 4;
        }
        ecx88 = edx84 & 3;
        while (ecx88) {
            --ecx88;
            *edi87 = *esi86;
            ++edi87;
            ++esi86;
        }
        ecx89 = -1;
        edi90 = reinterpret_cast<signed char*>(ebp68->f18 + reinterpret_cast<int32_t>(ebp68));
        eax91 = eax82 - eax82;
        do {
            if (!ecx89) 
                break;
            --ecx89;
            ++edi90;
        } while (*edi90 != *reinterpret_cast<signed char*>(&eax91));
        ecx92 = reinterpret_cast<uint32_t>(~ecx89);
        eax93 = ecx92;
        ecx94 = ecx92 >> 2;
        esi95 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi90) - ecx92);
        edi96 = reinterpret_cast<signed char*>(0x1000c1a0);
        while (ecx94) {
            --ecx94;
            *edi96 = *esi95;
            edi96 = edi96 + 4;
            esi95 = esi95 + 4;
        }
        v97 = ebp68;
        ecx98 = eax93 & 3;
        while (ecx98) {
            --ecx98;
            *edi96 = *esi95;
            ++edi96;
            ++esi95;
        }
        LocalFree(v97, v63, 0x3e9, 0x147, 0, 0, v32, 0x3ec, 13, 0x1fe, v31, v28);
    } else {
        g1000c120 = 0;
        g1000c1a0 = 0;
        g1000c220 = 0;
        eax99 = reinterpret_cast<int32_t>(GetDlgItem(ebx25, 0x3ed, 0, v63, 0x3e9, 0x147, 0, 0, v32, 0x3ec, 13, 0x1fe, v31, v28));
        EnableWindow(eax99, ebx25, 0x3ed, 0, v63, 0x3e9, 0x147, 0, 0, v32, 0x3ec, 13, 0x1fe, v31, v28);
    }
    addr_10003f36_22:
    goto v100;
    addr_10003db7_19:
    eax101 = reinterpret_cast<int32_t>(SendDlgItemMessageA(ebx25, 0x3ee, 13, 0x1fe, esi42, v45, 0x3e8, 0x148, v44, v43, v39, 0x3e8, 0x147, 0, 0, v28));
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp47) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    if (eax101) {
        eax102 = reinterpret_cast<int32_t>(wsprintfA(reinterpret_cast<int32_t>(esp30) + ebp38 + 16, " (%s)", reinterpret_cast<int32_t>(esp30) + 0x90, ebx25, 0x3ee, 13, 0x1fe, esi42, v45, 0x3e8, 0x148, v44, v43, v39, 0x3e8, 0x147, 0, 0, v28));
        esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 - 4 + 4 + 12);
        ebp38 = ebp38 + eax102;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp30) + ebp38 + 16) = 32;
    ebp24 = ebp38 + 1;
    goto addr_10003df2_12;
    addr_10003d9c_20:
    do {
        ++ebp38;
        ++ecx52;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp47) + ebp38 + 15) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp47) + ecx52 + 0x90);
    } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp47) + ecx52 + 0x90) != 41);
    goto addr_10003db7_19;
}

int32_t fun_10006044(void** a1, void** a2, void** a3, void** a4);

int32_t fun_100036b0(void** ecx, void** a2) {
    void** eax3;
    void** v4;
    int32_t eax5;
    void** v6;
    void** v7;
    void** v8;
    void** ebp9;
    void** edi10;
    void** esi11;
    void** ebx12;
    uint32_t eax13;
    int32_t eax14;
    int32_t ebp15;
    void** v16;
    int32_t eax17;
    int32_t eax18;
    int32_t v19;
    int32_t eax20;

    eax3 = reinterpret_cast<void**>(SendDlgItemMessageA(a2));
    v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 16);
    eax5 = fun_10006044(eax3, "comm", v4, a2);
    if (eax5) {
        v6 = reinterpret_cast<void**>("TapiComm");
        v7 = reinterpret_cast<void**>(0);
        v8 = reinterpret_cast<void**>(12);
    } else {
        v6 = reinterpret_cast<void**>(0);
        v7 = reinterpret_cast<void**>(0x3e9);
        v8 = reinterpret_cast<void**>(0x170);
    }
    SendDlgItemMessageA(a2, 0x3fe, v8, v7, v6, eax3, "comm", v4, a2);
    eax13 = fun_100032c0(ecx, eax3, a2, 0x3fe, v8, v7, v6, eax3, "comm", v4, a2, 0x3e9, 0x147, 0, 0, ebp9, edi10, esi11, ebx12, 0, __return_address());
    eax14 = reinterpret_cast<int32_t>(GetDlgItem(a2, 0x3ed, a2, 0x3fe, v8, v7, v6, eax3, "comm", v4, a2));
    ebp15 = EnableWindow;
    g1000c120 = 0;
    ebp15(eax14, -(reinterpret_cast<unsigned char>(ecx) - (reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(ecx) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<uint1_t>(eax13 < 1))))), a2, 0x3ed, a2, 0x3fe, v8, v7, v6, eax3, "comm", v4, a2);
    if (eax13 != 1) {
        v16 = a2;
        eax17 = reinterpret_cast<int32_t>(GetDlgItem());
        ebp15(eax17);
        eax18 = reinterpret_cast<int32_t>(SendDlgItemMessageA(a2));
        if (!eax18) {
            addr_10003792_6:
            switch (eax13) {
                addr_1000381e_8:
            default:
                g1000c114 = reinterpret_cast<void**>(0xffffffff);
                goto v16;
            case 0:
                g1000c114 = eax3;
                goto v16;
            case 1:
                v19 = reinterpret_cast<int32_t>("The selected line is incompatible with DirectPlay");
                break;
            case 2:
                v19 = reinterpret_cast<int32_t>("The selected line doesn't support VOICE capabilities");
                break;
            case 3:
                v19 = reinterpret_cast<int32_t>("The selected line doesn't support DATAMODEM capabilities");
                break;
            case 4:
                v19 = reinterpret_cast<int32_t>("The selected line doesn't support MAKECALL capabilities");
                break;
            case 5:
                v19 = reinterpret_cast<int32_t>("The selected line is already in use by a non-TAPI application");
                break;
            case 6:
                v19 = reinterpret_cast<int32_t>("The selected line is already in use by a TAPI application");
                break;
            case 7:
                v19 = reinterpret_cast<int32_t>("The selected line doesn't support the COMM/DATAMODEM device class");
            }
        } else {
            goto addr_10003783_18;
        }
    } else {
        v16 = a2;
        eax20 = reinterpret_cast<int32_t>(GetDlgItem());
        ebp15(eax20);
        goto addr_10003783_18;
    }
    MessageBoxA(a2, v19, "Warning", 0);
    goto addr_1000381e_8;
    addr_10003783_18:
    GetDlgItem();
    ebp15();
    goto addr_10003792_6;
}

int32_t IsWindowEnabled = 0x148f2;

void fun_10003c00(void** a1) {
    int32_t ebp2;
    int32_t edi3;
    int32_t esi4;
    int32_t ebx5;
    int32_t eax6;
    int32_t ebp7;
    int32_t eax8;
    int32_t edi9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;

    eax6 = reinterpret_cast<int32_t>(SendDlgItemMessageA(a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address()));
    ebp7 = GetDlgItem;
    eax8 = reinterpret_cast<int32_t>(ebp7(a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address()));
    edi9 = EnableWindow;
    edi9(eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address());
    eax10 = reinterpret_cast<int32_t>(ebp7(a1, 0x3e8, eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address()));
    edi9(eax10, eax6, a1, 0x3e8, eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address());
    eax11 = reinterpret_cast<int32_t>(ebp7(a1, 0x3f6, eax10, eax6, a1, 0x3e8, eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address()));
    edi9(eax11, eax6, a1, 0x3f6, eax10, eax6, a1, 0x3e8, eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address());
    eax12 = reinterpret_cast<int32_t>(ebp7(a1, 0x3ee, eax11, eax6, a1, 0x3f6, eax10, eax6, a1, 0x3e8, eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address()));
    edi9(eax12, eax6, a1, 0x3ee, eax11, eax6, a1, 0x3f6, eax10, eax6, a1, 0x3e8, eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address());
    eax13 = reinterpret_cast<int32_t>(ebp7(a1, 0x3f8, eax12, eax6, a1, 0x3ee, eax11, eax6, a1, 0x3f6, eax10, eax6, a1, 0x3e8, eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address()));
    edi9(eax13, eax6, a1, 0x3f8, eax12, eax6, a1, 0x3ee, eax11, eax6, a1, 0x3f6, eax10, eax6, a1, 0x3e8, eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address());
    eax14 = reinterpret_cast<int32_t>(ebp7(a1, 0x3f1, eax13, eax6, a1, 0x3f8, eax12, eax6, a1, 0x3ee, eax11, eax6, a1, 0x3f6, eax10, eax6, a1, 0x3e8, eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address()));
    edi9(eax14, eax6, a1, 0x3f1, eax13, eax6, a1, 0x3f8, eax12, eax6, a1, 0x3ee, eax11, eax6, a1, 0x3f6, eax10, eax6, a1, 0x3e8, eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address());
    eax15 = reinterpret_cast<int32_t>(ebp7(a1, 0x3f9, eax14, eax6, a1, 0x3f1, eax13, eax6, a1, 0x3f8, eax12, eax6, a1, 0x3ee, eax11, eax6, a1, 0x3f6, eax10, eax6, a1, 0x3e8, eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address()));
    edi9(eax15, eax6, a1, 0x3f9, eax14, eax6, a1, 0x3f1, eax13, eax6, a1, 0x3f8, eax12, eax6, a1, 0x3ee, eax11, eax6, a1, 0x3f6, eax10, eax6, a1, 0x3e8, eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address());
    ebp7(a1, 0x3ef, eax15, eax6, a1, 0x3f9, eax14, eax6, a1, 0x3f1, eax13, eax6, a1, 0x3f8, eax12, eax6, a1, 0x3ee, eax11, eax6, a1, 0x3f6, eax10, eax6, a1, 0x3e8, eax8, eax6, a1, 0x3f5, a1, 0x3f0, 0xf0, 0, 0, ebp2, edi3, esi4, ebx5, __return_address());
    edi9();
    ebp7();
    eax16 = reinterpret_cast<int32_t>(IsWindowEnabled());
    if (eax16) {
        eax17 = reinterpret_cast<int32_t>(ebp7(a1, 0x3eb));
        edi9(eax17, eax6, a1, 0x3eb);
    }
    goto eax6;
}

void** fun_10004900(uint32_t a1, void** a2, void* a3) {
    uint32_t eax4;
    void* eax5;
    void* ebx6;
    int32_t ecx7;
    void*** edi8;
    uint32_t eax9;
    void** eax10;
    void** edi11;
    uint32_t ecx12;
    void** v13;
    uint32_t ecx14;
    void** v15;

    eax4 = a1 & 0x7fffffff;
    if (eax4 >= 87 || reinterpret_cast<int32_t>(eax4) < reinterpret_cast<int32_t>(0)) {
        eax5 = reinterpret_cast<void*>(wsprintfA(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x100 - 4 - 4 - 4 + 12, "Unknown TAPI line error code: 0x%lx", a1));
        ebx6 = eax5;
    } else {
        ecx7 = -1;
        edi8 = *reinterpret_cast<void****>(eax4 * 4 + 0x1000fa00);
        eax9 = eax4 - eax4;
        do {
            if (!ecx7) 
                break;
            --ecx7;
            ++edi8;
        } while (*edi8 != *reinterpret_cast<void***>(&eax9));
        ebx6 = reinterpret_cast<void*>(~ecx7 - 1);
    }
    eax10 = a2;
    if (eax10) {
        if (reinterpret_cast<uint32_t>(ebx6) >= reinterpret_cast<uint32_t>(a3)) {
            ebx6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a3) - 1);
            goto addr_10004982_10;
        }
    }
    eax10 = reinterpret_cast<void**>(LocalAlloc(64, reinterpret_cast<uint32_t>(ebx6) + 1));
    if (eax10) {
        addr_10004982_10:
        edi11 = eax10;
        ecx12 = reinterpret_cast<uint32_t>(ebx6) >> 2;
    } else {
        eax10 = reinterpret_cast<void**>(0);
        goto addr_10004996_13;
    }
    while (ecx12) {
        --ecx12;
        *reinterpret_cast<void***>(edi11) = v13;
        edi11 = edi11 + 4;
    }
    ecx14 = reinterpret_cast<uint32_t>(ebx6) & 3;
    while (ecx14) {
        --ecx14;
        *reinterpret_cast<void***>(edi11) = v15;
        ++edi11;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax10) + reinterpret_cast<uint32_t>(ebx6)) = 0;
    addr_10004996_13:
    return eax10;
}

int32_t FormatMessageA = 0x14702;

void** fun_10004a90(void** a1, void** a2, int32_t a3) {
    struct s8* eax4;
    void* esp5;
    void** esi6;
    void** v7;
    int32_t eax8;
    void** eax9;
    void** eax10;
    void** eax11;
    void** v12;
    void** eax13;

    eax4 = g0;
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    g0 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4);
    esi6 = reinterpret_cast<void**>(0x1000);
    if (!a2) {
        esi6 = reinterpret_cast<void**>(0x1100);
    }
    v7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp5) + 12);
    eax8 = reinterpret_cast<int32_t>(FormatMessageA());
    if (eax8) {
        addr_10004b7c_5:
        eax9 = a2;
    } else {
        eax10 = reinterpret_cast<void**>(GetLastError());
        if (!(reinterpret_cast<unsigned char>(esi6) & 0x100)) {
            addr_10004b47_7:
            eax11 = fun_10004a90(eax10, 0, 0);
            if (eax11) {
                wsprintfA(a2, "FormatMessage failed on error 0x%lx for the following reason: %s", a1, eax11);
                LocalFree(eax11);
                goto addr_10004b7c_5;
            } else {
                eax9 = reinterpret_cast<void**>(0);
            }
        } else {
            v12 = a2;
            LocalFree(v12);
            eax13 = reinterpret_cast<void**>(LocalAlloc(64, 0x1000, v12));
            a2 = eax13;
            if (eax13) 
                goto addr_10004b47_7; else 
                goto addr_10004b39_12;
        }
    }
    addr_10004b7f_13:
    g0 = eax4;
    return eax9;
    addr_10004b39_12:
    fun_10001000("Out of memory trying to FormatLastError\r\n", 64, 0x1000, v12, esi6, 0, a1, 0x409, v7, "Out of memory trying to FormatLastError\r\n", 64, 0x1000, v12, esi6, 0, a1, 0x409, v7);
    eax9 = reinterpret_cast<void**>(0);
    goto addr_10004b7f_13;
}

void** g10011d78;

void** g100102f4 = reinterpret_cast<void**>(0xff);

int32_t fun_10005770(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** eax13;
    int32_t esi14;
    void** eax15;
    void** esi16;
    int32_t eax17;

    eax13 = g10011d78;
    if (eax13 == 0xffffffff) {
        esi14 = CloseHandle;
    } else {
        esi14 = CloseHandle;
        esi14(eax13);
        g10011d78 = reinterpret_cast<void**>(0xffffffff);
    }
    eax15 = g100102f4;
    if (eax15 != 0xffffffff) {
        esi14(eax15);
        g100102f4 = reinterpret_cast<void**>(0xffffffff);
    }
    eax17 = fun_10001220(ecx, esi16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    return eax17;
}

int32_t fun_100066c0(void** a1, void*** a2, int32_t a3) {
    int32_t ecx4;
    int32_t ebx5;
    void** edi6;
    void** esi7;
    int32_t ecx8;
    void** edi9;
    void*** esi10;

    ecx4 = a3;
    if (ecx4) 
        goto addr_100066f1_2;
    ebx5 = ecx4;
    edi6 = a1;
    esi7 = edi6;
    do {
        if (!ecx4) 
            break;
        --ecx4;
        ++edi6;
        ++esi7;
    } while (*reinterpret_cast<void***>(edi6));
    ecx8 = -ecx4 + ebx5;
    edi9 = esi7;
    esi10 = a2;
    do {
        if (!ecx8) 
            break;
        --ecx8;
        ++edi9;
        ++esi10;
    } while (*esi10 == *reinterpret_cast<void***>(edi9));
    ecx4 = 0;
    if (reinterpret_cast<unsigned char>(*(esi10 - 1)) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi9 + 0xffffffff))) 
        goto addr_100066eb_10;
    addr_100066ef_11:
    ecx4 = ~ecx4;
    goto addr_100066f1_2;
    addr_100066eb_10:
    if (*(esi10 - 1) == *reinterpret_cast<void***>(edi9 + 0xffffffff)) {
        addr_100066f1_2:
        return ecx4;
    } else {
        ecx4 = -2;
        goto addr_100066ef_11;
    }
}

struct s15 {
    void** f0;
    void** f1;
};

signed char* fun_10006690(signed char* a1, struct s15* a2, int32_t a3) {
    signed char* edi4;
    signed char* edx5;
    int32_t ecx6;
    signed char al7;
    signed char al8;

    edi4 = a1;
    edx5 = edi4;
    ecx6 = a3;
    if (!ecx6) {
        do {
            __asm__("lodsb ");
            if (!al7) 
                break;
            *edi4 = al8;
            ++edi4;
            --ecx6;
        } while (ecx6);
        while (ecx6) {
            --ecx6;
            *edi4 = 0;
            ++edi4;
        }
    }
    return edx5;
}

int32_t GetLocalTime = 0x149d0;

uint32_t fun_10008310(void* a1, void* a2, int32_t a3, uint32_t a4, int32_t a5, uint32_t a6);

void fun_10006630(void* a1) {
    void* v2;
    int32_t eax3;
    int16_t v4;
    int32_t eax5;
    int16_t v6;
    void* eax7;
    uint32_t v8;
    uint32_t v9;
    uint32_t eax10;
    int32_t v11;

    v2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16);
    GetLocalTime();
    eax3 = 0;
    *reinterpret_cast<int16_t*>(&eax3) = v4;
    eax5 = 0;
    *reinterpret_cast<int16_t*>(&eax5) = v6;
    eax7 = reinterpret_cast<void*>(0);
    *reinterpret_cast<void**>(&eax7) = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&v2) + 2);
    eax10 = fun_10008310(reinterpret_cast<uint32_t>(v2) & 0xffff, eax7, eax5, v8 & 0xffff, eax3, v9 & 0xffff);
    if (__return_address()) {
        *reinterpret_cast<uint32_t*>(__return_address()) = eax10;
    }
    goto v11;
}

struct s16 {
    signed char f0;
    signed char f1;
};

int32_t fun_10007820(void** a1, struct s16* a2, void* a3);

uint32_t fun_100076d0(void** a1, void** a2);

int32_t fun_100065c0(signed char* a1, struct s16* a2, void* a3, int32_t a4) {
    void* esp5;
    void** esp6;
    int32_t eax7;

    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32);
    esp6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp5) - 4 - 4);
    eax7 = fun_10007820(esp6 + 2, a2, reinterpret_cast<int32_t>(esp5) + 44);
    if (0) {
        fun_100076d0(0, esp6 - 1 - 1 - 1 + 1 + 3 + 1);
        return eax7;
    } else {
        *a1 = 0;
        return eax7;
    }
}

int32_t g10011bfc;

int32_t GetOverlappedResult = 0x1476c;

void** g10011598;

int32_t ResetEvent = 0x1475e;

void** g10011bd4;

uint32_t g100102f8 = 0;

void fun_100052a0(struct s16* a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

struct s17 {
    signed char[268507088] pad268507088;
    void** f100117d0;
};

uint32_t fun_100059a0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    int1_t zf9;
    void** v10;
    void** esi11;
    void*** esp12;
    void** v13;
    void** edi14;
    void** esi15;
    void** v16;
    void** ecx17;
    void** ecx18;
    int1_t zf19;
    uint32_t tmp32_20;
    void** v21;
    void** eax22;
    struct s17* edi23;
    void** cl24;
    void** edi25;
    void** v26;
    void** ecx27;
    int32_t eax28;
    uint32_t tmp32_29;
    void** v30;
    void** eax31;
    void** v32;
    void** v33;

    v8 = reinterpret_cast<void**>(__return_address());
    zf9 = g10011bfc == 0;
    v10 = esi11;
    esp12 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4);
    v13 = edi14;
    esi15 = a2;
    if (!zf9) {
        v16 = reinterpret_cast<void**>(esp12 + 8);
        ecx17 = g10011d78;
        GetOverlappedResult();
        ecx18 = g10011598;
        ResetEvent();
        esp12 = esp12 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4;
        g10011bfc = 0;
        zf19 = reinterpret_cast<int1_t>(g10011bd4 == 0x100115a8);
        if (zf19) {
            tmp32_20 = g100102f8 + 0x100115a8;
            g100102f8 = tmp32_20;
        } else {
            fun_100052a0("SendPacket: not all pending data sent\n", ecx18, ecx17, 0x100115a8, v16, 1, v13, v10, v21, v8, a1, a2);
            goto v16;
        }
    }
    eax22 = a3;
    if (reinterpret_cast<unsigned char>(eax22) <= reinterpret_cast<unsigned char>(0x200)) {
        edi23 = reinterpret_cast<struct s17*>(0);
        if (eax22) {
            do {
                cl24 = *reinterpret_cast<void***>(esi15);
                ++esi15;
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(edi23) + 0x100117d0) = cl24;
                edi23 = reinterpret_cast<struct s17*>(reinterpret_cast<int32_t>(edi23) + 1);
                if (reinterpret_cast<int1_t>(cl24 == 0x70)) {
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(edi23) + 0x100117d0) = cl24;
                    edi23 = reinterpret_cast<struct s17*>(reinterpret_cast<int32_t>(edi23) + 1);
                }
                --eax22;
            } while (eax22);
        }
        edi25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edi23) + 1 + 1);
        v26 = reinterpret_cast<void**>(esp12 - 4 + 12);
        ecx27 = g10011d78;
        *reinterpret_cast<signed char*>(edi25 + 0x100117ce) = 0x70;
        *reinterpret_cast<signed char*>(edi25 + 0x100117cf) = 0;
        eax28 = reinterpret_cast<int32_t>(WriteFile());
        if (eax28) {
            if (edi25 == edi25) {
                tmp32_29 = g100102f8 + reinterpret_cast<unsigned char>(edi25);
                g100102f8 = tmp32_29;
            } else {
                fun_100052a0("SendPacket: not all data sent\n", ecx27, 0x100117d0, edi25, v26, 0x100115a8, v13, v10, v30, v8, a1, a2);
                goto v26;
            }
        } else {
            eax31 = reinterpret_cast<void**>(GetLastError());
            if (!reinterpret_cast<int1_t>(eax31 == 0x3e5)) {
                fun_100052a0("SendPacket: WriteFile() returned error %d\n", eax31, ecx27, 0x100117d0, edi25, v26, 0x100115a8, v13, v10, v32, v8, a1);
                goto v26;
            } else {
                g10011bfc = 1;
                g10011bd4 = edi25;
            }
        }
        goto v26;
    } else {
        fun_100052a0("SendPacket: too much data to send in one packet\n", v13, v10, v33, v8, a1, a2, a3, a4, a5, a6, a7);
        return 0;
    }
}

int32_t fun_10005ba0(uint32_t* a1);

uint32_t fun_10005af0(signed char* a1, uint32_t a2) {
    int32_t eax3;
    uint32_t eax4;
    uint32_t v5;
    signed char* esi6;
    signed char* edi7;
    uint32_t ecx8;
    uint32_t ecx9;
    uint32_t eax10;
    uint32_t v11;
    signed char* esi12;
    signed char* edi13;
    uint32_t ecx14;
    uint32_t ecx15;
    uint32_t v16;

    eax3 = fun_10005ba0(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (eax3) {
        eax4 = a2;
        if (v5 >= eax4) {
            esi6 = reinterpret_cast<signed char*>(0x10011390);
            edi7 = a1;
            ecx8 = eax4 >> 2;
            while (ecx8) {
                --ecx8;
                *edi7 = *esi6;
                edi7 = edi7 + 4;
                esi6 = esi6 + 4;
            }
            ecx9 = eax4 & 3;
            while (ecx9) {
                --ecx9;
                *edi7 = *esi6;
                ++edi7;
                ++esi6;
            }
            return eax4;
        } else {
            eax10 = v11;
            esi12 = reinterpret_cast<signed char*>(0x10011390);
            edi13 = a1;
            ecx14 = eax10 >> 2;
            while (ecx14) {
                --ecx14;
                *edi13 = *esi12;
                edi13 = edi13 + 4;
                esi12 = esi12 + 4;
            }
            ecx15 = eax10 & 3;
            while (ecx15) {
                --ecx15;
                *edi13 = *esi12;
                ++edi13;
                ++esi12;
            }
            return v16;
        }
    } else {
        return 0xffffffff;
    }
}

int32_t fun_10006510(signed char* a1, struct s16* a2, void* a3);

void fun_100052a0(struct s16* a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    signed char* esp13;
    int32_t v14;

    esp13 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x400);
    fun_10006510(esp13, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) + 8);
    MessageBoxA(0, esp13 - 4 - 4 - 4 - 4 + 4 + 12, "Doom Network failure", 0);
    goto v14;
}

int32_t fun_100015f0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, int32_t a13) {
    void** v14;
    void** v15;
    void** esi16;
    int1_t zf17;
    int1_t zf18;
    int32_t eax19;
    int1_t cf20;
    int32_t eax21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** ecx26;
    void** v27;
    void** v28;
    void** eax29;
    void** v30;
    void** eax31;
    int32_t eax32;
    void** eax33;
    void** eax34;
    void** eax35;
    void** eax36;
    int32_t eax37;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = esi16;
    fun_10001000("Receive Call\r\n", v15, v14, a2, a3, a4, a5, a6, a7);
    zf17 = g1000c108 == 0;
    g1000c0e0 = a2;
    if (!zf17) {
        fun_10001000("A call is already being handled\r\n", v15, v14, a2, a3, a4, a5, a6, a7);
        return 0;
    }
    zf18 = g1000c0f0 == 0;
    if (zf18 && (eax19 = fun_10001090(ecx, 0), !eax19)) {
        return 0;
    }
    cf20 = reinterpret_cast<unsigned char>(g1000c0f4) < reinterpret_cast<unsigned char>(1);
    if (cf20 && (eax21 = fun_10003090(), !eax21)) {
        return 0;
    }
    g1000c108 = reinterpret_cast<void**>(1);
    eax22 = fun_10001570(ecx, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    if (reinterpret_cast<signed char>(eax22) < reinterpret_cast<signed char>(0)) {
        return 0;
    }
    g1000c114 = eax22;
    eax23 = fun_10002af0(eax22, v15, v14, a2);
    g1000c118 = eax23;
    if (!eax23) {
        eax24 = g1000c0ec;
        MessageBoxA();
        fun_100012c0(0x37f, eax24, "Line Version unsupported", "Unable to Use Line", 0, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10);
        goto "Line Version unsupported";
    }
    eax25 = g1000c114;
    do {
        ecx26 = g1000c118;
        v27 = ecx26;
        v28 = eax25;
        eax29 = g1000c0f0;
        v30 = eax29;
        eax31 = fun_10005fea(v30, v28, 0x1000c110, v27, 0, 0, 4, 16, 0, v15, v14, a2);
        if (eax31 == 0x80000001) 
            break;
        eax32 = fun_10002ec0(ecx26, eax31, v30, v28, 0x1000c110, v27, 0, 0, 4, 16, 0, v15, v14, a2, a3, a4, a5, a6, eax31, v30, v28, 0x1000c110, v27, 0, 0, 4, 16);
        eax25 = g1000c114;
        if (!eax32) 
            goto addr_10001761_14;
    } while (eax31);
    goto addr_100016ea_16;
    eax33 = g1000c0ec;
    MessageBoxA();
    fun_100012c0(0x391, eax33, "Line is already in use by a non-TAPI application or by another TAPI Service Provider.", "Unable to Use Line", 0, v30, v28, 0x1000c110, v27, 0, 0, 4, 16, 0, v15, v14);
    goto "Line is already in use by a non-TAPI application or by another TAPI Service Provider.";
    addr_10001761_14:
    fun_10004820(ecx26, eax31, "lineOpen unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x39a, v30, v28, 0x1000c110, v27, 0, 0, 4, 16, ecx26, eax31, "lineOpen unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x39a, v30, v28, 0x1000c110, v27, 0, 0, 4, 16);
    eax34 = g1000c0ec;
    MessageBoxA();
    fun_100012c0(0x39f, eax34, "Error on Requested line", "Unable to Use Line", 0, v30, v28, 0x1000c110, v27, 0, 0, 4, 16, 0, v15, v14);
    goto "Error on Requested line";
    do {
        addr_100016ea_16:
        eax35 = g1000c110;
        eax36 = fun_10005fe4(eax35, 0xbfffff, 0x1ff, v30, v28, 0x1000c110, v27, 0, 0, 4, 16, 0, v15, v14, a2);
        eax37 = fun_10002ec0(ecx26, eax36, eax35, 0xbfffff, 0x1ff, v30, v28, 0x1000c110, v27, 0, 0, 4, 16, 0, v15, v14, a2, a3, eax36, eax35, 0xbfffff, 0x1ff, v30, v28, 0x1000c110, v27, 0);
        if (!eax37) 
            break;
    } while (eax36);
    goto addr_1000170f_19;
    fun_10004820(ecx26, eax36, "lineSetStatusMessages unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x3da, eax35, 0xbfffff, 0x1ff, v30, v28, 0x1000c110, v27, 0, ecx26, eax36, "lineSetStatusMessages unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x3da, eax35, 0xbfffff, 0x1ff, v30, v28, 0x1000c110, v27, 0);
    goto 0xbfffff;
    addr_1000170f_19:
    goto 0xbfffff;
}

uint32_t g10011388 = 0;

uint32_t g10011bd8;

uint32_t g100115a0;

uint32_t g10011be0;

uint32_t g10011bdc;

uint32_t g10011590;

uint32_t g10011594;

int32_t g100116c0;

void fun_10005b60() {
    g10011388 = 0x100;
    g10011bd8 = 0;
    g100115a0 = 0;
    g10011be0 = 0;
    g10011bdc = 0;
    g10011590 = 0;
    g10011594 = 0;
    g100116c0 = 1;
    return;
}

void fun_10005db0(uint32_t a1, void** a2, void** a3, void** a4, void** a5) {
    uint32_t edx6;
    uint32_t ebx7;
    uint32_t eax8;
    uint32_t ebp9;
    signed char* esi10;
    signed char* edi11;
    uint32_t ecx12;
    uint32_t edx13;
    uint32_t ecx14;
    uint32_t ecx15;
    uint32_t ecx16;
    signed char* esi17;
    signed char* edi18;
    uint32_t ecx19;
    uint32_t ecx20;
    uint32_t eax21;
    signed char* esi22;
    signed char* edi23;
    uint32_t ecx24;
    uint32_t ebx25;
    uint32_t ecx26;
    uint32_t edx27;

    edx6 = g10011bd8;
    ebx7 = g10011388;
    if (reinterpret_cast<int32_t>(edx6 + ebx7) > reinterpret_cast<int32_t>(0x100)) {
        eax8 = a1;
        ebp9 = 0x100 - edx6;
        esi10 = reinterpret_cast<signed char*>(0x100116c8);
        edi11 = reinterpret_cast<signed char*>(edx6 + 0x100115c0);
        if (reinterpret_cast<int32_t>(eax8) <= reinterpret_cast<int32_t>(ebp9)) {
            ecx12 = eax8 >> 2;
            while (ecx12) {
                --ecx12;
                *edi11 = *esi10;
                edi11 = edi11 + 4;
                esi10 = esi10 + 4;
            }
            edx13 = edx6 + eax8;
            ecx14 = eax8 & 3;
            while (ecx14) {
                --ecx14;
                *edi11 = *esi10;
                ++edi11;
                ++esi10;
            }
        } else {
            ecx15 = ebp9 >> 2;
            while (ecx15) {
                --ecx15;
                *edi11 = *esi10;
                edi11 = edi11 + 4;
                esi10 = esi10 + 4;
            }
            ecx16 = ebp9 & 3;
            edx13 = eax8 - ebp9;
            while (ecx16) {
                --ecx16;
                *edi11 = *esi10;
                ++edi11;
                ++esi10;
            }
            esi17 = reinterpret_cast<signed char*>(ebp9 + 0x100116c8);
            edi18 = reinterpret_cast<signed char*>(0x100115c0);
            ecx19 = edx13 >> 2;
            while (ecx19) {
                --ecx19;
                *edi18 = *esi17;
                edi18 = edi18 + 4;
                esi17 = esi17 + 4;
            }
            ecx20 = edx13 & 3;
            while (ecx20) {
                --ecx20;
                *edi18 = *esi17;
                ++edi18;
                ++esi17;
            }
        }
        g10011bd8 = edx13;
        g10011388 = ebx7 - eax8;
        g10011be0 = edx13 + 0xffffffff;
        if (edx13 == 0x100) {
            g10011bd8 = 0;
        }
        g10011bdc = 1;
        return;
    }
    eax21 = a1;
    esi22 = reinterpret_cast<signed char*>(0x100116c8);
    edi23 = reinterpret_cast<signed char*>(edx6 + 0x100115c0);
    ecx24 = eax21 >> 2;
    while (ecx24) {
        --ecx24;
        *edi23 = *esi22;
        edi23 = edi23 + 4;
        esi22 = esi22 + 4;
    }
    ebx25 = ebx7 - eax21;
    ecx26 = eax21 & 3;
    edx27 = edx6 + eax21;
    while (ecx26) {
        --ecx26;
        *edi23 = *esi22;
        ++edi23;
        ++esi22;
    }
    g10011388 = ebx25;
    g10011bd8 = edx27;
    g10011be0 = edx27 + 0xffffffff;
    if (reinterpret_cast<int32_t>(edx27) >= reinterpret_cast<int32_t>(0x100)) 
        goto addr_10005e07_32;
    addr_10005e13_33:
    g10011bdc = 1;
    return;
    addr_10005e07_32:
    g10011bd8 = edx27 - 0x100;
    goto addr_10005e13_33;
}

int32_t g1001046c = 0;

void fun_10007490(int32_t a1, void** a2, void** a3, void** a4) {
    g1001046c = a1;
    return;
}

int32_t g100130a0;

int32_t HeapDestroy = 0x14a54;

void fun_10006a20() {
    int32_t eax1;

    eax1 = g100130a0;
    HeapDestroy();
    goto eax1;
}

void** fun_10008680(void** a1, void** a2);

void** fun_10006290(int32_t a1);

void** g10012fa0;

void** g10012f90;

int32_t GetStartupInfoA = 0x14a84;

struct s18 {
    void** f0;
    signed char[3] pad4;
    unsigned char f4;
};

struct s19 {
    int32_t f0;
    unsigned char f4;
};

int32_t GetStdHandle = 0x14a74;

int32_t GetFileType = 0x14802;

int32_t SetHandleCount = 0x14a62;

struct s20 {
    int32_t f0;
    unsigned char f4;
};

void fun_10006a30() {
    void** ebp1;
    void** eax2;
    void* esp3;
    void** esi4;
    void** eax5;
    void** v6;
    int16_t v7;
    int32_t v8;
    void* esi9;
    int32_t edi10;
    void** ebp11;
    struct s18* v12;
    unsigned char* edi13;
    int32_t* ebx14;
    int1_t less15;
    void** ebx16;
    struct s19* ebx17;
    uint32_t eax18;
    int32_t eax19;
    uint32_t eax20;
    uint32_t eax21;
    int32_t v22;
    void** esi23;
    int32_t v24;
    int32_t eax25;
    uint32_t ecx26;
    struct s20* ecx27;
    void*** esi28;
    void** eax29;
    void** tmp32_30;
    int1_t less31;

    eax2 = fun_10008680(0x480, ebp1);
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 68 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 4);
    esi4 = eax2;
    if (!esi4) {
        fun_10006290(27);
        esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 + 4 + 4);
    }
    g10012fa0 = esi4;
    g10012f90 = reinterpret_cast<void**>(32);
    if (reinterpret_cast<unsigned char>(esi4 + 0x480) > reinterpret_cast<unsigned char>(esi4)) {
        do {
            *reinterpret_cast<void***>(esi4 + 4) = reinterpret_cast<void**>(0);
            esi4 = esi4 + 36;
            *reinterpret_cast<int32_t*>(esi4 + 0xffffffdc) = -1;
            *reinterpret_cast<signed char*>(esi4 + 0xffffffe1) = 10;
            *reinterpret_cast<int32_t*>(esi4 + 0xffffffe4) = 0;
            eax5 = g10012fa0;
        } while (reinterpret_cast<unsigned char>(eax5 + 0x480) > reinterpret_cast<unsigned char>(esi4));
    }
    v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp3) + 16);
    GetStartupInfoA();
    if (!v7 || !v8) {
        addr_10006b82_7:
        esi9 = reinterpret_cast<void*>(0);
        edi10 = 0;
    } else {
        ebp11 = v12->f0;
        edi13 = &v12->f4;
        ebx14 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebp11) + reinterpret_cast<uint32_t>(edi13));
        if (reinterpret_cast<signed char>(ebp11) >= reinterpret_cast<signed char>(0x800)) {
            ebp11 = reinterpret_cast<void**>(0x800);
        }
        less15 = reinterpret_cast<signed char>(g10012f90) < reinterpret_cast<signed char>(ebp11);
        if (!less15) 
            goto addr_10006b38_11; else 
            goto addr_10006ada_12;
    }
    do {
        ebx16 = g10012fa0;
        ebx17 = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(ebx16) + reinterpret_cast<uint32_t>(esi9));
        if (ebx17->f0 != -1) {
            ebx17->f4 = reinterpret_cast<unsigned char>(ebx17->f4 | 0x80);
        } else {
            eax18 = 0xfffffff6;
            ebx17->f4 = 0x81;
            if (esi9) {
                eax18 = 12 - reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(edi10 - 1) < 1);
            }
            eax19 = reinterpret_cast<int32_t>(GetStdHandle(eax18));
            if (eax19 == -1 || (eax20 = reinterpret_cast<uint32_t>(GetFileType(eax19, eax18)), eax20 == 0)) {
                ebx17->f4 = reinterpret_cast<unsigned char>(ebx17->f4 | 64);
            } else {
                eax21 = eax20 & 0xff;
                ebx17->f0 = eax19;
                if (eax21 != 2) {
                    if (eax21 == 3) {
                        ebx17->f4 = reinterpret_cast<unsigned char>(ebx17->f4 | 8);
                    }
                } else {
                    ebx17->f4 = reinterpret_cast<unsigned char>(ebx17->f4 | 64);
                }
            }
        }
        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) + 36);
        ++edi10;
    } while (reinterpret_cast<int32_t>(esi9) < reinterpret_cast<int32_t>(0x6c));
    SetHandleCount();
    goto v22;
    addr_10006b38_11:
    esi23 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebp11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebp11 == 0))) {
        do {
            if (*ebx14 != -1 && (*edi13 & 1 && (v24 = *ebx14, eax25 = reinterpret_cast<int32_t>(GetFileType(v24)), !!eax25))) {
                ecx26 = (reinterpret_cast<unsigned char>(esi23) & 31) << 2;
                ecx27 = reinterpret_cast<struct s20*>(ecx26 + ecx26 * 8 + reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(esi23) & 0xffffffe7) >> 3) + 0x10012fa0)));
                ecx27->f0 = *ebx14;
                ecx27->f4 = *edi13;
            }
            ++esi23;
            ++edi13;
            ++ebx14;
        } while (reinterpret_cast<signed char>(esi23) < reinterpret_cast<signed char>(ebp11));
        goto addr_10006b82_7;
    }
    addr_10006ada_12:
    esi28 = reinterpret_cast<void***>(0x10012fa4);
    do {
        eax29 = fun_10008680(0x480, v6);
        if (!eax29) 
            break;
        *esi28 = eax29;
        tmp32_30 = g10012f90 + 32;
        g10012f90 = tmp32_30;
        if (reinterpret_cast<unsigned char>(eax29 + 0x480) > reinterpret_cast<unsigned char>(eax29)) {
            do {
                *reinterpret_cast<void***>(eax29 + 4) = reinterpret_cast<void**>(0);
                eax29 = eax29 + 36;
                *reinterpret_cast<int32_t*>(eax29 + 0xffffffdc) = -1;
                *reinterpret_cast<signed char*>(eax29 + 0xffffffe1) = 10;
                *reinterpret_cast<int32_t*>(eax29 + 0xffffffe4) = 0;
            } while (reinterpret_cast<unsigned char>(*esi28 + 0x480) > reinterpret_cast<unsigned char>(eax29));
        }
        esi28 = esi28 + 4;
        less31 = reinterpret_cast<signed char>(g10012f90) < reinterpret_cast<signed char>(ebp11);
    } while (less31);
    goto addr_10006b30_33;
    ebp11 = g10012f90;
    goto addr_10006b38_11;
    addr_10006b30_33:
    goto addr_10006b38_11;
}

int32_t fun_10006fd0(void** a1);

int32_t fun_100072e0() {
    int32_t eax1;

    eax1 = fun_10006fd0(0xfd);
    return eax1;
}

int32_t GetModuleFileNameA = 0x14714;

void*** g100130b0;

void*** g100104c8 = reinterpret_cast<void***>(0);

void fun_10006df0(void*** a1, void** a2, void** a3, int32_t* a4, int32_t* a5);

struct s21 {
    void** f0;
    signed char[1039] pad1040;
    void** f410;
};

void** g100104b0 = reinterpret_cast<void**>(0);

int32_t g100104ac = 0;

void fun_10006d50() {
    void*** esi1;
    void* esp2;
    void*** eax3;
    struct s21* edi4;
    void** eax5;
    void* esp6;
    int32_t esi7;

    esi1 = reinterpret_cast<void***>(0x10011c08);
    GetModuleFileNameA();
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    eax3 = g100130b0;
    g100104c8 = reinterpret_cast<void***>(0x10011c08);
    if (*eax3) {
        esi1 = g100130b0;
    }
    fun_10006df0(esi1, 0, 0, reinterpret_cast<int32_t>(esp2) + 8, reinterpret_cast<int32_t>(esp2) + 12);
    eax5 = fun_10008680(&edi4->f410, 0);
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 20 - 4 - 4 + 4 + 4);
    if (!eax5) {
        fun_10006290(8);
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 + 4);
    }
    fun_10006df0(esi1, eax5, eax5 + 0x410, reinterpret_cast<int32_t>(esp6) + 8, reinterpret_cast<int32_t>(esp6) + 12);
    g100104b0 = eax5;
    g100104ac = 0x103;
    goto esi7;
}

void** g1001045c = reinterpret_cast<void**>(0);

void** g100104b8 = reinterpret_cast<void**>(0);

void** fun_10008660(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void** fun_10006c70(void** a1, void** a2) {
    void** v3;
    void** edx4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** v9;
    void** edi10;
    void*** esi11;
    void** v12;
    void** ebp13;
    void** edi14;
    int32_t ecx15;
    int32_t eax16;
    void** eax17;
    void** ebx18;
    void** ebp19;
    void** eax20;
    void** edi21;
    int32_t ecx22;
    void** ecx23;
    void** v24;
    void** eax25;
    void** edi26;
    int32_t ecx27;
    void* eax28;
    void** ecx29;
    uint32_t ecx30;
    void** edi31;
    uint32_t ecx32;
    void** eax33;
    void** eax34;

    v3 = reinterpret_cast<void**>(__return_address());
    edx4 = g1001045c;
    v5 = ebx6;
    v7 = esi8;
    v9 = edi10;
    esi11 = reinterpret_cast<void***>(0);
    v12 = ebp13;
    if (*reinterpret_cast<void***>(edx4)) {
        do {
            if (*reinterpret_cast<void***>(edx4) != 61) {
                ++esi11;
            }
            edi14 = edx4;
            ecx15 = -1;
            eax16 = eax16 - eax16;
            do {
                if (!ecx15) 
                    break;
                --ecx15;
                ++edi14;
                ++esi11;
            } while (*reinterpret_cast<void***>(edi14) != *reinterpret_cast<void***>(&eax16));
            edx4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx4) + ~ecx15);
        } while (*reinterpret_cast<void***>(edx4));
    }
    eax17 = fun_10008680(reinterpret_cast<uint32_t>(esi11) * 4 + 4, v12);
    g100104b8 = eax17;
    ebx18 = eax17;
    if (!ebx18) {
        fun_10006290(9);
    }
    ebp19 = g1001045c;
    eax20 = ebp19;
    if (*reinterpret_cast<void***>(ebp19)) {
        do {
            edi21 = ebp19;
            ecx22 = -1;
            eax20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax20) - reinterpret_cast<unsigned char>(eax20));
            do {
                if (!ecx22) 
                    break;
                --ecx22;
                ++edi21;
            } while (*reinterpret_cast<void***>(edi21) != eax20);
            ecx23 = reinterpret_cast<void**>(~ecx22);
            v24 = ecx23;
            if (*reinterpret_cast<void***>(ebp19) != 61) {
                eax25 = fun_10008680(ecx23, v12);
                *reinterpret_cast<void***>(ebx18) = eax25;
                if (!eax25) {
                    eax25 = fun_10006290(9);
                }
                edi26 = ebp19;
                ecx27 = -1;
                eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25) - reinterpret_cast<unsigned char>(eax25));
                do {
                    if (!ecx27) 
                        break;
                    --ecx27;
                    ++edi26;
                } while (*reinterpret_cast<void***>(edi26) != *reinterpret_cast<void***>(&eax28));
                ecx29 = reinterpret_cast<void**>(~ecx27);
                eax20 = ecx29;
                ecx30 = reinterpret_cast<unsigned char>(ecx29) >> 2;
                esi11 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi26) - reinterpret_cast<unsigned char>(ecx29));
                edi31 = *reinterpret_cast<void***>(ebx18);
                ebx18 = ebx18 + 4;
                while (ecx30) {
                    --ecx30;
                    *reinterpret_cast<void***>(edi31) = *esi11;
                    edi31 = edi31 + 4;
                    esi11 = esi11 + 4;
                }
                ecx32 = reinterpret_cast<unsigned char>(eax20) & 3;
                while (ecx32) {
                    --ecx32;
                    *reinterpret_cast<void***>(edi31) = *esi11;
                    ++edi31;
                    ++esi11;
                }
            }
            ebp19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp19) + reinterpret_cast<unsigned char>(v24));
        } while (*reinterpret_cast<void***>(ebp19));
    }
    eax33 = g1001045c;
    eax34 = fun_10008660(eax33, v12, v9, v7, v5, v24, v3, a1, a2);
    *reinterpret_cast<void***>(ebx18) = reinterpret_cast<void**>(0);
    return eax34;
}

int32_t g100130a8;

void fun_10006810(int32_t* a1, int32_t* a2);

void fun_10006700() {
    int32_t eax1;

    eax1 = g100130a8;
    if (eax1) {
        eax1();
    }
    fun_10006810(0x1000c008, 0x1000c010);
    fun_10006810(0x1000c000, 0x1000c004);
    return;
}

signed char* fun_10006760(int32_t a1, int32_t a2, int32_t a3);

signed char* fun_10006750() {
    signed char* eax1;

    eax1 = fun_10006760(0, 0, 1);
    return eax1;
}

int32_t g100104d8 = -1;

int32_t TlsGetValue = 0x14a38;

int32_t TlsSetValue = 0x14a04;

void fun_10006950(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int1_t zf7;
    void** esi8;
    int32_t eax9;
    void** eax10;
    void** v11;
    void** esi12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    int32_t eax18;

    zf7 = g100104d8 == -1;
    if (!zf7) {
        esi8 = a1;
        if (esi8 || (eax9 = g100104d8, eax10 = reinterpret_cast<void**>(TlsGetValue(eax9)), esi8 = eax10, !!esi8)) {
            if (*reinterpret_cast<void***>(esi8 + 36)) {
                v11 = *reinterpret_cast<void***>(esi8 + 36);
                fun_10008660(v11, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (*reinterpret_cast<void***>(esi8 + 40)) {
                v13 = *reinterpret_cast<void***>(esi8 + 40);
                fun_10008660(v13, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (*reinterpret_cast<void***>(esi8 + 48)) {
                v14 = *reinterpret_cast<void***>(esi8 + 48);
                fun_10008660(v14, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (*reinterpret_cast<void***>(esi8 + 56)) {
                v15 = *reinterpret_cast<void***>(esi8 + 56);
                fun_10008660(v15, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (*reinterpret_cast<void***>(esi8 + 64)) {
                v16 = *reinterpret_cast<void***>(esi8 + 64);
                fun_10008660(v16, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (*reinterpret_cast<void***>(esi8 + 68)) {
                v17 = *reinterpret_cast<void***>(esi8 + 68);
                fun_10008660(v17, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            fun_10008660(esi8, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
        }
        eax18 = g100104d8;
        TlsSetValue(eax18, 0);
    }
    return;
}

uint32_t g10010458 = 0;

int32_t g100104d4 = 0;

void** fun_10006c10(void** a1, void** a2, void** a3);

void fun_10006890(void** a1, void** a2);

int32_t GetVersion = 0x149b6;

uint32_t g1001049c = 0;

int32_t GetProcAddress = 0x149a4;

void fun_10006a00();

int32_t g100104a8 = 0;

uint32_t g100104a4 = 0;

uint32_t g100104a0 = 0;

int32_t fun_10006830();

int32_t GetCommandLineA = 0x14992;

void** fun_100072f0();

void** fun_10006070(void** a1, void** a2, void** a3, void** a4) {
    uint32_t eax5;
    int1_t zf6;
    uint32_t eax7;
    int1_t zf8;
    void** eax9;
    int32_t eax10;
    int32_t ecx11;
    uint32_t edx12;
    uint32_t eax13;
    int32_t eax14;
    void*** eax15;
    void** eax16;
    int1_t zf17;

    if (!reinterpret_cast<int1_t>(a2 == 1)) {
        if (a2) {
            if (reinterpret_cast<int1_t>(a2 == 3)) {
                fun_10006950(0, __return_address(), a1, a2, a3, a4);
            }
            return 1;
        } else {
            eax5 = g10010458;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax5) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax5 == 0)) {
                return 0;
            } else {
                zf6 = g100104d4 == 0;
                g10010458 = eax5 - 1;
                if (zf6) {
                    fun_10006750();
                }
                fun_10006c10(__return_address(), a1, a2);
                fun_10006890(__return_address(), a1);
                fun_10006a20();
                return 1;
            }
        }
    } else {
        eax7 = reinterpret_cast<uint32_t>(GetVersion());
        zf8 = g1001046c == 0;
        g1001049c = eax7;
        if (zf8) {
            if (*reinterpret_cast<signed char*>(&eax7) == 3 && eax7 & 0x80000000) {
                fun_10007490(2, __return_address(), a1, a2);
            }
            eax9 = reinterpret_cast<void**>(GetModuleHandleA("kernel32.dll"));
            if (eax9 && (eax10 = reinterpret_cast<int32_t>(GetProcAddress(eax9, "IsTNT", "kernel32.dll")), !!eax10)) {
                fun_10007490(1, eax9, "IsTNT", "kernel32.dll");
            }
        }
        fun_10006a00();
        ecx11 = 0;
        edx12 = g1001049c;
        *reinterpret_cast<signed char*>(&ecx11) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx12) + 1);
        eax13 = edx12 & 0xff;
        ++g10010458;
        g100104a8 = ecx11;
        g100104a4 = eax13;
        g1001049c = edx12 >> 16;
        g100104a0 = (eax13 << 8) + ecx11;
        eax14 = fun_10006830();
        if (eax14) {
            eax15 = reinterpret_cast<void***>(GetCommandLineA());
            g100130b0 = eax15;
            eax16 = fun_100072f0();
            zf17 = g100130b0 == 0;
            g1001045c = eax16;
            if (zf17 || !eax16) {
                fun_10006a20();
                return 0;
            } else {
                fun_10006a30();
                fun_100072e0();
                fun_10006d50();
                fun_10006c70(__return_address(), a1);
                fun_10006700();
                return 1;
            }
        } else {
            fun_10006a20();
            return 0;
        }
    }
}

void** g100102bc = reinterpret_cast<void**>(0);

int32_t GetCurrentProcessId = 0x146a2;

int32_t g100102c0 = 0;

void** fun_10005640(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    int32_t eax12;

    if (!a3) {
        fun_10005770(ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        return 1;
    } else {
        if (a3 == 1) {
            g100102bc = a2;
            GetModuleFileNameA();
            eax12 = reinterpret_cast<int32_t>(GetCurrentProcessId());
            g100102c0 = eax12;
            goto 0;
        } else {
            return 1;
        }
    }
}

void fun_10008420(void** a1, void** a2, void** a3);

int32_t TlsFree = 0x14a1e;

void fun_10006890(void** a1, void** a2) {
    int32_t eax3;

    fun_10008420(__return_address(), a1, a2);
    eax3 = g100104d8;
    if (eax3 != -1) {
        TlsFree(eax3);
        g100104d8 = -1;
    }
    return;
}

int32_t g10010468 = 0;

void fun_100074e0(int32_t a1);

int32_t g10010a10 = 0;

void fun_100074a0() {
    int32_t eax1;
    int1_t zf2;
    int32_t eax3;

    eax1 = g10010468;
    if (eax1 == 1 || !eax1 && (zf2 = g1001046c == 1, zf2)) {
        fun_100074e0(0xfc);
        eax3 = g10010a10;
        if (eax3) {
            eax3();
        }
        fun_100074e0(0xff);
    }
    return;
}

struct s22 {
    signed char[4] pad4;
    int32_t f4;
    int32_t* f8;
    int32_t fc;
};

void fun_10006416(int32_t ecx, int32_t a2);

void fun_10006382(struct s22* a1, int32_t a2) {
    struct s8* v3;
    int32_t* ebx4;
    int32_t esi5;
    int32_t ecx6;

    v3 = g0;
    g0 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4);
    while ((ebx4 = a1->f8, a1->fc != -1) && a1->fc != a2) {
        esi5 = a1->fc + a1->fc * 2;
        ecx6 = ebx4[esi5];
        a1->fc = ecx6;
        if (!(ebx4 + esi5)[1]) {
            fun_10006416(ecx6, 0x101);
            (ebx4 + esi5)[2]();
        }
    }
    g0 = v3;
    return;
}

int32_t g10010490 = 0;

struct s23 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t g1001048c = 0;

int32_t g10010494 = 0;

void fun_10006416(int32_t ecx, int32_t a2) {
    struct s23* ebp3;
    int32_t eax4;
    int32_t ebp5;

    g10010490 = ebp3->f8;
    g1001048c = eax4;
    g10010494 = ebp5;
    return;
}

void fun_1000a7c8();

void fun_10006340(struct s22* a1) {
    fun_1000a7c8();
    goto a1->f4;
}

void fun_10006810(int32_t* a1, int32_t* a2) {
    int32_t* edi3;
    int32_t* esi4;
    int32_t eax5;

    edi3 = a2;
    esi4 = a1;
    if (reinterpret_cast<uint32_t>(edi3) > reinterpret_cast<uint32_t>(esi4)) {
        do {
            eax5 = *esi4;
            if (eax5) {
                eax5();
            }
            ++esi4;
        } while (reinterpret_cast<uint32_t>(edi3) > reinterpret_cast<uint32_t>(esi4));
    }
    return;
}

signed char* fun_10008500(void*** a1);

signed char* fun_10006800() {
    signed char* eax1;

    eax1 = fun_10008500(13);
    return eax1;
}

void fun_100083f0();

int32_t TlsAlloc = 0x14a12;

void** fun_10008600(uint32_t a1, int32_t a2);

void fun_100068c0(void** a1, int32_t a2, void** a3);

int32_t GetCurrentThreadId = 0x149ee;

int32_t fun_10006830() {
    int32_t eax1;
    void** eax2;
    int32_t eax3;
    int32_t eax4;
    void** eax5;

    fun_100083f0();
    eax1 = reinterpret_cast<int32_t>(TlsAlloc());
    g100104d8 = eax1;
    if (eax1 != -1) {
        eax2 = fun_10008600(1, 0x74);
        if (!eax2 || (eax3 = g100104d8, eax4 = reinterpret_cast<int32_t>(TlsSetValue()), eax4 == 0)) {
            return 0;
        } else {
            fun_100068c0(eax2, eax3, eax2);
            eax5 = reinterpret_cast<void**>(GetCurrentThreadId());
            *reinterpret_cast<void***>(eax2) = eax5;
            *reinterpret_cast<void***>(eax2 + 4) = reinterpret_cast<void**>(0xffffffff);
            goto eax2;
        }
    } else {
        return 0;
    }
}

void fun_100068c0(void** a1, int32_t a2, void** a3) {
    *reinterpret_cast<int32_t*>(a1 + 80) = 0x10010b58;
    *reinterpret_cast<void***>(a1 + 20) = reinterpret_cast<void**>(1);
    return;
}

int32_t HeapAlloc = 0x14bae;

int32_t g1001119c = 0;

int32_t fun_100091f0(void** a1, void** a2, void** a3);

void** fun_10008600(uint32_t a1, int32_t a2) {
    int32_t v3;
    void** v4;
    void** esi5;
    void** v6;
    void** edi7;
    void** edi8;
    int32_t esi9;
    int32_t eax10;
    int32_t eax11;
    int1_t zf12;
    int32_t eax13;

    v3 = reinterpret_cast<int32_t>(__return_address());
    v4 = esi5;
    v6 = edi7;
    edi8 = reinterpret_cast<void**>(a2 * a1);
    if (!edi8) {
        edi8 = reinterpret_cast<void**>(1);
    }
    esi9 = HeapAlloc;
    eax10 = g100130a0;
    do {
        if (reinterpret_cast<unsigned char>(edi8) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
            eax11 = reinterpret_cast<int32_t>(esi9(eax10, 8, edi8));
        } else {
            eax11 = 0;
        }
        if (eax11) 
            break;
        zf12 = g1001119c == 0;
        if (zf12) 
            break;
        eax13 = fun_100091f0(edi8, v6, v4);
        eax10 = g100130a0;
    } while (eax13);
    goto addr_1000864d_10;
    addr_1000864f_11:
    goto v3;
    addr_1000864d_10:
    goto addr_1000864f_11;
}

int32_t HeapFree = 0x14bba;

void** fun_10008660(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** eax10;
    int32_t eax11;

    eax10 = a1;
    if (eax10) {
        eax11 = g100130a0;
        eax10 = reinterpret_cast<void**>(HeapFree(eax11, 0, eax10));
    }
    return eax10;
}

/* (image base) */
int32_t image_base_ = 0x10006730;

void** fun_10006290(int32_t a1) {
    int32_t eax2;
    int1_t zf3;
    void** eax4;

    eax2 = g10010468;
    if (eax2 == 1 || !eax2 && (zf3 = g1001046c == 1, zf3)) {
        fun_100074a0();
    }
    fun_100074e0(a1);
    eax4 = reinterpret_cast<void**>(image_base_(0xff));
    return eax4;
}

void** fun_100086a0(void** a1, int32_t a2);

void** fun_10008680(void** a1, void** a2) {
    int32_t eax3;
    void** eax4;

    eax3 = g1001119c;
    eax4 = fun_100086a0(a1, eax3);
    return eax4;
}

void fun_10006df0(void*** a1, void** a2, void** a3, int32_t* a4, int32_t* a5) {
    int32_t* ecx6;
    void*** esi7;
    void** eax8;
    void** edx9;
    int32_t edx10;
    void** dl11;
    int32_t ebx12;
    uint32_t edi13;
    void** edx14;
    int32_t ebx15;
    uint32_t ebp16;
    void*** edx17;
    uint32_t ebp18;
    uint32_t edx19;
    int32_t ebx20;
    int32_t ebx21;

    ecx6 = a5;
    esi7 = a1;
    eax8 = a3;
    *ecx6 = 0;
    *a4 = 1;
    if (a2) {
        edx9 = a2;
        a2 = a2 + 4;
        *reinterpret_cast<void***>(edx9) = eax8;
    }
    if (*esi7 == 34) {
        ++esi7;
        if (*esi7 != 34) {
            do {
                if (!*esi7) 
                    break;
                edx10 = 0;
                *reinterpret_cast<void***>(&edx10) = *esi7;
                if (*reinterpret_cast<unsigned char*>(edx10 + 0x10010509) & 4 && (*ecx6 = *ecx6 + 1, !!eax8)) {
                    ++esi7;
                    *reinterpret_cast<void***>(eax8) = *esi7;
                    ++eax8;
                }
                *ecx6 = *ecx6 + 1;
                if (eax8) {
                    *reinterpret_cast<void***>(eax8) = *esi7;
                    ++eax8;
                }
                ++esi7;
            } while (!reinterpret_cast<int1_t>(*esi7 == 34));
        }
        *ecx6 = *ecx6 + 1;
        if (eax8) {
            *reinterpret_cast<void***>(eax8) = reinterpret_cast<void**>(0);
            ++eax8;
        }
        if (reinterpret_cast<int1_t>(*esi7 == 34)) {
            ++esi7;
        }
    } else {
        do {
            *ecx6 = *ecx6 + 1;
            if (eax8) {
                *reinterpret_cast<void***>(eax8) = *esi7;
                ++eax8;
            }
            dl11 = *esi7;
            ++esi7;
            ebx12 = 0;
            *reinterpret_cast<void***>(&ebx12) = dl11;
            if (*reinterpret_cast<unsigned char*>(ebx12 + 0x10010509) & 4) {
                *ecx6 = *ecx6 + 1;
                if (eax8) {
                    *reinterpret_cast<void***>(eax8) = *esi7;
                    ++eax8;
                }
                ++esi7;
            }
            if (dl11 == 32) 
                break;
            if (!dl11) 
                goto addr_10006e60_23;
        } while (!reinterpret_cast<int1_t>(dl11 == 9));
        if (dl11) {
            if (eax8) {
                *reinterpret_cast<void***>(eax8 + 0xffffffff) = reinterpret_cast<void**>(0);
            }
        } else {
            addr_10006e60_23:
            --esi7;
        }
    }
    edi13 = 0;
    while (*esi7) {
        while (*esi7 == 32 || reinterpret_cast<int1_t>(*esi7 == 9)) {
            ++esi7;
        }
        if (!*esi7) 
            break;
        if (a2) {
            edx14 = a2;
            a2 = a2 + 4;
            *reinterpret_cast<void***>(edx14) = eax8;
        }
        *a4 = *a4 + 1;
        while (1) {
            ebx15 = 1;
            ebp16 = 0;
            if (reinterpret_cast<int1_t>(*esi7 == 92)) {
                do {
                    ++esi7;
                    ++ebp16;
                } while (*esi7 == 92);
            }
            if (reinterpret_cast<int1_t>(*esi7 == 34)) {
                if (!(ebp16 & 1)) {
                    if (!edi13 || (edx17 = esi7 + 1, !reinterpret_cast<int1_t>(*edx17 == 34))) {
                        ebx15 = 0;
                    } else {
                        esi7 = edx17;
                    }
                    edi13 = -(edi13 - (edi13 + reinterpret_cast<uint1_t>(edi13 < edi13 + reinterpret_cast<uint1_t>(edi13 < 1))));
                }
                ebp16 = ebp16 >> 1;
            }
            ebp18 = ebp16 - 1;
            if (ebp16) {
                do {
                    if (eax8) {
                        *reinterpret_cast<void***>(eax8) = reinterpret_cast<void**>(92);
                        ++eax8;
                    }
                    edx19 = ebp18;
                    *ecx6 = *ecx6 + 1;
                    --ebp18;
                } while (edx19);
            }
            if (!*esi7) 
                break;
            if (edi13) 
                goto addr_10006f56_51;
            if (*esi7 == 32) 
                break;
            if (*esi7 == 9) 
                break;
            addr_10006f56_51:
            if (ebx15) {
                if (!eax8) {
                    ebx20 = 0;
                    *reinterpret_cast<void***>(&ebx20) = *esi7;
                    if (*reinterpret_cast<unsigned char*>(ebx20 + 0x10010509) & 4) {
                        ++esi7;
                        *ecx6 = *ecx6 + 1;
                    }
                    *ecx6 = *ecx6 + 1;
                } else {
                    ebx21 = 0;
                    *reinterpret_cast<void***>(&ebx21) = *esi7;
                    if (*reinterpret_cast<unsigned char*>(ebx21 + 0x10010509) & 4) {
                        *reinterpret_cast<void***>(eax8) = *esi7;
                        ++esi7;
                        ++eax8;
                        *ecx6 = *ecx6 + 1;
                    }
                    ++eax8;
                    ++esi7;
                    *reinterpret_cast<void***>(eax8 + 0xffffffff) = *esi7;
                    *ecx6 = *ecx6 + 1;
                    continue;
                }
            }
            ++esi7;
        }
        if (eax8) {
            *reinterpret_cast<void***>(eax8) = reinterpret_cast<void**>(0);
            ++eax8;
        }
        *ecx6 = *ecx6 + 1;
    }
    if (a2) {
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
    }
    *a4 = *a4 + 1;
    return;
}

int32_t LeaveCriticalSection = 0x14b96;

signed char* fun_10008500(void*** a1) {
    int32_t ebp2;

    LeaveCriticalSection();
    goto ebp2;
}

void** g10010618 = reinterpret_cast<void**>(0);

void** g1001060c = reinterpret_cast<void**>(0);

void** g10010610 = reinterpret_cast<void**>(0);

void** g1001061c = reinterpret_cast<void**>(0);

void** g10010620 = reinterpret_cast<void**>(0);

void fun_100072b0() {
    void*** edi1;
    int32_t ecx2;

    edi1 = reinterpret_cast<void***>(0x10010508);
    ecx2 = 64;
    while (ecx2) {
        --ecx2;
        *edi1 = reinterpret_cast<void**>(0);
        edi1 = edi1 + 4;
    }
    *edi1 = reinterpret_cast<void**>(0);
    g10010618 = reinterpret_cast<void**>(0);
    g1001060c = reinterpret_cast<void**>(0);
    g10010610 = reinterpret_cast<void**>(0);
    g1001061c = reinterpret_cast<void**>(0);
    g10010620 = reinterpret_cast<void**>(0);
    return;
}

void fun_1000729c();

void** fun_10007250(void** a1) {
    uint32_t eax2;
    int32_t ecx3;

    eax2 = reinterpret_cast<uint32_t>(a1 - 0x3a4);
    if (eax2 > 18) 
        goto addr_1000726d_2;
    ecx3 = 0;
    *reinterpret_cast<signed char*>(&ecx3) = *reinterpret_cast<signed char*>(eax2 + reinterpret_cast<int32_t>(fun_1000729c));
    switch (ecx3) {
    case 0:
        return 0x411;
    case 1:
        return 0x804;
    case 2:
        return 0x412;
    case 3:
        return 0x404;
        addr_1000726d_2:
    case 4:
        return 0;
    }
}

void fun_10008700(void* a1, int32_t a2, int32_t a3);

void fun_100074e0(int32_t a1) {
    int32_t eax2;
    int32_t* ecx3;
    int32_t edx4;
    void* esp5;
    int32_t ebx6;
    int1_t zf7;
    int1_t zf8;
    int1_t zf9;
    void** eax10;
    int32_t esi11;
    int32_t eax12;
    signed char* edx13;
    void* eax14;
    signed char* edi15;
    void* v16;
    int32_t ecx17;
    int32_t eax18;
    int32_t ebp19;
    void* eax20;
    void* esp21;
    int32_t ecx22;
    signed char* ebp23;
    int32_t ecx24;
    signed char* eax25;
    signed char v26;
    int32_t ecx27;
    void* eax28;
    void* esp29;
    signed char v30;
    int32_t ecx31;
    signed char* edi32;
    int32_t ecx33;
    void* eax34;
    uint32_t edx35;
    int32_t ecx36;
    void* eax37;
    signed char v38;
    uint32_t ecx39;
    uint32_t ecx40;
    signed char* edi41;
    int32_t ecx42;
    void* eax43;
    uint32_t edx44;
    int32_t ecx45;
    void* eax46;
    signed char v47;
    uint32_t ecx48;
    uint32_t ecx49;
    signed char* edi50;
    int32_t ecx51;
    void* eax52;
    uint32_t edx53;
    int32_t ecx54;
    void* eax55;
    signed char v56;
    uint32_t ecx57;
    uint32_t ecx58;
    void* esp59;
    int32_t v60;

    eax2 = 0;
    ecx3 = reinterpret_cast<int32_t*>(0x10010988);
    edx4 = a1;
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x1a8 - 4 - 4 - 4 - 4);
    do {
        if (*ecx3 == edx4) 
            break;
        ecx3 = ecx3 + 2;
        ++eax2;
    } while (reinterpret_cast<uint32_t>(ecx3) < 0x10010a10);
    ebx6 = eax2 * 8;
    if (*reinterpret_cast<int32_t*>(eax2 * 8 + 0x10010988) == edx4) {
        zf7 = g10010468 == 1;
        if (zf7 || (zf8 = g10010468 == 0, zf8) && (zf9 = g1001046c == 1, zf9)) {
            eax10 = g10012fa0;
            esi11 = *reinterpret_cast<int32_t*>(eax10 + 72);
            if (esi11 == -1) {
                eax12 = reinterpret_cast<int32_t>(GetStdHandle(0xf4));
                esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4);
                esi11 = eax12;
            }
            edx13 = *reinterpret_cast<signed char**>(ebx6 + 0x1001098c);
            eax14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 + 20);
            edi15 = edx13;
            v16 = eax14;
            ecx17 = -1;
            eax18 = reinterpret_cast<int32_t>(eax14) - reinterpret_cast<int32_t>(eax14);
            do {
                if (!ecx17) 
                    break;
                --ecx17;
                ++edi15;
                ++esi11;
            } while (*edi15 != *reinterpret_cast<signed char*>(&eax18));
            WriteFile(esi11, edx13, ~ecx17 - 1, v16, 0);
        } else {
            if (edx4 != 0xfc) {
                ebp19 = GetModuleFileNameA;
                eax20 = reinterpret_cast<void*>(ebp19());
                esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 + 4);
                if (!eax20) {
                    ecx22 = 5;
                    while (ecx22) {
                        --ecx22;
                    }
                }
                ebp23 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp21) + 0xb4);
                ecx24 = -1;
                eax25 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax20) - reinterpret_cast<int32_t>(eax20));
                do {
                    if (!ecx24) 
                        break;
                    --ecx24;
                } while (v26 != *reinterpret_cast<signed char*>(&eax25));
                if (reinterpret_cast<uint32_t>(~ecx24) > 60) {
                    ecx27 = -1;
                    eax28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax25) - reinterpret_cast<int32_t>(eax25));
                    esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4);
                    do {
                        if (!ecx27) 
                            break;
                        --ecx27;
                    } while (v30 != *reinterpret_cast<signed char*>(&eax28));
                    ebp23 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp29) + ~ecx27 + 0x7c);
                    eax25 = fun_10006690(ebp23, "...", 3);
                    esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 - 4 - 4 + 4 + 12);
                }
                ecx31 = 6;
                while (ecx31) {
                    --ecx31;
                }
                edi32 = ebp23;
                ecx33 = -1;
                eax34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax25) - reinterpret_cast<int32_t>(eax25));
                do {
                    if (!ecx33) 
                        break;
                    --ecx33;
                    ++edi32;
                } while (*edi32 != *reinterpret_cast<signed char*>(&eax34));
                edx35 = reinterpret_cast<uint32_t>(~ecx33);
                ecx36 = -1;
                eax37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax34) - reinterpret_cast<int32_t>(eax34));
                do {
                    if (!ecx36) 
                        break;
                    --ecx36;
                } while (v38 != *reinterpret_cast<signed char*>(&eax37));
                ecx39 = edx35 >> 2;
                while (ecx39) {
                    --ecx39;
                }
                ecx40 = edx35 & 3;
                while (ecx40) {
                    --ecx40;
                }
                edi41 = "\n\n";
                ecx42 = -1;
                eax43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax37) - reinterpret_cast<int32_t>(eax37));
                do {
                    if (!ecx42) 
                        break;
                    --ecx42;
                    ++edi41;
                } while (*edi41 != *reinterpret_cast<signed char*>(&eax43));
                edx44 = reinterpret_cast<uint32_t>(~ecx42);
                ecx45 = -1;
                eax46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax43) - reinterpret_cast<int32_t>(eax43));
                do {
                    if (!ecx45) 
                        break;
                    --ecx45;
                } while (v47 != *reinterpret_cast<signed char*>(&eax46));
                ecx48 = edx44 >> 2;
                while (ecx48) {
                    --ecx48;
                }
                ecx49 = edx44 & 3;
                while (ecx49) {
                    --ecx49;
                }
                edi50 = *reinterpret_cast<signed char**>(ebx6 + 0x1001098c);
                ecx51 = -1;
                eax52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax46) - reinterpret_cast<int32_t>(eax46));
                do {
                    if (!ecx51) 
                        break;
                    --ecx51;
                    ++edi50;
                } while (*edi50 != *reinterpret_cast<signed char*>(&eax52));
                edx53 = reinterpret_cast<uint32_t>(~ecx51);
                ecx54 = -1;
                eax55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax52) - reinterpret_cast<int32_t>(eax52));
                do {
                    if (!ecx54) 
                        break;
                    --ecx54;
                } while (v56 != *reinterpret_cast<signed char*>(&eax55));
                ecx57 = edx53 >> 2;
                while (ecx57) {
                    --ecx57;
                }
                ecx58 = edx53 & 3;
                esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4);
                while (ecx58) {
                    --ecx58;
                }
                fun_10008700(reinterpret_cast<int32_t>(esp59) + 28, "Microsoft Visual C++ Runtime Library", 0x12010);
                goto v60;
            }
        }
    }
    return;
}

int32_t g10010bfc = 0;

int32_t LoadLibraryA = 0x14bc6;

int32_t g10010c00 = 0;

int32_t g10010c04 = 0;

void fun_10008700(void* a1, int32_t a2, int32_t a3) {
    int32_t esi4;
    int1_t zf5;
    int32_t eax6;
    int32_t ebx7;
    int32_t eax8;
    int32_t ebx9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int1_t zf14;

    esi4 = 0;
    zf5 = g10010bfc == 0;
    if (zf5) {
        eax6 = reinterpret_cast<int32_t>(LoadLibraryA());
        if (!eax6 || (ebx7 = GetProcAddress, eax8 = reinterpret_cast<int32_t>(ebx7(eax6, "MessageBoxA")), g10010bfc = eax8, eax8 == 0)) {
            goto ebx9;
        } else {
            eax10 = reinterpret_cast<int32_t>(ebx7(eax6, "GetActiveWindow", eax6, "MessageBoxA"));
            g10010c00 = eax10;
            eax11 = reinterpret_cast<int32_t>(ebx7(eax6, "GetLastActivePopup", eax6, "GetActiveWindow", eax6, "MessageBoxA"));
            g10010c04 = eax11;
        }
    }
    eax12 = g10010c00;
    if (eax12) {
        eax13 = reinterpret_cast<int32_t>(eax12());
        esi4 = eax13;
    }
    if (esi4 && (zf14 = g10010c04 == 0, !zf14)) {
        g10010c04(esi4);
    }
    g10010bfc();
    goto a3;
}

uint32_t fun_10008b80(void** a1) {
    int1_t below_or_equal2;
    uint32_t edx3;
    uint32_t eax4;

    below_or_equal2 = reinterpret_cast<unsigned char>(g10012f90) <= reinterpret_cast<unsigned char>(a1);
    if (!below_or_equal2) {
        edx3 = (reinterpret_cast<unsigned char>(a1) & 31) << 2;
        eax4 = 0;
        *reinterpret_cast<signed char*>(&eax4) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) & 0xffffffe7) >> 3) + 0x10012fa0)) + (edx3 + edx3 * 8) + 4);
        return eax4 & 64;
    } else {
        return 0;
    }
}

int32_t g10010ec8 = 0;

void fun_10008b30(void** a1) {
    void** esi2;
    void** eax3;

    ++g10010ec8;
    eax3 = fun_10008680(0x1000, esi2);
    *reinterpret_cast<void***>(a1 + 8) = eax3;
    if (!eax3) {
        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) | 4);
        *reinterpret_cast<void***>(a1 + 8) = a1 + 20;
        *reinterpret_cast<void***>(a1 + 24) = reinterpret_cast<void**>(2);
    } else {
        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) | 8);
        *reinterpret_cast<void***>(a1 + 24) = reinterpret_cast<void**>(0x1000);
    }
    *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(a1 + 8);
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    return;
}

int32_t* fun_100092b0();

uint32_t* fun_100092c0(void* a1);

void fun_100093c0(void** a1);

void* fun_10008820(void** a1, void** a2, void* a3);

void fun_10009430(void** a1);

void* fun_100087a0(void** a1, void** a2, void* a3) {
    int1_t below_or_equal4;
    uint32_t ecx5;
    int32_t* eax6;
    void* edi7;
    uint32_t* eax8;
    void* eax9;

    below_or_equal4 = reinterpret_cast<unsigned char>(g10012f90) <= reinterpret_cast<unsigned char>(a1);
    if (below_or_equal4 || (ecx5 = (reinterpret_cast<unsigned char>(a1) & 31) << 2, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) & 0xffffffe7) >> 3) + 0x10012fa0)) + (ecx5 + ecx5 * 8) + 4) & 1) == 0)) {
        eax6 = fun_100092b0();
        *eax6 = 9;
        eax8 = fun_100092c0(edi7);
        *eax8 = 0;
        return 0xffffffff;
    } else {
        fun_100093c0(a1);
        eax9 = fun_10008820(a1, a2, a3);
        fun_10009430(a1);
        return eax9;
    }
}

int32_t fun_10008aa0(void** a1, int32_t a2, int32_t a3);

int32_t fun_10008a20(void** a1, int32_t a2, int32_t a3) {
    int1_t below_or_equal4;
    uint32_t ecx5;
    int32_t* eax6;
    void* edi7;
    uint32_t* eax8;
    int32_t eax9;

    below_or_equal4 = reinterpret_cast<unsigned char>(g10012f90) <= reinterpret_cast<unsigned char>(a1);
    if (below_or_equal4 || (ecx5 = (reinterpret_cast<unsigned char>(a1) & 31) << 2, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) & 0xffffffe7) >> 3) + 0x10012fa0)) + (ecx5 + ecx5 * 8) + 4) & 1) == 0)) {
        eax6 = fun_100092b0();
        *eax6 = 9;
        eax8 = fun_100092c0(edi7);
        *eax8 = 0;
        return -1;
    } else {
        fun_100093c0(a1);
        eax9 = fun_10008aa0(a1, a2, a3);
        fun_10009430(a1);
        return eax9;
    }
}

void** fun_100082d0(void** a1) {
    void** ecx2;

    ecx2 = *reinterpret_cast<void***>(a1) + 4;
    *reinterpret_cast<void***>(a1) = ecx2;
    return *reinterpret_cast<void***>(ecx2 + 0xfffffffc);
}

void fun_10008200(void** a1, void** a2, int32_t* a3) {
    void** eax4;
    uint32_t eax5;

    eax4 = *reinterpret_cast<void***>(a2 + 4) - 1;
    *reinterpret_cast<void***>(a2 + 4) = eax4;
    if (reinterpret_cast<signed char>(eax4) < reinterpret_cast<signed char>(0)) {
        eax5 = fun_100076d0(a1, a2);
    } else {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2)) = a1;
        eax5 = 0;
        *reinterpret_cast<void***>(&eax5) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2));
        *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a2) + 1;
    }
    if (eax5 != 0xffffffff) {
        *a3 = *a3 + 1;
        return;
    } else {
        *a3 = -1;
        return;
    }
}

void** fun_10008300(void** a1) {
    void** eax2;
    void** ecx3;

    eax2 = a1;
    ecx3 = *reinterpret_cast<void***>(eax2) + 4;
    *reinterpret_cast<void***>(eax2) = ecx3;
    eax2 = *reinterpret_cast<void***>(ecx3 + 0xfffffffc);
    return eax2;
}

void fun_10008490(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_10008cd0(void** a1, uint16_t a2);

void** fun_10008ca0(void** a1, void** a2) {
    void** esi3;
    int32_t eax4;
    int32_t v5;
    void** eax6;

    fun_10008490(21, esi3, __return_address(), a1, a2);
    *reinterpret_cast<int16_t*>(&eax4) = *reinterpret_cast<int16_t*>(&a2);
    v5 = eax4;
    eax6 = fun_10008cd0(a1, *reinterpret_cast<uint16_t*>(&v5));
    fun_10008500(21);
    return eax6;
}

void** fun_100082e0(int32_t* a1) {
    int32_t ecx2;

    ecx2 = *a1 + 8;
    *a1 = ecx2;
    return *reinterpret_cast<void***>(ecx2 - 8);
}

uint32_t fun_10008de0(void** a1, void** a2, void** a3, void** a4) {
    void** ecx5;
    void** ebx6;
    void** eax7;
    uint32_t eax8;
    void** eax9;
    void** tmp32_10;
    uint32_t eax11;

    if (a4) {
        ecx5 = a4;
        ebx6 = a3;
        eax7 = a1;
        do {
            ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) >> 1);
            __asm__("rcr ebx, 1");
            __asm__("rcr eax, 1");
        } while (ecx5);
        eax8 = reinterpret_cast<unsigned char>(eax7) / reinterpret_cast<unsigned char>(ebx6);
        eax9 = reinterpret_cast<void**>(eax8 * reinterpret_cast<unsigned char>(a3));
        tmp32_10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(__intrinsic()) + eax8 * reinterpret_cast<unsigned char>(a4));
        if (reinterpret_cast<unsigned char>(tmp32_10) < reinterpret_cast<unsigned char>(__intrinsic())) 
            goto addr_10008e3a_5;
        if (reinterpret_cast<unsigned char>(tmp32_10) > reinterpret_cast<unsigned char>(a2)) 
            goto addr_10008e3a_5;
        if (reinterpret_cast<unsigned char>(tmp32_10) < reinterpret_cast<unsigned char>(a2)) 
            goto addr_10008e42_8;
        if (reinterpret_cast<unsigned char>(eax9) <= reinterpret_cast<unsigned char>(a1)) 
            goto addr_10008e42_8;
    } else {
        eax11 = reinterpret_cast<unsigned char>(a1) % reinterpret_cast<unsigned char>(a3);
        goto addr_10008e51_11;
    }
    addr_10008e3a_5:
    eax9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax9) - reinterpret_cast<unsigned char>(a3));
    addr_10008e42_8:
    eax11 = -(reinterpret_cast<unsigned char>(eax9) - reinterpret_cast<unsigned char>(a1));
    addr_10008e51_11:
    return eax11;
}

void** fun_10008d70(void** a1, void** a2, void** a3, void** a4) {
    void** ecx5;
    void** ebx6;
    void** eax7;
    void** eax8;
    void** esi9;
    void** tmp32_10;
    void** eax11;

    if (a4) {
        ecx5 = a4;
        ebx6 = a3;
        eax7 = a1;
        do {
            ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) >> 1);
            __asm__("rcr ebx, 1");
            __asm__("rcr eax, 1");
        } while (ecx5);
        eax8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) / reinterpret_cast<unsigned char>(ebx6));
        esi9 = eax8;
        tmp32_10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(__intrinsic()) + reinterpret_cast<unsigned char>(eax8) * reinterpret_cast<unsigned char>(a4));
        if (reinterpret_cast<unsigned char>(tmp32_10) < reinterpret_cast<unsigned char>(__intrinsic())) 
            goto addr_10008dce_5;
        if (reinterpret_cast<unsigned char>(tmp32_10) > reinterpret_cast<unsigned char>(a2)) 
            goto addr_10008dce_5;
        if (reinterpret_cast<unsigned char>(tmp32_10) < reinterpret_cast<unsigned char>(a2)) 
            goto addr_10008dcf_8;
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a3) * reinterpret_cast<unsigned char>(esi9)) <= reinterpret_cast<unsigned char>(a1)) 
            goto addr_10008dcf_8;
    } else {
        eax11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) / reinterpret_cast<unsigned char>(a3));
        goto addr_10008dd3_11;
    }
    addr_10008dce_5:
    --esi9;
    addr_10008dcf_8:
    eax11 = esi9;
    addr_10008dd3_11:
    return eax11;
}

void fun_10008250(void** a1, void** a2, void** a3, int32_t* a4) {
    void** esi5;
    void** edi6;
    void** ebx7;
    int32_t* ebp8;
    void** eax9;

    esi5 = a1;
    edi6 = a2;
    ebx7 = a3;
    ebp8 = a4;
    do {
        eax9 = edi6;
        --edi6;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax9 == 0)) 
            break;
        fun_10008200(esi5, ebx7, ebp8);
    } while (*ebp8 != -1);
    return;
}

void fun_10008290(void** a1, void** a2, void** a3, int32_t* a4) {
    void** esi5;
    void** edi6;
    void** ebx7;
    int32_t* ebp8;
    void** eax9;
    void** eax10;
    void** v11;

    esi5 = a1;
    edi6 = a2;
    ebx7 = a3;
    ebp8 = a4;
    do {
        eax9 = edi6;
        --edi6;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax9 == 0)) 
            break;
        eax10 = esi5;
        ++esi5;
        v11 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax10))));
        fun_10008200(v11, ebx7, ebp8);
    } while (*ebp8 != -1);
    return;
}

struct s24 {
    signed char[8] pad8;
    int32_t f8;
    signed char[4] pad16;
    int32_t f10;
    int32_t f14;
    signed char[4] pad28;
    int32_t f1c;
};

int32_t fun_10009120(struct s24* a1) {
    int32_t eax2;
    int32_t esi3;
    int32_t eax4;
    int32_t esi5;

    eax2 = a1->f14;
    if (eax2 < 67 || (a1->f10 < 3 || a1->f10 > 9)) {
        return 0;
    } else {
        if (a1->f10 <= 3 || a1->f10 >= 9) {
            if (eax2 <= 86 || a1->f10 != 3) {
                esi3 = *reinterpret_cast<int32_t*>(a1->f10 * 4 + 0x1001116c);
            } else {
                esi3 = *reinterpret_cast<int32_t*>(a1->f10 * 4 + 0x10011168) + 7;
            }
            if (!(*reinterpret_cast<unsigned char*>(&eax2) & 3)) {
                ++esi3;
            }
            eax4 = eax2 + (eax2 + eax2 * 8) * 8;
            __asm__("cdq ");
            esi5 = esi3 - ((eax2 - 1 >> 2) + (eax4 + eax4 * 4) + esi3 - 0x63db) % 7;
            if (a1->f10 != 3) {
                if (esi5 > a1->f1c || esi5 == a1->f1c && a1->f8 < 1) {
                    return 1;
                } else {
                    return 0;
                }
            } else {
                if (esi5 < a1->f1c || esi5 == a1->f1c && a1->f8 >= 2) {
                    return 1;
                } else {
                    return 0;
                }
            }
        } else {
            return 1;
        }
    }
}

int32_t InitializeCriticalSection = 0x14b62;

int32_t EnterCriticalSection = 0x14b7e;

void fun_10008490(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void*** edi6;
    void** edi7;
    void** eax8;
    void** esi9;
    void** ebp10;
    int1_t zf11;

    edi6 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a1) * 4 + 0x10010a98);
    if (!*edi6) {
        eax8 = fun_10008680(24, edi7);
        if (!eax8) {
            fun_10006290(17);
        }
        fun_10008490(17, edi7, esi9, ebp10, __return_address());
        zf11 = *edi6 == 0;
        if (!zf11) {
            fun_10008660(eax8, edi7, esi9, ebp10, __return_address(), a1, a2, a3, a4);
        } else {
            InitializeCriticalSection(eax8);
            *edi6 = eax8;
        }
        fun_10008500(17);
    }
    EnterCriticalSection();
    goto ebp10;
}

int32_t g10011d70;

int32_t fun_100091f0(void** a1, void** a2, void** a3) {
    int32_t eax4;
    int32_t eax5;

    fun_10008490(9, __return_address(), a1, a2, a3);
    eax4 = g10011d70;
    if (!eax4 || (eax5 = reinterpret_cast<int32_t>(eax4(a1)), eax5 == 0)) {
        fun_10008500(9);
        return 0;
    } else {
        fun_10008500(9);
        return 1;
    }
}

void** fun_100086e0(void** a1) {
    int32_t ecx2;

    ecx2 = g100130a0;
    HeapAlloc();
    goto ecx2;
}

struct s25 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_100093c0(void** a1) {
    uint32_t eax2;
    struct s25* ebx3;
    void** edi4;
    void** esi5;
    void** ebx6;

    eax2 = (reinterpret_cast<unsigned char>(a1) & 31) << 2;
    ebx3 = reinterpret_cast<struct s25*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) & 0xffffffe7) >> 3) + 0x10012fa0)) + (eax2 + eax2 * 8));
    if (!ebx3->f8) {
        fun_10008490(17, edi4, esi5, ebx6, __return_address());
        if (!ebx3->f8) {
            InitializeCriticalSection(ebx3 + 1);
            ebx3->f8 = ebx3->f8 + 1;
        }
        fun_10008500(17);
    }
    EnterCriticalSection();
    goto ebx6;
}

struct s26 {
    int32_t f0;
    unsigned char f4;
};

void fun_10009230(uint32_t a1);

void* fun_10008820(void** a1, void** a2, void* a3) {
    void** esp4;
    void* v5;
    void* ebp6;
    void* edi7;
    void* ebp8;
    void** v9;
    uint32_t eax10;
    uint32_t ecx11;
    void* eax12;
    uint32_t v13;
    struct s26* ecx14;
    void* v15;
    void* v16;
    int32_t ecx17;
    void** v18;
    int32_t v19;
    int32_t eax20;
    int32_t* eax21;
    uint32_t* eax22;
    int32_t* eax23;
    uint32_t* eax24;
    void** ebx25;
    void* esi26;
    void* esp27;
    void* esi28;
    int32_t eax29;

    esp4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x418 - 4 - 4 - 4 - 4);
    v5 = ebp6;
    edi7 = reinterpret_cast<void*>(0);
    ebp8 = a3;
    if (!ebp8) {
        return 0;
    }
    v9 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) & 0xffffffe7) >> 3) + 0x10012fa0);
    eax10 = (reinterpret_cast<unsigned char>(a1) & 31) << 2;
    ecx11 = eax10 + eax10 * 8;
    eax12 = *v9;
    v13 = ecx11;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax12) + ecx11 + 4) & 32) {
        fun_10008aa0(a1, 0, 2);
        esp4 = esp4 - 1 - 1 - 1 - 1 + 1 + 3;
    }
    ecx14 = reinterpret_cast<struct s26*>(v13 + reinterpret_cast<int32_t>(*v9));
    if (ecx14->f4 & 0x80) 
        goto addr_1000889d_6;
    v15 = reinterpret_cast<void*>(esp4 + 5);
    v16 = ebp8;
    ecx17 = ecx14->f0;
    v18 = a2;
    v19 = ecx17;
    eax20 = reinterpret_cast<int32_t>(WriteFile(v19, v18, v16, v15, 0));
    if (!eax20) {
        addr_10008954_8:
        GetLastError(v19, v18, v16, v15, 0);
    }
    addr_1000895e_10:
    if (0) {
        return -static_cast<uint32_t>(edi7);
    } else {
        if (1) {
            if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*v9) + v13 + 4) & 64) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a2) == 26)) {
                eax21 = fun_100092b0();
                *eax21 = 28;
                eax22 = fun_100092c0(v5);
                *eax22 = 0;
                return 0xffffffff;
            } else {
                return 0;
            }
        } else {
            if (1) {
                fun_10009230(0);
                return 0xffffffff;
            } else {
                eax23 = fun_100092b0();
                *eax23 = 9;
                eax24 = fun_100092c0(v5);
                *eax24 = 0;
                return 0xffffffff;
            }
        }
    }
    addr_1000889d_6:
    ebx25 = a2;
    do {
        if (reinterpret_cast<unsigned char>(ebx25) - reinterpret_cast<unsigned char>(a2) >= reinterpret_cast<uint32_t>(ebp8)) 
            goto addr_1000895e_10;
        esi26 = reinterpret_cast<void*>(esp4 + 9);
        do {
            if (reinterpret_cast<unsigned char>(ebx25) - reinterpret_cast<unsigned char>(a2) >= reinterpret_cast<uint32_t>(ebp8)) 
                break;
            ++ebx25;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx25) == 10)) {
                edi7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi7) + 1);
                esi26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi26) + 1);
            }
            esi26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi26) + 1);
        } while (reinterpret_cast<int32_t>(esi26) - reinterpret_cast<int32_t>(esp4 + 9) < 0x400);
        esp27 = reinterpret_cast<void*>(esp4 - 1);
        esi28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi26) - reinterpret_cast<uint32_t>(esp4 + 9));
        v15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) + 24);
        v16 = esi28;
        v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp27) + 40);
        v19 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*v9) + v13);
        eax29 = reinterpret_cast<int32_t>(WriteFile(v19, v18, v16, v15, 0));
        esp4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp27) - 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax29) 
            goto addr_10008954_8;
    } while (reinterpret_cast<int32_t>(v5) >= reinterpret_cast<int32_t>(esi28));
    goto addr_1000895e_10;
}

void fun_10009430(void** a1) {
    uint32_t ecx2;
    uint32_t v3;

    ecx2 = (reinterpret_cast<unsigned char>(a1) & 31) << 2;
    v3 = *reinterpret_cast<int32_t*>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) & 0xffffffe7) >> 3) + 0x10012fa0) + (ecx2 + ecx2 * 8) + 12;
    LeaveCriticalSection();
    goto v3;
}

void* fun_10009370(void** a1);

int32_t SetFilePointer = 0x14bd6;

int32_t fun_10008aa0(void** a1, int32_t a2, int32_t a3) {
    void* eax4;
    int32_t eax5;
    uint32_t eax6;
    uint32_t esi7;
    uint32_t eax8;
    int32_t* eax9;

    eax4 = fun_10009370(a1);
    if (!reinterpret_cast<int1_t>(eax4 == 0xffffffff)) {
        eax5 = reinterpret_cast<int32_t>(SetFilePointer());
        eax6 = 0;
        if (eax5 == -1) {
            eax6 = reinterpret_cast<uint32_t>(GetLastError());
        }
        if (!eax6) {
            esi7 = (reinterpret_cast<unsigned char>(a1) & 31) << 2;
            eax8 = esi7 + esi7 * 8;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) & 0xffffffe7) >> 3) + 0x10012fa0)) + eax8 + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) & 0xffffffe7) >> 3) + 0x10012fa0)) + eax8 + 4) & 0xfd);
            goto 0;
        } else {
            fun_10009230(eax6);
            goto 0;
        }
    } else {
        eax9 = fun_100092b0();
        *eax9 = 9;
        return -1;
    }
}

struct s27 {
    signed char[8] pad8;
    int32_t f8;
    uint32_t fc;
    signed char[4] pad20;
    uint32_t f14;
};

struct s27* fun_100068e0();

int32_t* fun_100092b0() {
    struct s27* eax1;

    eax1 = fun_100068e0();
    return &eax1->f8;
}

uint32_t* fun_100092c0(void* a1) {
    struct s27* eax2;

    eax2 = fun_100068e0();
    return &eax2->fc;
}

void fun_10009230(uint32_t a1) {
    void* esi2;
    uint32_t* eax3;
    uint32_t ecx4;
    int32_t esi5;
    uint32_t* eax6;
    int32_t* eax7;
    int32_t* eax8;
    int32_t* eax9;
    int32_t* eax10;

    eax3 = fun_100092c0(esi2);
    ecx4 = a1;
    esi5 = 0;
    *eax3 = ecx4;
    eax6 = reinterpret_cast<uint32_t*>(0x100111a0);
    do {
        if (*eax6 == ecx4) 
            break;
        eax6 = eax6 + 2;
        ++esi5;
    } while (reinterpret_cast<uint32_t>(eax6) < 0x10011308);
    goto addr_10009252_4;
    eax7 = fun_100092b0();
    *eax7 = *reinterpret_cast<int32_t*>(esi5 * 8 + 0x100111a4);
    return;
    addr_10009252_4:
    if (ecx4 < 19 || ecx4 > 36) {
        if (ecx4 < 0xbc || ecx4 > 0xca) {
            eax8 = fun_100092b0();
            *eax8 = 22;
            return;
        } else {
            eax9 = fun_100092b0();
            *eax9 = 8;
            return;
        }
    } else {
        eax10 = fun_100092b0();
        *eax10 = 13;
        return;
    }
}

struct s15* fun_10009740(void** a1);

int32_t GetTimeZoneInformation = 0x14be8;

uint32_t g10011100 = 0x7080;

int32_t g10011104 = 1;

/* (image base) */
signed char* image_base_ = reinterpret_cast<signed char*>(0x10011108);

/* (image base) */
signed char* image_base_ = reinterpret_cast<signed char*>(0x10011118);

void** g100110f4 = reinterpret_cast<void**>(0);

uint32_t fun_10009690(struct s15* a1);

signed char* fun_10008ea0() {
    void** v1;
    void** ebx2;
    void** v3;
    void** esi4;
    void** v5;
    void** edi6;
    void** v7;
    void** ebp8;
    struct s15* ebp9;
    struct s15* eax10;
    struct s15* ebx11;
    int32_t eax12;
    uint32_t eax13;
    uint32_t ecx14;
    int16_t v15;
    int32_t eax16;
    int32_t v17;
    int32_t ecx18;
    uint32_t tmp32_19;
    int16_t v20;
    int32_t v21;
    signed char* eax22;
    signed char* ecx23;
    int32_t v24;
    int1_t zf25;
    struct s15* eax26;
    void** edx27;
    uint1_t cf28;
    uint1_t cf29;
    uint32_t eax30;
    uint32_t eax31;
    signed char* eax32;
    void** eax33;
    struct s15* edi34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** eax39;
    int32_t ecx40;
    void* eax41;
    void** eax42;
    signed char* eax43;
    struct s15* edi44;
    int32_t ecx45;
    void* eax46;
    uint32_t ecx47;
    uint32_t eax48;
    uint32_t ecx49;
    void*** esi50;
    void** edi51;
    uint32_t ecx52;
    signed char* ecx53;
    struct s15* ebx54;
    uint32_t eax55;
    uint32_t eax56;
    uint32_t ecx57;
    uint32_t eax58;
    uint32_t eax59;
    uint32_t ecx60;
    uint32_t tmp32_61;
    uint32_t eax62;
    uint32_t tmp32_63;
    uint32_t eax64;
    int32_t eax65;
    signed char* eax66;
    signed char* eax67;
    signed char* eax68;

    v1 = ebx2;
    v3 = esi4;
    v5 = edi6;
    v7 = ebp8;
    ebp9 = reinterpret_cast<struct s15*>(0);
    fun_10008490(12, v7, v5, v3, v1);
    eax10 = fun_10009740("TZ");
    ebx11 = eax10;
    if (!ebx11) {
        eax12 = reinterpret_cast<int32_t>(GetTimeZoneInformation());
        if (eax12 != -1) {
            eax13 = reinterpret_cast<unsigned char>(v1) << 2;
            ecx14 = eax13 + eax13 * 2;
            g10011100 = ecx14 + ecx14 * 4;
            if (v15) {
                eax16 = v17 << 2;
                ecx18 = eax16 + eax16 * 2;
                tmp32_19 = g10011100 + (ecx18 + ecx18 * 4);
                g10011100 = tmp32_19;
            }
            if (!v20 || !v21) {
                g10011104 = 0;
            } else {
                g10011104 = 1;
            }
            eax22 = image_base_;
            *eax22 = 0;
            ecx23 = image_base_;
            *ecx23 = 0;
        }
        fun_10008500(12);
        goto v24;
    }
    if (!ebx11->f0) 
        goto addr_100090fd_11;
    zf25 = g100110f4 == 0;
    if (zf25) 
        goto addr_10008fa2_13;
    eax26 = ebx11;
    edx27 = g100110f4;
    do {
        cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax26->f0) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx27)));
        if (eax26->f0 != *reinterpret_cast<void***>(edx27)) 
            break;
        if (!eax26->f0) 
            goto addr_10008f91_17;
        cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax26->f1) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx27 + 1)));
        if (eax26->f1 != *reinterpret_cast<void***>(edx27 + 1)) 
            break;
        ++eax26;
        edx27 = edx27 + 2;
    } while (eax26->f1);
    goto addr_10008f91_17;
    cf29 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax26) < reinterpret_cast<uint32_t>(eax26) + cf28);
    eax30 = reinterpret_cast<uint32_t>(eax26) - (reinterpret_cast<uint32_t>(eax26) + cf29);
    eax31 = eax30 - (1 - reinterpret_cast<uint1_t>(eax30 < 1 - cf29));
    addr_10008f9a_21:
    if (!eax31) {
        addr_100090fd_11:
        eax32 = fun_10008500(12);
        return eax32;
    } else {
        addr_10008fa2_13:
        eax33 = g100110f4;
        edi34 = ebx11;
        eax39 = fun_10008660(eax33, v7, v5, v3, v1, v35, v36, v37, v38);
        ecx40 = -1;
        eax41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax39) - reinterpret_cast<unsigned char>(eax39));
    }
    do {
        if (!ecx40) 
            break;
        --ecx40;
        edi34 = reinterpret_cast<struct s15*>(&edi34->f1);
    } while (edi34->f0 != *reinterpret_cast<void***>(&eax41));
    eax42 = fun_10008680(~ecx40, v7);
    g100110f4 = eax42;
    if (!eax42) {
        eax43 = fun_10008500(12);
        return eax43;
    }
    edi44 = ebx11;
    ecx45 = -1;
    eax46 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax42) - reinterpret_cast<unsigned char>(eax42));
    do {
        if (!ecx45) 
            break;
        --ecx45;
        edi44 = reinterpret_cast<struct s15*>(&edi44->f1);
    } while (edi44->f0 != *reinterpret_cast<void***>(&eax46));
    ecx47 = reinterpret_cast<uint32_t>(~ecx45);
    eax48 = ecx47;
    ecx49 = ecx47 >> 2;
    esi50 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi44) - ecx47);
    edi51 = g100110f4;
    while (ecx49) {
        --ecx49;
        *reinterpret_cast<void***>(edi51) = *esi50;
        edi51 = edi51 + 4;
        esi50 = esi50 + 4;
    }
    ecx52 = eax48 & 3;
    while (ecx52) {
        --ecx52;
        *reinterpret_cast<void***>(edi51) = *esi50;
        ++edi51;
        ++esi50;
    }
    fun_10008500(12);
    ecx53 = image_base_;
    ebx54 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(ebx11) + 3);
    fun_10006690(ecx53, ebx11, 3);
    if (reinterpret_cast<int1_t>(ebx54->f0 == 45)) 
        goto addr_1000902d_36;
    addr_10009034_37:
    eax55 = fun_10009690(ebx54);
    eax56 = eax55 + eax55 * 4;
    ecx57 = eax56 + eax56 * 4;
    g10011100 = ecx57 + ecx57 * 8 << 4;
    while (ebx54->f0 == 43 || reinterpret_cast<signed char>(ebx54->f0) >= reinterpret_cast<signed char>(48) && reinterpret_cast<signed char>(ebx54->f0) <= reinterpret_cast<signed char>(57)) {
        ebx54 = reinterpret_cast<struct s15*>(&ebx54->f1);
    }
    if (reinterpret_cast<int1_t>(ebx54->f0 == 58)) {
        ebx54 = reinterpret_cast<struct s15*>(&ebx54->f1);
        eax58 = fun_10009690(ebx54);
        eax59 = eax58 << 2;
        ecx60 = eax59 + eax59 * 2;
        tmp32_61 = g10011100 + (ecx60 + ecx60 * 4);
        g10011100 = tmp32_61;
        if (reinterpret_cast<signed char>(ebx54->f0) >= reinterpret_cast<signed char>(48)) {
            do {
                if (reinterpret_cast<signed char>(ebx54->f0) > reinterpret_cast<signed char>(57)) 
                    break;
                ebx54 = reinterpret_cast<struct s15*>(&ebx54->f1);
            } while (reinterpret_cast<signed char>(ebx54->f0) >= reinterpret_cast<signed char>(48));
        }
        if (reinterpret_cast<int1_t>(ebx54->f0 == 58) && (ebx54 = reinterpret_cast<struct s15*>(&ebx54->f1), eax62 = fun_10009690(ebx54), tmp32_63 = g10011100 + eax62, g10011100 = tmp32_63, reinterpret_cast<signed char>(ebx54->f0) >= reinterpret_cast<signed char>(48))) {
            do {
                if (reinterpret_cast<signed char>(ebx54->f0) > reinterpret_cast<signed char>(57)) 
                    break;
                ebx54 = reinterpret_cast<struct s15*>(&ebx54->f1);
            } while (reinterpret_cast<signed char>(ebx54->f0) >= reinterpret_cast<signed char>(48));
        }
    }
    if (ebp9) {
        eax64 = g10011100;
        g10011100 = -eax64;
    }
    eax65 = reinterpret_cast<signed char>(ebx54->f0);
    g10011104 = eax65;
    if (!eax65) {
        eax66 = image_base_;
        *eax66 = 0;
        return eax66;
    } else {
        eax67 = image_base_;
        eax68 = fun_10006690(eax67, ebx54, 3);
        return eax68;
    }
    addr_1000902d_36:
    ebp9 = reinterpret_cast<struct s15*>(1);
    ebx54 = reinterpret_cast<struct s15*>(&ebx54->f1);
    goto addr_10009034_37;
    addr_10008f91_17:
    eax31 = 0;
    goto addr_10008f9a_21;
}

int32_t g10011308 = 1;

/* (image base) */
int16_t* image_base_ = reinterpret_cast<int16_t*>(0x10010ef2);

uint32_t fun_10009930(int32_t a1, uint32_t a2);

uint32_t fun_10009690(struct s15* a1) {
    struct s15* esi2;
    int1_t less_or_equal3;
    int32_t edx4;
    int16_t* ecx5;
    uint32_t eax6;
    uint32_t eax7;
    int32_t eax8;
    int32_t ebx9;
    void*** esi10;
    int32_t edi11;
    uint32_t ebp12;
    int1_t less_or_equal13;
    int16_t* ecx14;
    uint32_t eax15;
    uint32_t eax16;

    esi2 = a1;
    while (1) {
        less_or_equal3 = g10011308 <= 1;
        if (less_or_equal3) {
            edx4 = 0;
            ecx5 = image_base_;
            *reinterpret_cast<void***>(&edx4) = esi2->f0;
            eax6 = 0;
            *reinterpret_cast<int16_t*>(&eax6) = ecx5[edx4];
            eax7 = eax6 & 8;
        } else {
            eax8 = 0;
            *reinterpret_cast<void***>(&eax8) = esi2->f0;
            eax7 = fun_10009930(eax8, 8);
        }
        if (!eax7) 
            break;
        esi2 = reinterpret_cast<struct s15*>(&esi2->f1);
    }
    ebx9 = 0;
    *reinterpret_cast<void***>(&ebx9) = esi2->f0;
    esi10 = &esi2->f1;
    edi11 = ebx9;
    if (ebx9 == 45 || ebx9 == 43) {
        ebx9 = 0;
        *reinterpret_cast<void***>(&ebx9) = *esi10;
        ++esi10;
    }
    ebp12 = 0;
    while (1) {
        less_or_equal13 = g10011308 <= 1;
        if (less_or_equal13) {
            ecx14 = image_base_;
            eax15 = 0;
            *reinterpret_cast<int16_t*>(&eax15) = ecx14[ebx9];
            eax16 = eax15 & 4;
        } else {
            eax16 = fun_10009930(ebx9, 4);
        }
        if (!eax16) 
            break;
        ++esi10;
        ebp12 = ebx9 + (ebp12 + ebp12 * 4) * 2 + 0xffffffd0;
        ebx9 = 0;
        *reinterpret_cast<void***>(&ebx9) = *(esi10 - 1);
    }
    if (edi11 != 45) {
        return ebp12;
    } else {
        return -ebp12;
    }
}

void fun_10008520(void** a1, void** a2);

int32_t fun_10009820(void** a1, void** a2, void** a3, void** a4, void** a5);

signed char* fun_10008590(void** a1);

int32_t fun_100097e0(void** a1) {
    void** edi2;
    void** esi3;
    int32_t eax4;

    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 64)) {
        fun_10008520(a1, edi2);
        eax4 = fun_10009820(a1, edi2, esi3, __return_address(), a1);
        fun_10008590(a1);
        return eax4;
    } else {
        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(0);
        return -1;
    }
}

int32_t FlushFileBuffers = 0x14c12;

uint32_t fun_10009880(void** a1) {
    int1_t below_or_equal2;
    void** ebx3;
    uint32_t eax4;
    uint32_t edi5;
    int32_t* eax6;
    uint32_t edi7;
    int32_t* eax8;
    void* eax9;
    int32_t eax10;
    uint32_t eax11;
    uint32_t* eax12;

    below_or_equal2 = reinterpret_cast<unsigned char>(g10012f90) <= reinterpret_cast<unsigned char>(a1);
    if (below_or_equal2 || (ebx3 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) & 0xffffffe7) >> 3) + 0x10012fa0), eax4 = (reinterpret_cast<unsigned char>(a1) & 31) << 2, edi5 = eax4 + eax4 * 8, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*ebx3) + edi5 + 4) & 1) == 0)) {
        eax6 = fun_100092b0();
        *eax6 = 9;
        return 0xffffffff;
    }
    fun_100093c0(a1);
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*ebx3) + edi5 + 4) & 1)) {
        addr_100098ef_4:
        edi7 = 0xffffffff;
        eax8 = fun_100092b0();
        *eax8 = 9;
    } else {
        edi7 = 0;
        eax9 = fun_10009370(a1);
        eax10 = reinterpret_cast<int32_t>(FlushFileBuffers(eax9));
        if (!eax10) {
            eax11 = reinterpret_cast<uint32_t>(GetLastError(eax9));
            edi7 = eax11;
        }
        if (edi7) 
            goto addr_100098e8_8;
    }
    fun_10009430(a1);
    return edi7;
    addr_100098e8_8:
    eax12 = fun_100092c0(eax9);
    *eax12 = edi7;
    goto addr_100098ef_4;
}

void fun_10008560(void** a1, void** a2) {
    void** ebp3;

    if (reinterpret_cast<signed char>(a1) >= reinterpret_cast<signed char>(20)) {
        EnterCriticalSection();
        goto ebp3;
    } else {
        fun_10008490(a1 + 28, ebp3, __return_address(), a1, a2);
        return;
    }
}

int32_t fun_10009540(void** a1);

uint32_t fun_10009500(void** a1) {
    int32_t eax2;
    void** v3;
    uint32_t eax4;

    eax2 = fun_10009540(a1);
    if (!eax2) {
        if (!(*reinterpret_cast<unsigned char*>(a1 + 13) & 64)) {
            return 0;
        } else {
            v3 = *reinterpret_cast<void***>(a1 + 16);
            eax4 = fun_10009880(v3);
            return 1 - reinterpret_cast<uint1_t>(eax4 < 1);
        }
    } else {
        return 0xffffffff;
    }
}

void** fun_10009c20(int32_t a1, void** a2, void** a3, void* a4, void** a5, int32_t a6);

uint32_t fun_10009930(int32_t a1, uint32_t a2) {
    int32_t ecx3;
    void* esp4;
    int32_t ebx5;
    int16_t* eax6;
    void** eax7;
    void** eax8;
    int16_t* edx9;
    uint32_t eax10;

    ecx3 = a1;
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4);
    if (ecx3 + 1 > 0x100) {
        ebx5 = 0;
        *reinterpret_cast<signed char*>(&ebx5) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1);
        eax6 = image_base_;
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax6 + ebx5) + 1) & 0x80)) {
            eax7 = reinterpret_cast<void**>(1);
        } else {
            eax7 = reinterpret_cast<void**>(2);
        }
        eax8 = fun_10009c20(1, reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 + 24, eax7, reinterpret_cast<int32_t>(esp4) + 6, 0, 0);
        if (eax8) {
            return 0;
        } else {
            return 0;
        }
    } else {
        edx9 = image_base_;
        eax10 = 0;
        *reinterpret_cast<int16_t*>(&eax10) = edx9[ecx3];
        return eax10 & a2;
    }
}

void** g100104c0 = reinterpret_cast<void**>(0);

int32_t WideCharToMultiByte = 0x14b4c;

int32_t fun_1000a070(void** a1, void** a2);

void* fun_10009a10() {
    void** esi1;
    int32_t edi2;
    void** eax3;
    void** eax4;
    int32_t eax5;

    esi1 = g100104c0;
    if (!*reinterpret_cast<void***>(esi1)) {
        addr_10009a75_2:
        return 0;
    } else {
        edi2 = WideCharToMultiByte;
        do {
            eax3 = reinterpret_cast<void**>(edi2());
            if (!eax3) 
                break;
            eax4 = fun_10008680(eax3, 1);
            if (!eax4) 
                goto addr_10009a86_6;
            eax5 = reinterpret_cast<int32_t>(edi2());
            if (!eax5) 
                goto addr_10009a90_8;
            esi1 = esi1 + 4;
            fun_1000a070(eax4, 0);
        } while (*reinterpret_cast<void***>(esi1));
        goto addr_10009a75_2;
    }
    goto 0;
    addr_10009a86_6:
    goto 0;
    addr_10009a90_8:
    goto eax4;
}

void** fun_10009d50(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** fun_100099d0(void** a1, void** a2, void** a3) {
    void** eax4;
    void** eax5;
    void** eax6;

    if (a3) {
        eax4 = g1001060c;
        eax5 = g10010610;
        eax6 = fun_10009d50(eax5, 1, a1, a3, a2, a3, eax4);
        if (eax6) {
            return eax6 - 2;
        } else {
            return 0x7fffffff;
        }
    } else {
        return 0;
    }
}

int32_t fun_10009540(void** a1) {
    int32_t edi2;
    void** ecx3;
    void** eax4;
    void* ebx5;
    void** v6;
    void* eax7;
    void** eax8;

    edi2 = 0;
    ecx3 = *reinterpret_cast<void***>(a1 + 12);
    if ((*reinterpret_cast<unsigned char*>(&ecx3) & 3) == 2 && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0x108 && (eax4 = *reinterpret_cast<void***>(a1 + 8), ebx5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) - reinterpret_cast<unsigned char>(eax4)), !(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx5) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx5 == 0))))) {
        v6 = *reinterpret_cast<void***>(a1 + 16);
        eax7 = fun_100087a0(v6, eax4, ebx5);
        if (eax7 != ebx5) {
            *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) | 32);
            edi2 = -1;
        } else {
            eax8 = *reinterpret_cast<void***>(a1 + 12);
            if (*reinterpret_cast<unsigned char*>(&eax8) & 0x80) {
                *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) & 0xfffffffd);
            }
        }
    }
    *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(a1 + 8);
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    return edi2;
}

void** fun_10009be0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** eax7;
    void** v8;
    void** esi9;

    eax7 = *reinterpret_cast<void***>(a1 + 12);
    if (*reinterpret_cast<unsigned char*>(&eax7) & 0x83 && *reinterpret_cast<unsigned char*>(&eax7) & 8) {
        v8 = *reinterpret_cast<void***>(a1 + 8);
        eax7 = fun_10008660(v8, esi9, __return_address(), a1, a2, a3, a4, a5, a6);
        *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0xfffffbf7);
        *reinterpret_cast<void***>(a1 + 8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    }
    return eax7;
}

int32_t fun_10009b50(void** a1);

int32_t fun_10009ae0(void** a1) {
    int1_t below_or_equal2;
    uint32_t ecx3;
    int32_t* eax4;
    void* edi5;
    uint32_t* eax6;
    int32_t eax7;

    below_or_equal2 = reinterpret_cast<unsigned char>(g10012f90) <= reinterpret_cast<unsigned char>(a1);
    if (below_or_equal2 || (ecx3 = (reinterpret_cast<unsigned char>(a1) & 31) << 2, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) & 0xffffffe7) >> 3) + 0x10012fa0)) + (ecx3 + ecx3 * 8) + 4) & 1) == 0)) {
        eax4 = fun_100092b0();
        *eax4 = 9;
        eax6 = fun_100092c0(edi5);
        *eax6 = 0;
        return -1;
    } else {
        fun_100093c0(a1);
        eax7 = fun_10009b50(a1);
        fun_10009430(a1);
        return eax7;
    }
}

struct s28 {
    void* f0;
    unsigned char f4;
};

void* fun_10009370(void** a1) {
    int1_t below_or_equal2;
    uint32_t ecx3;
    struct s28* eax4;
    int32_t* eax5;
    uint32_t* eax6;

    below_or_equal2 = reinterpret_cast<unsigned char>(g10012f90) <= reinterpret_cast<unsigned char>(a1);
    if (below_or_equal2 || (ecx3 = (reinterpret_cast<unsigned char>(a1) & 31) << 2, eax4 = reinterpret_cast<struct s28*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) & 0xffffffe7) >> 3) + 0x10012fa0)) + (ecx3 + ecx3 * 8)), (eax4->f4 & 1) == 0)) {
        eax5 = fun_100092b0();
        *eax5 = 9;
        eax6 = fun_100092c0(__return_address());
        *eax6 = 0;
        return 0xffffffff;
    } else {
        return eax4->f0;
    }
}

void** fun_1000a550(void** a1, uint32_t a2);

void** g100104bc = reinterpret_cast<void**>(0);

void** fun_1000a320(void** a1);

void** fun_1000a2c0(void** a1, void** a2);

void** fun_1000a4e0(void** a1, void** a2, void** a3, void** a4);

struct s29 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

int32_t SetEnvironmentVariableA = 0x14c6e;

struct s30 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

int32_t fun_1000a070(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** ebx5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void** v10;
    void** ebp11;
    void** eax12;
    void** ecx13;
    void** v14;
    int1_t zf15;
    void** eax16;
    int1_t zf17;
    int1_t zf18;
    int1_t zf19;
    void** eax20;
    void** eax21;
    int1_t zf22;
    void** eax23;
    void** eax24;
    void* eax25;
    void** esi26;
    void** ebp27;
    void** eax28;
    void** edi29;
    struct s29* ecx30;
    void** edi31;
    int32_t ecx32;
    void* eax33;
    void** eax34;
    void** ebx35;
    void** edi36;
    int32_t ecx37;
    void* eax38;
    uint32_t ecx39;
    uint32_t eax40;
    uint32_t ecx41;
    void*** esi42;
    void** edi43;
    uint32_t ecx44;
    signed char* ecx45;
    void** v46;
    struct s30* ebx47;
    void** v48;

    v3 = reinterpret_cast<void**>(__return_address());
    v4 = ebx5;
    v6 = esi7;
    v8 = edi9;
    v10 = ebp11;
    if (!a1 || ((eax12 = fun_1000a550(a1, 61), eax12 == 0) || eax12 == a1)) {
        return -1;
    }
    ecx13 = g100104b8;
    v14 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(eax12) - (reinterpret_cast<unsigned char>(eax12) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax12) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax12) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax12 + 1)) < 1))))));
    zf15 = g100104bc == ecx13;
    if (zf15) {
        eax16 = fun_1000a320(ecx13);
        g100104b8 = eax16;
    }
    zf17 = g100104b8 == 0;
    if (zf17) {
        if (!a2 || (zf18 = g100104c0 == 0, zf18)) {
            if (!v14) {
                zf19 = g100104b8 == 0;
                if (zf19) {
                    eax20 = fun_10008680(4, v10);
                    g100104b8 = eax20;
                    if (eax20) {
                        eax21 = g100104b8;
                        *reinterpret_cast<void***>(eax21) = reinterpret_cast<void**>(0);
                    } else {
                        return -1;
                    }
                }
                zf22 = g100104c0 == 0;
                if (zf22) {
                    eax23 = fun_10008680(4, v10);
                    g100104c0 = eax23;
                    if (eax23) {
                        eax24 = g100104c0;
                        *reinterpret_cast<void***>(eax24) = reinterpret_cast<void**>(0);
                    } else {
                        return -1;
                    }
                }
            } else {
                return 0;
            }
        } else {
            eax25 = fun_10009a10();
            if (eax25) {
                return -1;
            }
        }
    }
    esi26 = g100104b8;
    ebp27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax12) - reinterpret_cast<unsigned char>(a1));
    eax28 = fun_1000a2c0(a1, ebp27);
    edi29 = eax28;
    if (reinterpret_cast<signed char>(edi29) < reinterpret_cast<signed char>(0)) 
        goto addr_1000a1e5_20;
    if (*reinterpret_cast<void***>(esi26)) 
        goto addr_1000a1a0_22;
    addr_1000a1e5_20:
    if (v14) {
        return 0;
    } else {
        if (reinterpret_cast<signed char>(edi29) < reinterpret_cast<signed char>(0)) {
            edi29 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(edi29));
        }
        eax28 = fun_1000a4e0(esi26, reinterpret_cast<unsigned char>(edi29) * 4 + 8, v10, v8);
        if (eax28) {
            ecx30 = reinterpret_cast<struct s29*>(eax28 + reinterpret_cast<unsigned char>(edi29) * 4);
            ecx30->f0 = a1;
            ecx30->f4 = 0;
        } else {
            return -1;
        }
    }
    addr_1000a228_29:
    g100104b8 = eax28;
    addr_1000a22d_30:
    if (!a2) {
        addr_1000a29a_31:
        return 0;
    } else {
        edi31 = a1;
        ecx32 = -1;
        eax33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28) - reinterpret_cast<unsigned char>(eax28));
        do {
            if (!ecx32) 
                break;
            --ecx32;
            ++edi31;
        } while (*reinterpret_cast<void***>(edi31) != *reinterpret_cast<void***>(&eax33));
        eax34 = fun_10008680(~ecx32 + 1, v10);
        ebx35 = eax34;
        if (!ebx35) 
            goto addr_1000a29a_31;
    }
    edi36 = a1;
    ecx37 = -1;
    eax38 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax34) - reinterpret_cast<unsigned char>(eax34));
    do {
        if (!ecx37) 
            break;
        --ecx37;
        ++edi36;
    } while (*reinterpret_cast<void***>(edi36) != *reinterpret_cast<void***>(&eax38));
    ecx39 = reinterpret_cast<uint32_t>(~ecx37);
    eax40 = ecx39;
    ecx41 = ecx39 >> 2;
    esi42 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi36) - ecx39);
    edi43 = ebx35;
    while (ecx41) {
        --ecx41;
        *reinterpret_cast<void***>(edi43) = *esi42;
        edi43 = edi43 + 4;
        esi42 = esi42 + 4;
    }
    ecx44 = eax40 & 3;
    while (ecx44) {
        --ecx44;
        *reinterpret_cast<void***>(edi43) = *esi42;
        ++edi43;
        ++esi42;
    }
    ecx45 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebp27) + reinterpret_cast<unsigned char>(ebx35));
    *ecx45 = 0;
    v46 = reinterpret_cast<void**>(eax40 - (eax40 + reinterpret_cast<uint1_t>(eax40 < eax40 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(v14) < reinterpret_cast<unsigned char>(1)))) & reinterpret_cast<uint32_t>(ecx45 + 1));
    SetEnvironmentVariableA(ebx35, v46);
    fun_10008660(ebx35, ebx35, v46, v10, v8, v6, v4, v14, v3);
    goto addr_1000a29a_31;
    addr_1000a1a0_22:
    if (!v14) {
        *reinterpret_cast<void***>(esi26 + reinterpret_cast<unsigned char>(edi29) * 4) = a1;
        goto addr_1000a22d_30;
    } else {
        ebx47 = reinterpret_cast<struct s30*>(esi26 + reinterpret_cast<unsigned char>(edi29) * 4);
        v48 = ebx47->f0;
        fun_10008660(v48, v10, v8, v6, v4, v14, v3, a1, a2);
        if (ebx47->f0) {
            do {
                ebx47 = reinterpret_cast<struct s30*>(&ebx47->f4);
                ++edi29;
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx47) - 4) = ebx47->f4;
            } while (ebx47->f0);
        }
        eax28 = fun_1000a4e0(esi26, reinterpret_cast<unsigned char>(edi29) << 2, v10, v8);
        if (!eax28) 
            goto addr_1000a22d_30;
    }
    goto addr_1000a228_29;
}

int32_t fun_100092d0(void** a1);

int32_t fun_10009b50(void** a1) {
    void* eax2;
    void* eax3;
    void* eax4;
    int32_t eax5;
    uint32_t edi6;
    uint32_t eax7;
    uint32_t esi8;

    if ((a1 == 1 || reinterpret_cast<int1_t>(a1 == 2)) && (eax2 = fun_10009370(2), eax3 = fun_10009370(1), eax2 == eax3) || (eax4 = fun_10009370(a1), eax5 = reinterpret_cast<int32_t>(CloseHandle(eax4)), !!eax5)) {
        edi6 = 0;
    } else {
        eax7 = reinterpret_cast<uint32_t>(GetLastError(eax4));
        edi6 = eax7;
    }
    fun_100092d0(a1);
    if (!edi6) {
        esi8 = (reinterpret_cast<unsigned char>(a1) & 31) << 2;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) & 0xffffffe7) >> 3) + 0x10012fa0)) + (esi8 + esi8 * 8) + 4) = 0;
        return 0;
    } else {
        fun_10009230(edi6);
        return -1;
    }
}

void** fun_1000a040(void** a1, void** a2) {
    void** ecx3;
    void** eax4;
    void** edi5;
    void** esi6;
    void** edx7;

    ecx3 = a1;
    eax4 = a2;
    edi5 = ecx3;
    esi6 = eax4 + 0xffffffff;
    if (eax4) {
        do {
            if (!*reinterpret_cast<void***>(edi5)) 
                goto addr_1000a065_3;
            ++edi5;
            edx7 = esi6;
            --esi6;
        } while (edx7);
    }
    if (*reinterpret_cast<void***>(edi5)) {
        addr_1000a069_6:
        return eax4;
    } else {
        addr_1000a065_3:
        eax4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi5) - reinterpret_cast<unsigned char>(ecx3));
        goto addr_1000a069_6;
    }
}

void** fun_1000a640(void** a1, void** a2);

void** fun_1000a550(void** a1, uint32_t a2) {
    int1_t zf3;
    uint32_t v4;
    void** eax5;
    void** edi6;
    void** esi7;
    void** ebx8;
    void** esi9;
    uint32_t edi10;
    uint16_t bx11;
    uint32_t eax12;
    int32_t eax13;
    uint32_t ecx14;

    zf3 = g1001060c == 0;
    if (zf3) {
        v4 = a2;
        eax5 = fun_1000a640(a1, *reinterpret_cast<void***>(&v4));
        return eax5;
    }
    fun_10008490(25, edi6, esi7, ebx8, __return_address());
    esi9 = a1;
    edi10 = a2;
    bx11 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi9));
    if (!bx11) {
        addr_1000a5eb_4:
        fun_10008500(25);
        eax12 = bx11 - edi10;
        return eax12 - (eax12 + reinterpret_cast<uint1_t>(eax12 < eax12 + reinterpret_cast<uint1_t>(eax12 < 1))) & reinterpret_cast<unsigned char>(esi9);
    } else {
        do {
            eax13 = 0;
            *reinterpret_cast<signed char*>(&eax13) = *reinterpret_cast<signed char*>(&bx11);
            if (!(*reinterpret_cast<unsigned char*>(eax13 + 0x10010509) & 4)) {
                if (static_cast<uint32_t>(bx11) == edi10) 
                    goto addr_1000a5eb_4;
            } else {
                ++esi9;
                if (!*reinterpret_cast<void***>(esi9 + 1)) 
                    goto addr_1000a5db_9;
                ecx14 = 0;
                *reinterpret_cast<void***>(&ecx14) = *reinterpret_cast<void***>(esi9 + 1);
                if ((static_cast<uint32_t>(bx11) << 8 | ecx14) == edi10) 
                    goto addr_1000a5b6_11;
            }
            bx11 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi9 + 1));
            ++esi9;
        } while (bx11);
    }
    goto addr_1000a5eb_4;
    addr_1000a5db_9:
    fun_10008500(25);
    return 0;
    addr_1000a5b6_11:
    fun_10008500(25);
    return esi9 + 0xffffffff;
}

void** fun_1000a610(void** a1);

void** fun_1000a320(void** a1) {
    void** eax2;
    void** v3;
    void** edi4;
    void** esi5;
    void** ecx6;
    void** edx7;
    void** eax8;
    void** edi9;
    void** ebx10;
    void** v11;
    void** eax12;

    eax2 = reinterpret_cast<void**>(0);
    v3 = edi4;
    esi5 = a1;
    if (esi5) {
        ecx6 = esi5 + 4;
        if (*reinterpret_cast<void***>(esi5)) {
            do {
                ++eax2;
                edx7 = ecx6;
                ecx6 = ecx6 + 4;
            } while (*reinterpret_cast<void***>(edx7));
        }
        eax8 = fun_10008680(reinterpret_cast<unsigned char>(eax2) * 4 + 4, v3);
        edi9 = eax8;
        ebx10 = eax8;
        if (!ebx10) {
            fun_10006290(9);
        }
        if (*reinterpret_cast<void***>(esi5)) {
            do {
                esi5 = esi5 + 4;
                v11 = *reinterpret_cast<void***>(esi5);
                ebx10 = ebx10 + 4;
                eax12 = fun_1000a610(v11);
                *reinterpret_cast<void***>(ebx10 + 0xfffffffc) = eax12;
            } while (*reinterpret_cast<void***>(esi5));
        }
        eax2 = edi9;
        *reinterpret_cast<void***>(ebx10) = reinterpret_cast<void**>(0);
    }
    return eax2;
}

int32_t HeapReAlloc = 0x14c88;

void** fun_1000a4e0(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** esi7;
    void** esi8;
    void** v9;
    void** edi10;
    void** edi11;
    void** eax12;
    void** ebx13;
    int32_t ebx14;
    int32_t eax15;
    int32_t eax16;
    int1_t zf17;
    int32_t eax18;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = esi7;
    esi8 = a1;
    v9 = edi10;
    edi11 = a2;
    if (!esi8) {
        eax12 = fun_10008680(edi11, v9);
        return eax12;
    }
    if (!edi11) {
        fun_10008660(esi8, v9, v6, ebx13, v5, a1, a2, a3, a4);
        return 0;
    }
    ebx14 = HeapReAlloc;
    eax15 = g100130a0;
    do {
        if (reinterpret_cast<unsigned char>(edi11) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
            eax16 = reinterpret_cast<int32_t>(ebx14(eax15, 0, esi8, edi11));
        } else {
            eax16 = 0;
        }
        if (eax16) 
            break;
        zf17 = g1001119c == 0;
        if (zf17) 
            break;
        eax18 = fun_100091f0(edi11, v9, v6);
        eax15 = g100130a0;
    } while (eax18);
    goto addr_1000a549_12;
    addr_1000a54b_13:
    goto v5;
    addr_1000a549_12:
    goto addr_1000a54b_13;
}

struct s31 {
    signed char[1] pad1;
    void** f1;
};

struct s31* fun_1000a660(void** a1);

void** fun_1000a6e0(void** a1, void** a2);

void** fun_1000a610(void** a1) {
    struct s31* eax2;
    void** edi3;
    void** eax4;

    eax2 = fun_1000a660(a1);
    eax4 = fun_10008680(&eax2->f1, edi3);
    if (eax4) {
        eax4 = fun_1000a6e0(eax4, a1);
    }
    return eax4;
}

void** fun_1000a640(void** a1, void** a2) {
    void** eax3;
    void** cl4;

    eax3 = a1;
    cl4 = a2;
    while (cl4 != *reinterpret_cast<void***>(eax3)) {
        if (!*reinterpret_cast<void***>(eax3)) 
            goto addr_1000a655_4;
        ++eax3;
    }
    addr_1000a657_6:
    return eax3;
    addr_1000a655_4:
    eax3 = reinterpret_cast<void**>(0);
    goto addr_1000a657_6;
}

void** fun_1000a6e0(void** a1, void** a2) {
    void** edi3;
    void** ecx4;
    void** edx5;

    edi3 = a1;
    ecx4 = a2;
    if (!(reinterpret_cast<unsigned char>(ecx4) & 3)) {
        while (1) {
            addr_1000a76e_3:
            edx5 = *reinterpret_cast<void***>(ecx4);
            ecx4 = ecx4 + 4;
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx4) + 0x7efefeff)) & 0x81010100) {
                if (!edx5) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx5 + 1)) 
                    goto addr_1000a7b7_6;
                if (!(reinterpret_cast<unsigned char>(edx5) & 0xff0000)) 
                    goto addr_1000a7aa_8;
                if (!(reinterpret_cast<unsigned char>(edx5) & 0xff000000)) 
                    goto addr_1000a7a2_10;
            }
            *reinterpret_cast<void***>(edi3) = edx5;
            edi3 = edi3 + 4;
        }
    } else {
        do {
            edx5 = *reinterpret_cast<void***>(ecx4);
            ++ecx4;
            if (!edx5) 
                break;
            *reinterpret_cast<void***>(edi3) = edx5;
            ++edi3;
        } while (reinterpret_cast<unsigned char>(ecx4) & 3);
        goto addr_1000a767_15;
    }
    *reinterpret_cast<void***>(edi3) = edx5;
    return a1;
    addr_1000a7b7_6:
    *reinterpret_cast<void***>(edi3) = edx5;
    return a1;
    addr_1000a7aa_8:
    *reinterpret_cast<void***>(edi3) = edx5;
    *reinterpret_cast<signed char*>(edi3 + 2) = 0;
    return a1;
    addr_1000a7a2_10:
    *reinterpret_cast<void***>(edi3) = edx5;
    return a1;
    addr_1000a767_15:
    goto addr_1000a76e_3;
}

int32_t lineInitialize = 0x1443c;

void** fun_10005fc6() {
    goto lineInitialize;
}

int32_t lineShutdown = 0x1444e;

void** fun_10005fcc() {
    goto lineShutdown;
}

void** g1000c100 = reinterpret_cast<void**>(0);

void** g1000c0f8 = reinterpret_cast<void**>(0);

int32_t PostMessageA = 0x14862;

void** g1000c2a4 = reinterpret_cast<void**>(0);

void** fun_10005fd8(void** a1);

void** fun_10001320(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void** v14;
    void** ebx15;
    void** v16;
    void** esi17;
    void** v18;
    void** edi19;
    void** esi20;
    int1_t zf21;
    int1_t zf22;
    void** eax23;
    int1_t zf24;
    int1_t zf25;
    void** v26;
    int1_t zf27;
    void** eax28;
    void** v29;
    void** eax30;
    int32_t eax31;
    int1_t zf32;
    int32_t edi33;
    void** eax34;
    void** eax35;
    void** eax36;
    void** eax37;
    void** eax38;
    int32_t eax39;
    void** eax40;
    void** eax41;
    void** eax42;
    int32_t eax43;
    int32_t eax44;

    v13 = reinterpret_cast<void**>(__return_address());
    v14 = ebx15;
    v16 = esi17;
    v18 = edi19;
    esi20 = reinterpret_cast<void**>(0);
    zf21 = g1000c100 == 0;
    if (!zf21) {
        return 1;
    }
    zf22 = g1000c0f8 == 0;
    if (!zf22) {
        eax23 = g1000c0f8;
        PostMessageA(eax23, 0x111, 2, 0);
    }
    zf24 = g1000c108 == 0;
    if (zf24) {
        return 1;
    }
    g1000c100 = reinterpret_cast<void**>(1);
    fun_10001000("Stopping Call in progress\r\n", v18, v16, v14, v13, a2, a3, a4, a5);
    zf25 = g1000c10c == 0;
    if (!zf25) 
        goto addr_10001387_8;
    v26 = reinterpret_cast<void**>("g_hCall is NULL.\r\n");
    addr_100014a2_10:
    fun_10001000(v26, v18, v16, v14, v13, a2, a3, a4, a5);
    zf27 = g1000c110 == 0;
    if (!zf27) {
        do {
            eax28 = g1000c110;
            v29 = eax28;
            eax30 = fun_10005fd2(v29);
            eax31 = fun_10002ec0(ecx, eax30, v29, v18, v16, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
            if (!eax31) 
                break;
        } while (eax30);
        goto addr_100014d2_13;
    } else {
        v29 = reinterpret_cast<void**>("g_hLine is NULL.\r\n");
        goto addr_100014ee_15;
    }
    fun_10004820(ecx, eax30, "lineClose unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x2c2, v29, v18, v16, v14, v13, a2, a3, a4);
    addr_100014e9_17:
    addr_100014ee_15:
    fun_10001000(v29, v18, v16, v14, v13, a2, a3, a4, a5);
    zf32 = g1000c2a4 == 0;
    if (zf32) {
        edi33 = LocalFree;
    } else {
        eax34 = g1000c2a4;
        edi33 = LocalFree;
        edi33(eax34);
    }
    g1000c2a4 = reinterpret_cast<void**>(0);
    g1000c10c = reinterpret_cast<void**>(0);
    g1000c110 = reinterpret_cast<void**>(0);
    g1000c2a0 = reinterpret_cast<void**>(0);
    g1000c108 = reinterpret_cast<void**>(0);
    g1000c100 = reinterpret_cast<void**>(0);
    fun_10001000("Call stopped\r\n", v18, v16, v14, v13, a2, a3, a4, a5);
    if (esi20) {
        edi33(esi20);
    }
    return 1;
    addr_100014d2_13:
    goto addr_100014e9_17;
    addr_10001387_8:
    fun_10001000("Calling lineGetCallStatus\r\n", v18, v16, v14, v13, a2, a3, a4, a5);
    eax35 = g1000c10c;
    eax36 = fun_10002d00(ecx, 0, eax35, v18, v16, v14, v13, a2, a3, a4, a5, *reinterpret_cast<signed char*>(&a6));
    esi20 = eax36;
    if (!esi20) {
        fun_10001220(ecx, v18, v16, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10);
        g1000c100 = reinterpret_cast<void**>(0);
        return 0;
    }
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi20 + 12)) & 1)) 
        goto addr_100013c3_25;
    do {
        addr_10001464_26:
        eax37 = g1000c10c;
        v26 = eax37;
        eax38 = fun_10005fd8(v26);
        eax39 = fun_10002ec0(ecx, eax38, v26, v18, v16, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        if (!eax39) 
            break;
    } while (eax38);
    goto addr_1000147f_28;
    fun_10004820(ecx, eax38, "lineDeallocateCall unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x2a3, v26, v18, v16, v14, v13, a2, a3, a4);
    addr_10001496_30:
    goto addr_100014a2_10;
    addr_1000147f_28:
    goto addr_10001496_30;
    addr_100013c3_25:
    fun_10001000("Line isn't idle, call lineDrop\r\n", v18, v16, v14, v13, a2, a3, a4, a5);
    do {
        eax40 = g1000c10c;
        eax41 = fun_10005fde(eax40, 0, 0);
        eax42 = fun_100020b0(eax41, eax40, 0, 0);
        if (eax42 == 2) 
            break;
        if (eax42 == 1) 
            goto addr_10001412_33;
        if (eax42 == 0x8000001c) 
            goto addr_10001433_35;
        eax43 = fun_10002ec0(ecx, eax42, eax40, 0, 0, v18, v16, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10);
        if (!eax43) 
            goto addr_1000141e_37;
    } while (eax42);
    goto addr_10001404_39;
    fun_10001000("Call timed out in WaitForReply.\r\n", eax40, 0, 0, v18, v16, v14, v13, a2);
    addr_10001433_35:
    eax44 = fun_10002190(1, eax40, 0, 0);
    if (eax44 == 2) {
        fun_10001000("Call timed out waiting for IDLE state.\r\n", eax40, 0, 0, v18, v16, v14, v13, a2);
    }
    if (eax44 == 1) {
        fun_10001000("WAITERR_WAITABORTED while waiting for IDLE state.\r\n", eax40, 0, 0, v18, v16, v14, v13, a2);
    }
    fun_10001000("Call Dropped.\r\n", eax40, 0, 0, v18, v16, v14, v13, a2);
    goto addr_10001464_26;
    addr_10001412_33:
    fun_10001000("lineDrop: WAITERR_WAITABORTED.\r\n", eax40, 0, 0, v18, v16, v14, v13, a2);
    goto addr_10001433_35;
    addr_1000141e_37:
    fun_10004820(ecx, eax42, "lineDrop unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x283, eax40, 0, 0, v18, v16, v14, v13, a2);
    goto addr_10001433_35;
    addr_10001404_39:
    goto addr_10001433_35;
}

int32_t lineDeallocateCall = 0x1446a;

void** fun_10005fd8(void** a1) {
    goto lineDeallocateCall;
}

void** fun_10002af0(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** esi7;
    void*** esp8;
    void** v9;
    void** edi10;
    void** esi11;
    void** ecx12;
    void** v13;
    void** edx14;
    void** eax15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    int32_t eax21;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = esi7;
    esp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 4 - 4);
    v9 = edi10;
    esi11 = a1;
    do {
        ecx12 = reinterpret_cast<void**>(esp8 + 8);
        v13 = reinterpret_cast<void**>(esp8 + 12);
        edx14 = g1000c0f0;
        eax15 = fun_10006014();
        if (eax15 == 0x8000000c) 
            break;
        eax21 = fun_10002ec0(ecx12, eax15, edx14, esi11, 0x10004, 0x10004, ecx12, v13, v9, v6, v16, v17, v18, v19, v20, v5, a1, a2);
        esp8 = esp8 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 4;
        if (!eax21) 
            goto addr_10002b51_4;
    } while (eax15);
    goto addr_10002b31_6;
    fun_10001000("lineNegotiateAPIVersion, INCOMPATIBLEAPIVERSION.\r\n", edx14, esi11, 0x10004, 0x10004, ecx12, v13, v9, v6);
    goto v6;
    addr_10002b51_4:
    fun_10004820(ecx12, eax15, "lineNegotiateAPIVersion unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0xaa9, edx14, esi11, 0x10004, 0x10004, ecx12, v13, v9, v6);
    goto v6;
    addr_10002b31_6:
    goto v6;
}

int32_t lineOpen = 0x144a4;

void** fun_10005fea(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    goto lineOpen;
}

int32_t lineDial = 0x144c4;

void** fun_10005ff6(void** a1, void** a2, void** a3) {
    goto lineDial;
}

void** fun_10002000(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** esi6;
    void** v7;
    void** edi8;
    void** esi9;
    void** edi10;
    int32_t ecx11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;
    void** ecx15;
    void** eax16;
    void** edx17;
    int32_t ecx18;
    void** edi19;
    uint32_t ecx20;
    uint32_t eax21;
    uint32_t ecx22;
    void*** esi23;
    void** edi24;
    uint32_t ecx25;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = esi6;
    v7 = edi8;
    esi9 = a2;
    if (!esi9) {
        esi9 = reinterpret_cast<void**>(0x1000cfc8);
    }
    edi10 = esi9;
    ecx11 = -1;
    eax12 = eax13 - eax14;
    do {
        if (!ecx11) 
            break;
        --ecx11;
        ++edi10;
        ++esi9;
    } while (*reinterpret_cast<void***>(edi10) != *reinterpret_cast<void***>(&eax12));
    ecx15 = reinterpret_cast<void**>(~ecx11);
    eax16 = fun_10002a20(a1, a1, ecx15 + 0x70, "CreateCallParams: ", v7, v5, v4, a1, a2, a3);
    edx17 = eax16;
    if (edx17) {
        *reinterpret_cast<void***>(edx17 + 4) = reinterpret_cast<void**>(1);
        *reinterpret_cast<void***>(edx17 + 16) = reinterpret_cast<void**>(16);
        *reinterpret_cast<void***>(edx17 + 20) = reinterpret_cast<void**>(2);
        *reinterpret_cast<void***>(edx17 + 24) = reinterpret_cast<void**>(1);
        *reinterpret_cast<void***>(edx17 + 28) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(edx17 + 48) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(edx17 + 52) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(edx17 + 36) = reinterpret_cast<void**>(0);
        ecx18 = -1;
        *reinterpret_cast<void***>(edx17 + 40) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(edx17 + 32) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(edx17 + 44) = reinterpret_cast<void**>(0);
        *reinterpret_cast<unsigned char*>(edx17 + 60) = reinterpret_cast<unsigned char>(0x70);
        *reinterpret_cast<void***>(edx17 + 56) = ecx15;
        edi19 = esi9;
        do {
            if (!ecx18) 
                break;
            --ecx18;
            ++edi19;
        } while (*reinterpret_cast<void***>(edi19));
        ecx20 = reinterpret_cast<uint32_t>(~ecx18);
        eax21 = ecx20;
        ecx22 = ecx20 >> 2;
        esi23 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi19) - ecx20);
        edi24 = edx17 + 0x70;
        while (ecx22) {
            --ecx22;
            *reinterpret_cast<void***>(edi24) = *esi23;
            edi24 = edi24 + 4;
            esi23 = esi23 + 4;
        }
        ecx25 = eax21 & 3;
        while (ecx25) {
            --ecx25;
            *reinterpret_cast<void***>(edi24) = *esi23;
            ++edi24;
            ++esi23;
        }
        return edx17;
    } else {
        return 0;
    }
}

void fun_10006310(void** ecx, void** a2) {
    int32_t v3;
    void* ecx4;
    uint32_t eax5;
    uint32_t eax6;
    int32_t* esp7;

    v3 = reinterpret_cast<int32_t>(__return_address());
    ecx4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    if (eax5 >= 0x1000) {
        do {
            ecx4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx4) - 0x1000);
            eax6 = eax6 - 0x1000;
        } while (eax6 >= 0x1000);
    }
    esp7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx4) - eax6 - 4);
    *esp7 = v3;
    goto *esp7;
}

int32_t g1000c388 = 0;

int32_t fun_10005ec0(void** a1, void** a2);

void** fun_10001560(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

int32_t fun_1000600e();

void** fun_100025b0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    void** eax13;
    void** v14;
    void** ebx15;
    void** v16;
    void** esi17;
    void** v18;
    void** edi19;
    void** v20;
    void** ebp21;
    void** eax22;
    void** eax23;
    void** esi24;
    void** ebx25;
    void** edi26;
    int1_t zf27;
    void** eax28;
    void** eax29;
    void** eax30;
    void** ebp31;
    int32_t eax32;
    void** eax33;
    int1_t zf34;
    int1_t zf35;
    void** eax36;
    void** eax37;
    void** eax38;
    void** eax39;
    struct s4* eax40;
    int32_t ecx41;
    void** eax42;
    int32_t eax43;
    void** eax44;
    int1_t zf45;
    void** eax46;
    void** eax47;
    int1_t zf48;
    int32_t eax49;
    void** eax50;

    v12 = reinterpret_cast<void**>(__return_address());
    g10011f80 = 1;
    eax13 = a7;
    v14 = ebx15;
    v16 = esi17;
    v18 = edi19;
    v20 = ebp21;
    g1000c11c = a5;
    if (eax13) {
        if (eax13 == 2) {
            fun_10001000("line given monitor privilege; closing\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
            eax22 = fun_100012c0(0x8f9, v20, v18, v16, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            return eax22;
        } else {
            if (eax13 == 4) {
                eax13 = fun_10001000("line given owner privilege; Ready to Answer\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
            } else {
                fun_10001000("Unknown LINECALLPRIVILEGE message: closing\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
                eax23 = fun_100012c0(0x907, v20, v18, v16, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
                return eax23;
            }
        }
    }
    if (reinterpret_cast<unsigned char>(a5) > reinterpret_cast<unsigned char>(8)) {
        if (reinterpret_cast<unsigned char>(a5) > reinterpret_cast<unsigned char>(32)) {
            if (reinterpret_cast<unsigned char>(a5) > reinterpret_cast<unsigned char>(0x80)) {
                if (a5 == 0x100) {
                    esi24 = reinterpret_cast<void**>(0);
                    ebx25 = reinterpret_cast<void**>(0x98);
                    edi26 = reinterpret_cast<void**>(0);
                    zf27 = g1000c2a0 == 0;
                    if (!zf27) {
                        addr_10002a0a_12:
                        return eax13;
                    } else {
                        g1000c2a0 = reinterpret_cast<void**>(1);
                        do {
                            eax28 = fun_10002a20(ecx, esi24, ebx25, "lineGetID: ", v20, v18, v16, v14, v12, a2);
                            esi24 = eax28;
                            if (!esi24) 
                                break;
                            eax29 = g1000c10c;
                            eax30 = fun_10006002(0, 0, eax29, 4, esi24, "comm/datamodem", v20, v18, v16, v14, v12, a2);
                            ebp31 = eax30;
                            eax32 = fun_10002ec0(ecx, eax30, 0, 0, eax29, 4, esi24, "comm/datamodem", v20, v18, v16, v14, v12, a2, a3, a4, a5, a6);
                            if (!eax32) 
                                goto addr_100028ad_16;
                            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi24)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi24 + 4))) {
                                ebx25 = *reinterpret_cast<void***>(esi24 + 4);
                                ebp31 = reinterpret_cast<void**>(0xffffffff);
                            }
                        } while (ebp31);
                        goto addr_10002864_20;
                    }
                } else {
                    if (a5 == 0x200) {
                        eax33 = fun_10001000("Proceeding\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
                        return eax33;
                    }
                    if (a5 == 0x4000) 
                        goto addr_100028fe_24; else 
                        goto addr_10002691_25;
                }
            } else {
                if (a5 == 0x80) {
                    fun_10001000("Special Info, probably couldn't dial number\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
                    eax13 = fun_100012c0(0x95d, v20, v18, v16, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
                    zf34 = g1000c0e0 == 0;
                    if (!zf34) {
                        SetEvent();
                        goto v14;
                    }
                } else {
                    if (a5 == 64) {
                        fun_10001000("Line busy, shutting down\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
                        eax13 = fun_100012c0(0x94a, v20, v18, v16, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
                        zf35 = g1000c0e0 == 0;
                        if (!zf35) {
                            SetEvent();
                            goto v14;
                        }
                    } else {
                        goto addr_10002691_25;
                    }
                }
            }
        } else {
            if (a5 == 32) {
                eax36 = fun_10001000("RingBack\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
                return eax36;
            } else {
                if (a5 == 16) {
                    eax37 = fun_10001000("Dialing\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
                    return eax37;
                } else {
                    goto addr_10002691_25;
                }
            }
        }
    } else {
        if (a5 == 8) {
            eax38 = fun_10001000("Dial Tone\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
            return eax38;
        }
        if (a5 == 1) 
            goto addr_100026a2_41; else 
            goto addr_1000262a_42;
    }
    addr_100028c2_43:
    if (edi26) {
        CloseHandle(edi26);
    }
    eax13 = fun_100012c0(0xa08, v20, v18, v16, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    if (esi24) {
        LocalFree();
        goto v14;
    }
    addr_100028ad_16:
    fun_10004820(ecx, ebp31, "lineGetID unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x9d7, 0, 0, eax29, 4, esi24, "comm/datamodem", v20, v18);
    goto addr_100028c2_43;
    addr_10002864_20:
    fun_10001000("Connected!  Starting communications!\r\n", 0, 0, eax29, 4, esi24, "comm/datamodem", v20, v18);
    eax39 = *reinterpret_cast<void***>(esi24 + 20);
    edi26 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax39) + reinterpret_cast<unsigned char>(esi24));
    eax40 = fun_10002b70(ecx, 0, 0, 0, eax29, 4, esi24, "comm/datamodem", v20, v18, v16, v14);
    if (eax40) {
        ecx41 = eax40->f1c;
        g1000c388 = ecx41;
        LocalFree(eax40);
    }
    eax42 = g1000c0e0;
    eax43 = fun_10005ec0(edi26, eax42);
    if (eax43) {
        LocalFree();
        goto 4;
    }
    addr_100028fe_24:
    if (reinterpret_cast<unsigned char>(a6) > reinterpret_cast<unsigned char>(8)) {
        if (reinterpret_cast<unsigned char>(a6) > reinterpret_cast<unsigned char>(32)) {
            if (reinterpret_cast<unsigned char>(a6) > reinterpret_cast<unsigned char>(0x80)) {
                if (reinterpret_cast<unsigned char>(a6) > reinterpret_cast<unsigned char>(0x200)) {
                    if (a6 == 0x400) {
                        eax44 = reinterpret_cast<void**>("Disconnected: Incompatible");
                    } else {
                        if (a6 == 0x800) {
                            eax44 = reinterpret_cast<void**>("Disconnected: Unavail");
                        } else {
                            if (a6 == 0x1000) {
                                eax44 = reinterpret_cast<void**>("Disconnected: No Dial Tone");
                            } else {
                                eax44 = reinterpret_cast<void**>("Disconnected: LINECALLSTATE; Bad Reason");
                            }
                        }
                    }
                } else {
                    if (a6 == 0x200) {
                        eax44 = reinterpret_cast<void**>("Disconnected: Congestion");
                    } else {
                        if (a6 == 0x100) {
                            eax44 = reinterpret_cast<void**>("Disconnected: Unreachable");
                        } else {
                            eax44 = reinterpret_cast<void**>("Disconnected: LINECALLSTATE; Bad Reason");
                        }
                    }
                }
            } else {
                if (a6 == 0x80) {
                    eax44 = reinterpret_cast<void**>("Disconnected: Bad Address");
                } else {
                    if (a6 == 64) {
                        eax44 = reinterpret_cast<void**>("Disconnected: No Answer");
                    } else {
                        eax44 = reinterpret_cast<void**>("Disconnected: LINECALLSTATE; Bad Reason");
                    }
                }
            }
        } else {
            if (a6 == 32) {
                eax44 = reinterpret_cast<void**>("Disconnected: Busy");
            } else {
                if (a6 == 16) {
                    eax44 = reinterpret_cast<void**>("Disconnected: Forwarded");
                } else {
                    eax44 = reinterpret_cast<void**>("Disconnected: LINECALLSTATE; Bad Reason");
                }
            }
        }
    } else {
        if (a6 == 8) {
            eax44 = reinterpret_cast<void**>("Disconnected: Local phone picked up");
        } else {
            if (a6 == 1) {
                eax44 = reinterpret_cast<void**>("Remote Party Disconnected");
            } else {
                if (a6 == 2) {
                    eax44 = reinterpret_cast<void**>("Disconnected: Unknown reason");
                } else {
                    if (a6 == 4) {
                        eax44 = reinterpret_cast<void**>("Remote Party rejected call");
                    } else {
                        eax44 = reinterpret_cast<void**>("Disconnected: LINECALLSTATE; Bad Reason");
                    }
                }
            }
        }
    }
    fun_10001000(eax44, v20, v18, v16, v14, v12, a2, a3, a4);
    fun_10001000("\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
    eax13 = fun_10001560(v20, v18, v16, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    zf45 = g1000c0e0 == 0;
    if (!zf45) {
        eax46 = g1000c0e0;
        eax13 = reinterpret_cast<void**>(SetEvent(eax46));
        goto addr_10002a0a_12;
    }
    addr_10002691_25:
    eax47 = fun_10001000("Unhandled LINECALLSTATE message\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
    return eax47;
    addr_100026a2_41:
    fun_10001000("Line idle\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
    eax13 = fun_100012c0(0x953, v20, v18, v16, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    zf48 = g1000c0e0 == 0;
    if (!zf48) {
        SetEvent();
        goto v14;
    }
    addr_1000262a_42:
    if (a5 == 2) {
        fun_10001000("Line Offered\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
        g1000c10c = a2;
        eax49 = fun_1000600e();
        if (eax49 < 0) {
            fun_10001000("lineAccept in Offering failed.\r\n", a2, 0, 0, v20, v18, v16, v14, v12);
        }
        eax50 = g1000c10c;
        eax13 = fun_10006008();
        if (reinterpret_cast<signed char>(eax13) < reinterpret_cast<signed char>(0)) {
            fun_10001000("lineAnswer in Offering failed.\r\n", eax50, 0, 0, a2, 0, 0, v20, v18);
            goto 0;
        }
    } else {
        if (a5 == 4) {
            fun_10001000("Line Accepted\r\n", v20, v18, v16, v14, v12, a2, a3, a4);
            g1000c10c = a2;
            eax13 = fun_10006008();
            if (reinterpret_cast<signed char>(eax13) < reinterpret_cast<signed char>(0)) {
                fun_10001000("lineAnswer in Accepted failed.\r\n", a2, 0, 0, v20, v18, v16, v14, v12);
                goto v18;
            }
        } else {
            goto addr_10002691_25;
        }
    }
}

void** fun_100023e0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** eax15;

    g1000c110 = reinterpret_cast<void**>(0);
    g1000c10c = reinterpret_cast<void**>(0);
    eax15 = fun_100012c0(0x815, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    return eax15;
}

void** fun_10003170(signed char* a1);

void** fun_10002570(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_10002400(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** eax15;
    void** v16;
    void** esi17;
    void** esi18;
    void** v19;
    void** edi20;
    void** edi21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** eax28;
    void** eax29;
    void** eax30;

    v14 = reinterpret_cast<void**>(__return_address());
    eax15 = a5;
    v16 = esi17;
    esi18 = a7;
    v19 = edi20;
    edi21 = a6;
    while (reinterpret_cast<unsigned char>(eax15) > reinterpret_cast<unsigned char>(8)) {
        if (reinterpret_cast<unsigned char>(eax15) <= reinterpret_cast<unsigned char>(0x100)) 
            goto addr_10002438_4;
        if (eax15 != 0x40000) 
            goto addr_10002452_6;
        if (!edi21) 
            goto addr_100024fe_8;
        if (edi21 != 8) 
            goto addr_10002477_10;
        edi21 = reinterpret_cast<void**>(0);
        fun_10001000("Soft REINIT: LINE_LINEDEVSTATE.\r\n", v19, v16, v14, a2, a3, a4, a5, a6);
        eax15 = esi18;
        esi18 = reinterpret_cast<void**>(0);
    }
    if (eax15 == 8) {
        fun_10003170("Line selected is now disconnected.");
        eax22 = fun_100012c0(0x875, v19, v16, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        return eax22;
    } else {
        if (eax15 == 2) {
            eax23 = fun_10001000("Line Ringing.\r\n", v19, v16, v14, a2, a3, a4, a5, a6);
            return eax23;
        }
    }
    addr_10002422_16:
    eax24 = fun_10001000("Unhandled LINEDEVSTATE message\r\n", v19, v16, v14, a2, a3, a4, a5, a6);
    return eax24;
    addr_10002438_4:
    if (eax15 == 0x100) {
        fun_10003170("Line selected is now out for maintenance.");
        eax25 = fun_100012c0(0x87a, v19, v16, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        return eax25;
    } else {
        if (eax15 == 0x80) {
            fun_10003170("Line selected is now Out of Service.");
            eax26 = fun_100012c0(0x870, v19, v16, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
            return eax26;
        } else {
            goto addr_10002422_16;
        }
    }
    addr_10002452_6:
    if (eax15 == 0x400000) {
        eax27 = g1000c0f8;
        if (eax27) {
            PostMessageA();
            goto 0x4b1;
        }
    } else {
        if (eax15 == 0x1000000) {
            eax27 = fun_10001000("A Line device has been removed; no action taken.\r\n", v19, v16, v14, a2, a3, a4, a5, a6);
        } else {
            goto addr_10002422_16;
        }
    }
    return eax27;
    addr_100024fe_8:
    fun_10001220(ecx, v19, v16, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    eax28 = fun_10003170("Tapi line configuration has changed.");
    return eax28;
    addr_10002477_10:
    if (edi21 == 19) {
        fun_10001000("Soft REINIT: LINE_CREATE.\r\n", v19, v16, v14, a2, a3, a4, a5, a6);
        eax29 = fun_10002570(a2, edi21, a4, esi18, 0, 0);
        return eax29;
    } else {
        eax30 = fun_10001000("Ignoring soft REINIT\r\n", v19, v16, v14, a2, a3, a4, a5, a6);
        return eax30;
    }
}

void** fun_10002390(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** esi8;
    int1_t zf9;

    if (!a6) {
        fun_10001000("LINE_REPLY: successfully replied.\r\n", esi8, __return_address(), a2, a3, a4, a5, a6, a7);
    } else {
        fun_10004820(ecx, a6, "LINE_REPLY error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x7e6, esi8, __return_address(), a2, a3, a4, a5, a6, a7);
    }
    zf9 = g10011f70 == a5;
    if (zf9) {
        g10011f84 = reinterpret_cast<void**>(1);
        g10011f7c = a6;
    }
    return a5;
}

void** fun_10002570(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int1_t below_or_equal7;
    void** eax8;

    below_or_equal7 = reinterpret_cast<unsigned char>(g1000c0f4) <= reinterpret_cast<unsigned char>(a4);
    if (below_or_equal7) {
        g1000c0f4 = a4 + 1;
    }
    eax8 = g1000c0f8;
    if (eax8) {
        eax8 = reinterpret_cast<void**>(PostMessageA(eax8, 0x111, 0x4b2, 0));
    }
    return eax8;
}

void** fun_10003170(signed char* a1) {
    int32_t ecx2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    void** v6;
    void** esi7;
    void*** esp8;
    void** v9;
    void** edi10;
    signed char* edi11;
    uint32_t ecx12;
    uint32_t eax13;
    uint32_t ecx14;
    uint32_t ecx15;
    int1_t zf16;
    signed char* edi17;
    int32_t ecx18;
    uint32_t eax19;
    uint32_t edx20;
    int32_t ecx21;
    uint32_t eax22;
    signed char v23;
    uint32_t ecx24;
    uint32_t ecx25;
    void** ecx26;
    void** v27;
    signed char* edi28;
    void** v29;
    int32_t eax30;
    void* esp31;
    int32_t ecx32;
    int32_t eax33;
    uint32_t edx34;
    int32_t ecx35;
    int32_t eax36;
    signed char v37;
    uint32_t ecx38;
    uint32_t ecx39;
    void** v40;
    void** v41;
    int32_t v42;

    ecx2 = -1;
    eax3 = eax4 - eax5;
    v6 = esi7;
    esp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x80 - 4 - 4);
    v9 = edi10;
    edi11 = a1;
    do {
        if (!ecx2) 
            break;
        --ecx2;
        ++edi11;
    } while (*edi11 != *reinterpret_cast<signed char*>(&eax3));
    ecx12 = reinterpret_cast<uint32_t>(~ecx2);
    eax13 = ecx12;
    ecx14 = ecx12 >> 2;
    while (ecx14) {
        --ecx14;
    }
    ecx15 = eax13 & 3;
    while (ecx15) {
        --ecx15;
    }
    zf16 = g1000c10c == 0;
    if (!zf16) {
        edi17 = "\nClosing existing call.";
        ecx18 = -1;
        eax19 = eax13 - eax13;
        do {
            if (!ecx18) 
                break;
            --ecx18;
            ++edi17;
        } while (*edi17 != *reinterpret_cast<signed char*>(&eax19));
        edx20 = reinterpret_cast<uint32_t>(~ecx18);
        ecx21 = -1;
        eax22 = eax19 - eax19;
        do {
            if (!ecx21) 
                break;
            --ecx21;
        } while (v23 != *reinterpret_cast<signed char*>(&eax22));
        ecx24 = edx20 >> 2;
        while (ecx24) {
            --ecx24;
        }
        ecx25 = edx20 & 3;
        while (ecx25) {
            --ecx25;
        }
    }
    ecx26 = g1000c0ec;
    v27 = reinterpret_cast<void**>(esp8 + 8);
    edi28 = "\r\n";
    v29 = ecx26;
    eax30 = reinterpret_cast<int32_t>(MessageBoxA());
    esp31 = reinterpret_cast<void*>(esp8 - 4 - 4 - 4 - 4 - 4 + 4);
    ecx32 = -1;
    eax33 = eax30 - eax30;
    do {
        if (!ecx32) 
            break;
        --ecx32;
        ++edi28;
    } while (*edi28 != *reinterpret_cast<signed char*>(&eax33));
    edx34 = reinterpret_cast<uint32_t>(~ecx32);
    ecx35 = -1;
    eax36 = eax33 - eax33;
    do {
        if (!ecx35) 
            break;
        --ecx35;
    } while (v37 != *reinterpret_cast<signed char*>(&eax36));
    ecx38 = edx34 >> 2;
    while (ecx38) {
        --ecx38;
    }
    ecx39 = edx34 & 3;
    while (ecx39) {
        --ecx39;
    }
    fun_10001000(reinterpret_cast<int32_t>(esp31) + 8, v29, v27, "Warning", 0, v9, v6, v40, v41);
    goto v42;
}

int32_t lineAccept = 0x144fa;

int32_t fun_1000600e() {
    goto lineAccept;
}

void** g10010450 = reinterpret_cast<void**>(0);

int32_t GetCommState = 0x147f2;

int32_t GetCommProperties = 0x147de;

int32_t GetCommMask = 0x147d0;

int32_t GetCommTimeouts = 0x147be;

int32_t SetCommTimeouts = 0x147ac;

int32_t SetCommState = 0x1479c;

int32_t fun_10005ec0(void** a1, void** a2) {
    int32_t eax3;
    int1_t zf4;
    void* esp5;
    void* v6;
    void* esp7;
    void** edx8;
    void* v9;
    void* esp10;
    void** edx11;
    void* esp12;
    void* v13;
    void** edx14;
    int32_t v15;
    int32_t v16;
    int32_t v17;

    eax3 = reinterpret_cast<int32_t>(GetFileType());
    if (eax3 == 2) {
        zf4 = g10010450 == 0;
        if (zf4) {
            g10010450 = a1;
            g10011d78 = a1;
            GetCommState(a1);
            esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x74 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4);
            v6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) + 56);
            GetCommProperties(a1, v6, a1);
            esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 + 4);
            edx8 = g10010450;
            v9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) + 24);
            GetCommMask(edx8, v9, a1, v6, a1);
            esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 + 4);
            edx11 = g10010450;
            GetCommTimeouts(edx11, reinterpret_cast<int32_t>(esp10) + 4, edx8, v9, a1, v6, a1);
            esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4 - 4 + 4);
            v13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) + 4);
            edx14 = g10010450;
            SetCommTimeouts(edx14, v13, edx11, 0xfa, 0, 0, 0, 0, a1);
            SetCommState(a1, reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 + 4 + 28, edx14, v13, edx11, 0xfa, 0, 0, 0, 0, a1);
            SetEvent();
            goto v15;
        } else {
            goto v16;
        }
    } else {
        goto v17;
    }
}

void** fun_10001560(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** eax15;

    eax15 = fun_100012c0(0x305, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    return eax15;
}

int32_t lineNegotiateAPIVersion = 0x14508;

void** fun_10006014() {
    goto lineNegotiateAPIVersion;
}

int32_t lineTranslateDialog = 0x145a0;

void** fun_1000603e() {
    goto lineTranslateDialog;
}

int32_t fun_10002f80() {
    void** eax1;
    int32_t eax2;
    void** ecx3;

    eax1 = g1000c0ec;
    eax2 = reinterpret_cast<int32_t>(MessageBoxA());
    if (eax2 != 2) {
        ecx3 = g1000c0f0;
        fun_1000603e();
        goto ecx3;
    } else {
        goto eax1;
    }
}

int32_t fun_10002fd0() {
    void** eax1;

    eax1 = g1000c0ec;
    MessageBoxA();
    goto eax1;
}

int32_t fun_10003040() {
    void** eax1;

    eax1 = g1000c0ec;
    MessageBoxA();
    goto eax1;
}

int32_t fun_10003010(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    fun_10001220(ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    return 0;
}

int32_t fun_10003060() {
    void** eax1;

    eax1 = g1000c0ec;
    MessageBoxA();
    goto eax1;
}

int32_t lineSetCurrentLocation = 0x145d6;

void** fun_10006050(void** a1, int32_t a2) {
    goto lineSetCurrentLocation;
}

void** g1000dd2c = reinterpret_cast<void**>(76);

void** g1000dd30 = reinterpret_cast<void**>(32);

void** g1000dd34 = reinterpret_cast<void**>(0x76);

void** g1000dd38 = reinterpret_cast<void**>(97);

signed char g1000dd3c = 0;

int32_t g1000dd1c = 0x656e694c;

void** g1000dd0c = reinterpret_cast<void**>(32);

signed char g1000dd1a = 0;

void fun_100034f0(void** a1) {
    void** v2;
    void** ebx3;
    void** v4;
    void** esi5;
    void** eax6;
    void** v7;
    void** edi8;
    void** esi9;
    void** v10;
    void** ebp11;
    void** ebx12;
    void** ebp13;
    void** v14;
    void** eax15;
    void** v16;
    signed char dl17;
    void** v18;
    void** v19;
    int32_t eax20;
    int32_t v21;
    void** ecx22;
    void** ebx23;
    void** v24;
    void** edi25;
    void** v26;
    int32_t eax27;
    void* esp28;
    void** eax29;
    void** ebx30;
    int1_t below_or_equal31;
    void** eax32;
    void* esp33;
    void** eax34;
    void** ebp35;
    signed char* eax36;
    uint32_t eax37;
    int1_t cf38;

    v2 = ebx3;
    v4 = esi5;
    eax6 = g1000dd2c;
    v7 = edi8;
    esi9 = reinterpret_cast<void**>(0);
    v10 = ebp11;
    ebx12 = g1000dd30;
    ebp13 = g1000dd34;
    v14 = eax6;
    eax15 = g1000dd38;
    v16 = ebx12;
    dl17 = g1000dd3c;
    v18 = ebp13;
    v19 = eax15;
    eax20 = g1000dd1c;
    *reinterpret_cast<signed char*>(&v21) = dl17;
    ecx22 = reinterpret_cast<void**>("Line Name is Empty");
    ebx23 = g1000dd0c;
    v24 = ebx23;
    edi25 = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<signed char*>(&ecx22) = g1000dd1a;
    v26 = a1;
    eax27 = reinterpret_cast<int32_t>(SendDlgItemMessageA(v26, 0x3e9, 0x146, 0, 0, v10, v7, v4, v2, v14, v16, v18, v19));
    esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 56 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    if (eax27) {
        eax29 = reinterpret_cast<void**>(SendDlgItemMessageA(v24, 0x3e9, 0x147, 0, 0, v26, 0x3e9, 0x146, 0, 0, v10, v7, v4, v2, v14, v16, v18, v19));
        edi25 = eax29;
        SendDlgItemMessageA(eax20, 0x3e9, 0x14b, 0, 0, v24, 0x3e9, 0x147, 0, 0, v26, 0x3e9, 0x146, 0, 0, v10, v7, v4, v2, v14, v16, v18, v19);
        esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    }
    ebx30 = reinterpret_cast<void**>(0);
    below_or_equal31 = reinterpret_cast<unsigned char>(g1000c0f4) <= reinterpret_cast<unsigned char>(0);
    if (!below_or_equal31) {
        do {
            eax32 = fun_10003240(ebx30, v26, 0x3e9, 0x146, 0, 0, v10, v7, v4, v2, v14, v16, v18, v19);
            esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 - 4 + 4 + 4);
            if (!eax32 || (eax34 = fun_10002bf0(ecx22, esi9, ebx30, eax32, v26, 0x3e9, 0x146, 0, 0, v10, v7, v4, v2, v14, v16, v18, v19), esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 - 4 - 4 - 4 + 12 + 4), esi9 = eax34, esi9 == 0)) {
                ebp35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp33) + 16);
            } else {
                ecx22 = *reinterpret_cast<void***>(esi9 + 32);
                if (!ecx22 || (!*reinterpret_cast<void***>(esi9 + 36) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi9 + 40) == 1))) {
                    ebp35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp33) + 36);
                } else {
                    ebp35 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi9 + 36)) + reinterpret_cast<unsigned char>(esi9));
                    if (!*reinterpret_cast<void***>(ebp35)) {
                        ebp35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp33) + 52);
                    } else {
                        eax36 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx22) + reinterpret_cast<unsigned char>(ebp35) + 0xffffffff);
                        if (*eax36) {
                            *eax36 = 0;
                            fun_10005220(ecx22, "Device name for device 0x%lx is not null terminated.\r\n", ebx30, v26);
                            esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 - 4 - 4 + 4 + 8);
                        }
                    }
                }
            }
            SendDlgItemMessageA(v24, 0x3e9, 0x143, 0, ebp35, v26, 0x3e9, 0x146, 0, 0, v10, v7, v4, v2, v14, v16, v18, v19);
            esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            if (ebp35 != reinterpret_cast<int32_t>(esp28) + 16 && (reinterpret_cast<int1_t>(edi25 == 0xffffffff) && (eax37 = fun_100032c0(ecx22, ebx30, v24, 0x3e9, 0x143, 0, ebp35, v26, 0x3e9, 0x146, 0, 0, v10, v7, v4, v2, v14, v16, v18, v19, v21), esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 - 4 + 4 + 4), !eax37))) {
                edi25 = ebx30;
            }
            ++ebx30;
            cf38 = reinterpret_cast<unsigned char>(ebx30) < reinterpret_cast<unsigned char>(g1000c0f4);
        } while (cf38);
    }
    if (esi9) {
        LocalFree(esi9, v26, 0x3e9, 0x146, 0, 0, v10, v7, v4, v2, v14, v16, v18, v19);
    }
    if (reinterpret_cast<int1_t>(edi25 == 0xffffffff)) {
    }
    SendDlgItemMessageA();
    goto v21;
}

void** g10011f78;

void fun_10003f50(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;
    void** v11;
    void** ebx12;
    void** v13;
    void** esi14;
    void** v15;
    void** edi16;
    void** ebx17;
    void** v18;
    void** ebp19;
    void** esi20;
    int1_t zf21;
    void** eax22;
    void** esi23;
    void** edi24;
    void** eax25;
    void** eax26;
    void** edi27;
    int32_t eax28;
    void** eax29;
    void** eax30;
    void** v31;
    void** eax32;
    void** ebp33;
    int32_t eax34;
    void** eax35;
    void** ecx36;
    void** eax37;
    void** eax38;
    void** edi39;
    void*** esi40;
    uint32_t ecx41;
    uint32_t ecx42;
    void** eax43;
    void** ecx44;
    void** eax45;
    void** eax46;
    void** edi47;
    void*** esi48;
    uint32_t ecx49;

    v10 = reinterpret_cast<void**>(__return_address());
    v11 = ebx12;
    v13 = esi14;
    v15 = edi16;
    ebx17 = reinterpret_cast<void**>(0);
    v18 = ebp19;
    esi20 = reinterpret_cast<void**>(24);
    zf21 = g1000c2a4 == 0;
    if (!zf21) {
        addr_10003fff_2:
        eax22 = g10011f78;
        esi23 = a2;
        edi24 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax22 + reinterpret_cast<unsigned char>(eax22) * 4) + 0x1388);
    } else {
        do {
            eax25 = fun_10002a20(ecx, ebx17, esi20, "PreConfigureDevice - lineGetDevConfig: ", v18, v15, v13, v11, v10, a2);
            ebx17 = eax25;
            if (!ebx17) 
                goto addr_10004118_4;
            eax26 = fun_10006062();
            edi27 = eax26;
            eax28 = fun_10002ec0(ecx, eax26, a3, ebx17, "comm/datamodem", v18, v15, v13, v11, v10, a2, a3, a4, a5, a6, a7, a8, a9);
            if (!eax28) 
                goto addr_100040ad_6;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx17)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx17 + 4))) {
                esi20 = *reinterpret_cast<void***>(ebx17 + 4);
                edi27 = reinterpret_cast<void**>(0xffffffff);
            }
        } while (edi27);
        goto addr_10003faf_10;
    }
    do {
        eax29 = fun_10002a20(ecx, ebx17, edi24, "PreConfigureDevice - lineConfigDialogEdit: ", v18, v15, v13, v11, v10, a2);
        ebx17 = eax29;
        if (!ebx17) 
            break;
        eax30 = g10011f78;
        ecx = g1000c2a4;
        v31 = ecx;
        eax32 = fun_1000605c();
        ebp33 = eax32;
        eax34 = fun_10002ec0(ecx, eax32, a3, esi23, "comm/datamodem", v31, eax30, ebx17, v18, v15, v13, v11, v10, a2, a3, a4, a5, a6);
        if (!eax34) 
            goto addr_100040fc_13;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx17 + 4)) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx17))) {
            ebp33 = reinterpret_cast<void**>(0xffffffff);
            MessageBoxA(esi23, "Internal Error: Unable to set line configuration.\r\nPlease try again.", "Oops", 0);
            edi24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx17 + 4)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx17 + 4)));
        }
    } while (ebp33);
    goto addr_1000407b_17;
    addr_10004118_4:
    return;
    addr_100040fc_13:
    fun_10004820(ecx, ebp33, "lineConfigDialogEdit unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x12bb, a3, esi23, "comm/datamodem", v31, eax30, ebx17, v18, v15);
    LocalFree(ebx17);
    goto addr_10004118_4;
    addr_1000407b_17:
    eax35 = *reinterpret_cast<void***>(ebx17 + 16);
    ecx36 = g1000c2a4;
    g10011f78 = eax35;
    eax37 = fun_10002a20(ecx36, ecx36, eax35 + 1, "PreConfigureDevice - Reallocate device config: ", a3, esi23, "comm/datamodem", v31, eax30, ebx17);
    g1000c2a4 = eax37;
    if (eax37) {
        eax38 = g10011f78;
        edi39 = g1000c2a4;
        esi40 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx17 + 20)) + reinterpret_cast<unsigned char>(ebx17));
        ecx41 = reinterpret_cast<unsigned char>(eax38) >> 2;
        while (ecx41) {
            --ecx41;
            *reinterpret_cast<void***>(edi39) = *esi40;
            edi39 = edi39 + 4;
            esi40 = esi40 + 4;
        }
        ecx42 = reinterpret_cast<unsigned char>(eax38) & 3;
        while (ecx42) {
            --ecx42;
            *reinterpret_cast<void***>(edi39) = *esi40;
            ++edi39;
            ++esi40;
        }
        LocalFree();
        goto v31;
    } else {
        LocalFree();
        goto v31;
    }
    addr_100040ad_6:
    fun_10004820(ecx, edi27, "lineGetDevCaps unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x127d, a3, ebx17, "comm/datamodem", v18, v15, v13, v11, v10);
    LocalFree();
    goto v18;
    addr_10003faf_10:
    eax43 = *reinterpret_cast<void***>(ebx17 + 16);
    ecx44 = g1000c2a4;
    g10011f78 = eax43;
    eax45 = fun_10002a20(ecx44, ecx44, eax43 + 1, "PreConfigureDevice - Allocate device config: ", a3, ebx17, "comm/datamodem", v18, v15, v13);
    g1000c2a4 = eax45;
    if (eax45) {
        eax46 = g10011f78;
        edi47 = g1000c2a4;
        esi48 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx17 + 20)) + reinterpret_cast<unsigned char>(ebx17));
        ecx49 = reinterpret_cast<unsigned char>(eax46) >> 2;
        while (ecx49) {
            --ecx49;
            *reinterpret_cast<void***>(edi47) = *esi48;
            edi47 = edi47 + 4;
            esi48 = esi48 + 4;
        }
        ecx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax46) & 3);
        while (ecx) {
            --ecx;
            *reinterpret_cast<void***>(edi47) = *esi48;
            ++edi47;
            ++esi48;
        }
        goto addr_10003fff_2;
    } else {
        LocalFree();
        goto v18;
    }
}

int32_t lineGetIcon = 0x145b6;

int32_t fun_10006044(void** a1, void** a2, void** a3, void** a4) {
    goto lineGetIcon;
}

struct s32 {
    int32_t f0;
    int32_t f4;
};

uint32_t fun_10005130(uint32_t a1, uint32_t a2, struct s32* a3, uint32_t a4) {
    uint32_t esi5;
    uint32_t ebp6;
    uint32_t v7;
    uint32_t ebx8;
    int32_t* edi9;
    uint32_t v10;
    int32_t v11;
    int32_t eax12;
    int32_t eax13;
    uint32_t eax14;
    int32_t v15;
    int32_t eax16;
    int32_t v17;
    uint32_t eax18;

    esi5 = 0;
    ebp6 = 1;
    v7 = 1;
    if (a2) {
        if (a4 <= 1) {
            ebx8 = a1;
        } else {
            edi9 = &a3->f4;
            ebx8 = a1;
            v10 = a4 - 1;
            do {
                if (a2 & ebp6) {
                    v11 = *edi9;
                    if (!v7) {
                        eax12 = reinterpret_cast<int32_t>(wsprintfA(ebx8 + esi5, ", %s", v11));
                        esi5 = esi5 + eax12;
                    } else {
                        eax13 = reinterpret_cast<int32_t>(wsprintfA(ebx8 + esi5, "%s", v11));
                        v7 = 0;
                        esi5 = esi5 + eax13;
                    }
                }
                ++edi9;
                eax14 = ~ebp6;
                ebp6 = ebp6 + ebp6;
                a2 = a2 & eax14;
                --v10;
            } while (v10);
        }
        if (a2) {
            if (!v7) {
                v15 = reinterpret_cast<int32_t>(", Unknown flags '0x%lx'");
            } else {
                v15 = reinterpret_cast<int32_t>("Unknown flags '0x%lx'");
            }
            eax16 = reinterpret_cast<int32_t>(wsprintfA(ebx8 + esi5, v15, a2));
            esi5 = esi5 + eax16;
        }
        return esi5;
    } else {
        v17 = a3->f0;
        eax18 = reinterpret_cast<uint32_t>(wsprintfA(a1, "%s", v17));
        return eax18;
    }
}

void fun_10006580(uint32_t a1) {
    struct s27* eax2;

    eax2 = fun_100068e0();
    eax2->f14 = a1;
    return;
}

struct s33 {
    signed char f0;
    signed char f1;
    signed char f2;
    signed char f3;
    signed char f4;
    signed char f5;
    signed char f6;
};

uint32_t fun_10006590();

void fun_10005300(struct s33* a1) {
    uint32_t eax2;
    uint32_t eax3;
    signed char al4;
    int32_t edx5;
    int32_t eax6;
    int32_t edi7;
    uint32_t esi8;
    uint32_t eax9;
    signed char al10;
    int32_t edx11;
    int32_t eax12;
    int32_t edi13;
    int32_t edx14;
    uint32_t esi15;
    uint32_t eax16;
    signed char al17;
    int32_t edx18;
    int32_t eax19;
    int32_t edi20;
    uint32_t esi21;
    uint32_t eax22;
    signed char al23;
    int32_t edx24;
    int32_t eax25;
    uint32_t esi26;
    uint32_t eax27;
    signed char al28;
    int32_t edx29;
    uint32_t eax30;

    eax2 = fun_10006590();
    eax3 = eax2 / 0x186a0;
    al4 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax3) + 48);
    a1->f0 = al4;
    edx5 = 48 - al4;
    eax6 = edx5 + ((edx5 << 5) - edx5) * 4;
    edi7 = eax6 + eax6 * 4;
    esi8 = eax2 + (edi7 + edi7 * 4 << 5);
    eax9 = esi8 / 0x2710;
    al10 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax9) + 48);
    edx11 = 48 - al10;
    a1->f1 = al10;
    eax12 = edx11 + edx11 * 4;
    edi13 = eax12 + eax12 * 4;
    edx14 = edi13 + edi13 * 4;
    esi15 = esi8 + (edx14 + edx14 * 4 << 4);
    eax16 = esi15 / 0x3e8;
    al17 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax16) + 48);
    edx18 = 48 - al17;
    a1->f2 = al17;
    eax19 = edx18 + edx18 * 4;
    edi20 = eax19 + eax19 * 4;
    esi21 = esi15 + (edi20 + edi20 * 4) * 8;
    eax22 = esi21 / 100;
    al23 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax22) + 48);
    a1->f3 = al23;
    edx24 = 48 - al23 << 2;
    eax25 = edx24 + edx24 * 4;
    esi26 = esi21 + (eax25 + eax25 * 4);
    eax27 = esi26 / 10;
    al28 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax27) + 48);
    edx29 = 48 - al28;
    a1->f4 = al28;
    a1->f6 = 0;
    eax30 = esi26 + (edx29 + edx29 * 4) * 2;
    a1->f5 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax30) + 48);
    return;
}

void fun_10005fa0();

int32_t fun_10005980(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    fun_10005fa0();
    fun_10001220(ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    return 1;
}

signed char* fun_10008e60(void** a1, void** a2, void** a3);

uint32_t fun_10008310(void* a1, void* a2, int32_t a3, uint32_t a4, int32_t a5, uint32_t a6) {
    uint32_t esi7;
    int32_t ebp8;
    void** ebp9;
    void** edi10;
    void** esi11;
    uint32_t eax12;
    uint32_t edx13;
    uint32_t edx14;
    uint32_t edi15;
    uint32_t edx16;
    uint32_t edi17;
    uint32_t tmp32_18;
    int1_t zf19;
    uint32_t edi20;
    int32_t eax21;

    esi7 = reinterpret_cast<uint32_t>(a1) - 0x76c;
    if (reinterpret_cast<int32_t>(esi7) < reinterpret_cast<int32_t>(70) || reinterpret_cast<int32_t>(esi7) > reinterpret_cast<int32_t>(0x8a)) {
        return 0xffffffff;
    } else {
        ebp8 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(a2) * 4 + 0x10011164) + a3;
        if (!(esi7 & 3) && reinterpret_cast<int32_t>(a2) > 2) {
            ++ebp8;
        }
        fun_10008e60(ebp9, edi10, esi11);
        eax12 = esi7 + (esi7 + esi7 * 8) * 8;
        edx13 = (esi7 + 0xffffffff & 0xfffffffc) + (eax12 + eax12 * 4 + ebp8) * 4;
        edx14 = a4 + (edx13 + edx13 * 2) * 2 << 2;
        edi15 = edx14 + edx14 * 2;
        edx16 = edi15 + edi15 * 4 + a5 << 2;
        edi17 = edx16 + edx16 * 2;
        tmp32_18 = edi17 + edi17 * 4 + g10011100;
        zf19 = g10011104 == 0;
        edi20 = tmp32_18 + a6 + 0x7c558180;
        if (!zf19 && (eax21 = fun_10009120(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 4 - 4 - 4 - 4 - 4 + 4 + 16), !!eax21)) {
            edi20 = edi20 - 0xe10;
        }
        return edi20;
    }
}

struct s34 {
    signed char f0;
    signed char f1;
};

void fun_10008128(int32_t ecx);

void fun_10008150();

void fun_100081c4(uint32_t ecx);

/* (image base) */
int32_t image_base_ = 0x10009680;

/* (image base) */
int32_t image_base_ = 0x10009680;

/* (image base) */
int32_t image_base_ = 0x10009680;

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0x88);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0x78);

int32_t fun_10007820(void** a1, struct s16* a2, void* a3) {
    int32_t v4;
    struct s34* v5;
    signed char bl6;
    void* esp7;
    int32_t v8;
    void* esi9;
    void* v10;
    void** edi11;
    void** v12;
    uint32_t eax13;
    uint32_t eax14;
    int32_t ecx15;
    int32_t eax16;
    int16_t* ecx17;
    void* v18;
    void** edx19;
    int32_t v20;
    int32_t v21;
    void** v22;
    void** v23;
    void** v24;
    uint32_t eax25;
    int32_t ecx26;
    void** eax27;
    void** eax28;
    uint32_t ecx29;
    struct s34* eax30;
    int32_t eax31;
    uint32_t ecx32;
    int32_t eax33;
    void*** esp34;
    void** v35;
    void** eax36;
    signed char v37;
    void** eax38;
    void*** esp39;
    void** eax40;
    void** v41;
    int32_t* esp42;
    void*** esp43;
    void** eax44;
    uint32_t edi45;
    int32_t ecx46;
    void* eax47;
    signed char v48;
    void** ebx49;
    void** eax50;
    void** eax51;
    void** edi52;
    void** ebx53;
    void** eax54;
    void** ebp55;
    void*** esp56;
    void** eax57;
    void** ecx58;
    void** eax59;
    int32_t ecx60;
    void** edi61;
    void* eax62;
    void** edi63;
    void** eax64;
    void** v65;
    int32_t** esp66;
    void** ebx67;
    void** ebp68;
    void** eax69;
    void** eax70;
    void*** esp71;
    void** ecx72;
    void*** esp73;
    void** v74;
    void** eax75;
    void** eax76;
    void** v77;
    void** v78;
    void*** esp79;
    void** v80;
    void** eax81;
    void** eax82;
    void** eax83;
    void** v84;
    void** v85;
    void* v86;
    void** eax87;
    void** v88;
    uint32_t eax89;
    void** eax90;

    v4 = reinterpret_cast<int32_t>(__return_address());
    v5 = reinterpret_cast<struct s34*>(&a2->f1);
    bl6 = a2->f0;
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x248 - 4 - 4 - 4 - 4);
    v8 = 0;
    if (bl6) {
        esi9 = v10;
        edi11 = v12;
        while (!0) {
            if (bl6 < 32 || bl6 > 0x78) {
                eax13 = 0;
            } else {
                eax14 = 0;
                *reinterpret_cast<signed char*>(&eax14) = *reinterpret_cast<signed char*>(bl6 + 0x1000aff0);
                eax13 = eax14 & 15;
            }
            ecx15 = *reinterpret_cast<signed char*>(v8 + eax13 * 8 + 0x1000b010) >> 4;
            v8 = ecx15;
            switch (ecx15) {
                addr_10007a04_9:
            case 0:
                eax16 = 0;
                ecx17 = image_base_;
                *reinterpret_cast<signed char*>(&eax16) = bl6;
                v18 = reinterpret_cast<void*>(0);
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx17 + eax16) + 1) & 0x80) {
                    fun_10008200(static_cast<int32_t>(bl6), a1, reinterpret_cast<int32_t>(esp7) + 40);
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 + 4 + 12);
                    bl6 = v5->f0;
                    v5 = reinterpret_cast<struct s34*>(&v5->f1);
                }
                edx19 = reinterpret_cast<void**>(static_cast<int32_t>(bl6));
                fun_10008200(edx19, a1, reinterpret_cast<int32_t>(esp7) + 40);
                esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 + 4 + 12);
                goto addr_10007a5f_12;
            case 1:
                v20 = 0;
                v21 = 0;
                v22 = reinterpret_cast<void**>(0);
                v23 = reinterpret_cast<void**>(0);
                v24 = reinterpret_cast<void**>(0xffffffff);
                esi9 = reinterpret_cast<void*>(0);
                v18 = reinterpret_cast<void*>(0);
                goto addr_10007a5f_12;
            case 2:
                eax25 = bl6 - 32;
                if (eax25 <= 16) {
                    ecx26 = 0;
                    *reinterpret_cast<signed char*>(&ecx26) = *reinterpret_cast<signed char*>(eax25 + reinterpret_cast<int32_t>(fun_10008128));
                    switch (ecx26) {
                    case 0:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 2);
                        break;
                    case 1:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x80);
                        break;
                    case 2:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 1);
                        break;
                    case 3:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 4);
                        break;
                    case 4:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 8);
                    case 5:
                        goto 0x10007a5f;
                    }
                    goto addr_10007a5f_12;
                }
            case 3:
                if (bl6 != 42) {
                    edx19 = v22 + reinterpret_cast<unsigned char>(v22) * 4;
                    v22 = reinterpret_cast<void**>(bl6 + reinterpret_cast<unsigned char>(edx19) * 2 + 0xffffffd0);
                    goto addr_10007a5f_12;
                } else {
                    eax27 = fun_100082d0(reinterpret_cast<int32_t>(esp7) + 0x264);
                    v22 = eax27;
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                    if (reinterpret_cast<signed char>(eax27) < reinterpret_cast<signed char>(0)) {
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 4);
                        v22 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax27));
                        goto addr_10007a5f_12;
                    }
                }
            case 4:
                v24 = reinterpret_cast<void**>(0);
                goto addr_10007a5f_12;
            case 5:
                if (bl6 != 42) {
                    edx19 = v24 + reinterpret_cast<unsigned char>(v24) * 4;
                    v24 = reinterpret_cast<void**>(bl6 + reinterpret_cast<unsigned char>(edx19) * 2 + 0xffffffd0);
                    goto addr_10007a5f_12;
                } else {
                    eax28 = fun_100082d0(reinterpret_cast<int32_t>(esp7) + 0x264);
                    v24 = eax28;
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                    if (reinterpret_cast<signed char>(eax28) < reinterpret_cast<signed char>(0)) {
                        v24 = reinterpret_cast<void**>(0xffffffff);
                        goto addr_10007a5f_12;
                    }
                }
            case 6:
                ecx29 = bl6 - 73;
                if (ecx29 > 46) {
                    addr_10007a5f_12:
                    eax30 = v5;
                    v5 = reinterpret_cast<struct s34*>(&v5->f1);
                    bl6 = eax30->f0;
                    if (bl6) 
                        break; else 
                        goto addr_10007a77_31;
                } else {
                    eax31 = 0;
                    *reinterpret_cast<signed char*>(&eax31) = *reinterpret_cast<signed char*>(ecx29 + reinterpret_cast<int32_t>(fun_10008150));
                    switch (eax31) {
                    case 0:
                        if (v5->f0 != 54 || v5->f1 != 52) {
                            v8 = 0;
                            goto addr_10007a04_9;
                        } else {
                            ++v5;
                            esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x8000);
                            break;
                        }
                    case 1:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 32);
                        break;
                    case 2:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 16);
                        break;
                    case 3:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x800);
                    case 4:
                        goto 0x10007a5f;
                    }
                    goto addr_10007a5f_12;
                }
            case 7:
                ecx32 = bl6 - 67;
                if (ecx32 > 53) {
                    addr_10007f94_40:
                    if (v21) 
                        goto addr_10007a5f_12;
                } else {
                    eax33 = 0;
                    *reinterpret_cast<signed char*>(&eax33) = *reinterpret_cast<signed char*>(ecx32 + reinterpret_cast<int32_t>(fun_100081c4));
                    switch (eax33) {
                    case 0:
                        if (!(reinterpret_cast<uint32_t>(esi9) & 0x830)) {
                            esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x800);
                        }
                    case 6:
                        esp34 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp7) - 4);
                        v35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0x264);
                        if (!(reinterpret_cast<uint32_t>(esi9) & 0x810)) {
                            edi11 = reinterpret_cast<void**>(1);
                            eax36 = fun_100082d0(v35);
                            v37 = *reinterpret_cast<signed char*>(&eax36);
                            esp7 = reinterpret_cast<void*>(esp34 - 4 + 4 + 4);
                        } else {
                            eax38 = fun_10008300(v35);
                            esp39 = esp34 - 4 + 4 + 4 - 4;
                            eax40 = fun_10008ca0(esp39 + 92, eax38);
                            esp7 = reinterpret_cast<void*>(esp39 - 4 - 4 + 4 + 8);
                            edi11 = eax40;
                            if (reinterpret_cast<signed char>(edi11) < reinterpret_cast<signed char>(0)) {
                                v21 = 1;
                            }
                        }
                        v41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 88);
                        break;
                    case 1:
                    case 2:
                        v20 = 1;
                        bl6 = reinterpret_cast<signed char>(bl6 + 32);
                    case 8:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 64);
                        v41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 88);
                        if (reinterpret_cast<signed char>(v24) >= reinterpret_cast<signed char>(0)) {
                            if (!v24 && bl6 == 0x67) {
                                v24 = reinterpret_cast<void**>(1);
                            }
                        } else {
                            v24 = reinterpret_cast<void**>(6);
                        }
                        esp42 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp7) - 4);
                        esp43 = reinterpret_cast<void***>(esp42 - 1);
                        edx19 = reinterpret_cast<void**>(static_cast<int32_t>(bl6));
                        eax44 = reinterpret_cast<void**>(image_base_(esp43 + 88, esp42 + 23, edx19, v24, v20));
                        esp7 = reinterpret_cast<void*>(esp43 - 4 - 4 - 4 - 4 + 4 + 20);
                        edi45 = reinterpret_cast<uint32_t>(esi9) & 0x80;
                        if (edi45 && !v24) {
                            eax44 = reinterpret_cast<void**>(image_base_(reinterpret_cast<int32_t>(esp7) + 88));
                            esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                        }
                        if (bl6 == 0x67 && !edi45) {
                            eax44 = reinterpret_cast<void**>(image_base_(reinterpret_cast<int32_t>(esp7) + 88));
                            esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                        }
                        if (v37 == 45) {
                            esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x100);
                            eax44 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 89);
                            v41 = eax44;
                        }
                        ecx46 = -1;
                        eax47 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax44) - reinterpret_cast<unsigned char>(eax44));
                        do {
                            if (!ecx46) 
                                break;
                            --ecx46;
                            esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) + 1);
                        } while (v48 != *reinterpret_cast<signed char*>(&eax47));
                        edi11 = reinterpret_cast<void**>(~ecx46 + 0xffffffff);
                        break;
                    case 3:
                        if (!(reinterpret_cast<uint32_t>(esi9) & 0x830)) {
                            esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x800);
                        }
                    case 13:
                        ebx49 = reinterpret_cast<void**>(0x7fffffff);
                        if (v24 != 0xffffffff) {
                            ebx49 = v24;
                        }
                        eax50 = fun_100082d0(reinterpret_cast<int32_t>(esp7) + 0x264);
                        v41 = eax50;
                        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                        if (!(reinterpret_cast<uint32_t>(esi9) & 0x810)) {
                            if (!v41) {
                                eax51 = image_base_;
                                v41 = eax51;
                            }
                            edi52 = v41;
                            ebx53 = ebx49 - 1;
                            if (ebx49) {
                                do {
                                    if (!*reinterpret_cast<void***>(edi52)) 
                                        break;
                                    ++edi52;
                                    eax54 = ebx53;
                                    --ebx53;
                                } while (eax54);
                            }
                            edi11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi52) - reinterpret_cast<unsigned char>(v41));
                            break;
                        } else {
                            if (!eax50) {
                                eax50 = image_base_;
                                v41 = eax50;
                            }
                            ebp55 = v41;
                            edi11 = reinterpret_cast<void**>(0);
                            v18 = reinterpret_cast<void*>(1);
                            if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx49) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx49 == 0)) 
                                break;
                        }
                        do {
                            eax50 = *reinterpret_cast<void***>(ebp55);
                            if (!eax50) 
                                goto addr_10007f94_40;
                            esp56 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp7) - 4);
                            eax50 = fun_10008ca0(esp56 + 20, eax50);
                            esp7 = reinterpret_cast<void*>(esp56 - 4 - 4 + 4 + 8);
                            if (!eax50) 
                                goto addr_10007f94_40;
                            edi11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi11) + reinterpret_cast<unsigned char>(eax50));
                            ebp55 = ebp55 + 2;
                        } while (reinterpret_cast<signed char>(edi11) < reinterpret_cast<signed char>(ebx49));
                        break;
                        addr_10007c88_82:
                    case 4:
                        goto addr_10007c90_83;
                    case 5:
                        eax57 = fun_100082d0(reinterpret_cast<int32_t>(esp7) + 0x264);
                        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                        if (!eax57 || (ecx58 = *reinterpret_cast<void***>(eax57 + 4), ecx58 == 0)) {
                            eax59 = image_base_;
                            ecx60 = -1;
                            edi61 = eax59;
                            v41 = eax59;
                            eax62 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax59) - reinterpret_cast<unsigned char>(eax59));
                            do {
                                if (!ecx60) 
                                    break;
                                --ecx60;
                                ++edi61;
                                esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) + 1);
                            } while (*reinterpret_cast<void***>(edi61) != *reinterpret_cast<void***>(&eax62));
                            edi11 = reinterpret_cast<void**>(~ecx60 + 0xffffffff);
                            break;
                        } else {
                            if (!(reinterpret_cast<uint32_t>(esi9) & 0x800)) {
                                v18 = reinterpret_cast<void*>(0);
                                edi11 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax57))));
                                v41 = ecx58;
                                break;
                            } else {
                                v18 = reinterpret_cast<void*>(1);
                                edi11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax57)))) >> 1);
                                v41 = ecx58;
                                break;
                            }
                        }
                    case 7:
                    case 9:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 64);
                        edi63 = reinterpret_cast<void**>(10);
                        goto addr_10007cb4_93;
                    case 10:
                        eax64 = fun_100082d0(reinterpret_cast<int32_t>(esp7) + 0x264);
                        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                        if (!(reinterpret_cast<uint32_t>(esi9) & 32)) {
                            *reinterpret_cast<void***>(eax64) = reinterpret_cast<void**>(0);
                        } else {
                            *reinterpret_cast<void***>(eax64) = reinterpret_cast<void**>(0);
                        }
                        v21 = 1;
                        break;
                    case 11:
                        edi63 = reinterpret_cast<void**>(8);
                        if (reinterpret_cast<uint32_t>(esi9) & 0x80) {
                            esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x200);
                            goto addr_10007cb4_93;
                        }
                    case 12:
                        v24 = reinterpret_cast<void**>(8);
                        goto addr_10007c88_82;
                    case 14:
                        edi63 = reinterpret_cast<void**>(10);
                        goto addr_10007cb4_93;
                    case 15:
                        goto addr_10007c90_83;
                    case 16:
                        goto 0x10007f94;
                    }
                    goto addr_10007f94_40;
                }
                if (!(reinterpret_cast<uint32_t>(esi9) & 64)) 
                    goto addr_10007fda_104;
                if (!(reinterpret_cast<uint32_t>(esi9) & 0x100)) {
                    if (!(reinterpret_cast<uint32_t>(esi9) & 1)) {
                        if (!(reinterpret_cast<uint32_t>(esi9) & 2)) {
                            addr_10007fda_104:
                            v65 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v22) - reinterpret_cast<unsigned char>(v23) - reinterpret_cast<unsigned char>(edi11));
                            if (!(reinterpret_cast<uint32_t>(esi9) & 12)) {
                                fun_10008250(32, v65, a1, reinterpret_cast<int32_t>(esp7) + 40);
                                esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                            }
                        } else {
                            goto addr_10007fd2_110;
                        }
                    } else {
                        goto addr_10007fd2_110;
                    }
                } else {
                    goto addr_10007fd2_110;
                }
                edx19 = v23;
                esp66 = reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(esp7) - 4);
                fun_10008290(reinterpret_cast<int32_t>(esp66) + 22, edx19, a1, reinterpret_cast<int32_t>(esp7) + 40);
                esp7 = reinterpret_cast<void*>(esp66 - 1 - 1 - 1 - 1 + 1 + 4);
                if (reinterpret_cast<uint32_t>(esi9) & 8 && !(reinterpret_cast<uint32_t>(esi9) & 4)) {
                    edx19 = v65;
                    fun_10008250(48, edx19, a1, reinterpret_cast<int32_t>(esp7) + 40);
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                }
                if (!v18 || reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi11 == 0)) {
                    edx19 = v41;
                    fun_10008290(edx19, edi11, a1, reinterpret_cast<int32_t>(esp7) + 40);
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                } else {
                    ebx67 = v41;
                    ebp68 = edi11 + 0xffffffff;
                    do {
                        eax69 = ebx67;
                        eax69 = *reinterpret_cast<void***>(eax69);
                        ebx67 = ebx67 + 2;
                        eax70 = fun_10008ca0(reinterpret_cast<int32_t>(esp7) + 20, eax69);
                        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 + 4 + 8);
                        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax70) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax70 == 0)) 
                            break;
                        edx19 = a1;
                        esp71 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4);
                        fun_10008290(esp71 + 32, eax70, edx19, reinterpret_cast<int32_t>(esp7) + 40);
                        esp7 = reinterpret_cast<void*>(esp71 - 4 - 4 + 4 + 16);
                        ecx72 = ebp68;
                        --ebp68;
                    } while (ecx72);
                    goto addr_100080a5_120;
                }
                addr_100080c2_121:
                if (reinterpret_cast<uint32_t>(esi9) & 4) {
                    edx19 = v65;
                    fun_10008250(32, edx19, a1, reinterpret_cast<int32_t>(esp7) + 40);
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                    goto addr_10007a5f_12;
                }
                addr_100080a5_120:
                goto addr_100080c2_121;
                addr_10007fd2_110:
                v23 = reinterpret_cast<void**>(1);
                goto addr_10007fda_104;
                addr_10007cb4_93:
                if (!(reinterpret_cast<uint32_t>(esi9) & 0x8000)) {
                    if (!(reinterpret_cast<uint32_t>(esi9) & 32)) {
                        esp73 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp7) - 4);
                        v74 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0x264);
                        if (!(reinterpret_cast<uint32_t>(esi9) & 64)) {
                            eax75 = fun_100082d0(v74);
                            esp7 = reinterpret_cast<void*>(esp73 - 4 + 4 + 4);
                        } else {
                            eax76 = fun_100082d0(v74);
                            v77 = eax76;
                            esp7 = reinterpret_cast<void*>(esp73 - 4 + 4 + 4);
                            __asm__("cdq ");
                            v78 = edx19;
                            goto addr_10007d5c_127;
                        }
                    } else {
                        esp79 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp7) - 4);
                        v80 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0x264);
                        if (!(reinterpret_cast<uint32_t>(esi9) & 64)) {
                            eax81 = fun_100082d0(v80);
                            eax75 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax81)));
                            esp7 = reinterpret_cast<void*>(esp79 - 4 + 4 + 4);
                        } else {
                            eax82 = fun_100082d0(v80);
                            v77 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax82)));
                            esp7 = reinterpret_cast<void*>(esp79 - 4 + 4 + 4);
                            __asm__("cdq ");
                            v78 = edx19;
                            goto addr_10007d5c_127;
                        }
                    }
                } else {
                    eax83 = fun_100082e0(reinterpret_cast<int32_t>(esp7) + 0x264);
                    v77 = eax83;
                    v78 = edx19;
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                    goto addr_10007d5c_127;
                }
                v77 = eax75;
                v78 = reinterpret_cast<void**>(0);
                addr_10007d5c_127:
                if (!(reinterpret_cast<uint32_t>(esi9) & 64) || (reinterpret_cast<signed char>(v78) > reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(v78) >= reinterpret_cast<signed char>(0) && reinterpret_cast<unsigned char>(v77) >= reinterpret_cast<unsigned char>(0))) {
                    v84 = v77;
                    v85 = v78;
                } else {
                    v84 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v77));
                    esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x100);
                    v85 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(v78) + reinterpret_cast<uint1_t>(!!v77)));
                }
                if (!(reinterpret_cast<uint32_t>(esi9) & 0x8000)) {
                    v84 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v84) & 0xffffffff);
                    v85 = reinterpret_cast<void**>(0);
                }
                if (reinterpret_cast<signed char>(v24) >= reinterpret_cast<signed char>(0)) {
                    esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) & 0xfffffff7);
                } else {
                    v24 = reinterpret_cast<void**>(1);
                }
                if (!v85 && !v84) {
                    v23 = reinterpret_cast<void**>(0);
                }
                v86 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) + 0x257);
                while ((eax87 = v24, --v24, !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax87) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax87 == 0))) || (v85 || v84)) {
                    __asm__("cdq ");
                    v88 = edx19;
                    eax89 = fun_10008de0(v84, v85, edi63, v88);
                    edx19 = edi63;
                    eax90 = fun_10008d70(v84, v85, edx19, v88);
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 - 4 + 16 + 4 - 4 - 4 - 4 - 4 - 4 + 16 + 4);
                    v84 = eax90;
                    v85 = edx19;
                    if (reinterpret_cast<int32_t>(eax89 + 48) > reinterpret_cast<int32_t>(57)) {
                    }
                    v86 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v86) - 1);
                }
                edi11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0x257 - reinterpret_cast<uint32_t>(v86));
                v41 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v86) + 1);
                if (reinterpret_cast<uint32_t>(esi9) & 0x200 && (*reinterpret_cast<signed char*>(&v4) != 48 || !edi11)) {
                    ++edi11;
                    --v41;
                    goto addr_10007f94_40;
                }
                addr_10007c90_83:
                edi63 = reinterpret_cast<void**>(16);
                if (reinterpret_cast<uint32_t>(esi9) & 0x80) {
                    v23 = reinterpret_cast<void**>(2);
                    goto addr_10007cb4_93;
                }
            }
        }
    }
    addr_10007a77_31:
    return 0;
}

int32_t g1001159c;

int32_t DebugBreak = 0x14782;

uint32_t g100102fc = 0;

int32_t ReadFile = 0x14790;

void** g10011c00;

int32_t fun_10005ba0(uint32_t* a1) {
    void** v2;
    void** ebx3;
    void** v4;
    void** esi5;
    void** v6;
    void** edi7;
    int32_t esi8;
    void*** esp9;
    void** v10;
    void** ebp11;
    int1_t zf12;
    int32_t edi13;
    void** v14;
    void** ecx15;
    int32_t eax16;
    void** eax17;
    void** v18;
    uint32_t tmp32_19;
    int1_t zf20;
    int1_t zf21;
    int1_t less_or_equal22;
    int32_t ebx23;
    int1_t zf24;
    void** v25;
    void** ecx26;
    int32_t eax27;
    void** eax28;
    void** v29;
    uint32_t tmp32_30;
    int1_t less_or_equal31;
    int1_t zf32;
    uint32_t* eax33;
    uint32_t edx34;
    uint32_t ebp35;
    int1_t zf36;
    signed char dl37;
    int1_t less38;
    uint32_t tmp32_39;
    uint32_t ebp40;
    uint32_t ebp41;
    uint32_t edx42;
    uint32_t ebp43;
    int1_t zf44;
    void** eax45;

    v2 = ebx3;
    v4 = esi5;
    v6 = edi7;
    esi8 = 0;
    esp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    v10 = ebp11;
    zf12 = g1001159c == 0;
    if (zf12) {
        edi13 = GetLastError;
    } else {
        v14 = reinterpret_cast<void**>(esp9 + 16);
        ecx15 = g10011d78;
        eax16 = reinterpret_cast<int32_t>(GetOverlappedResult(ecx15, 0x10011be8, v14));
        esp9 = esp9 - 4 - 4 - 4 - 4 - 4 + 4;
        if (!eax16) {
            edi13 = GetLastError;
            eax17 = reinterpret_cast<void**>(edi13(ecx15, 0x10011be8, v14));
            esp9 = esp9 - 4 + 4;
            if (eax17 != 0x3e4) {
                fun_100052a0("GetOverlappedResult: returned error %d\n", eax17, ecx15, 0x10011be8, v14, 0, v10, v6, v4, v2, v18, __return_address());
                DebugBreak(ecx15, 0x10011be8, v14);
                esp9 = esp9 - 4 - 4 - 4 + 4 + 8 - 4 + 4;
            }
        } else {
            edi13 = GetLastError;
            g1001159c = 0;
            tmp32_19 = g100102fc + reinterpret_cast<unsigned char>(v10);
            g100102fc = tmp32_19;
        }
        zf20 = g1001159c == 0;
        if (!zf20) 
            goto addr_10005cd0_8; else 
            goto addr_10005c19_9;
    }
    addr_10005c3e_10:
    zf21 = g1001159c == 0;
    if (zf21 && (less_or_equal22 = reinterpret_cast<int32_t>(g10011388) <= reinterpret_cast<int32_t>(20), !less_or_equal22)) {
        ebx23 = ReadFile;
        do {
            zf24 = g1001159c == 0;
            if (!zf24) 
                break;
            v25 = reinterpret_cast<void**>(esp9 + 16);
            ecx26 = g10011d78;
            eax27 = reinterpret_cast<int32_t>(ebx23(ecx26, 0x100116c8, 20, v25));
            esp9 = esp9 - 4 - 4 - 4 - 4 - 4 - 4 + 4;
            if (!eax27) {
                eax28 = reinterpret_cast<void**>(edi13(ecx26, 0x100116c8, 20, v25));
                esp9 = esp9 - 4 + 4;
                if (!reinterpret_cast<int1_t>(eax28 == 0x3e5)) {
                    fun_100052a0("ReadFile: returned error %d\n", eax28, ecx26, 0x100116c8, 20, v25, 0x10011be8, v10, v6, v4, v2, v29);
                    DebugBreak(ecx26, 0x100116c8, 20, v25);
                    esp9 = esp9 - 4 - 4 - 4 + 4 + 8 - 4 + 4;
                } else {
                    g1001159c = 1;
                }
            } else {
                if (!0) {
                    fun_10005db0(0x10011be8, ecx26, 0x100116c8, 20, v25);
                    esp9 = esp9 - 4 - 4 + 4 + 4;
                    tmp32_30 = g100102fc + 0x10011be8;
                    g100102fc = tmp32_30;
                }
            }
            less_or_equal31 = reinterpret_cast<int32_t>(g10011388) <= reinterpret_cast<int32_t>(20);
        } while (!less_or_equal31);
    }
    addr_10005cd0_8:
    zf32 = g10011bdc == 0;
    if (!zf32) {
        eax33 = a1;
        do {
            edx34 = g100115a0;
            ebp35 = g100115a0;
            zf36 = g10011be0 == ebp35;
            dl37 = *reinterpret_cast<signed char*>(edx34 + 0x100115c0);
            if (zf36) {
                g10011bdc = 0;
            }
            ++g100115a0;
            less38 = reinterpret_cast<int32_t>(g100115a0) < reinterpret_cast<int32_t>(0x100);
            if (!less38) {
                tmp32_39 = g100115a0 + 0xffffff00;
                g100115a0 = tmp32_39;
            }
            ebp40 = g10011590;
            ++g10011388;
            if (!ebp40) {
                if (dl37 != 0x70) {
                    ebp41 = g10011594;
                    ++g10011594;
                    *reinterpret_cast<signed char*>(ebp41 + 0x10011390) = dl37;
                } else {
                    g10011590 = 1;
                }
            } else {
                if (ebp40 == 1) {
                    if (dl37 != 0x70) {
                        esi8 = 1;
                        edx42 = g10011594;
                        *eax33 = edx42;
                        g10011594 = 0;
                    } else {
                        ebp43 = g10011594;
                        ++g10011594;
                        *reinterpret_cast<signed char*>(ebp43 + 0x10011390) = dl37;
                    }
                    g10011590 = 0;
                }
            }
        } while (!esi8 && (zf44 = g10011bdc == 0, !zf44));
    }
    return esi8;
    addr_10005c19_9:
    eax45 = g10011c00;
    ResetEvent(eax45, ecx15, 0x10011be8, v14);
    esp9 = esp9 - 4 - 4 + 4;
    if (!1) {
        fun_10005db0(0, eax45, ecx15, 0x10011be8, v14);
        esp9 = esp9 - 4 - 4 + 4 + 4;
        goto addr_10005c3e_10;
    }
}

int32_t fun_10006510(signed char* a1, struct s16* a2, void* a3) {
    struct s16** esp4;
    int32_t eax5;

    esp4 = reinterpret_cast<struct s16**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 4 - 4 - 4);
    eax5 = fun_10007820(esp4 + 3, a2, a3);
    if (0) {
        fun_100076d0(0, esp4 - 1 - 1 + 1 + 3 + 1);
        return eax5;
    } else {
        *a1 = 0;
        return eax5;
    }
}

int32_t CreateEventA = 0x14738;

void** g10011d74;

void** fun_100017b0(void** ecx, int32_t a2, int32_t a3, void** a4, void** a5);

int32_t GetAsyncKeyState = 0x1495c;

int32_t CreateDialogParamA = 0x14970;

int32_t fun_10005690();

int32_t WaitForSingleObject = 0x14748;

int32_t DestroyWindow = 0x1494c;

int32_t fun_10005800(void** a1) {
    void** ecx2;
    void** v3;
    void** ebx4;
    uint1_t cf5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int1_t zf11;
    void** v12;
    void** esi13;
    void** esi14;
    void** v15;
    void** edi16;
    void*** esp17;
    void** v18;
    void** ebp19;
    void*** edi20;
    uint1_t cf21;
    uint32_t eax22;
    int32_t esi23;
    void** eax24;
    void** v25;
    void** eax26;
    void*** esp27;
    void** eax28;
    void* esp29;
    int32_t v30;
    void** v31;
    int32_t eax32;
    int32_t v33;
    void* esp34;
    void** eax35;
    int32_t edi36;
    int32_t ebx37;
    int32_t ebp38;
    void** eax39;
    void** v40;
    int32_t eax41;
    void* esp42;
    void** v43;
    int32_t eax44;
    void* esp45;
    void* v46;
    void* esp47;
    void* v48;
    void* esp49;
    int32_t eax50;
    int16_t ax51;

    ecx2 = reinterpret_cast<void**>(2);
    v3 = ebx4;
    cf5 = reinterpret_cast<uint1_t>(eax6 < eax7);
    eax8 = reinterpret_cast<uint32_t>(eax9 - eax10);
    zf11 = eax8 == 0;
    v12 = esi13;
    esi14 = a1;
    v15 = edi16;
    esp17 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 4 - 4 - 4 - 4);
    v18 = ebp19;
    edi20 = reinterpret_cast<void***>("r");
    do {
        if (!ecx2) 
            break;
        --ecx2;
        cf5 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi14)) < reinterpret_cast<unsigned char>(*edi20));
        zf11 = *reinterpret_cast<void***>(esi14) == *edi20;
        ++edi20;
        ++esi14;
    } while (zf11);
    if (!zf11) {
        cf21 = reinterpret_cast<uint1_t>(eax8 < eax8 + cf5);
        eax22 = eax8 - (eax8 + cf21);
        eax8 = eax22 - (1 - reinterpret_cast<uint1_t>(eax22 < 1 - cf21));
    }
    esi23 = 1;
    if (eax8) {
        esi23 = 0;
    }
    eax24 = reinterpret_cast<void**>(CreateEventA());
    v25 = eax24;
    g10011d74 = eax24;
    ResetEvent();
    eax26 = g10011d74;
    esp27 = esp17 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 - 4;
    if (!esi23) {
        ecx2 = reinterpret_cast<void**>(esp27 + 24);
        eax28 = fun_100017b0(ecx2, "Call to DOS Doom", 0x1000cfc8, ecx2, eax26);
        esp29 = reinterpret_cast<void*>(esp27 - 4 - 4 - 4 - 4 + 16 + 4);
        if (!eax28) {
            goto v30;
        }
    } else {
        eax32 = fun_100015f0(ecx2, eax26, v25, 0, 1, 0, 0, v18, v15, v12, v3, v31, 0);
        esp29 = reinterpret_cast<void*>(esp27 - 4 + 4 + 4);
        if (!eax32) {
            goto v33;
        }
    }
    GetAsyncKeyState();
    esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 - 4 + 4);
    if (esi23) {
        eax35 = g1000c0ec;
        ecx2 = g1000c0e4;
        CreateDialogParamA(ecx2, "WAITCALL", eax35, fun_10005690, 0);
        esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    }
    edi36 = TranslateMessage;
    ebx37 = DispatchMessageA;
    ebp38 = PeekMessageA;
    eax39 = g10011d74;
    do {
        v40 = eax39;
        eax41 = reinterpret_cast<int32_t>(WaitForSingleObject());
        esp42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 - 4 - 4 + 4);
        if (!eax41) 
            break;
        v43 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp42) + 24);
        eax44 = reinterpret_cast<int32_t>(ebp38());
        esp45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp42) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        if (eax44) {
            do {
                v46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp45) + 24);
                edi36(v46);
                esp47 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp45) - 4 - 4 + 4);
                v48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp47) + 24);
                ebx37(v48, v46);
                esp49 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp47) - 4 - 4 + 4);
                eax50 = reinterpret_cast<int32_t>(ebp38(reinterpret_cast<int32_t>(esp49) + 24, 0, 0, 0, 1, v48, v46));
                esp45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp49) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            } while (eax50);
        }
        ax51 = reinterpret_cast<int16_t>(GetAsyncKeyState());
        esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp45) - 4 - 4 + 4);
        eax39 = g10011d74;
    } while (!ax51);
    goto addr_1000592c_20;
    if (esi23 && !1) {
        DestroyWindow(0);
    }
    goto 0;
    addr_1000592c_20:
    if (esi23 && !1) {
        DestroyWindow(0);
    }
    fun_10001220(ecx2, 27, v43, 0, 0, 0, 1, v40, 0x1f4, 27, v25, 0, 1, 0);
    goto 0;
}

void** g1000c38c = reinterpret_cast<void**>(0);

int32_t GetActiveWindow = 0x148ac;

int32_t GetWindowThreadProcessId = 0x14880;

int32_t GetTopWindow = 0x1489c;

int32_t fun_10004120(void** a1);

int32_t lstrcpyA = 0x14696;

void** fun_100017b0(void** ecx, int32_t a2, int32_t a3, void** a4, void** a5) {
    void** v6;
    void** ebx7;
    void** v8;
    void** esi9;
    void** v10;
    void** edi11;
    void** esi12;
    void*** esp13;
    void** v14;
    void** ebp15;
    void** edi16;
    int1_t zf17;
    int1_t zf18;
    int32_t eax19;
    int1_t cf20;
    int32_t eax21;
    void** eax22;
    void** eax23;
    void* esp24;
    void** v25;
    void** v26;
    void* esp27;
    void* esp28;
    void** ecx29;
    void** v30;
    void** v31;
    void* esp32;
    void** v33;
    void** eax34;
    void* esp35;
    void** v36;
    void** v37;
    void* esp38;
    void* esp39;
    void** eax40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    int32_t eax47;
    void** v48;
    int32_t ebp49;
    void** v50;
    void** ecx51;
    void*** v52;
    void** eax53;
    void** eax54;
    void** eax55;
    void** ecx56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** eax62;
    void** eax63;
    void** ecx64;
    void** edx65;
    void** v66;
    void** v67;
    void** v68;
    void** eax69;
    int32_t eax70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** eax78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** eax86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** eax94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** eax102;
    void** eax103;
    void** eax104;
    int32_t esi105;
    void** eax106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** eax111;
    void** eax112;
    int32_t eax113;
    void** eax114;
    void** eax115;
    int1_t zf116;
    void** eax117;
    void** ecx118;
    void** edx119;
    int32_t eax120;
    void** eax121;
    void** eax122;
    void** v123;
    void** v124;
    int32_t ebp125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    int32_t v131;
    void** eax132;

    v6 = ebx7;
    v8 = esi9;
    v10 = edi11;
    esi12 = reinterpret_cast<void**>(0);
    esp13 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x84 - 4 - 4 - 4 - 4);
    v14 = ebp15;
    edi16 = reinterpret_cast<void**>(0);
    g1000c38c = reinterpret_cast<void**>(0);
    zf17 = g1000c108 == 0;
    if (zf17) {
        zf18 = g1000c0f0 == 0;
        g1000c0e0 = a5;
        if (!zf18 || (eax19 = fun_10001090(ecx, 0), esp13 = esp13 - 4 - 4 + 4 + 4, !!eax19)) {
            cf20 = reinterpret_cast<unsigned char>(g1000c0f4) < reinterpret_cast<unsigned char>(1);
            if (!cf20 || (eax21 = fun_10003090(), esp13 = esp13 - 4 + 4, !!eax21)) {
                g1000c108 = reinterpret_cast<void**>(1);
                eax22 = reinterpret_cast<void**>(GetActiveWindow());
                eax23 = reinterpret_cast<void**>(GetCurrentProcessId());
                esp24 = reinterpret_cast<void*>(esp13 - 4 + 4 - 4 + 4);
                v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp24) + 16);
                v26 = eax22;
                GetWindowThreadProcessId(v26);
                esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 - 4 + 4);
                wsprintfA(reinterpret_cast<int32_t>(esp27) + 20, "My process is %8x and the active window proc is %8x\r\n", eax23, v8, v26);
                esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 - 4 - 4 - 4 - 4 + 4);
                ecx29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp28) + 36);
                fun_10001000(ecx29, v26, v25, v14, v10, v8, v6, v30, v31);
                esp32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) + 16 - 4 - 4 + 4 + 4);
                if (eax23 != v8) {
                    v33 = reinterpret_cast<void**>(0);
                    eax34 = reinterpret_cast<void**>(GetTopWindow(0, v26));
                    esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) - 4 - 4 + 4);
                    v36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp35) + 16);
                    v37 = eax34;
                    GetWindowThreadProcessId(v37, v36, 0, v26);
                    esp38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 - 4 - 4 + 4);
                    if (eax23 == v25) {
                        g1000c0ec = eax34;
                    }
                    wsprintfA(reinterpret_cast<int32_t>(esp38) + 20, "My process is %8x and the top window proc is %8x\r\n", eax23, v25, v37, v36, 0, v26);
                    esp39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp38) - 4 - 4 - 4 - 4 - 4 + 4);
                    ecx29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp39) + 36);
                    fun_10001000(ecx29, v37, v36, 0, v26, v25, v14, v10, v8);
                    esp32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp39) + 16 - 4 - 4 + 4 + 4);
                } else {
                    g1000c0ec = eax22;
                }
                if (*reinterpret_cast<void***>(__return_address())) 
                    goto addr_100018c5_10;
            } else {
                eax40 = reinterpret_cast<void**>(0);
                goto addr_10001c33_12;
            }
        } else {
            eax40 = reinterpret_cast<void**>(0);
            goto addr_10001c33_12;
        }
    } else {
        fun_10001000("A call is already being handled\r\n", v14, v10, v8, v6, v41, v42, v43, v44);
        eax40 = reinterpret_cast<void**>(0);
        goto addr_10001c33_12;
    }
    wsprintfA(reinterpret_cast<int32_t>(esp32) + 20, "Get number from user\r\n", v26);
    fun_10001000(reinterpret_cast<int32_t>(esp32) - 4 - 4 - 4 + 4 + 28, v26, v25, v14, v10, v8, v6, v45, v46);
    eax47 = fun_10004120(v26);
    if (eax47) {
        v33 = reinterpret_cast<void**>(0x1000c1a0);
        v36 = v48;
        ebp49 = lstrcpyA;
        ebp49(v36, 0x1000c1a0, v26);
        v37 = reinterpret_cast<void**>(0x1000c220);
        v50 = reinterpret_cast<void**>(__return_address());
        ebp49(v50, 0x1000c220, v36, 0x1000c1a0, v26);
        ecx51 = g1000c114;
        *v52 = ecx51;
    } else {
        g1000c38c = reinterpret_cast<void**>(1);
        v33 = reinterpret_cast<void**>(0x478);
        goto addr_10001c0d_18;
    }
    addr_1000196e_19:
    eax53 = g1000c114;
    eax54 = fun_10002af0(eax53, v36, v33, v26);
    g1000c118 = eax54;
    if (eax54) {
        eax55 = g1000c118;
        ecx56 = g1000c114;
        eax62 = fun_10002bf0(ecx56, 0, ecx56, eax55, v36, v33, v26, v25, v14, v10, v8, v6, v57, v58, v59, v60, v61);
        edi16 = eax62;
        if (edi16) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi16 + 52)) & 1) {
                if (*reinterpret_cast<unsigned char*>(edi16 + 60) & 16) {
                    if (*reinterpret_cast<unsigned char*>(edi16 + 0xec) & 8) {
                        do {
                            v37 = reinterpret_cast<void**>(0);
                            eax63 = g1000c118;
                            v50 = reinterpret_cast<void**>(16);
                            ecx64 = g1000c114;
                            edx65 = g1000c0f0;
                            v66 = eax63;
                            v67 = ecx64;
                            v68 = edx65;
                            eax69 = fun_10005fea(v68, v67, 0x1000c110, v66, 0, 0, 1, 16, 0, v36, v33, v26);
                            if (eax69 == 0x80000001) 
                                break;
                            eax70 = fun_10002ec0(ecx64, eax69, v68, v67, 0x1000c110, v66, 0, 0, 1, 16, 0, v36, v33, v26, v25, v14, v10, v8, eax69, v68, v67, 0x1000c110, v66, 0, 0, 1, 16);
                            if (!eax70) 
                                goto addr_10001bdb_26;
                        } while (eax69);
                        goto addr_10001ab2_28;
                    } else {
                        fun_100012c0(0x4b2, v36, v33, v26, v25, v14, v10, v8, v6, v71, v72, v73, v74, v75, v76, v77);
                        eax78 = g1000c0ec;
                        MessageBoxA(eax78, "Error on Requested line", "The selected line doesn't support MAKECALL capabilities", 0, v36, v33, v26);
                        goto addr_10001c12_30;
                    }
                } else {
                    fun_100012c0(0x4a6, v36, v33, v26, v25, v14, v10, v8, v6, v79, v80, v81, v82, v83, v84, v85);
                    eax86 = g1000c0ec;
                    MessageBoxA(eax86, "Error on Requested line", "The selected line doesn't support DATAMODEM capabilities", 0, v36, v33, v26);
                    goto addr_10001c12_30;
                }
            } else {
                fun_100012c0(0x49c, v36, v33, v26, v25, v14, v10, v8, v6, v87, v88, v89, v90, v91, v92, v93);
                eax94 = g1000c0ec;
                MessageBoxA(eax94, "Error on Requested line", "The selected line doesn't support VOICE capabilities", 0, v36, v33, v26);
                goto addr_10001c12_30;
            }
        } else {
            fun_100012c0(0x493, v36, v33, v26, v25, v14, v10, v8, v6, v95, v96, v97, v98, v99, v100, v101);
            eax102 = g1000c0ec;
            MessageBoxA(eax102, "Error on Requested line", "Unable to Use Line", 0, v36, v33, v26);
            goto addr_10001c12_30;
        }
    } else {
        eax103 = g1000c0ec;
        MessageBoxA(eax103, "Line Version unsupported.", "Unable to Use Line", 0, v36, v33, v26);
        goto addr_10001c0d_18;
    }
    fun_100012c0(0x4c4, v68, v67, 0x1000c110, v66, 0, 0, 1, 16, 0, v36, v33, v26, v25, v14, v10);
    eax104 = g1000c0ec;
    MessageBoxA(eax104, "Line is already in use by a non-TAPI application or by another TAPI Service Provider.", "Unable to Use Line", 0, v68, v67, 0x1000c110, v66, 0, 0, 1, 16, 0, v36, v33, v26);
    addr_10001c12_30:
    if (!esi12) {
        esi105 = LocalFree;
    } else {
        esi105 = LocalFree;
        esi105(esi12, v26);
    }
    if (edi16) {
        esi105(edi16, v26);
    }
    eax40 = g1000c108;
    addr_10001c33_12:
    return eax40;
    addr_10001bdb_26:
    fun_10004820(ecx64, eax69, "lineOpen unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x4d1, v68, v67, 0x1000c110, v66, 0, 0, 1, 16, ecx64, eax69, "lineOpen unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x4d1, v68, v67, 0x1000c110, v66, 0, 0, 1, 16);
    eax106 = g1000c0ec;
    MessageBoxA(eax106, "Error on Requested line", "Unable to Use Line", 0, v68, v67, 0x1000c110, v66, 0, 0, 1, 16, 0, v36, v33, v26);
    addr_10001c0d_18:
    fun_100012c0(v33, v26, v25, v14, v10, v8, v6, v107, v108, v109, 0, 1, 16, 0, v110, 0x1000c220);
    goto addr_10001c12_30;
    do {
        addr_10001ab2_28:
        eax111 = g1000c110;
        eax112 = fun_10005fe4(eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0, 0, 1, v50, v37, v36, v33, v26);
        eax113 = fun_10002ec0(ecx64, eax112, eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0, 0, 1, v50, v37, v36, v33, v26, v25, eax112, eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0);
        if (!eax113) 
            break;
    } while (eax112);
    goto addr_10001ad7_42;
    fun_10004820(ecx64, eax112, "lineSetStatusMessages unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x511, eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0, ecx64, eax112, "lineSetStatusMessages unhandled error: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x511, eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0);
    addr_10001b15_44:
    eax114 = g1000c110;
    eax115 = fun_10002c80(ecx64, 0, eax114, 0, eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0, 0, 1, v50, v37, v36, v33, v26);
    esi12 = eax115;
    if (esi12) {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi12 + 28)) & 2) {
            zf116 = g1000c2a4 == 0;
            if (!zf116) {
                eax117 = g10011f78;
                ecx118 = g1000c2a4;
                edx119 = g1000c114;
                fun_10005ff0(edx119, ecx118, eax117, "comm/datamodem", eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0, 0, 1, v50, v37, v36, v33, v26);
            }
            eax120 = fun_10001c40(edi16, 0x1000c220, 0x1000c1a0, eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0, 0, 1, v50, v37, v36, v33, v26);
            if (eax120) 
                goto addr_10001bbe_49;
        } else {
            fun_10001000("This line is not available to place a call.\r\n", eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0, "This line is not available to place a call.\r\n", eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0);
            eax121 = g1000c0ec;
            MessageBoxA(eax121, "Requested line is already in use", "Unable to Use Line", 0, eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0, 0, 1, v50, v37, v36, v33, v26);
            goto addr_10001c0d_18;
        }
    } else {
        fun_100012c0(0x520, eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0, 0, 1, v50, v37, v36, v33, v26);
        eax122 = g1000c0ec;
        MessageBoxA(eax122, "Error on Requested line", "Unable to Use Line", 0, eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0, 0, 1, v50, v37, v36, v33, v26);
        goto addr_10001c12_30;
    }
    fun_10001000("DialCallInParts failed.\r\n", eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0, "DialCallInParts failed.\r\n", eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0);
    goto addr_10001c0d_18;
    addr_10001bbe_49:
    fun_10001000("DialCallInParts succeeded.\r\n", eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0, "DialCallInParts succeeded.\r\n", eax111, 0xbfffff, 0x1ff, v68, v67, 0x1000c110, v66, 0);
    goto addr_10001c12_30;
    addr_10001ad7_42:
    goto addr_10001b15_44;
    addr_100018c5_10:
    wsprintfA(reinterpret_cast<int32_t>(esp32) + 20, "Dialing with old data (%s)\r\n", __return_address(), v26);
    fun_10001000(reinterpret_cast<int32_t>(esp32) - 4 - 4 - 4 - 4 + 4 + 32, v26, v25, v14, v10, v8, v6, v123, v124);
    v33 = reinterpret_cast<void**>(__return_address());
    ebp125 = lstrcpyA;
    v36 = reinterpret_cast<void**>(0x1000c220);
    ebp125(0x1000c220, v33, v26);
    eax132 = fun_10001570(ecx29, 0x1000c220, v33, v26, v25, v14, v10, v8, v6, v126, v127, v128, v129, v130, v131);
    if (reinterpret_cast<signed char>(eax132) >= reinterpret_cast<signed char>(0)) {
        g1000c114 = eax132;
        goto addr_1000196e_19;
    } else {
        eax40 = reinterpret_cast<void**>(0);
        goto addr_10001c33_12;
    }
}

int32_t HeapCreate = 0x14a46;

void fun_10006a00() {
    int32_t eax1;

    eax1 = reinterpret_cast<int32_t>(HeapCreate());
    g100130a0 = eax1;
    goto 0;
}

int32_t g10010724 = 0;

int32_t GetEnvironmentStringsW = 0x14b32;

int32_t GetEnvironmentStrings = 0x14b00;

int32_t FreeEnvironmentStringsA = 0x14ad0;

int32_t FreeEnvironmentStringsW = 0x14b18;

void** fun_100072f0() {
    int1_t zf1;
    void** v2;
    void** ebp3;
    void** edi4;
    void** v5;
    void*** ebx6;
    void*** v7;
    int32_t esi8;
    void** eax9;
    void*** eax10;
    void*** v11;
    int1_t zf12;
    int1_t zf13;
    void*** eax14;
    void*** ebp15;
    void** ebp16;
    void** eax17;
    void** v18;
    void** edi19;
    void*** esi20;
    uint32_t ecx21;
    uint32_t ecx22;
    void** eax23;
    void** esi24;
    void** eax25;
    void** eax26;
    int32_t eax27;

    zf1 = g10010724 == 0;
    v2 = ebp3;
    if (!zf1) {
        edi4 = v5;
        ebx6 = v7;
        esi8 = GetEnvironmentStringsW;
    } else {
        esi8 = GetEnvironmentStringsW;
        eax9 = reinterpret_cast<void**>(esi8());
        edi4 = eax9;
        if (!edi4) {
            eax10 = reinterpret_cast<void***>(GetEnvironmentStrings());
            ebx6 = eax10;
            if (!ebx6) {
                return 0;
            } else {
                g10010724 = 2;
            }
        } else {
            g10010724 = 1;
            ebx6 = v11;
        }
    }
    zf12 = g10010724 == 1;
    if (!zf12) {
        zf13 = g10010724 == 2;
        if (!zf13) {
            return 0;
        } else {
            if (ebx6 || (eax14 = reinterpret_cast<void***>(GetEnvironmentStrings()), ebx6 = eax14, !!ebx6)) {
                ebp15 = ebx6;
                if (*ebx6) {
                    addr_10007427_13:
                    ++ebp15;
                    if (*ebp15) 
                        goto addr_10007427_13;
                    ++ebp15;
                    if (*ebp15) 
                        goto addr_10007427_13;
                }
                ebp16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp15) - reinterpret_cast<uint32_t>(ebx6) + 1);
                eax17 = fun_10008680(ebp16, v2);
                v18 = eax17;
                if (eax17) {
                    edi19 = v18;
                    esi20 = ebx6;
                    ecx21 = reinterpret_cast<unsigned char>(ebp16) >> 2;
                    while (ecx21) {
                        --ecx21;
                        *reinterpret_cast<void***>(edi19) = *esi20;
                        edi19 = edi19 + 4;
                        esi20 = esi20 + 4;
                    }
                    ecx22 = reinterpret_cast<unsigned char>(ebp16) & 3;
                    while (ecx22) {
                        --ecx22;
                        *reinterpret_cast<void***>(edi19) = *esi20;
                        ++edi19;
                        ++esi20;
                    }
                    FreeEnvironmentStringsA();
                    goto v18;
                } else {
                    FreeEnvironmentStringsA();
                    goto v18;
                }
            } else {
                return 0;
            }
        }
    } else {
        if (edi4 || (eax23 = reinterpret_cast<void**>(esi8()), edi4 = eax23, !!edi4)) {
            esi24 = edi4;
            if (*reinterpret_cast<void***>(edi4)) {
                addr_10007379_27:
                esi24 = esi24 + 2;
                if (*reinterpret_cast<void***>(esi24)) 
                    goto addr_10007379_27;
                esi24 = esi24 + 2;
                if (*reinterpret_cast<void***>(esi24)) 
                    goto addr_10007379_27;
            }
            eax25 = reinterpret_cast<void**>(WideCharToMultiByte());
            if (!eax25 || (eax26 = fun_10008680(eax25, 0), eax26 == 0)) {
                FreeEnvironmentStringsW();
                goto 0;
            } else {
                eax27 = reinterpret_cast<int32_t>(WideCharToMultiByte());
                if (!eax27) {
                    fun_10008660(eax26, 0, 0, edi4, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(esi24) - reinterpret_cast<unsigned char>(edi4)) >> 1) + 1, eax26, eax25, 0, 0);
                }
                FreeEnvironmentStringsW();
                goto eax26;
            }
        } else {
            return 0;
        }
    }
}

void** fun_10007200(void** a1);

struct s35 {
    signed char f0;
    signed char f1;
};

struct s36 {
    void** f0;
    signed char[7] pad8;
    void** f8;
};

int32_t GetCPInfo = 0x14aae;

int32_t g10010624 = 0;

int32_t fun_10006fd0(void** a1) {
    void** v2;
    void** ebx3;
    void** ebp4;
    void** edi5;
    void** esi6;
    void** eax7;
    void** ebp8;
    int1_t zf9;
    int32_t v10;
    void*** eax11;
    unsigned char* edi12;
    unsigned char eax13;
    int32_t ecx14;
    int32_t edi15;
    struct s35* esi16;
    uint32_t edx17;
    uint32_t ebx18;
    unsigned char cl19;
    uint32_t ebx20;
    void** eax21;
    int32_t eax22;
    void** ebx23;
    struct s36* ecx24;
    void** ecx25;
    int32_t eax26;
    int1_t zf27;
    int32_t v28;
    int32_t v29;
    signed char* edi30;
    int32_t ecx31;
    void** eax32;
    int32_t v33;
    signed char v34;
    uint32_t ecx35;
    uint32_t edx36;
    signed char v37;
    uint32_t eax38;
    signed char v39;
    signed char v40;
    uint32_t eax41;

    v2 = ebx3;
    fun_10008490(25, ebp4, edi5, esi6, v2);
    eax7 = fun_10007200(a1);
    ebp8 = eax7;
    zf9 = ebp8 == g1001060c;
    if (zf9) {
        fun_10008500(25);
        return 0;
    }
    if (!ebp8) {
        fun_100072b0();
        fun_10008500(25);
        return 0;
    }
    v10 = 0;
    eax11 = reinterpret_cast<void***>(0x10010630);
    do {
        if (*eax11 == ebp8) 
            break;
        eax11 = eax11 + 48;
        ++v10;
    } while (reinterpret_cast<uint32_t>(eax11) < 0x10010720);
    goto addr_1000704c_8;
    edi12 = reinterpret_cast<unsigned char*>(0x10010508);
    eax13 = reinterpret_cast<unsigned char>(0);
    ecx14 = 64;
    while (ecx14) {
        --ecx14;
        *edi12 = reinterpret_cast<unsigned char>(0);
        edi12 = edi12 + 4;
    }
    *edi12 = 0;
    edi15 = (v10 + v10 * 2) * 2;
    do {
        esi16 = reinterpret_cast<struct s35*>((edi15 + eax13) * 8 + 0x10010640);
        if (esi16->f0) {
            do {
                if (!esi16->f1) 
                    break;
                edx17 = 0;
                ebx18 = 0;
                *reinterpret_cast<signed char*>(&edx17) = esi16->f0;
                *reinterpret_cast<signed char*>(&ebx18) = esi16->f1;
                if (ebx18 >= edx17) {
                    cl19 = *reinterpret_cast<unsigned char*>(eax13 + 0x10010628);
                    do {
                        *reinterpret_cast<unsigned char*>(edx17 + 0x10010509) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx17 + 0x10010509) | cl19);
                        ++edx17;
                        ebx20 = 0;
                        *reinterpret_cast<signed char*>(&ebx20) = esi16->f1;
                    } while (ebx20 >= edx17);
                }
                ++esi16;
            } while (esi16->f0);
        }
        eax13 = reinterpret_cast<unsigned char>(eax13 + 1);
    } while (eax13 < reinterpret_cast<unsigned char>(4));
    g1001060c = ebp8;
    eax21 = fun_10007250(ebp8);
    g10010610 = eax21;
    eax22 = v10 << 4;
    ebx23 = *reinterpret_cast<void***>(eax22 + eax22 * 2 + reinterpret_cast<int32_t>("!"));
    ecx24 = reinterpret_cast<struct s36*>(eax22 + eax22 * 2 + 0x10010634);
    ecx25 = ecx24->f8;
    g10010618 = ecx24->f0;
    g1001061c = ebx23;
    g10010620 = ecx25;
    fun_10008500(25);
    return 0;
    addr_1000704c_8:
    eax26 = reinterpret_cast<int32_t>(GetCPInfo());
    if (eax26 != 1) {
        zf27 = g10010624 == 0;
        if (zf27) {
            fun_10008500(25);
            goto v28;
        } else {
            fun_100072b0();
            fun_10008500(25);
            goto v29;
        }
    }
    edi30 = reinterpret_cast<signed char*>(0x10010508);
    ecx31 = 64;
    while (ecx31) {
        --ecx31;
        *edi30 = reinterpret_cast<signed char>(0);
        edi30 = edi30 + 4;
    }
    *edi30 = 0;
    if (reinterpret_cast<unsigned char>(v2) > reinterpret_cast<unsigned char>(1)) 
        goto addr_1000707b_34;
    eax32 = reinterpret_cast<void**>(0);
    g1001060c = reinterpret_cast<void**>(0);
    addr_10007192_36:
    g10010610 = eax32;
    g10010618 = reinterpret_cast<void**>(0);
    g1001061c = reinterpret_cast<void**>(0);
    g10010620 = reinterpret_cast<void**>(0);
    fun_10008500(25);
    goto v33;
    addr_1000707b_34:
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v10) + 2)) {
        do {
            if (!v34) 
                break;
            ecx35 = 0;
            edx36 = 0;
            *reinterpret_cast<signed char*>(&ecx35) = v37;
            *reinterpret_cast<signed char*>(&edx36) = v34;
            if (edx36 >= ecx35) {
                do {
                    *reinterpret_cast<unsigned char*>(ecx35 + 0x10010509) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx35 + 0x10010509) | 4);
                    ++ecx35;
                    eax38 = 0;
                    *reinterpret_cast<signed char*>(&eax38) = v39;
                } while (eax38 >= ecx35);
            }
        } while (v40);
    }
    eax41 = 1;
    do {
        *reinterpret_cast<unsigned char*>(eax41 + 0x10010509) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax41 + 0x10010509) | 8);
        ++eax41;
    } while (eax41 < 0xff);
    g1001060c = ebp8;
    eax32 = fun_10007250(ebp8);
    goto addr_10007192_36;
}

int32_t DeleteCriticalSection = 0x14a96;

void** fun_10006c10(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** v9;
    void** edi10;
    void*** esi11;
    void** v12;
    void** ebp13;
    int32_t edi14;
    void** ebx15;
    void** v16;
    void** eax17;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ebx6;
    v7 = esi8;
    v9 = edi10;
    esi11 = reinterpret_cast<void***>(0x10012fa0);
    v12 = ebp13;
    edi14 = DeleteCriticalSection;
    do {
        ebx15 = *esi11;
        if (ebx15) {
            if (reinterpret_cast<unsigned char>(ebx15 + 0x480) > reinterpret_cast<unsigned char>(ebx15)) {
                do {
                    if (*reinterpret_cast<void***>(ebx15 + 8)) {
                        edi14(ebx15 + 12);
                    }
                    ebx15 = ebx15 + 36;
                } while (reinterpret_cast<unsigned char>(*esi11 + 0x480) > reinterpret_cast<unsigned char>(ebx15));
            }
            v16 = *esi11;
            eax17 = fun_10008660(v16, v12, v9, v7, v5, v4, a1, a2, a3);
        }
        esi11 = esi11 + 4;
    } while (reinterpret_cast<uint32_t>(esi11) < 0x100130a0);
    return eax17;
}

void fun_100067f0(void** a1, void** a2, void** a3);

signed char g100104d0 = 0;

int32_t* g100130ac;

void* g100130a4;

int32_t ExitProcess = 0x149e0;

signed char* fun_10006760(int32_t a1, int32_t a2, int32_t a3) {
    void** v4;
    void** ebx5;
    void** esi6;
    int32_t ebx7;
    int1_t zf8;
    void* esi9;
    int32_t* esi10;
    int1_t cf11;
    int32_t eax12;
    int1_t cf13;
    signed char* eax14;

    v4 = ebx5;
    fun_100067f0(esi6, v4, __return_address());
    g100104d4 = 1;
    ebx7 = a3;
    g100104d0 = *reinterpret_cast<signed char*>(&ebx7);
    if (!a2) {
        zf8 = g100130ac == 0;
        if (!zf8 && (esi9 = g100130a4, esi10 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi9) - 4), cf11 = reinterpret_cast<uint32_t>(esi10) < reinterpret_cast<uint32_t>(g100130ac), !cf11)) {
            do {
                eax12 = *esi10;
                if (eax12) {
                    eax12();
                }
                --esi10;
                cf13 = reinterpret_cast<uint32_t>(esi10) < reinterpret_cast<uint32_t>(g100130ac);
            } while (!cf13);
        }
        fun_10006810(0x1000c014, 0x1000c01c);
    }
    fun_10006810(0x1000c020, 0x1000c024);
    if (!ebx7) {
        ExitProcess();
        goto v4;
    } else {
        eax14 = fun_10006800();
        return eax14;
    }
}

/* (image base) */
int32_t image_base_ = 0x10011d10;

void fun_10008420(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** v9;
    void** edi10;
    int32_t esi11;
    int32_t edi12;
    void*** ebx13;
    void** v14;
    void** v15;
    int32_t eax16;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ebx6;
    v7 = esi8;
    v9 = edi10;
    esi11 = DeleteCriticalSection;
    edi12 = 0;
    do {
        ebx13 = reinterpret_cast<void***>(edi12 * 4 + 0x10010a98);
        if (*ebx13 && (edi12 != 17 && (edi12 != 13 && (edi12 != 9 && edi12 != 1)))) {
            v14 = *ebx13;
            esi11(v14, v9, v7, v5, v4);
            v15 = *ebx13;
            fun_10008660(v15, v14, v9, v7, v5, v4, a1, a2, a3);
        }
        ++edi12;
    } while (edi12 < 48);
    eax16 = image_base_;
    esi11();
    esi11();
    esi11();
    esi11();
    goto eax16;
}

int32_t RtlUnwind = 0x149c4;

void fun_1000a7c8() {
    goto RtlUnwind;
}

struct s37 {
    signed char[4] pad4;
    unsigned char f4;
};

uint32_t fun_100076d0(void** a1, void** a2) {
    void* esp3;
    void** edi4;
    void** eax5;
    void** eax6;
    void* ebp7;
    void** eax8;
    uint32_t eax9;
    void* ebx10;
    void* eax11;
    struct s37* eax12;
    uint32_t ecx13;
    void** v14;
    void* eax15;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4);
    edi4 = *reinterpret_cast<void***>(a2 + 16);
    eax5 = *reinterpret_cast<void***>(a2 + 12);
    if (!(*reinterpret_cast<unsigned char*>(&eax5) & 0x82) || *reinterpret_cast<unsigned char*>(&eax5) & 64) {
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) | 32);
        return 0xffffffff;
    } else {
        if (*reinterpret_cast<unsigned char*>(&eax5) & 1) {
            *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
            eax6 = *reinterpret_cast<void***>(a2 + 12);
            if (!(*reinterpret_cast<unsigned char*>(&eax6) & 16)) {
                *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax6) | 32);
                return 0xffffffff;
            } else {
                *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a2 + 8);
                *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0xfffffffe);
            }
        }
        ebp7 = reinterpret_cast<void*>(0);
        eax8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 2);
        *reinterpret_cast<void***>(a2 + 12) = eax8;
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) & 0xffffffef);
        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0x10c) && (a2 != 0x10010c68 && !reinterpret_cast<int1_t>(a2 == 0x10010c88) || (eax9 = fun_10008b80(edi4), esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 + 4 + 4), !eax9))) {
            fun_10008b30(a2);
            esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 + 4 + 4);
        }
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0x108)) {
            ebx10 = reinterpret_cast<void*>(1);
            eax11 = fun_100087a0(edi4, reinterpret_cast<int32_t>(esp3) + 20, 1);
            ebp7 = eax11;
        } else {
            ebx10 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 8)));
            *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a2 + 8) + 1;
            *reinterpret_cast<void***>(a2 + 4) = *reinterpret_cast<void***>(a2 + 24) - 1;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx10) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx10 == 0)) {
                eax12 = reinterpret_cast<struct s37*>(0x100104e0);
                if (edi4 != 0xffffffff) {
                    ecx13 = (reinterpret_cast<unsigned char>(edi4) & 31) << 2;
                    eax12 = reinterpret_cast<struct s37*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edi4) & 0xffffffe7) >> 3) + 0x10012fa0)) + (ecx13 + ecx13 * 8));
                }
                if (eax12->f4 & 32) {
                    fun_10008a20(edi4, 0, 2);
                }
            } else {
                v14 = *reinterpret_cast<void***>(a2 + 8);
                eax15 = fun_100087a0(edi4, v14, ebx10);
                ebp7 = eax15;
            }
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2 + 8)) = a1;
        }
        if (ebp7 == ebx10) {
            return reinterpret_cast<unsigned char>(a1) & 0xff;
        } else {
            *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 32);
            return 0xffffffff;
        }
    }
}

/* (image base) */
int32_t image_base_ = 0x10011d58;

/* (image base) */
int32_t image_base_ = 0x10011d40;

void fun_100083f0() {
    int32_t eax1;
    int32_t esi2;
    int32_t esi3;
    int32_t ecx4;
    int32_t eax5;

    eax1 = image_base_;
    esi2 = InitializeCriticalSection;
    esi2(eax1, esi3, __return_address());
    ecx4 = image_base_;
    esi2(ecx4, eax1, esi3, __return_address());
    eax5 = image_base_;
    esi2();
    esi2();
    goto eax5;
}

void** fun_100086a0(void** a1, int32_t a2) {
    void** v3;
    void** esi4;
    void** v5;
    void** edi6;
    void** edi7;
    int32_t esi8;
    void** eax9;
    int32_t eax10;

    v3 = esi4;
    v5 = edi6;
    edi7 = a1;
    if (reinterpret_cast<unsigned char>(edi7) > reinterpret_cast<unsigned char>(0xffffffe0)) {
        return 0;
    }
    if (!edi7) {
        edi7 = reinterpret_cast<void**>(1);
    }
    esi8 = a2;
    do {
        eax9 = fun_100086e0(edi7);
        if (eax9) 
            break;
        if (!esi8) 
            break;
        eax10 = fun_100091f0(edi7, v5, v3);
    } while (eax10);
    goto addr_100086db_9;
    addr_100086dd_10:
    return eax9;
    addr_100086db_9:
    eax9 = reinterpret_cast<void**>(0);
    goto addr_100086dd_10;
}

int32_t g10010be8 = 0;

void** g10010bf8 = reinterpret_cast<void**>(0);

void** fun_10008cd0(void** a1, uint16_t a2) {
    int1_t zf3;
    void** eax4;
    int32_t eax5;
    int32_t* eax6;
    int32_t* eax7;

    if (a1) {
        zf3 = g10010be8 == 0;
        if (!zf3) {
            eax4 = g10010bf8;
            eax5 = reinterpret_cast<int32_t>(WideCharToMultiByte());
            if (!eax5 || eax4) {
                eax6 = fun_100092b0();
                *eax6 = 42;
            }
            goto 0x220;
        } else {
            if (a2 <= 0xff) {
                *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(&a2);
                return 1;
            } else {
                eax7 = fun_100092b0();
                *eax7 = 42;
                return 0xffffffff;
            }
        }
    } else {
        return 0;
    }
}

int32_t g100110f8 = 0;

signed char* fun_10008e60(void** a1, void** a2, void** a3) {
    int1_t zf4;
    int1_t zf5;
    signed char* eax6;

    zf4 = g100110f8 == 0;
    if (zf4) {
        fun_10008490(11, __return_address(), a1, a2, a3);
        zf5 = g100110f8 == 0;
        if (zf5) {
            fun_10008ea0();
            ++g100110f8;
        }
        eax6 = fun_10008500(11);
    }
    return eax6;
}

int32_t SetLastError = 0x14a28;

struct s27* fun_100068e0() {
    void** eax1;
    void** eax2;
    int32_t eax3;
    int32_t eax4;
    void** eax5;
    int32_t edi6;

    GetLastError();
    eax1 = reinterpret_cast<void**>(TlsGetValue());
    if (!eax1) {
        eax2 = fun_10008600(1, 0x74);
        if (!eax2 || (eax3 = g100104d8, eax4 = reinterpret_cast<int32_t>(TlsSetValue(eax3, eax2)), eax4 == 0)) {
            fun_10006290(16);
        } else {
            fun_100068c0(eax2, eax3, eax2);
            eax5 = reinterpret_cast<void**>(GetCurrentThreadId(eax3, eax2));
            *reinterpret_cast<void***>(eax2) = eax5;
            *reinterpret_cast<void***>(eax2 + 4) = reinterpret_cast<void**>(0xffffffff);
        }
    }
    SetLastError();
    goto edi6;
}

int32_t fun_100095c0(int32_t a1);

int32_t fun_100095b0() {
    int32_t eax1;

    eax1 = fun_100095c0(1);
    return eax1;
}

struct s15* fun_10009740(void** a1) {
    void** ebp2;
    int1_t zf3;
    void* eax4;
    void** esi5;
    void** edi6;
    int32_t ecx7;
    void** eax8;
    void** ebx9;
    void** edi10;
    int32_t ecx11;

    ebp2 = g100104b8;
    if (!ebp2) {
        zf3 = g100104c0 == 0;
        if (!zf3) {
            eax4 = fun_10009a10();
            if (!eax4) {
                ebp2 = g100104b8;
            } else {
                return 0;
            }
        }
        if (!ebp2) 
            goto addr_100097c3_7;
    }
    esi5 = a1;
    if (!esi5) {
        addr_100097c3_7:
        return 0;
    } else {
        edi6 = esi5;
        ecx7 = -1;
        eax8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax4) - reinterpret_cast<uint32_t>(eax4));
        do {
            if (!ecx7) 
                break;
            --ecx7;
            ++edi6;
            ++esi5;
        } while (*reinterpret_cast<void***>(edi6) != eax8);
        ebx9 = reinterpret_cast<void**>(~ecx7 + 0xffffffff);
        if (!*reinterpret_cast<void***>(ebp2)) 
            goto addr_100097c3_7;
    }
    do {
        edi10 = *reinterpret_cast<void***>(ebp2);
        ecx11 = -1;
        eax8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) - reinterpret_cast<unsigned char>(eax8));
        do {
            if (!ecx11) 
                break;
            --ecx11;
            ++edi10;
            ++esi5;
        } while (*reinterpret_cast<void***>(edi10) != eax8);
        if (reinterpret_cast<unsigned char>(~ecx11 - 1) <= reinterpret_cast<unsigned char>(ebx9)) 
            continue;
        eax8 = *reinterpret_cast<void***>(ebp2);
        if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax8) + reinterpret_cast<unsigned char>(ebx9)) != 61) 
            continue;
        eax8 = fun_100099d0(eax8, esi5, ebx9);
        if (!eax8) 
            break;
        ebp2 = ebp2 + 4;
    } while (*reinterpret_cast<void***>(ebp2));
    goto addr_100097c3_7;
    return reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp2)) + reinterpret_cast<unsigned char>(ebx9) + 1;
}

signed char* fun_100085d0(void** a1, int32_t a2) {
    int32_t ebp3;
    signed char* eax4;

    if (reinterpret_cast<signed char>(a1) >= reinterpret_cast<signed char>(20)) {
        LeaveCriticalSection();
        goto ebp3;
    } else {
        eax4 = fun_10008500(a1 + 28);
        return eax4;
    }
}

void fun_10008520(void** a1, void** a2) {
    void** ebp3;

    if (reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(0x10010c48) || reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0x10010ea8)) {
        EnterCriticalSection();
        goto ebp3;
    } else {
        fun_10008490((reinterpret_cast<int32_t>(a1 - 0x10010c48) >> 5) + 28, ebp3, __return_address(), a1, a2);
        return;
    }
}

int32_t fun_10009820(void** a1, void** a2, void** a3, void** a4, void** a5) {
    int32_t edi6;
    int32_t eax7;
    void** edi8;
    void** esi9;
    void** v10;
    int32_t eax11;
    void** v12;

    edi6 = -1;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0x83) {
        eax7 = fun_10009540(a1);
        edi6 = eax7;
        fun_10009be0(a1, edi8, esi9, __return_address(), a1, a2);
        v10 = *reinterpret_cast<void***>(a1 + 16);
        eax11 = fun_10009ae0(v10);
        if (eax11 >= 0) {
            if (*reinterpret_cast<void***>(a1 + 28)) {
                v12 = *reinterpret_cast<void***>(a1 + 28);
                fun_10008660(v12, edi8, esi9, __return_address(), a1, a2, a3, a4, a5);
                *reinterpret_cast<void***>(a1 + 28) = reinterpret_cast<void**>(0);
            }
        } else {
            edi6 = -1;
        }
    }
    *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(0);
    return edi6;
}

signed char* fun_10008590(void** a1) {
    int32_t ebp2;
    signed char* eax3;

    if (reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(0x10010c48) || reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0x10010ea8)) {
        LeaveCriticalSection();
        goto ebp2;
    } else {
        eax3 = fun_10008500((reinterpret_cast<int32_t>(a1 - 0x10010c48) >> 5) + 28);
        return eax3;
    }
}

void** g10011364 = reinterpret_cast<void**>(0);

int32_t GetStringTypeA = 0x14c26;

int32_t GetStringTypeW = 0x14c38;

int32_t MultiByteToWideChar = 0x14aea;

void** fun_10009c20(int32_t a1, void** a2, void** a3, void* a4, void** a5, int32_t a6) {
    void** eax7;
    int32_t esi8;
    int32_t eax9;
    int32_t eax10;
    void** ebx11;
    void** esi12;
    void** edi13;
    int32_t eax14;
    void** eax15;
    void** edi16;
    int32_t esi17;
    int32_t eax18;
    void** eax19;
    void** ebp20;

    eax7 = g10011364;
    if (eax7) {
        esi8 = GetStringTypeA;
    } else {
        esi8 = GetStringTypeA;
        eax9 = reinterpret_cast<int32_t>(esi8(0));
        if (!eax9) {
            eax10 = reinterpret_cast<int32_t>(GetStringTypeW());
            if (!eax10) {
                goto 1;
            } else {
                eax7 = reinterpret_cast<void**>(1);
            }
        } else {
            eax7 = reinterpret_cast<void**>(2);
        }
    }
    g10011364 = eax7;
    if (!reinterpret_cast<int1_t>(eax7 == 2)) {
        g10011364 = eax7;
        if (reinterpret_cast<int1_t>(eax7 == 1)) {
            ebx11 = reinterpret_cast<void**>(0);
            esi12 = reinterpret_cast<void**>(0);
            edi13 = a5;
            if (!edi13) {
                edi13 = g10010bf8;
            }
            eax14 = reinterpret_cast<int32_t>(MultiByteToWideChar());
            if (eax14 && ((eax15 = fun_10008600(2, eax14), esi12 = eax15, !!esi12) && (eax18 = reinterpret_cast<int32_t>(MultiByteToWideChar(edi13, 1, edi16, esi17, esi12, eax14)), !!eax18))) {
                eax19 = reinterpret_cast<void**>(GetStringTypeW(edi13, esi12, eax18, a3, edi13, 1, edi16, esi17, esi12, eax14));
                ebx11 = eax19;
            }
            fun_10008660(esi12, edi13, 9, a2, a3, 0, 0, ebp20, edi16);
            eax7 = ebx11;
        }
        return eax7;
    } else {
        if (!a6) {
        }
        esi8();
        goto ebp20;
    }
}

int32_t g10011374 = 0;

int32_t CompareStringA = 0x14c4a;

int32_t CompareStringW = 0x14c5c;

void** fun_10009d50(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    int1_t zf8;
    void** eax9;
    int32_t ebp10;
    void** ebp11;
    void** ebx12;
    void** esi13;
    void** edi14;
    int1_t zf15;
    int32_t v16;
    int1_t zf17;
    void** v18;
    void** eax19;
    int32_t eax20;
    int32_t v21;
    void** eax22;
    void** eax23;
    int32_t eax24;
    void** v25;
    int32_t eax26;
    void** eax27;
    int32_t eax28;
    uint32_t v29;
    int32_t v30;
    int32_t v31;
    void** v32;
    void** v33;
    void** v34;
    int32_t v35;
    uint32_t v36;
    int32_t v37;
    int32_t v38;
    void** v39;
    void** v40;
    void** v41;
    int32_t v42;

    zf8 = g10011374 == 0;
    if (zf8) {
        eax9 = reinterpret_cast<void**>(CompareStringA(0, 0, 0x10011368, 1, 0x10011368, 1));
        if (!eax9) {
            eax9 = reinterpret_cast<void**>(CompareStringW());
            if (!eax9) {
                goto ebp10;
            } else {
                g10011374 = 1;
            }
        } else {
            g10011374 = 2;
        }
    }
    ebp11 = a4;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebp11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebp11 == 0)) {
        ebx12 = a3;
    } else {
        ebx12 = a3;
        eax9 = fun_1000a040(ebx12, ebp11);
        ebp11 = eax9;
    }
    esi13 = a6;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi13 == 0)) {
        edi14 = a5;
    } else {
        edi14 = a5;
        eax9 = fun_1000a040(edi14, esi13);
        esi13 = eax9;
    }
    zf15 = g10011374 == 2;
    if (zf15) {
        CompareStringA();
        goto v16;
    }
    zf17 = g10011374 == 1;
    if (!zf17) {
        addr_1000a035_16:
        return eax9;
    } else {
        v18 = reinterpret_cast<void**>(0);
        if (!a7) {
            eax19 = g10010bf8;
            a7 = eax19;
        }
        if (!ebp11) 
            goto addr_10009e4b_20;
        if (esi13) 
            goto addr_10009f4a_22;
        addr_10009e4b_20:
        if (ebp11 == esi13) {
            return 2;
        }
        if (reinterpret_cast<signed char>(esi13) > reinterpret_cast<signed char>(1)) {
            return 1;
        }
        if (reinterpret_cast<signed char>(ebp11) > reinterpret_cast<signed char>(1)) {
            return 3;
        }
        eax20 = reinterpret_cast<int32_t>(GetCPInfo());
        if (!eax20) {
            goto v21;
        }
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebp11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebp11 == 0))) 
            goto addr_10009ea2_31;
    }
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi13 == 0)) {
        addr_10009f4a_22:
        eax22 = reinterpret_cast<void**>(MultiByteToWideChar());
        if (eax22) {
            eax23 = fun_10008680(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<unsigned char>(eax22), a7);
            if (eax23) {
                eax24 = reinterpret_cast<int32_t>(MultiByteToWideChar(a1));
                if (eax24 && ((eax26 = reinterpret_cast<int32_t>(MultiByteToWideChar(v25)), !!eax26) && ((eax27 = fun_10008680(eax26 * 2, v25), !!eax27) && (eax28 = reinterpret_cast<int32_t>(MultiByteToWideChar(eax22, 1, edi14, esi13)), !!eax28)))) {
                    CompareStringW(1, ebx12, eax26, 9, eax27, eax26, eax22, 1, edi14, esi13);
                }
                fun_10008660(eax22, a1, 1, ebx12, ebp11, eax23, eax22, a7, 9);
                fun_10008660(eax23, a1, 1, ebx12, ebp11, eax23, eax22, a7, 9);
                eax9 = a7;
                goto addr_1000a035_16;
            } else {
                goto 0;
            }
        } else {
            goto 0;
        }
    } else {
        if (v29 < 2) {
            goto v30;
        }
        if (*reinterpret_cast<signed char*>(&v18 + 2)) 
            goto addr_10009f17_42;
    }
    addr_10009f30_43:
    goto v31;
    do {
        addr_10009f17_42:
        if (!v32) 
            goto addr_10009f30_43;
        if (reinterpret_cast<unsigned char>(v33) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14))) 
            continue;
        if (reinterpret_cast<unsigned char>(v32) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14))) 
            break;
    } while (v34);
    goto addr_10009f30_43;
    goto v35;
    addr_10009ea2_31:
    if (v36 < 2) {
        goto v37;
    }
    if (*reinterpret_cast<signed char*>(&v18 + 2)) 
        goto addr_10009ec1_50;
    addr_10009eda_51:
    goto v38;
    do {
        addr_10009ec1_50:
        if (!v39) 
            goto addr_10009eda_51;
        if (reinterpret_cast<unsigned char>(v40) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx12))) 
            continue;
        if (reinterpret_cast<unsigned char>(v39) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx12))) 
            break;
    } while (v41);
    goto addr_10009eda_51;
    goto v42;
}

struct s38 {
    int32_t f0;
    unsigned char f4;
};

int32_t SetStdHandle = 0x14c02;

int32_t fun_100092d0(void** a1) {
    int1_t below_or_equal2;
    void** edi3;
    uint32_t eax4;
    uint32_t esi5;
    struct s38* eax6;
    int32_t* eax7;
    void* edi8;
    uint32_t* eax9;
    int1_t zf10;
    int32_t v11;

    below_or_equal2 = reinterpret_cast<unsigned char>(g10012f90) <= reinterpret_cast<unsigned char>(a1);
    if (below_or_equal2 || ((edi3 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) & 0xffffffe7) >> 3) + 0x10012fa0), eax4 = (reinterpret_cast<unsigned char>(a1) & 31) << 2, esi5 = eax4 + eax4 * 8, eax6 = reinterpret_cast<struct s38*>(reinterpret_cast<int32_t>(*edi3) + esi5), (eax6->f4 & 1) == 0) || eax6->f0 == -1)) {
        eax7 = fun_100092b0();
        *eax7 = 9;
        eax9 = fun_100092c0(edi8);
        *eax9 = 0;
        return -1;
    }
    zf10 = g1001046c == 1;
    if (!zf10) {
        addr_10009335_4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*edi3) + esi5) = -1;
        return 0;
    } else {
        if (!a1) {
            v11 = 0xf6;
        } else {
            if (a1 == 1) {
                v11 = 0xf5;
            } else {
                if (a1 == 2) {
                    v11 = 0xf4;
                } else {
                    goto addr_10009335_4;
                }
            }
        }
    }
    SetStdHandle(v11, 0);
    goto addr_10009335_4;
}

void** fun_1000a2c0(void** a1, void** a2) {
    void** edi3;
    void* eax4;
    void** ebx5;
    void** esi6;
    void** v7;
    void** eax8;
    void* edi9;

    edi3 = g100104b8;
    if (!*reinterpret_cast<void***>(edi3)) {
        addr_1000a2fc_2:
        eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi3) - reinterpret_cast<unsigned char>(g100104b8));
        return -(reinterpret_cast<int32_t>(eax4) >> 2);
    } else {
        ebx5 = a2;
        esi6 = a1;
        do {
            v7 = *reinterpret_cast<void***>(edi3);
            eax8 = fun_100099d0(esi6, v7, ebx5);
            if (eax8) 
                continue;
            if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi3)) + reinterpret_cast<unsigned char>(ebx5)) == 61) 
                break;
            if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi3)) + reinterpret_cast<unsigned char>(ebx5))) 
                break;
            edi3 = edi3 + 4;
        } while (*reinterpret_cast<void***>(edi3));
        goto addr_1000a2fc_2;
    }
    edi9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi3) - reinterpret_cast<unsigned char>(g100104b8));
    return reinterpret_cast<int32_t>(edi9) >> 2;
}

struct s31* fun_1000a660(void** a1) {
    void** ecx2;
    void** eax3;
    int1_t zf4;

    ecx2 = a1;
    if (!(reinterpret_cast<unsigned char>(ecx2) & 3)) {
        do {
            addr_1000a67c_2:
            ecx2 = ecx2 + 4;
            if (!((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx2)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx2) + 0x7efefeff)) & 0x81010100)) 
                goto addr_1000a67c_2;
            eax3 = *reinterpret_cast<void***>(ecx2 + 0xfffffffc);
            if (!*reinterpret_cast<signed char*>(&eax3)) 
                break;
            if (!*reinterpret_cast<signed char*>(&eax3 + 1)) 
                goto addr_1000a6c3_5;
            if (!(reinterpret_cast<unsigned char>(eax3) & 0xff0000)) 
                goto addr_1000a6b9_7;
            zf4 = (reinterpret_cast<unsigned char>(eax3) & 0xff000000) == 0;
        } while (!zf4 && !zf4);
        goto addr_1000a6af_9;
    } else {
        do {
            ++ecx2;
            if (!*reinterpret_cast<void***>(ecx2)) 
                goto addr_1000a6af_9;
        } while (reinterpret_cast<unsigned char>(ecx2) & 3);
        goto addr_1000a67b_12;
    }
    return reinterpret_cast<uint32_t>(ecx2 + 0xfffffffc) - reinterpret_cast<unsigned char>(a1);
    addr_1000a6c3_5:
    return reinterpret_cast<uint32_t>(ecx2 + 0xfffffffd) - reinterpret_cast<unsigned char>(a1);
    addr_1000a6b9_7:
    return reinterpret_cast<uint32_t>(ecx2 + 0xfffffffe) - reinterpret_cast<unsigned char>(a1);
    addr_1000a6af_9:
    return reinterpret_cast<unsigned char>(ecx2 + 0xffffffff) - reinterpret_cast<unsigned char>(a1);
    addr_1000a67b_12:
    goto addr_1000a67c_2;
}

int32_t DialogBoxParamA = 0x14904;

int32_t fun_10004120(void** a1) {
    void** ecx2;
    void** edx3;

    ecx2 = g1000c0e4;
    DialogBoxParamA();
    g1000c0f8 = reinterpret_cast<void**>(0);
    edx3 = g1000c0e8;
    g1000c0ec = edx3;
    goto ecx2;
}

void* fun_10004c30(void* a1, int32_t a2, uint32_t a3, int32_t a4, uint32_t a5, uint32_t a6, uint32_t a7);

void fun_10004ba0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** esi10;
    void** v11;
    void** edi12;
    int32_t* esp13;
    signed char* edi14;
    int32_t v15;
    uint32_t v16;
    int32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    void* eax21;
    void* esp22;
    int32_t ecx23;
    int32_t eax24;
    uint32_t edx25;
    int32_t ecx26;
    int32_t eax27;
    signed char v28;
    uint32_t ecx29;
    uint32_t ecx30;
    int32_t v31;

    v8 = reinterpret_cast<void**>(__return_address());
    fun_10006310(ecx, v8);
    v9 = esi10;
    v11 = edi12;
    esp13 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4);
    edi14 = "\r\n";
    eax21 = fun_10004c30(esp13 + 6, v15, v16, v17, v18, v19, v20);
    esp22 = reinterpret_cast<void*>(esp13 - 1 - 1 - 1 - 1 + 7 + 1);
    ecx23 = -1;
    eax24 = reinterpret_cast<int32_t>(eax21) - reinterpret_cast<int32_t>(eax21);
    do {
        if (!ecx23) 
            break;
        --ecx23;
        ++edi14;
    } while (*edi14 != *reinterpret_cast<signed char*>(&eax24));
    edx25 = reinterpret_cast<uint32_t>(~ecx23);
    ecx26 = -1;
    eax27 = eax24 - eax24;
    do {
        if (!ecx26) 
            break;
        --ecx26;
    } while (v28 != *reinterpret_cast<signed char*>(&eax27));
    ecx29 = edx25 >> 2;
    while (ecx29) {
        --ecx29;
    }
    ecx30 = edx25 & 3;
    while (ecx30) {
        --ecx30;
    }
    fun_10001000(reinterpret_cast<int32_t>(esp22) + 8, v11, v9, v8, a2, a3, a4, a5, a6);
    goto v31;
}

int32_t fun_10002ff0() {
    void** eax1;

    eax1 = g1000c0ec;
    MessageBoxA();
    goto eax1;
}

uint32_t fun_10006590() {
    struct s27* eax1;
    uint32_t ecx2;
    uint32_t ecx3;

    eax1 = fun_100068e0();
    ecx2 = eax1->f14 + eax1->f14 * 4;
    ecx3 = eax1->f14 + ((eax1->f14 + (ecx2 + ecx2 * 4 + eax1->f14) * 8 << 8) - eax1->f14) * 4 + 0x269ec3;
    eax1->f14 = ecx3;
    return (ecx3 & 0x7fff0000) >> 16;
}

int32_t g10010454 = 0;

void fun_10005fa0() {
    void** eax1;

    g10010454 = 0;
    eax1 = g10010450;
    if (eax1) {
        CloseHandle(eax1);
        g10010450 = reinterpret_cast<void**>(0);
    }
    return;
}

int32_t g100115b0;

int32_t g100115b4;

void** g100115b8;

int32_t g10011bf0;

int32_t g10011bf4;

void** g10011bf8;

int32_t GlobalAlloc = 0x1472a;

uint32_t fun_100056b0(void** a1, void** a2, void** a3, void** a4) {
    int32_t esi5;
    void** eax6;
    void** eax7;
    void** eax8;
    void** eax9;
    void** esi10;
    void** eax11;

    esi5 = CreateEventA;
    eax6 = reinterpret_cast<void**>(esi5());
    g10011598 = eax6;
    if (!reinterpret_cast<int1_t>(eax6 == 0xffffffff)) {
        g10011598 = eax6;
        g100115b0 = 0;
        g100115b4 = 0;
        g100115b8 = eax6;
        g10011bfc = 0;
        eax7 = reinterpret_cast<void**>(esi5());
        g10011c00 = eax7;
        if (!reinterpret_cast<int1_t>(eax7 == 0xffffffff)) {
            g10011c00 = eax7;
            g10011bf0 = 0;
            g10011bf4 = 0;
            g10011bf8 = eax7;
            g1001159c = 0;
            eax8 = reinterpret_cast<void**>(GlobalAlloc());
            g100102f4 = eax8;
            fun_10005b60();
            goto 4;
        } else {
            eax9 = reinterpret_cast<void**>(GetLastError());
            fun_100052a0("CreateLocalNode: CreateEvent() returned %d\n", eax9, 0, 1, 0, 0, 0, 1, 0, 0, esi10, __return_address());
            goto 1;
        }
    } else {
        eax11 = reinterpret_cast<void**>(GetLastError());
        fun_100052a0("CreateLocalNode: CreateEvent() returned %d\n", eax11, 0, 1, 0, 0, esi10, __return_address(), a1, a2, a3, a4);
        goto 1;
    }
}

int32_t GetACP = 0x14aba;

int32_t GetOEMCP = 0x14ac4;

void** fun_10007200(void** a1) {
    void** eax2;

    g10010624 = 0;
    eax2 = a1;
    if (!reinterpret_cast<int1_t>(eax2 == 0xfffffffe)) {
        if (!reinterpret_cast<int1_t>(eax2 == 0xfffffffd)) {
            if (reinterpret_cast<int1_t>(eax2 == 0xfffffffc)) {
                g10010624 = 1;
                eax2 = g10010bf8;
            }
            return eax2;
        } else {
            g10010624 = 1;
            goto GetACP;
        }
    } else {
        g10010624 = 1;
        goto GetOEMCP;
    }
}

void fun_100067f0(void** a1, void** a2, void** a3) {
    fun_10008490(13, __return_address(), a1, a2, a3);
    return;
}

void** g10011f8c;

int32_t fun_100095c0(int32_t a1) {
    int32_t edi2;
    void** esi3;
    void* ebx4;
    int32_t v5;
    void** ebp6;
    void** edi7;
    void** esi8;
    void** ebx9;
    int32_t ebp10;
    void** eax11;
    void** v12;
    void** eax13;
    void** eax14;
    void** v15;
    uint32_t eax16;
    void** v17;
    uint32_t eax18;
    void** eax19;
    int32_t v20;
    int32_t eax21;

    edi2 = 0;
    esi3 = reinterpret_cast<void**>(0);
    ebx4 = reinterpret_cast<void*>(0);
    v5 = 0;
    fun_10008490(2, ebp6, edi7, esi8, ebx9);
    ebp10 = a1;
    do {
        eax11 = g10011f8c;
        if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<uint32_t>(ebx4)) && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<uint32_t>(ebx4)) + 12)) & 0x83) {
            v12 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<uint32_t>(ebx4));
            fun_10008560(esi3, v12);
            eax13 = g10011f8c;
            eax14 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint32_t>(ebx4)) + 12);
            if (*reinterpret_cast<unsigned char*>(&eax14) & 0x83) {
                if (ebp10 != 1) {
                    if (!ebp10 && (*reinterpret_cast<unsigned char*>(&eax14) & 2 && (v15 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint32_t>(ebx4)), eax16 = fun_10009500(v15), eax16 == 0xffffffff))) {
                        v5 = -1;
                    }
                } else {
                    v17 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint32_t>(ebx4));
                    eax18 = fun_10009500(v17);
                    if (eax18 != 0xffffffff) {
                        ++edi2;
                    }
                }
            }
            eax19 = g10011f8c;
            v20 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(ebx4));
            fun_100085d0(esi3, v20);
        }
        ebx4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx4) + 4);
        ++esi3;
    } while (reinterpret_cast<int32_t>(ebx4) < reinterpret_cast<int32_t>(0x800));
    fun_10008500(2);
    eax21 = edi2;
    if (ebp10 != 1) {
        eax21 = v5;
    }
    return eax21;
}

int32_t SendMessageA = 0x1492e;

void* fun_10004c30(void* a1, int32_t a2, uint32_t a3, int32_t a4, uint32_t a5, uint32_t a6, uint32_t a7) {
    void* esi8;
    void* esp9;
    void* eax10;
    int32_t edi11;
    int32_t v12;
    uint32_t eax13;
    uint32_t ebp14;
    int32_t eax15;
    uint32_t eax16;
    uint32_t ebp17;
    int32_t eax18;
    uint32_t ebp19;
    uint32_t eax20;
    int32_t eax21;
    uint32_t v22;
    int32_t v23;
    int32_t eax24;
    int32_t eax25;
    int32_t eax26;
    uint32_t eax27;
    void* eax28;
    int32_t eax29;
    int32_t v30;
    uint32_t eax31;
    uint32_t ecx32;
    uint32_t v33;
    uint32_t eax34;
    void* v35;

    esi8 = a1;
    esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x400 - 4 - 4 - 4 - 4);
    if (esi8 || (eax10 = reinterpret_cast<void*>(LocalAlloc(64, 0x1000)), esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 - 4 - 4 + 4), esi8 = eax10, !!esi8)) {
        if (a3 >= 21) {
            wsprintfA(esi8, "Tapi Msg: Unknown dwMsg: '0x%lx', dwDevice: '0x%lx', dwInst: '0x%lx', dwP1: '0x%lx', dwP2: '0x%lx', dwP3: '0x%lx'", a3, a2, a4, a5, a6, a7);
            goto addr_100050be_4;
        }
        edi11 = wsprintfA;
        v12 = *reinterpret_cast<int32_t*>(a3 * 4 + 0x1000fb60);
        eax13 = reinterpret_cast<uint32_t>(edi11(esi8, "Tapi Msg(%s) On(0x%lx)\r\n\t ", v12, a2));
        esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
        ebp14 = eax13;
        if (a3 > 20) 
            goto addr_10004cea_6;
        switch (a3) {
        case 0:
            eax15 = reinterpret_cast<int32_t>(edi11(reinterpret_cast<int32_t>(esi8) + ebp14, "Address ID: 0x%lx, Address State: ", a5));
            fun_10005130(eax15 + ebp14 + reinterpret_cast<int32_t>(esi8), a6, 0x1000fbb8, 10);
            goto addr_100050be_4;
        case 1:
            fun_10005130(ebp14 + reinterpret_cast<int32_t>(esi8), a5, 0x1000fbe0, 29);
            goto addr_100050be_4;
        case 2:
            eax16 = fun_10005130(reinterpret_cast<int32_t>(esi8) + ebp14, a7, 0x1000fd28, 4);
            ebp17 = ebp14 + eax16;
            eax18 = reinterpret_cast<int32_t>(edi11(reinterpret_cast<int32_t>(esi8) + ebp17, "; "));
            ebp19 = ebp17 + eax18;
            eax20 = fun_10005130(reinterpret_cast<int32_t>(esi8) + ebp19, a5, 0x1000fc58, 17);
            ebp14 = ebp19 + eax20;
            if (a5 > 64) {
                if (a5 == 0x80) {
                    eax21 = reinterpret_cast<int32_t>(edi11(reinterpret_cast<int32_t>(esi8) + ebp14, ": "));
                    fun_10005130(eax21 + ebp14 + reinterpret_cast<int32_t>(esi8), a6, 0x1000fcd8, 6);
                    goto addr_100050be_4;
                } else {
                    if (a5 == 0x800) {
                        v22 = a6;
                        v23 = reinterpret_cast<int32_t>(": Parent conference call handle: 0x%lx");
                        goto addr_100050b6_15;
                    } else {
                        if (a5 == 0x4000) {
                            eax24 = reinterpret_cast<int32_t>(edi11(reinterpret_cast<int32_t>(esi8) + ebp14, ": "));
                            fun_10005130(eax24 + ebp14 + reinterpret_cast<int32_t>(esi8), a6, 0x1000fcf0, 14);
                            goto addr_100050be_4;
                        } else {
                            goto addr_100050be_4;
                        }
                    }
                }
            } else {
                if (a5 == 64) {
                    eax25 = reinterpret_cast<int32_t>(edi11(reinterpret_cast<int32_t>(esi8) + ebp14, ": "));
                    fun_10005130(eax25 + ebp14 + reinterpret_cast<int32_t>(esi8), a6, 0x1000fcc0, 5);
                    goto addr_100050be_4;
                } else {
                    if (a5 == 8) {
                        eax26 = reinterpret_cast<int32_t>(edi11(reinterpret_cast<int32_t>(esi8) + ebp14, ": "));
                        fun_10005130(eax26 + ebp14 + reinterpret_cast<int32_t>(esi8), a6, 0x1000fca0, 7);
                        goto addr_100050be_4;
                    } else {
                        goto addr_100050be_4;
                    }
                }
            }
        case 6:
            fun_10005130(ebp14 + reinterpret_cast<int32_t>(esi8), a5, 0x1000fd38, 6);
            goto addr_100050be_4;
        case 7:
            fun_10005130(ebp14 + reinterpret_cast<int32_t>(esi8), a5, 0x1000fd50, 3);
            goto addr_100050be_4;
        case 8:
            eax27 = fun_10005130(reinterpret_cast<int32_t>(esi8) + ebp14, a5, 0x1000fd60, 26);
            ebp14 = ebp14 + eax27;
            if (a5 == 2) {
                edi11(ebp14 + reinterpret_cast<int32_t>(esi8), "; Ring Mode: 0x%lx, Ring Count: %lu", a6, a7);
                goto addr_100050be_4;
            }
            if (a5 != 0x40000) {
                goto addr_100050be_4;
            }
            if (!a6) {
                addr_100050be_4:
            case 3:
            case 4:
            case 5:
                eax28 = esi8;
                break;
            } else {
                if (a6 == 8) {
                    eax29 = reinterpret_cast<int32_t>(edi11(reinterpret_cast<int32_t>(esi8) + ebp14, "; ReInit reason: LINE_LINEDEVSTATE, "));
                    fun_10005130(eax29 + ebp14 + reinterpret_cast<int32_t>(esi8), a7, 0x1000fd60, 26);
                    goto addr_100050be_4;
                } else {
                    v22 = a7;
                    if (a6 == 19) {
                        v23 = reinterpret_cast<int32_t>("; ReInit reason: LINE_CREATE, New Line Device ID '0x%lx'");
                        goto addr_100050b6_15;
                    } else {
                        v30 = *reinterpret_cast<int32_t*>(a6 * 4 + 0x1000fb60);
                        edi11(ebp14 + reinterpret_cast<int32_t>(esi8), "; ReInit reason: %s, dwParam3: 0x%lx", v30, v22);
                        goto addr_100050be_4;
                    }
                }
            }
        case 9:
            eax31 = fun_10005130(reinterpret_cast<int32_t>(esi8) + ebp14, a6, 0x1000fdc8, 4);
            ecx32 = 0;
            *reinterpret_cast<signed char*>(&ecx32) = *reinterpret_cast<signed char*>(&a5);
            v22 = ecx32;
            v23 = reinterpret_cast<int32_t>(", Received: '%c'");
            v33 = eax31 + ebp14 + reinterpret_cast<int32_t>(esi8);
            goto addr_100050b9_37;
        case 10:
            fun_10005130(ebp14 + reinterpret_cast<int32_t>(esi8), a5, 0x1000fdd8, 16);
            goto addr_100050be_4;
        case 11:
            v22 = a5;
            v23 = reinterpret_cast<int32_t>("AppSpecific tone '%lu'");
            goto addr_100050b6_15;
        case 12:
            if (a6) {
                fun_10004900(a6, reinterpret_cast<int32_t>(esp9) + 16, 0xff);
                edi11(ebp14 + reinterpret_cast<int32_t>(esi8), "Request ID: 0x%lx; UnSuccessful reply; %s", a5, reinterpret_cast<int32_t>(esp9) - 4 - 4 - 4 - 4 + 12 + 4 + 16);
                goto addr_100050be_4;
            } else {
                v22 = a5;
                v23 = reinterpret_cast<int32_t>("Request ID: 0x%lx; Successful reply!");
                goto addr_100050b6_15;
            }
        case 13:
            eax34 = fun_10005130(reinterpret_cast<int32_t>(esi8) + ebp14, a5, 0x1000fe18, 4);
            esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 - 4 - 4 - 4 - 4 + 16 + 4);
            if (a5 == 4) {
                v35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) + 16);
                SendMessageA(a6, 13, 0x400, v35);
                edi11(ebp14 + eax34 + reinterpret_cast<int32_t>(esi8), ": hwnd dropping = 0x%lx, \"%s\"; wRequestID = %u", a6, reinterpret_cast<int32_t>(esp9) - 4 - 4 - 4 - 4 - 4 + 4 + 16, a3 & 0xffff, a6, 13, 0x400, v35);
                goto addr_100050be_4;
            }
            addr_10004cea_6:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            edi11(ebp14 + reinterpret_cast<int32_t>(esi8), "dwParam1: 0x%lx , dwParam2: 0x%lx , dwParam3: 0x%lx", a5, a6, a7);
            goto addr_100050be_4;
        case 19:
            v22 = a5;
            v23 = reinterpret_cast<int32_t>("New Line Device ID '0x%lx'");
            goto addr_100050b6_15;
        case 20:
            v22 = a5;
            v23 = reinterpret_cast<int32_t>("New Phone Device ID '0x%lx'");
            goto addr_100050b6_15;
        }
    } else {
        eax28 = reinterpret_cast<void*>(0);
    }
    return eax28;
    addr_100050b6_15:
    v33 = ebp14 + reinterpret_cast<int32_t>(esi8);
    addr_100050b9_37:
    edi11(v33, v23, v22);
    goto addr_100050be_4;
}

void** fun_100057c0(void** a1) {
    int32_t ecx2;
    void** eax3;
    void*** edi4;
    void** esi5;
    int1_t zf6;
    int32_t eax7;
    void** eax8;
    void** eax9;

    ecx2 = 2;
    eax3 = a1;
    edi4 = reinterpret_cast<void***>(".");
    esi5 = eax3;
    do {
        if (!ecx2) 
            break;
        --ecx2;
        zf6 = *reinterpret_cast<void***>(esi5) == *edi4;
        ++edi4;
        ++esi5;
    } while (zf6);
    if (!zf6) {
        eax7 = fun_10005800(eax3);
        if (eax7) {
            eax8 = g100102f4;
            return eax8;
        } else {
            return 0xffffffff;
        }
    } else {
        eax9 = g100102f4;
        return eax9;
    }
}

void fun_1000237c(signed char* ecx) {
    signed char al2;

    *ecx = reinterpret_cast<signed char>(*ecx + al2);
}

void fun_1000465c() {
    int32_t eax1;
    int32_t eax2;
    signed char al3;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax2) + al3);
}

void fun_10004748(signed char* ecx) {
    signed char al2;

    *ecx = reinterpret_cast<signed char>(*ecx + al2);
}

void fun_1000729c() {
    int32_t eax1;
    int32_t eax2;
    signed char al3;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax2) + al3);
}

signed char g5050105;

void fun_10008128(int32_t ecx) {
    signed char tmp8_2;
    signed char al3;

    tmp8_2 = reinterpret_cast<signed char>(g5050105 + al3);
    g5050105 = tmp8_2;
}

void fun_10008150() {
    int32_t eax1;
    int32_t eax2;
    signed char al3;
    int32_t eax4;
    signed char al5;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax2) + al3);
    *reinterpret_cast<signed char*>(&eax4) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(al5 + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax4) + eax4;
}

struct s39 {
    signed char[269488144] pad269488144;
    unsigned char f10101010;
};

unsigned char g10100e10;

void fun_100081c4(uint32_t ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char dl4;
    int32_t* eax5;
    int32_t* eax6;
    int32_t edx7;
    unsigned char tmp8_8;
    signed char dl9;
    signed char* eax10;
    unsigned char* edx11;
    unsigned char tmp8_12;
    signed char* eax13;
    unsigned char dl14;
    uint1_t cf15;
    unsigned char* eax16;
    unsigned char* eax17;
    unsigned char tmp8_18;
    signed char* eax19;
    uint1_t cf20;
    unsigned char* eax21;
    unsigned char* eax22;
    unsigned char tmp8_23;
    signed char* eax24;
    uint1_t cf25;
    unsigned char* eax26;
    unsigned char* eax27;
    unsigned char tmp8_28;
    signed char* eax29;
    uint1_t cf30;
    unsigned char* eax31;
    unsigned char* eax32;
    unsigned char* eax33;
    signed char* eax34;
    unsigned char* tmp32_35;
    void** eax36;
    unsigned char* edx37;
    unsigned char tmp8_38;
    signed char* eax39;
    uint1_t cf40;
    unsigned char* eax41;
    unsigned char* eax42;
    void* eax43;
    void* eax44;
    signed char al45;
    unsigned char* tmp32_46;
    struct s39* eax47;
    unsigned char tmp8_48;
    unsigned char* eax49;
    uint1_t cf50;
    unsigned char tmp8_51;
    uint1_t cf52;
    uint32_t ecx53;
    unsigned char tmp8_54;

    *eax2 = reinterpret_cast<signed char>(*eax3 + dl4);
    *eax5 = *eax6 + edx7;
    tmp8_8 = reinterpret_cast<unsigned char>(dl9 + *eax10);
    *reinterpret_cast<unsigned char*>(&edx11) = tmp8_8;
    tmp8_12 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax13 + *reinterpret_cast<unsigned char*>(&edx11)) + reinterpret_cast<uint1_t>(tmp8_8 < dl14));
    cf15 = reinterpret_cast<uint1_t>(tmp8_12 < *eax16);
    *eax17 = tmp8_12;
    tmp8_18 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax19 + *reinterpret_cast<unsigned char*>(&edx11)) + cf15);
    cf20 = reinterpret_cast<uint1_t>(tmp8_18 < *eax21);
    *eax22 = tmp8_18;
    tmp8_23 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax24 + *reinterpret_cast<unsigned char*>(&edx11)) + cf20);
    cf25 = reinterpret_cast<uint1_t>(tmp8_23 < *eax26);
    *eax27 = tmp8_23;
    tmp8_28 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax29 + *reinterpret_cast<unsigned char*>(&edx11)) + cf25);
    cf30 = reinterpret_cast<uint1_t>(tmp8_28 < *eax31);
    *eax32 = tmp8_28;
    *eax33 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax34 + *reinterpret_cast<unsigned char*>(&edx11)) + cf30);
    tmp32_35 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx11) + reinterpret_cast<int32_t>(*eax36));
    edx37 = tmp32_35;
    tmp8_38 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax39 + *reinterpret_cast<unsigned char*>(&edx37)) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_35) < reinterpret_cast<uint32_t>(edx11)));
    cf40 = reinterpret_cast<uint1_t>(tmp8_38 < *eax41);
    *eax42 = tmp8_38;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax43) + reinterpret_cast<uint32_t>(edx37)) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax44) + reinterpret_cast<uint32_t>(edx37)) + al45) + cf40);
    tmp32_46 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax47) + 0x10101010);
    tmp8_48 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*tmp32_46 + *reinterpret_cast<unsigned char*>(&edx37)) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_46) < reinterpret_cast<uint32_t>(eax49)));
    cf50 = reinterpret_cast<uint1_t>(tmp8_48 < *tmp32_46);
    *tmp32_46 = tmp8_48;
    *tmp32_46 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*tmp32_46 + *reinterpret_cast<unsigned char*>(&edx37)) + cf50);
    *tmp32_46 = reinterpret_cast<unsigned char>(*tmp32_46 | *reinterpret_cast<unsigned char*>(&ecx));
    *tmp32_46 = reinterpret_cast<unsigned char>(*tmp32_46 | *reinterpret_cast<unsigned char*>(&edx37));
    *tmp32_46 = reinterpret_cast<unsigned char>(*tmp32_46 | reinterpret_cast<uint32_t>(edx37));
    tmp8_51 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*tmp32_46 + *reinterpret_cast<unsigned char*>(&edx37))));
    cf52 = reinterpret_cast<uint1_t>(tmp8_51 < *tmp32_46);
    *tmp32_46 = tmp8_51;
    *edx37 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*edx37 + *reinterpret_cast<unsigned char*>(&ecx)) + cf52);
    ecx53 = ecx | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(tmp32_46) + reinterpret_cast<uint32_t>(edx37));
    tmp8_54 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(g10100e10 + *reinterpret_cast<signed char*>(&ecx53))));
    g10100e10 = tmp8_54;
}

int32_t fun_10004b15() {
    return 1;
}

int16_t g10011db6;

int16_t g10011dba;

int16_t g10011db8;

signed char g10011dda;

/* _Process@0 */
uint32_t _Process_0(void** a1, void** a2, void** a3) {
    int1_t zf4;
    int1_t zf5;
    uint32_t eax6;
    uint32_t eax7;
    int32_t ecx8;
    void** eax9;
    int32_t ecx10;
    void** v11;
    uint32_t eax12;

    zf4 = g10011db6 == 1;
    if (!zf4) {
        zf5 = g10011db6 == 2;
        if (zf5) {
            eax6 = fun_10005af0(0x10011dd4, 0x68);
            g10011dba = *reinterpret_cast<int16_t*>(&eax6);
            if (*reinterpret_cast<int16_t*>(&eax6) == -1) {
                g10011db8 = -1;
            } else {
                eax7 = 0;
                *reinterpret_cast<signed char*>(&eax7) = g10011dda;
                ecx8 = *reinterpret_cast<int32_t*>(eax7 * 4 + 0x10011f50);
                g10011db8 = *reinterpret_cast<int16_t*>(&ecx8);
                return eax7;
            }
        }
        return eax6;
    } else {
        eax9 = reinterpret_cast<void**>(static_cast<int32_t>(g10011dba));
        ecx10 = g10011db8;
        v11 = *reinterpret_cast<void***>(ecx10 * 4 + 0x10011d80);
        eax12 = fun_100059a0(v11, 0x10011dd4, eax9, __return_address(), a1, a2, a3);
        return eax12;
    }
}

int32_t g100130b4;

void** fun_100061c0(void** ecx, void** a2, void** a3, void** a4) {
    void** ebx5;
    uint32_t eax6;
    uint32_t tmp32_7;
    int32_t eax8;
    void** esi9;
    void** ebp10;
    void** eax11;
    void** ebp12;
    void** eax13;
    int32_t eax14;
    void** eax15;
    void** edi16;
    void** eax17;
    void** esi18;
    void** ebx19;
    void** eax20;

    ebx5 = reinterpret_cast<void**>(1);
    if (!reinterpret_cast<int1_t>(a3 == 1)) {
        if (!a3) {
            eax6 = g10010458;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax6) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax6 == 0)) {
                return 0;
            } else {
                g10010458 = eax6 - 1;
            }
        }
    } else {
        tmp32_7 = g10010458 + reinterpret_cast<unsigned char>(1);
        g10010458 = tmp32_7;
    }
    if (a3 == 1 || reinterpret_cast<int1_t>(a3 == 2)) {
        eax8 = g100130b4;
        if (!eax8) {
            esi9 = a2;
            ebp10 = a4;
        } else {
            ebp10 = a4;
            esi9 = a2;
            eax11 = reinterpret_cast<void**>(eax8(esi9, a3, ebp10));
            ebx5 = eax11;
        }
        if (ebx5) 
            goto addr_10006225_12;
    } else {
        esi9 = a2;
        ebp10 = a4;
        goto addr_10006239_14;
    }
    addr_10006247_15:
    if (ebx5) {
        addr_1000625a_16:
        if (!a3 || reinterpret_cast<int1_t>(a3 == 3)) {
            eax13 = fun_10006070(esi9, a3, ebp10, ebp12);
            if (!eax13) {
                ebx5 = reinterpret_cast<void**>(0);
            }
            if (ebx5 && (eax14 = g100130b4, !!eax14)) {
                eax15 = reinterpret_cast<void**>(eax14(esi9, a3, ebp10));
                ebx5 = eax15;
            }
        }
    } else {
        addr_1000624b_21:
        if (reinterpret_cast<int1_t>(a3 == 1)) {
            fun_10006890(ebp12, edi16);
            fun_10006a20();
            goto addr_1000625a_16;
        }
    }
    return ebx5;
    addr_10006225_12:
    eax17 = fun_10006070(esi9, a3, ebp10, ebp12);
    ebx5 = eax17;
    addr_10006239_14:
    if (!ebx5) 
        goto addr_1000624b_21;
    eax20 = fun_10005640(ecx, esi9, a3, ebp10, ebp12, edi16, esi18, ebx19, __return_address(), a2, a3);
    ebx5 = eax20;
    goto addr_10006247_15;
}

signed char* fun_10006730(int32_t a1) {
    signed char* eax2;

    eax2 = fun_10006760(a1, 1, 0);
    return eax2;
}

uint32_t g10011f88;

struct s40 {
    signed char[32] pad32;
    void** f20;
};

int32_t fun_10008c80(void** a1, void** a2) {
    void** v3;
    int32_t eax4;
    int1_t zf5;
    void** v6;
    void** ebx7;
    void** v8;
    void** esi9;
    void** v10;
    void** edi11;
    int32_t esi12;
    void** v13;
    void** ebp14;
    uint32_t edi15;
    int1_t less_or_equal16;
    void* ebp17;
    int32_t ebx18;
    void** eax19;
    void** v20;
    int32_t eax21;
    void** eax22;
    void** v23;
    void** ecx24;
    void** v25;
    void** ecx26;
    int1_t less27;

    v3 = reinterpret_cast<void**>(__return_address());
    eax4 = fun_100095b0();
    zf5 = g100104d0 == 0;
    if (zf5) {
        return eax4;
    }
    v6 = ebx7;
    v8 = esi9;
    v10 = edi11;
    esi12 = 0;
    v13 = ebp14;
    edi15 = 3;
    fun_10008490(2, v13, v10, v8, v6);
    less_or_equal16 = reinterpret_cast<int32_t>(g10011f88) <= reinterpret_cast<int32_t>(3);
    if (!less_or_equal16) 
        goto addr_1000947d_5;
    addr_100094e7_6:
    fun_10008500(2);
    return esi12;
    addr_1000947d_5:
    ebp17 = reinterpret_cast<void*>(12);
    ebx18 = DeleteCriticalSection;
    do {
        eax19 = g10011f8c;
        if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(ebp17))) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(ebp17)) + 12)) & 0x83 && (v20 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(ebp17)), eax21 = fun_100097e0(v20), eax21 != -1)) {
                ++esi12;
            }
            if (reinterpret_cast<int32_t>(ebp17) >= reinterpret_cast<int32_t>(80)) {
                eax22 = g10011f8c;
                v23 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s40**>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<uint32_t>(ebp17)))->f20);
                ebx18(v23);
                ecx24 = g10011f8c;
                v25 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx24) + reinterpret_cast<uint32_t>(ebp17));
                fun_10008660(v25, v23, v13, v10, v8, v6, v3, a1, a2);
                ecx26 = g10011f8c;
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx26) + reinterpret_cast<uint32_t>(ebp17)) = 0;
            }
        }
        ebp17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp17) + 4);
        ++edi15;
        less27 = reinterpret_cast<int32_t>(edi15) < reinterpret_cast<int32_t>(g10011f88);
    } while (less27);
    goto addr_100094e7_6;
}

struct s41 {
    signed char f0;
    signed char[1] pad2;
    signed char f2;
};

struct s42 {
    int32_t f0;
    signed char f1;
    int16_t f2;
    signed char f3;
};

struct s43 {
    int32_t f0;
    signed char f1;
    int16_t f2;
    signed char f3;
};

struct s41* fun_1000a390(struct s41* a1, struct s41* a2, void* a3) {
    struct s41* esi4;
    struct s41* edi5;
    void* ecx6;
    uint32_t edx7;
    void* eax8;
    uint32_t ecx9;
    uint32_t eax10;
    uint32_t ecx11;
    uint32_t edx12;
    uint32_t ecx13;
    void* esi14;
    void* edi15;
    signed char* esi16;
    signed char* edi17;
    uint32_t edx18;
    int32_t edx19;
    void* eax20;
    uint32_t ecx21;
    uint32_t eax22;
    struct s42* esi23;
    struct s43* edi24;
    uint32_t ecx25;
    uint32_t edx26;
    uint32_t ecx27;

    esi4 = a2;
    edi5 = a1;
    ecx6 = a3;
    if (reinterpret_cast<uint32_t>(edi5) <= reinterpret_cast<uint32_t>(esi4) || reinterpret_cast<uint32_t>(edi5) >= reinterpret_cast<uint32_t>(esi4) + reinterpret_cast<uint32_t>(ecx6)) {
        if (reinterpret_cast<uint32_t>(edi5) & 3) {
            if (reinterpret_cast<uint32_t>(ecx6) <= 12) {
                while (ecx6) {
                    ecx6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx6) - 1);
                    edi5->f0 = esi4->f0;
                    edi5 = reinterpret_cast<struct s41*>(&edi5->pad2);
                    esi4 = reinterpret_cast<struct s41*>(&esi4->pad2);
                }
                return a1;
            }
            edx7 = -reinterpret_cast<uint32_t>(edi5) & 3;
            eax8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx6) - edx7);
            ecx9 = edx7;
            while (ecx9) {
                --ecx9;
                edi5->f0 = esi4->f0;
                edi5 = reinterpret_cast<struct s41*>(&edi5->pad2);
                esi4 = reinterpret_cast<struct s41*>(&esi4->pad2);
            }
            eax10 = reinterpret_cast<uint32_t>(eax8) & 3;
            ecx11 = reinterpret_cast<uint32_t>(eax8) >> 2;
            while (ecx11) {
                --ecx11;
                edi5->f0 = esi4->f0;
                edi5 = reinterpret_cast<struct s41*>(reinterpret_cast<uint32_t>(edi5) + 4);
                esi4 = reinterpret_cast<struct s41*>(reinterpret_cast<uint32_t>(esi4) + 4);
            }
            goto *reinterpret_cast<int32_t*>(eax10 * 4 + 0x1000a3c8);
        } else {
            edx12 = reinterpret_cast<uint32_t>(ecx6) & 3;
            ecx13 = reinterpret_cast<uint32_t>(ecx6) >> 2;
            while (ecx13) {
                --ecx13;
                edi5->f0 = esi4->f0;
                edi5 = reinterpret_cast<struct s41*>(reinterpret_cast<uint32_t>(edi5) + 4);
                esi4 = reinterpret_cast<struct s41*>(reinterpret_cast<uint32_t>(esi4) + 4);
            }
            goto *reinterpret_cast<int32_t*>(edx12 * 4 + 0x1000a3c8);
        }
    } else {
        esi14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi4) + reinterpret_cast<uint32_t>(ecx6));
        edi15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi5) + reinterpret_cast<uint32_t>(ecx6));
        if (reinterpret_cast<uint32_t>(edi15) & 3) {
            esi16 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi14) - 1);
            edi17 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi15) - 1);
            if (reinterpret_cast<uint32_t>(ecx6) <= 12) {
                while (ecx6) {
                    ecx6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx6) - 1);
                    *edi17 = *esi16;
                    --edi17;
                    --esi16;
                }
                return a1;
            }
            edx18 = reinterpret_cast<uint32_t>(-edx19) & 3;
            eax20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx6) - edx18);
            ecx21 = edx18;
            while (ecx21) {
                --ecx21;
                *edi17 = *esi16;
                --edi17;
                --esi16;
            }
            eax22 = reinterpret_cast<uint32_t>(eax20) & 3;
            esi23 = reinterpret_cast<struct s42*>(esi16 - 3);
            edi24 = reinterpret_cast<struct s43*>(edi17 - 3);
            ecx25 = reinterpret_cast<uint32_t>(eax20) >> 2;
            while (ecx25) {
                --ecx25;
                edi24->f0 = esi23->f0;
                edi24 = reinterpret_cast<struct s43*>(reinterpret_cast<uint32_t>(edi24) - 4);
                esi23 = reinterpret_cast<struct s42*>(reinterpret_cast<uint32_t>(esi23) - 4);
            }
            goto *reinterpret_cast<int32_t*>(eax22 * 4 + 0x1000a460);
        } else {
            edx26 = reinterpret_cast<uint32_t>(ecx6) & 3;
            esi23 = reinterpret_cast<struct s42*>(reinterpret_cast<uint32_t>(esi14) - 4);
            edi24 = reinterpret_cast<struct s43*>(reinterpret_cast<uint32_t>(edi15) - 4);
            ecx27 = reinterpret_cast<uint32_t>(ecx6) >> 2;
            while (ecx27) {
                --ecx27;
                edi24->f0 = esi23->f0;
                edi24 = reinterpret_cast<struct s43*>(reinterpret_cast<uint32_t>(edi24) - 4);
                esi23 = reinterpret_cast<struct s42*>(reinterpret_cast<uint32_t>(esi23) - 4);
            }
            goto *reinterpret_cast<int32_t*>(edx26 * 4 + 0x1000a460);
        }
    }
    addr_1000a400_36:
    return a1;
    edi5->f0 = esi4->f0;
    goto addr_1000a400_36;
    edi5->f0 = esi4->f0;
    return a1;
    edi5->f0 = esi4->f0;
    edi5->f2 = esi4->f2;
    return a1;
    addr_1000a49e_40:
    return a1;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi24) + 3) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi23) + 3);
    goto addr_1000a49e_40;
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edi24) + 2) = *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(esi23) + 2);
    return a1;
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edi24) + 2) = *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(esi23) + 2);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi24) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi23) + 1);
    return a1;
}

void fun_1000a42d() {
}

void fun_1000a439() {
}

void fun_1000a486() {
}

struct s44 {
    signed char[268444540] pad268444540;
    signed char f1000237c;
};

void** fun_10002290(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    struct s44* ecx7;
    int32_t eax8;
    void** ebp9;
    void** edi10;
    void** esi11;
    void** ebx12;
    void** eax13;
    void** eax14;
    void** eax15;
    void** eax16;
    void** eax17;
    void** eax18;

    fun_10004ba0(a5, a1, a2, a3, a4, a5, a6);
    ecx7 = reinterpret_cast<struct s44*>(a2 + 0xfffffffe);
    if (reinterpret_cast<uint32_t>(ecx7) > 17) 
        goto addr_100022ce_2;
    eax8 = 0;
    *reinterpret_cast<signed char*>(&eax8) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx7) + reinterpret_cast<uint32_t>(fun_1000237c));
    switch (eax8) {
    case 0:
        eax13 = fun_100025b0(a5, a1, a2, a3, a4, a5, a6, ebp9, edi10, esi11, ebx12);
        return eax13;
    case 1:
        eax14 = fun_100023e0(a1, a2, a3, a4, a5, a6, ebp9, edi10, esi11, ebx12, __return_address(), a1, a2, a3);
        return eax14;
    case 2:
        eax15 = fun_10002400(a5, a1, a2, a3, a4, a5, a6, ebp9, edi10, esi11, ebx12, __return_address(), a1);
        return eax15;
    case 3:
        eax16 = fun_10002390(a5, a1, a2, a3, a4, a5, a6);
        return eax16;
    case 4:
        eax17 = fun_10002570(a1, a2, a3, a4, a5, a6);
        return eax17;
        addr_100022ce_2:
    case 5:
        eax18 = fun_10001000("lineCallbackFunc message ignored\r\n", ebp9, edi10, esi11, ebx12, __return_address(), a1, a2, a3);
        return eax18;
    }
}

void fun_10002361(int32_t ecx) {
}

void fun_10004646() {
}

void fun_10004b1b() {
}

void fun_100050cd(int32_t ecx) {
}

int32_t fun_10005690() {
    int32_t v1;

    if (v1 == 0x110) {
        return 1;
    } else {
        return 0;
    }
}

int32_t g10011da4;

/* _InitializeNetwork@0 */
uint32_t _InitializeNetwork_0(void** a1, void** a2, void** a3) {
    uint32_t eax4;

    g10011da4 = -1;
    eax4 = fun_100056b0(__return_address(), a1, a2, a3);
    return 1 - reinterpret_cast<uint1_t>(eax4 < 1) & 0x10011db0;
}

struct s45 {
    signed char[4] pad4;
    uint32_t f4;
};

int32_t fun_10006360(struct s45* a1, int32_t a2);

int32_t fun_100063ea() {
    int32_t eax1;
    struct s8* ecx2;

    eax1 = 0;
    ecx2 = g0;
    if (reinterpret_cast<int1_t>(ecx2->f4 == fun_10006360) && ecx2->f8 == ecx2->fc->fc) {
        eax1 = 1;
    }
    return eax1;
}

struct s46 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s47 {
    signed char[12] pad12;
    struct s22* fc;
};

int32_t fun_10006430(struct s46* a1, struct s22* a2, int32_t a3) {
    unsigned char* esi4;
    unsigned char dh5;
    unsigned char* eax6;
    struct s47* ebp7;
    struct s22* ebx8;
    int32_t eax9;
    int32_t esi10;
    int32_t* edi11;
    int32_t ecx12;
    int32_t eax13;
    int32_t* edi14;
    int32_t ecx15;

    *esi4 = reinterpret_cast<unsigned char>(*esi4 ^ reinterpret_cast<unsigned char>(dh5 ^ *eax6));
    ebp7 = reinterpret_cast<struct s47*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4);
    ebx8 = a2;
    if (a1->f4 & 6) {
        fun_10006382(ebx8, 0xff);
        eax9 = 1;
    } else {
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx8) - 4) = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 8);
        esi10 = ebx8->fc;
        edi11 = ebx8->f8;
        while (esi10 != -1) {
            ecx12 = esi10 + esi10 * 2;
            if ((edi11 + ecx12)[1] && (eax13 = reinterpret_cast<int32_t>((edi11 + ecx12)[1]()), ebp7 = ebp7, esi10 = esi10, ebx8 = ebp7->fc, !!eax13)) {
                if (__intrinsic()) 
                    goto addr_100064ca_7;
                edi14 = ebx8->f8;
                fun_10006340(ebx8);
                ebp7 = reinterpret_cast<struct s47*>(ebx8 + 1);
                fun_10006382(ebx8, esi10);
                ecx15 = esi10 + esi10 * 2;
                fun_10006416(ecx15, 1);
                ebx8->fc = edi14[ecx15];
                (edi14 + ecx15)[2]();
            }
            edi11 = ebx8->f8;
            esi10 = edi11[esi10 + esi10 * 2];
        }
        goto addr_100064d1_10;
    }
    addr_100064ed_11:
    return eax9;
    addr_100064d1_10:
    eax9 = 1;
    goto addr_100064ed_11;
    addr_100064ca_7:
    eax9 = 0;
    goto addr_100064ed_11;
}

void fun_1000640d(int32_t ecx) {
    goto 0x10006420;
}

int32_t fun_10006360(struct s45* a1, int32_t a2) {
    int32_t eax3;
    int32_t* v4;

    eax3 = 1;
    if (a1->f4 & 6) {
        *v4 = a2;
        eax3 = 3;
    }
    return eax3;
}

void fun_10008bb0() {
    int1_t zf1;
    int1_t less2;
    uint32_t eax3;
    void** eax4;
    void** eax5;
    int32_t ecx6;
    void* eax7;
    void** edx8;
    uint32_t edx9;
    int32_t* esi10;
    uint32_t ecx11;

    zf1 = g10011f88 == 0;
    if (!zf1) {
        less2 = reinterpret_cast<int32_t>(g10011f88) < reinterpret_cast<int32_t>(20);
        if (less2) {
            g10011f88 = 20;
        }
    } else {
        g10011f88 = 0x200;
    }
    eax3 = g10011f88;
    eax4 = fun_10008600(eax3, 4);
    g10011f8c = eax4;
    if (!eax4 && (g10011f88 = 20, eax5 = fun_10008600(20, 4), g10011f8c = eax5, !eax5)) {
        fun_10006290(26);
    }
    ecx6 = 0x10010c48;
    eax7 = reinterpret_cast<void*>(0);
    do {
        edx8 = g10011f8c;
        eax7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax7) + 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx8) + reinterpret_cast<uint32_t>(eax7) + 0xfffffffc) = ecx6;
        ecx6 = ecx6 + 32;
    } while (reinterpret_cast<int32_t>(eax7) < reinterpret_cast<int32_t>(80));
    edx9 = 0;
    esi10 = reinterpret_cast<int32_t*>(0x10010c58);
    do {
        ecx11 = (edx9 & 31) << 2;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(edx9 & 0xffffffe7) >> 3) + 0x10012fa0)) + (ecx11 + ecx11 * 8)) == -1 || !*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(edx9 & 0xffffffe7) >> 3) + 0x10012fa0)) + (ecx11 + ecx11 * 8))) {
            *esi10 = -1;
        }
        esi10 = esi10 + 8;
        ++edx9;
    } while (reinterpret_cast<uint32_t>(esi10) < 0x10010cb8);
    return;
}

void** fun_10009680() {
    void** eax1;

    eax1 = fun_10006290(2);
    return eax1;
}

signed char* fun_10009aa0(uint32_t ecx, signed char* a2, signed char* a3, int32_t a4) {
    signed char* edi5;
    signed char* edx6;
    uint32_t ecx7;
    signed char* edi8;
    int1_t zf9;
    signed char* esi10;
    signed char* edi11;
    signed char* v12;
    int32_t ecx13;
    int32_t ecx14;
    signed char* edi15;
    signed char* esi16;

    edi5 = a2;
    edx6 = edi5;
    ecx7 = 0xffffffff;
    do {
        if (!ecx7) 
            break;
        --ecx7;
        ++edi5;
    } while (*edi5);
    edi8 = edi5 - 1;
    zf9 = edi8 == 0;
    esi10 = edi8;
    edi11 = a3;
    v12 = edi11;
    ecx13 = a4;
    do {
        if (!ecx13) 
            break;
        --ecx13;
        zf9 = *edi11 == 0;
        ++edi11;
        ++esi10;
    } while (!zf9);
    if (zf9) {
        ++ecx13;
    }
    ecx14 = -(ecx13 - a4);
    edi15 = esi10;
    esi16 = v12;
    while (ecx14) {
        --ecx14;
        *edi15 = *esi16;
        ++edi15;
        ++esi16;
    }
    *edi15 = 0;
    return edx6;
}

void fun_1000a3f9() {
}

void fun_1000a4a6() {
}

void fun_1000a6e8(unsigned char* a1) {
    unsigned char* ecx2;
    uint32_t eax3;

    ecx2 = a1;
    if (!(reinterpret_cast<uint32_t>(ecx2) & 3)) {
        while (1) {
            addr_1000a704_2:
            ecx2 = ecx2 + 4;
            if (!((*ecx2 ^ 0xffffffff ^ 0x7efefeff + *ecx2) & 0x81010100)) 
                continue;
            eax3 = *reinterpret_cast<uint32_t*>(ecx2 - 4);
            if (!*reinterpret_cast<signed char*>(&eax3)) 
                break;
            if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax3) + 1)) 
                goto addr_1000a741_5;
            if (!(eax3 & 0xff0000)) 
                goto addr_1000a73c_7;
            if (!(eax3 & 0xff000000)) 
                goto addr_1000a737_9;
        }
    } else {
        do {
            ++ecx2;
            if (!*ecx2) 
                goto addr_1000a737_9;
        } while (reinterpret_cast<uint32_t>(ecx2) & 3);
        goto addr_1000a704_2;
    }
    addr_1000a741_5:
    goto 0x1000a749;
    addr_1000a73c_7:
    goto 0x1000a749;
    addr_1000a737_9:
    goto 0x1000a749;
}

int32_t g10011da0;

void** g10011d84;

int16_t g10011dcc;

int16_t g10011dbc;

/* _Connect@8 */
int32_t _Connect_8() {
    void** v1;
    void** ebx2;
    void** ecx3;
    void*** v4;
    void** v5;
    void** esi6;
    void** v7;
    void** edi8;
    void** eax9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    uint32_t eax18;
    uint32_t eax19;
    void* esp20;
    int32_t esi21;
    int32_t ebx22;
    void* esp23;
    uint32_t eax24;
    int32_t eax25;
    void* esp26;
    void** ecx27;
    int32_t eax28;
    void* esp29;
    void* esp30;
    signed char v31;
    int32_t v32;
    int32_t v33;
    int32_t* esp34;
    int32_t eax35;
    void* esp36;
    void** edx37;
    void* esp38;
    int32_t ecx39;
    int32_t eax40;
    signed char v41;
    void** eax42;
    void** v43;
    unsigned char* eax44;
    uint1_t cf45;
    unsigned char v46;
    unsigned char v47;
    unsigned char v48;
    unsigned char v49;
    unsigned char v50;
    unsigned char v51;
    uint1_t cf52;
    uint32_t eax53;
    uint32_t eax54;
    uint32_t eax55;
    int32_t eax56;
    int32_t eax57;
    int32_t eax58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** eax67;
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

    g10011da0 = 2;
    v1 = ebx2;
    ecx3 = *v4;
    v5 = esi6;
    v7 = edi8;
    eax9 = fun_100057c0(ecx3);
    g10011d84 = eax9;
    if (reinterpret_cast<int1_t>(eax9 == 0xffffffff)) {
        fun_10005770(ecx3, v7, v5, v1, v10, v11, v12, v13, v14, v15, v16, v17);
        return 0;
    }
    eax18 = reinterpret_cast<uint32_t>(GetTickCount());
    eax19 = reinterpret_cast<uint32_t>(GetCurrentProcessId());
    fun_10006580(eax18 ^ eax19);
    esp20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 72 - 4 - 4 - 4 - 4 - 4 + 4 + 4 - 4 + 4 - 4 + 4 - 4 - 4 + 4);
    esi21 = -1;
    ebx22 = 0;
    fun_10005300(reinterpret_cast<int32_t>(esp20) + 20);
    esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) + 4 - 4 - 4 + 4 + 4);
    while (1) {
        eax24 = fun_10005af0(reinterpret_cast<int32_t>(esp23) + 32, 30);
        esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 + 8 + 4);
        if (eax24 != 0xffffffff) {
            if (eax24 != 10 || (eax25 = fun_100066c0(reinterpret_cast<int32_t>(esp23) + 32, "ID", 2), esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 - 4 + 4 + 12), !!eax25)) {
                addr_10005503_6:
                if (ebx22 < 2) 
                    continue; else 
                    break;
            } else {
                esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4);
                ecx27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp26) + 38);
                eax28 = fun_100066c0(ecx27, reinterpret_cast<int32_t>(esp23) + 16, 6);
                esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 + 4 + 12);
                if (!eax28) 
                    goto addr_10005534_8;
                esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4);
                esi21 = -1;
                fun_10006690(reinterpret_cast<int32_t>(esp30) + 28, reinterpret_cast<int32_t>(esp29) + 34, 6);
                esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4 + 12);
                ebx22 = v31 - 47;
            }
        }
        fun_10006630(reinterpret_cast<int32_t>(esp23) + 12);
        esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 + 4 + 4);
        if (esi21 != v32) {
            esi21 = v33;
            esp34 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp23) - 4);
            eax35 = fun_100065c0(esp34 + 17, "ID%s_%i", esp34 + 5, ebx22);
            esp36 = reinterpret_cast<void*>(esp34 - 1 - 1 - 1 - 1 + 1);
            edx37 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp36) + 80);
            esp38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) + 16);
            ecx39 = -1;
            eax40 = eax35 - eax35;
            do {
                if (!ecx39) 
                    break;
                --ecx39;
                ++esi21;
            } while (v41 != *reinterpret_cast<signed char*>(&eax40));
            eax42 = g10011d84;
            fun_100059a0(eax42, edx37, ~ecx39 - 1, v7, v5, v1, v43);
            esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp38) - 4 - 4 - 4 - 4 + 12 + 4);
            goto addr_10005503_6;
        }
    }
    eax44 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp23) + 24);
    do {
        cf45 = reinterpret_cast<uint1_t>(v46 < v47);
        if (v46 != v48) 
            break;
        if (!v46) 
            goto addr_10005530_18;
        cf45 = reinterpret_cast<uint1_t>(v49 < v50);
        if (v49 != v51) 
            break;
        eax44 = eax44 + 2;
    } while (v49);
    goto addr_10005530_18;
    cf52 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax44) < reinterpret_cast<uint32_t>(eax44) + cf45);
    eax53 = reinterpret_cast<uint32_t>(eax44) - (reinterpret_cast<uint32_t>(eax44) + cf52);
    eax54 = eax53 - (1 - reinterpret_cast<uint1_t>(eax53 < 1 - cf52));
    addr_10005561_22:
    g10011dcc = 0;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax54) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax54 == 0))) {
        g10011dcc = 1;
    }
    do {
        eax55 = fun_10005af0(reinterpret_cast<int32_t>(esp23) + 32, 30);
        esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 + 8 + 4);
    } while (eax55 != 0xffffffff);
    eax56 = g10011dcc;
    eax57 = eax56 << 2;
    *reinterpret_cast<int32_t*>(eax57 + 0x10011f50) = 0;
    eax58 = g10011da0;
    g10011dbc = *reinterpret_cast<int16_t*>(&eax58);
    *reinterpret_cast<int32_t*>(0x10011f54 - eax57) = 1;
    return 1;
    addr_10005530_18:
    eax54 = 0;
    goto addr_10005561_22;
    addr_10005534_8:
    fun_100052a0("Random IDs are the same!\n", v7, v5, v1, v59, v60, v61, v62, v63, v64, v65, v66);
    eax67 = g10011d84;
    fun_10005980(ecx27, eax67, v7, v5, v1, v68, v69, v70, v71, v72, v73, v74, v75);
    fun_10005770(ecx27, v7, v5, v1, v76, v77, v78, v79, v80, v81, v82, v83);
    return 0;
}

struct s48 {
    signed char[24] pad24;
    struct s22* f18;
    int32_t f1c;
};

void fun_100064f5(struct s48* a1) {
    int32_t v2;
    struct s22* v3;

    v2 = a1->f1c;
    v3 = a1->f18;
    fun_10006382(v3, v2);
    return;
}

void fun_1000a7ce() {
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
}

int32_t WinHelpA = 0x14922;

int32_t g1000c8a8 = 0;

int32_t g1000c8a4 = 0;

int32_t EndDialog = 0x14916;

int32_t fun_10004160(void** a1, int32_t a2, void** a3, void** a4) {
    uint32_t eax5;
    void*** esp6;
    void** ecx7;
    void** eax8;
    void* esp9;
    int1_t zf10;
    void** eax11;
    int1_t zf12;
    void** edi13;
    void** esi14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t edi23;
    int32_t v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    int32_t v33;
    int32_t v34;
    int32_t eax35;
    int32_t v36;
    void** ecx37;
    uint32_t eax38;
    uint32_t eax39;
    int32_t edx40;
    void** ecx41;
    int1_t zf42;
    void** eax43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    int32_t v50;
    int32_t v51;
    void** eax52;
    void** v53;
    int32_t v54;
    int32_t v55;
    int32_t v56;
    void** eax57;
    void** eax58;
    void** eax59;
    int32_t v60;
    uint32_t ecx61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    int32_t v68;
    int32_t v69;
    int32_t eax70;
    int32_t eax71;
    int32_t v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    int32_t v78;
    int32_t v79;
    int32_t edi80;
    int32_t eax81;
    int32_t v82;
    uint32_t ecx83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    int32_t v90;
    int32_t v91;
    uint32_t ecx92;
    int32_t edi93;
    void** eax94;
    void* esp95;
    void** ecx96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    int32_t v103;
    int32_t v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    int32_t v111;
    int32_t v112;
    int32_t v113;
    uint32_t ecx114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    int32_t v121;
    int32_t v122;
    int32_t v123;

    eax5 = reinterpret_cast<uint32_t>(a2 - 83);
    esp6 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x80 - 4 - 4);
    if (eax5 > 0xbe) 
        goto addr_100041ed_2;
    ecx7 = reinterpret_cast<void**>(0);
    *reinterpret_cast<signed char*>(&ecx7) = *reinterpret_cast<signed char*>(eax5 + reinterpret_cast<int32_t>(fun_1000465c));
    switch (ecx7) {
    case 0:
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a4 + 4) == 1) && ((eax8 = *reinterpret_cast<void***>(a4 + 12), a1 != eax8) && reinterpret_cast<signed char>(*reinterpret_cast<void***>(a4 + 8)) < reinterpret_cast<signed char>(0x44d))) {
            WinHelpA(eax8, "TAPICOMM.HLP", 12, 0x1000c2f8);
        }
        return 1;
    case 1:
        if (a1 != a3) {
            WinHelpA(a3, "TAPICOMM.HLP", 10, 0x1000c2f8);
            goto addr_100041ed_2;
        }
    case 2:
        g1000c0f8 = a1;
        g1000c0ec = a1;
        fun_100034f0(a1);
        esp9 = reinterpret_cast<void*>(esp6 - 4 - 4 + 4 + 4);
        zf10 = g1000c2a4 == 0;
        if (!zf10) {
            eax11 = g1000c2a4;
            LocalFree(eax11);
            esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 - 4 + 4);
            g1000c2a4 = reinterpret_cast<void**>(0);
        }
        zf12 = g1000c8a8 == 0;
        if (zf12) {
            fun_10003960(ecx7, a1, 0, reinterpret_cast<int32_t>(esp9) + 8, "Not Valid", edi13, esi14, 0, v15, v16, v17, v18, v19, v20, v21);
            fun_10003860(ecx7, a1, 0);
            v22 = 0;
            edi23 = SendDlgItemMessageA;
            v24 = 1;
            v25 = reinterpret_cast<void**>(0xf1);
            v26 = reinterpret_cast<void**>(0x3f0);
            v27 = a1;
        } else {
            fun_10003960(ecx7, a1, 0, 0, 0, edi13, esi14, 0, v28, v29, v30, v31, v32, v33, v34);
            fun_10003860(ecx7, a1, 0);
            v22 = 0x1000c3a0;
            edi23 = SendDlgItemMessageA;
            v24 = 0xff;
            v25 = reinterpret_cast<void**>(0x14d);
            v26 = reinterpret_cast<void**>(0x3e8);
            v27 = a1;
            edi23(v27, 0x3e8, 0x14d, 0xff, 0x1000c3a0);
            edi23(a1, 0x3ec, 12, 0, "Not Valid", v27, 0x3e8, 0x14d, 0xff, 0x1000c3a0);
            eax35 = g1000c8a4;
            edi23(a1, 0x3f0, 0xf1, eax35, 0, a1, 0x3ec, 12, 0, "Not Valid", v27, 0x3e8, 0x14d, 0xff, 0x1000c3a0);
        }
        edi23(v27, v26, v25, v24, v22);
        edi23();
        fun_10003c00(a1);
        fun_10003cc0(a1, a1, 0x3ee, 12, 0, "Not Valid", v27, v26, v25, v24, v22);
        fun_100036b0(ecx7, a1);
        goto v36;
    case 3:
        ecx37 = a3;
        eax38 = *reinterpret_cast<uint16_t*>(&ecx37);
        if (reinterpret_cast<int32_t>(eax38) > reinterpret_cast<int32_t>(0x3e8)) {
            eax39 = eax38 - 0x3e9;
            if (eax39 > 0xc9) 
                goto addr_100041ed_2;
            edx40 = 0;
            *reinterpret_cast<signed char*>(&edx40) = *reinterpret_cast<signed char*>(eax39 + reinterpret_cast<int32_t>(fun_10004748));
            switch (edx40) {
            case 0:
                ecx41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx37) >> 16);
                if (*reinterpret_cast<int16_t*>(&ecx41) == 9) {
                    zf42 = g1000c2a4 == 0;
                    if (!zf42) {
                        eax43 = g1000c2a4;
                        LocalFree(eax43);
                        g1000c2a4 = reinterpret_cast<void**>(0);
                    }
                    fun_10003cc0(a1, edi13, esi14, v44, v45, v46, v47, v48, v49, v50, v51);
                    fun_100036b0(ecx41, a1);
                }
                return 1;
            case 1:
                eax52 = reinterpret_cast<void**>(SendDlgItemMessageA());
                fun_10003f50(ecx37, a1, eax52, a1, 0x3e9, 0x147, 0, 0, edi13);
                fun_10003cc0(a1, a1, 0x3e9, 0x147, 0, 0, edi13, esi14, v53, v54, v55);
                goto v56;
            case 2:
                eax57 = reinterpret_cast<void**>(SendDlgItemMessageA(a1, 0x3e9, 0x147, 0, 0));
                eax58 = g1000c0f0;
                eax59 = fun_1000603e();
                if (eax59) {
                    fun_10004820(ecx37, eax59, "lineTranslateDialog: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x13b3, eax58, eax57, 0x10004, a1, 0x1000c120, a1, 0x3e9, 0x147, ecx37, eax59, "lineTranslateDialog: ", "C:\\doomutil\\doommdm\\tapicode.c", 0x13b3, eax58, eax57, 0x10004, a1, 0x1000c120, a1, 0x3e9, 0x147);
                }
                fun_10003960(ecx37, a1, 0, 0, 0, eax58, eax57, 0x10004, a1, 0x1000c120, a1, 0x3e9, 0x147, 0, 0);
                fun_10003cc0(a1, eax58, eax57, 0x10004, a1, 0x1000c120, a1, 0x3e9, 0x147, 0, 0);
                goto v60;
            case 3:
            case 5:
                ecx61 = reinterpret_cast<unsigned char>(ecx37) >> 16;
                if (*reinterpret_cast<int16_t*>(&ecx61) == 0x300) {
                    fun_10003cc0(a1, edi13, esi14, v62, v63, v64, v65, v66, v67, v68, v69);
                }
                return 1;
            case 4:
                eax70 = reinterpret_cast<int32_t>(IsWindowEnabled());
                if (!eax70 || (eax71 = fun_100036b0(ecx37, __return_address()), eax71 == 0)) {
                    goto v72;
                } else {
                    fun_10003cc0(__return_address(), a4, edi13, esi14, v73, v74, v75, v76, v77, v78, v79);
                    edi80 = SendDlgItemMessageA;
                    edi80(__return_address(), 0x3e8, 13, 0x1ff, 0x1000c3a0);
                    edi80(__return_address(), 0x3ee, 13, 0xff, "Not Valid", __return_address(), 0x3e8, 13, 0x1ff, 0x1000c3a0);
                    edi80(__return_address(), 0x3ec, 13, 0x1ff, "Not Valid", __return_address(), 0x3ee, 13, 0xff, "Not Valid", __return_address(), 0x3e8, 13, 0x1ff, 0x1000c3a0);
                    eax81 = reinterpret_cast<int32_t>(edi80(__return_address(), 0x3f0, 0xf0, 0, 0, __return_address(), 0x3ec, 13, 0x1ff, "Not Valid", __return_address(), 0x3ee, 13, 0xff, "Not Valid", __return_address(), 0x3e8, 13, 0x1ff, 0x1000c3a0));
                    g1000c8a4 = eax81;
                    g1000c8a8 = 1;
                    EndDialog();
                    goto v82;
                }
            case 6:
                ecx83 = reinterpret_cast<unsigned char>(ecx37) >> 16;
                if (!*reinterpret_cast<int16_t*>(&ecx83)) {
                    fun_10003c00(a1);
                    fun_10003cc0(a1, edi13, esi14, v84, v85, v86, v87, v88, v89, v90, v91);
                }
                return 1;
            case 7:
                ecx92 = reinterpret_cast<unsigned char>(ecx37) >> 16;
                if (*reinterpret_cast<int16_t*>(&ecx92) == 8) {
                    edi93 = SendDlgItemMessageA;
                    eax94 = reinterpret_cast<void**>(edi93(a1, 0x3f1, 0x147, 0, 0));
                    esp95 = reinterpret_cast<void*>(esp6 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
                    ecx96 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp95) + 8);
                    edi93(a1, 0x3f1, 0x148, eax94, ecx96, a1, 0x3f1, 0x147, 0, 0);
                    fun_10003960(ecx96, a1, reinterpret_cast<int32_t>(esp95) - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 8, 0, 0, a1, 0x3f1, 0x148, eax94, ecx96, a1, 0x3f1, 0x147, 0, 0);
                    fun_10003cc0(a1, a1, 0x3f1, 0x148, eax94, ecx96, a1, 0x3f1, 0x147, 0, 0);
                }
                return 1;
            case 8:
                fun_10003960(ecx37, a1, 0, 0, 0, edi13, esi14, v97, v98, v99, v100, v101, v102, v103, v104);
                fun_10003cc0(a1, edi13, esi14, v105, v106, v107, v108, v109, v110, v111, v112);
                MessageBoxA();
                goto v113;
            case 9:
                fun_100034f0(a1);
                return 1;
                addr_100041ed_2:
            case 10:
                return 0;
            }
        } else {
            if (eax38 == 0x3e8) {
                ecx114 = reinterpret_cast<unsigned char>(ecx37) >> 16;
                if (*reinterpret_cast<int16_t*>(&ecx114) == 9) {
                    fun_10003cc0(a1, edi13, esi14, v115, v116, v117, v118, v119, v120, v121, v122);
                }
                return 1;
            } else {
                if (eax38 == 2) {
                    EndDialog();
                    goto v123;
                } else {
                    goto addr_100041ed_2;
                }
            }
        }
    case 4:
        goto 0x100041ed;
    }
}
