void** g618338 = reinterpret_cast<void**>(0);

void** fun_4426c0(void** ecx) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** edx9;
    int1_t zf10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void* esp17;
    void** eax18;
    int32_t esi19;
    void** v20;
    void** eax21;
    void** v22;
    void** eax23;
    void** v24;
    void** eax25;
    void* esp26;
    void** edi27;
    void* esp28;
    int32_t eax29;
    int32_t ebp30;
    void** eax31;
    void* esp32;
    void** eax33;
    void* esp34;
    void** v35;
    struct s486* v36;
    void** eax37;
    void** eax38;
    struct s486* edx39;
    void** esi40;
    void** ebx41;
    void** esi42;
    void** v43;
    void** edi44;
    struct s487* edi45;
    int32_t v46;
    void** edx47;
    int32_t ecx48;
    struct s487* ebx49;
    void** eax50;
    int32_t edx51;
    void** eax52;
    void* esp53;
    void** edi54;
    void** edx55;
    void** eax56;
    void** esi57;
    void** edx58;
    void** edi59;

    fun_437a90(ecx, "Reporting scores to XBAND.", v2, v3, v4, v5, v6, v7, v8);
    edx9 = g482a64;
    if (edx9 || ((zf10 = g482a84 == 0, zf10) || ((ecx = g61831c, ecx == 0) || reinterpret_cast<int1_t>(ecx == 0xffffffff)))) {
        v11 = reinterpret_cast<void**>("Not invoked by XBAND.  Returning.");
    } else {
        fun_442b80(ecx, v12, v13, v14, v15, v16);
        esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x8c - 4 - 4 + 4 + 4 - 4 + 4);
        eax18 = g482a80;
        esi19 = g618334;
        v20 = eax18;
        eax21 = g482a5c;
        v22 = eax21;
        eax23 = g482a44;
        v24 = eax23;
        eax25 = reinterpret_cast<void**>(9);
        if (esi19) {
            esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4);
            edi27 = g61831c;
            eax25 = reinterpret_cast<void**>(g618334(edi27, 2, reinterpret_cast<int32_t>(esp26) + 4, 64, 1, 0xffffffff, v20, v22, v24, 0xffffffff, 0xffffffff, -1, -1, -1, -1, -1, -1, -1, 1, 1));
            esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 - 4 + 4 + 16);
        }
        if (eax25) {
            fun_437a90(ecx, "Couldn't report comm results to XBAND.  XBSendGameData returned %d.", eax25, 1, 0xffffffff, v20, v22, v24, 0xffffffff, ecx, "Couldn't report comm results to XBAND.  XBSendGameData returned %d.", eax25, 1, 0xffffffff, v20, v22, v24, 0xffffffff);
            esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4 - 4 - 4 + 4 + 8);
        }
        fun_442b80(ecx, 1, 0xffffffff, v20, v22, v24, ecx, 1, 0xffffffff, v20, v22, v24);
        esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4 + 4);
        eax29 = 0;
        do {
            eax29 = eax29 + 4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp28) + eax29 + 90) = *reinterpret_cast<int32_t*>(eax29 + 0x482974);
        } while (eax29 != 16);
        ebp30 = g618334;
        eax31 = reinterpret_cast<void**>(9);
        if (ebp30) {
            esp32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4);
            eax33 = g61831c;
            eax31 = reinterpret_cast<void**>(g618334(eax33, 0, reinterpret_cast<int32_t>(esp32) + 68, 46, 1, 0xffffffff, v20, v22, v24, 0xffffffff, 0xffffffff, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1));
            esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) - 4 - 4 - 4 - 4 + 4 + 16);
        }
        if (eax31) {
            fun_437a90(ecx, "Couldn't report XBOUT_GAME_SPECIFIC_RESULTS to XBAND.  XBSendGameData returned %d.", eax31, 1, 0xffffffff, v20, v22, v24, 0xffffffff, ecx, "Couldn't report XBOUT_GAME_SPECIFIC_RESULTS to XBAND.  XBSendGameData returned %d.", eax31, 1, 0xffffffff, v20, v22, v24, 0xffffffff);
            esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 - 4 - 4 + 4 + 8);
        }
        fun_442b80(ecx, 1, 0xffffffff, v20, v22, v24, ecx, 1, 0xffffffff, v20, v22, v24);
        esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 + 4);
        ecx = g4776c8;
        v35 = reinterpret_cast<void**>(1);
        if (reinterpret_cast<unsigned char>(ecx) >= reinterpret_cast<unsigned char>(1)) {
            v36 = reinterpret_cast<struct s486*>(0x482518);
            goto addr_442882_15;
        }
    }
    addr_442a2b_16:
    eax37 = fun_437a90(ecx, v11, 1, 0xffffffff, v20, v22, v24, 0xffffffff, 0xffffffff, ecx, v11, 1, 0xffffffff, v20, v22, v24, 0xffffffff, 0xffffffff);
    return eax37;
    addr_442a26_18:
    v11 = reinterpret_cast<void**>("Finished reporting scores to XBAND.");
    goto addr_442a2b_16;
    while (1) {
        addr_44289e_19:
        eax38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax38) - reinterpret_cast<unsigned char>(edx39->f60));
        while (1) {
            while (++esi40, edx39 = reinterpret_cast<struct s486*>(reinterpret_cast<int32_t>(edx39) + 4), reinterpret_cast<signed char>(esi40) < reinterpret_cast<signed char>(4)) {
                if (esi40 == ebx41) 
                    goto addr_44289e_19;
                eax38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax38) + reinterpret_cast<unsigned char>(edx39->f60));
            }
            esi42 = reinterpret_cast<void**>(1);
            v43 = eax38;
            fun_437a90(v35, "Player (%d) score: %d", v35, eax38, 1, 0xffffffff, v20, v22, v24, v35, "Player (%d) score: %d", v35, eax38, 1, 0xffffffff, v20, v22, v24);
            esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 - 4 - 4 - 4 + 4 + 12);
            edi44 = g4776c8;
            if (reinterpret_cast<unsigned char>(edi44) >= reinterpret_cast<unsigned char>(1)) {
                edi45 = reinterpret_cast<struct s487*>(0x482518);
                v46 = 0;
                while (1) {
                    if (esi42 == v35) {
                        addr_44290d_26:
                        edx47 = g4776c8;
                        edi45 = reinterpret_cast<struct s487*>(reinterpret_cast<int32_t>(edi45) + 0x118);
                        ++esi42;
                        ++v46;
                        if (reinterpret_cast<unsigned char>(esi42) > reinterpret_cast<unsigned char>(edx47)) 
                            break;
                    } else {
                        ecx48 = v46;
                        ebx49 = edi45;
                        eax50 = reinterpret_cast<void**>(0);
                        edx51 = 0;
                        do {
                            if (edx51 == ecx48) {
                                eax50 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax50) - reinterpret_cast<uint32_t>(ebx49->f60));
                            } else {
                                eax50 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax50) + reinterpret_cast<uint32_t>(ebx49->f60));
                            }
                            ++edx51;
                            ebx49 = reinterpret_cast<struct s487*>(reinterpret_cast<int32_t>(ebx49) + 4);
                        } while (edx51 < 4);
                        if (reinterpret_cast<signed char>(eax50) <= reinterpret_cast<signed char>(v43)) 
                            goto addr_44290d_26; else 
                            goto addr_44294c_33;
                    }
                    continue;
                    addr_44294c_33:
                    goto addr_44290d_26;
                }
            }
            eax52 = reinterpret_cast<void**>(9);
            ecx = g618338;
            if (ecx) {
                esp53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4);
                edi54 = g61831c;
                eax52 = reinterpret_cast<void**>(g618338(edi54, v35, 0, reinterpret_cast<int32_t>(esp53) + 0x74, 16, 1, 0xffffffff, v20, v22, v24, 0xffffffff, 0xffffffff, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1));
                esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp53) - 4 - 4 - 4 - 4 - 4 + 4 + 20);
            }
            if (eax52) {
                fun_437a90(ecx, "Couldn't report player %d results to XBAND.  XBSendPlayerData returned %d.", v35, eax52, 1, 0xffffffff, v20, v22, v24, ecx, "Couldn't report player %d results to XBAND.  XBSendPlayerData returned %d.", v35, eax52, 1, 0xffffffff, v20, v22, v24);
                esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 - 4 - 4 - 4 + 4 + 12);
            }
            edx55 = g618338;
            eax56 = reinterpret_cast<void**>(9);
            if (edx55) {
                ecx = v35;
                esi57 = g61831c;
                eax56 = reinterpret_cast<void**>(g618338(esi57, ecx, 1, v36, 0x118, 1, 0xffffffff, v20, v22, v24, 0xffffffff, 0xffffffff, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1));
                esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 20);
            }
            if (eax56) {
                fun_437a90(ecx, "Couldn't report XBOUT_PLAYER_GAME_SPECIFIC_RESULTS for player %d to XBAND.  XBSendPlayerData returned %d.", v35, eax56, 1, 0xffffffff, v20, v22, v24, ecx, "Couldn't report XBOUT_PLAYER_GAME_SPECIFIC_RESULTS for player %d to XBAND.  XBSendPlayerData returned %d.", v35, eax56, 1, 0xffffffff, v20, v22, v24);
                esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 - 4 - 4 - 4 + 4 + 12);
            }
            edx58 = g4776c8;
            edi59 = v35 + 1;
            v36 = reinterpret_cast<struct s486*>(reinterpret_cast<int32_t>(v36) + 0x118);
            v35 = edi59;
            if (reinterpret_cast<unsigned char>(edi59) > reinterpret_cast<unsigned char>(edx58)) 
                goto addr_442a26_18;
            addr_442882_15:
            edx39 = v36;
            eax38 = reinterpret_cast<void**>(0);
            esi40 = reinterpret_cast<void**>(0);
            ebx41 = v35 - 1;
            if (!ebx41) 
                break;
            eax38 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(edx39->f60)));
        }
    }
}

void fun_41b090() {
    return;
}

void fun_41abc0() {
    return;
}

void fun_441e30(void** ecx, void** a2) {
    int1_t zf3;
    void** edi4;

    zf3 = g4776bc == 0;
    if (!zf3) {
        g618240(1, 0, 0, 0);
        g61823c(1, 0, 0, 0);
        edi4 = g4776bc;
        g618244 = reinterpret_cast<void**>(0);
        g618240 = reinterpret_cast<void**>(0);
        g61823c = reinterpret_cast<void**>(0);
        FreeLibrary(edi4, 1, 0, 0, 0);
        g4776bc = reinterpret_cast<void**>(0);
    }
    return;
}

void** g618320 = reinterpret_cast<void**>(0);

int32_t g618328 = 0;

void** fun_442650(void** ecx, void** a2, void** a3, void* a4, int32_t a5, int32_t a6, void* a7, void** a8) {
    void** edi9;
    void** esi10;
    void** edx11;
    void** edx12;
    int1_t zf13;
    int1_t zf14;
    void** esi15;
    void** edi16;
    void** eax17;

    fun_437a90(ecx, "Closing XBANDAPI.", edi9, esi10, edx11, ecx, __return_address(), a2, a3);
    edx12 = g618320;
    if (edx12) {
        zf13 = g618328 == 0;
        if (!zf13 && (zf14 = reinterpret_cast<int1_t>(g61831c == 0xffffffff), !zf14)) {
            fun_437a90(ecx, "Calling XBClose.", edi9, esi10, edx11, ecx, __return_address(), a2, a3);
            esi15 = g61831c;
            g618328(esi15);
        }
        edi16 = g618320;
        FreeLibrary(edi16);
    }
    eax17 = fun_437a90(ecx, "XBANDAPI successfully closed.", edi9, esi10, edx11, ecx, __return_address(), a2, a3);
    return eax17;
}

void** g616eaa = reinterpret_cast<void**>(0);

void** g616ea8 = reinterpret_cast<void**>(0);

void** g615a5c = reinterpret_cast<void**>(0);

void fun_43d850(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void* esp12;
    void** edx13;
    uint32_t edx14;
    uint32_t eax15;
    void** ecx16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    int32_t v22;
    int32_t v23;
    int32_t v24;
    int32_t v25;
    int32_t v26;
    void** ax27;
    void** eax28;
    void** eax29;
    void* esp30;
    int16_t ax31;
    void*** esp32;
    void* esp33;
    void*** esp34;
    void** v35;
    void** eax36;
    void** v37;
    void** edx38;
    void** v39;
    void** eax40;
    void** edi41;
    void** v42;
    void*** esi43;
    void** edi44;
    void** ecx45;
    void*** edi46;
    void* esp47;
    void** eax48;
    void** ecx49;
    int1_t zf50;
    int1_t zf51;
    void*** esp52;
    void** eax53;
    void** dx54;
    int32_t ebx55;
    void** ebp56;
    int32_t edx57;
    void** eax58;
    void** ebp59;
    void*** edi60;
    void** eax61;
    void** esi62;
    void* esp63;
    void** edx64;
    int1_t zf65;
    int32_t edx66;
    int32_t eax67;
    void** ebx68;
    int32_t eax69;
    int32_t eax70;
    void** eax71;
    void** ax72;
    void** eax73;
    void** edx74;
    void** eax75;
    void** v76;
    void** esi77;
    void** eax78;
    void** v79;
    void** eax80;
    void** ax81;
    void** edi82;
    void** eax83;
    void** v84;
    void** edx85;
    void** v86;
    void** ebx87;
    int32_t edi88;
    void** eax89;
    void** v90;
    void** edx91;
    void** ebx92;
    void** edi93;
    void** v94;
    int32_t ebp95;
    int32_t esi96;
    void** edx97;
    void** eax98;
    void** edx99;
    void** v100;

    esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 20);
    edx13 = g47764c;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx13 == 0))) {
        edx14 = reinterpret_cast<unsigned char>(edx13) * 4;
        eax15 = 0;
        do {
            eax15 = eax15 + 4;
            *reinterpret_cast<int32_t*>(eax15 + 0x615a58) = -2;
        } while (reinterpret_cast<int32_t>(eax15) < reinterpret_cast<int32_t>(edx14));
    }
    ecx16 = reinterpret_cast<void**>(0x616ea4);
    do {
        ecx16 = ecx16 + 8;
        fun_442b80(ecx16, v17, v18, v19, v20, v21, ecx16, v22, v23, v24, v25, v26);
        esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 + 4);
    } while (!reinterpret_cast<int1_t>(ecx16 == 0x616ee4));
    ax27 = g47764c;
    g616eaa = ax27;
    eax28 = g48160c;
    g616ea8 = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(eax28 + 12) = reinterpret_cast<void**>(1);
    eax29 = g60ba58;
    g615a5c = eax29;
    GetAsyncKeyState(27);
    GetTickCount(27);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 + 4 - 4 + 4);
    while (1) {
        ax31 = reinterpret_cast<int16_t>(GetAsyncKeyState(27, 27));
        esp32 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp30) - 4 - 4 + 4);
        if (ax31) {
            fun_43bd40(ecx16, "Aborted upon user request", 27, 27, ecx16, "Aborted upon user request", 27, 27);
            esp32 = esp32 - 4 - 4 + 4 + 4;
        }
        do {
            esp33 = reinterpret_cast<void*>(esp32 - 4 - 4 - 4);
            esp34 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp33) - 4);
            v35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp33) + 16);
            eax36 = g60b83c;
            v37 = reinterpret_cast<void**>(esp34 + 16);
            ecx16 = reinterpret_cast<void**>(0x1000);
            edx38 = *reinterpret_cast<void***>(eax36);
            v39 = eax36;
            g477650 = reinterpret_cast<void**>(0x1000);
            eax40 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx38 + 84)());
            esp32 = esp34 - 4 - 4 - 4 + 4;
            g60b840 = eax40;
            if (eax40) {
                addr_43da35_10:
                edi41 = g60b840;
                if (edi41 != 0x887700be) {
                    v42 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi41) & 0xfff);
                    fun_437a90(0x1000, "A Receive Failure %d\r\n", v42, v39, v37, v35, 1, 0x615a7c, 0x477650, 0x1000, "A Receive Failure %d\r\n", v42, v39, v37, v35, 1, 0x615a7c, 0x477650);
                    esp32 = esp32 - 4 - 4 - 4 + 4 + 8;
                }
            } else {
                if (v39) {
                    esi43 = reinterpret_cast<void***>(0x615a7c);
                    edi44 = g48160c;
                    ecx45 = g477650;
                    edi46 = reinterpret_cast<void***>(edi44 + 36);
                    esp47 = reinterpret_cast<void*>(esp32 - 4);
                    eax48 = ecx45;
                    ecx49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx45) >> 2);
                    zf50 = ecx49 == 0;
                    do {
                        if (!ecx49) 
                            break;
                        --ecx49;
                        *edi46 = *esi43;
                        edi46 = edi46 + 4;
                        esi43 = esi43 + 4;
                    } while (!zf50);
                    *reinterpret_cast<unsigned char*>(&ecx49) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax48) & 3);
                    zf51 = *reinterpret_cast<unsigned char*>(&ecx49) == 0;
                    do {
                        if (!ecx49) 
                            break;
                        --ecx49;
                        *edi46 = *esi43;
                        ++edi46;
                        ++esi43;
                    } while (!zf51);
                    esp52 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp47) + 4);
                    eax53 = g48160c;
                    dx54 = g477650;
                    *reinterpret_cast<void***>(eax53 + 10) = dx54;
                    ebx55 = 0;
                    ebp56 = v39;
                    edx57 = 0;
                    do {
                        if (ebp56 == *reinterpret_cast<void***>(edx57 + 0x615a5c)) 
                            goto addr_43d99c_21;
                        edx57 = edx57 + 4;
                        ++ebx55;
                    } while (edx57 < 32);
                    goto addr_43d957_23;
                } else {
                    goto addr_43da35_10;
                }
            }
            eax58 = g48160c;
            *reinterpret_cast<void***>(eax58 + 8) = reinterpret_cast<void**>(0xffff);
            continue;
            addr_43d99c_21:
            if (ebx55 != 8) {
                ebp59 = v39;
            } else {
                ebp59 = reinterpret_cast<void**>(0xffffffff);
            }
            if (!reinterpret_cast<int1_t>(ebp59 == 0xffffffff)) {
                edi60 = reinterpret_cast<void***>(0x616ea4 + ebx55 * 8);
            } else {
                eax61 = g48160c;
                edi60 = reinterpret_cast<void***>(0x616ea4 + reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax61 + 12)) * 8);
            }
            fun_437a90(ecx49, "Packet from %d: remotenode %d", v39, ebp59, v39, v37, v35, 1, 0x615a7c, ecx49, "Packet from %d: remotenode %d", v39, ebp59, v39, v37, v35, 1, 0x615a7c);
            esi62 = reinterpret_cast<void**>(0x615a7c);
            esp63 = reinterpret_cast<void*>(esp52 - 4 - 4 - 4 - 4 + 4 + 12 - 4);
            ecx16 = reinterpret_cast<void**>(2);
            do {
                if (!ecx16) 
                    break;
                --ecx16;
                *edi60 = *reinterpret_cast<void***>(esi62);
                edi60 = edi60 + 4;
                esi62 = esi62 + 4;
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx16) = 0;
            do {
                if (!ecx16) 
                    break;
                --ecx16;
                *edi60 = *reinterpret_cast<void***>(esi62);
                ++edi60;
                ++esi62;
            } while (0);
            esp32 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp63) + 4);
            if (reinterpret_cast<int1_t>(ebp59 == 0xffffffff)) {
                fun_437a90(ecx16, "that was a new node", v39, v37, v35, 1, 0x615a7c, 0x477650, 27, ecx16, "that was a new node", v39, v37, v35, 1, 0x615a7c, 0x477650, 27);
                edx64 = g48160c;
                esp32 = esp32 - 4 - 4 + 4 + 4;
                *reinterpret_cast<void***>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edx64 + 12)) * 4 + 0x615a5c) = v39;
                *reinterpret_cast<void***>(edx64 + 12) = *reinterpret_cast<void***>(edx64 + 12) + 1;
                continue;
            }
            addr_43d957_23:
            goto addr_43d99c_21;
            zf65 = g60b840 == 0;
        } while (zf65);
        edx66 = 0;
        eax67 = 0;
        while ((ebx68 = g48160c, edx66 < static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx68 + 12)))) && *reinterpret_cast<int16_t*>(eax67 + 0x616ea8) == *reinterpret_cast<int16_t*>(eax67 + 0x616eaa)) {
            eax67 = eax67 + 8;
            ++edx66;
        }
        eax69 = reinterpret_cast<int16_t>(g616eaa);
        if (edx66 == eax69) 
            break;
        eax70 = reinterpret_cast<int32_t>(GetTickCount());
        esp30 = reinterpret_cast<void*>(esp32 - 4 + 4);
        if (eax70 - reinterpret_cast<unsigned char>(v35) <= 0x3e8) 
            continue;
        GetTickCount();
        eax71 = g48160c;
        ecx16 = g60ba58;
        ax72 = *reinterpret_cast<void***>(eax71 + 12);
        g616ea8 = ax72;
        eax73 = g60b83c;
        edx74 = *reinterpret_cast<void***>(eax73);
        eax75 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx74 + 92)(eax73, ecx16, 0, 4, 0x616ea4, 8));
        g60b840 = eax75;
        v76 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax75) & 0xfff);
        esi77 = g60ba58;
        eax78 = g48160c;
        v79 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax78 + 12))));
        fun_437a90(ecx16, "broadcasting a packet saying found %d modes from dpid %d - result %d", v79, esi77, v76, eax73, ecx16, 0, 4, ecx16, "broadcasting a packet saying found %d modes from dpid %d - result %d", v79, esi77, v76, eax73, ecx16, 0, 4);
        esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 + 16);
    }
    fun_437a90(ecx16, "have all nodes", v39, v37, v35, 1, 0x615a7c, 0x477650, 27, ecx16, "have all nodes", v39, v37, v35, 1, 0x615a7c, 0x477650, 27);
    eax80 = g48160c;
    ax81 = *reinterpret_cast<void***>(eax80 + 12);
    g616ea8 = ax81;
    fun_437a90(ecx16, "sending out a packet", v39, v37, v35, 1, 0x615a7c, 0x477650, 27, ecx16, "sending out a packet", v39, v37, v35, 1, 0x615a7c, 0x477650, 27);
    edi82 = g60ba58;
    eax83 = g60b83c;
    v84 = edi82;
    edx85 = *reinterpret_cast<void***>(eax83);
    v86 = eax83;
    ebx87 = reinterpret_cast<void**>(0);
    edi88 = 0;
    eax89 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx85 + 92)(v86, v84, 0, 4, 0x616ea4));
    g60b840 = eax89;
    while (v90 = *reinterpret_cast<void***>(edi88 + 0x615a5c), edi88 = edi88 + 4, fun_437a90(ecx16, "iNodeForPlayer[ %d ] = %d", ebx87, v90, v86, v84, 0, 4, 0x616ea4, ecx16, "iNodeForPlayer[ %d ] = %d", ebx87, v90, v86, v84, 0, 4, 0x616ea4), ++ebx87, reinterpret_cast<signed char>(ebx87) < reinterpret_cast<signed char>(8)) {
    }
    edx91 = g47764c;
    ebx92 = reinterpret_cast<void**>(0);
    edi93 = reinterpret_cast<void**>(0);
    v94 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx91) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx91 == 0))) {
        ebp95 = 0;
        esi96 = 0;
        do {
            if (!*reinterpret_cast<int16_t*>(ebp95 + 0x616ea6)) {
                ++ebx92;
                if (reinterpret_cast<signed char>(ebx92) > reinterpret_cast<signed char>(4)) {
                    fun_43bd40(ecx16, "More than %i players in game!", 4, v86, ecx16, "More than %i players in game!", 4, v86);
                }
                ecx16 = g615a5c;
                if (reinterpret_cast<signed char>(ecx16) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi96 + 0x615a5c))) {
                    ++v94;
                }
            }
            edx97 = g47764c;
            ebp95 = ebp95 + 8;
            ++edi93;
            esi96 = esi96 + 4;
        } while (reinterpret_cast<signed char>(edi93) < reinterpret_cast<signed char>(edx97));
    }
    if (!ebx92) {
        fun_43bd40(ecx16, "No players in game!", v86, v84, ecx16, "No players in game!", v86, v84);
    }
    eax98 = g48160c;
    edx99 = v94;
    *reinterpret_cast<void***>(eax98 + 28) = edx99;
    *reinterpret_cast<void***>(eax98 + 30) = ebx92;
    v100 = v94 + 1;
    fun_437a90(ecx16, "Console is player %i of %i", v100, ebx92, v86, v84, 0, v94, 0x616ea4, ecx16, "Console is player %i of %i", v100, ebx92, v86, v84, 0, v94, 0x616ea4);
    goto 0x477650;
}

uint32_t fun_444089(void** ecx, void* a2);

uint32_t fun_4440b0(void** ecx, void* a2, int32_t a3, void* a4, ...) {
    uint32_t eax5;

    eax5 = fun_444089(ecx, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 24);
    return eax5;
}

/* DPLAY.dll:1 */
int32_t DPLAY_dll_1 = 0x80000001;

void** fun_449dba(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto DPLAY_dll_1;
}

int32_t g618324 = 0;

int32_t g61832c = 0;

int32_t g618330 = 0;

int32_t g616ee4 = 0;

int32_t g616ee8 = 0;

int32_t g477654 = 0x16e98f70;

int32_t g616eec = 0;

int32_t g477658 = 0x11cf1045;

int32_t g616ef0 = 0;

int32_t g47765c = 0xaa00f0a4;

int32_t g616ef4 = 0;

int32_t g477660 = 0x61f46000;

void** g616efc = reinterpret_cast<void**>(0);

void** g616f04 = reinterpret_cast<void**>(0);

int32_t fun_441e80(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t v7;
    int32_t ebx8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** edx23;
    int32_t eax24;
    void** ebx25;
    int32_t eax26;
    void** ecx27;
    int32_t eax28;
    void** esi29;
    void** v30;
    int32_t eax31;
    void** edi32;
    void** v33;
    int32_t eax34;
    void** ebp35;
    void** v36;
    void** eax37;
    int32_t eax38;
    int1_t zf39;
    int1_t zf40;
    int1_t zf41;
    int1_t zf42;
    int1_t zf43;
    int1_t zf44;
    int1_t zf45;
    int1_t zf46;
    int1_t zf47;
    int1_t zf48;
    int1_t zf49;
    void** edi50;
    int32_t v51;
    int32_t eax52;
    int32_t v53;
    void** ebp54;
    void** eax55;
    int32_t v56;
    void** eax57;
    void** eax58;
    int32_t v59;
    void** edx60;
    void** eax61;
    int32_t v62;
    void** ecx63;
    void** esi64;
    void** edi65;
    void** ebp66;
    void** eax67;
    void** edx68;
    void** ebx69;
    void* esp70;
    void** esp71;
    void** ecx72;
    void** eax73;
    void* esp74;
    int16_t v75;
    void** v76;
    int16_t v77;
    void** eax78;
    int16_t v79;
    void** edx80;
    int32_t eax81;
    int32_t v82;
    void** eax83;
    int16_t v84;
    void** edx85;
    int32_t eax86;
    int32_t v87;
    void** eax88;
    int16_t v89;
    void** edx90;
    int32_t eax91;
    int32_t v92;
    void** eax93;
    int16_t v94;
    void** edx95;
    int32_t eax96;
    int32_t v97;
    int16_t v98;
    void** edx99;
    int32_t eax100;
    int32_t v101;
    int16_t v102;
    void** edx103;
    int32_t eax104;
    int32_t v105;
    void** eax106;
    int16_t v107;
    void** eax108;
    int16_t v109;
    void** eax110;
    int16_t v111;
    void** ebp112;
    void** eax113;
    void** edx114;
    void** ebx115;
    void** ecx116;
    void** esi117;
    void** edi118;
    void* esp119;
    void** ebp120;
    void** eax121;
    int32_t v122;
    void* esp123;
    void* v124;
    void** v125;
    void** v126;
    unsigned char v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** eax134;
    void** v135;
    void** edx136;
    void** eax137;
    void** eax138;
    void** v139;
    int32_t v140;
    void** eax141;
    void** edx142;
    void** eax143;
    int32_t esi144;
    int32_t ebx145;
    void** eax146;
    int32_t eax147;
    int32_t v148;
    int32_t v149;
    void** eax150;
    void** v151;
    int32_t v152;

    v7 = ebx8;
    fun_437a90(ecx, "Initializing the XBAND API.", v9, v10, v11, v12, v13, v14, v15);
    eax16 = reinterpret_cast<void**>(LoadLibraryA("xbandapi.dll"));
    g618320 = eax16;
    if (eax16) {
        fun_437a90(ecx, "Loading XBANDAPI proc table..", "xbandapi.dll", v17, v18, v19, v20, v21, v22);
        edx23 = g618320;
        eax24 = reinterpret_cast<int32_t>(GetProcAddress(edx23, "XBInit", "xbandapi.dll"));
        ebx25 = g618320;
        g618324 = eax24;
        eax26 = reinterpret_cast<int32_t>(GetProcAddress(ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll"));
        ecx27 = g618320;
        g618328 = eax26;
        eax28 = reinterpret_cast<int32_t>(GetProcAddress(ecx27, "XBGetGameNumeric", ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll"));
        esi29 = g618320;
        v30 = esi29;
        g61832c = eax28;
        eax31 = reinterpret_cast<int32_t>(GetProcAddress(v30, "XBGetGameData", ecx27, "XBGetGameNumeric", ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll"));
        edi32 = g618320;
        v33 = edi32;
        g618330 = eax31;
        eax34 = reinterpret_cast<int32_t>(GetProcAddress(v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "XBGetGameNumeric", ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll"));
        ebp35 = g618320;
        v36 = ebp35;
        g618334 = eax34;
        eax37 = reinterpret_cast<void**>(GetProcAddress(v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "XBGetGameNumeric", ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll"));
        g618338 = eax37;
        fun_437a90(ecx27, "XBANDAPI proc table loaded.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx27, "XBANDAPI proc table loaded.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
        eax38 = g618324;
        if (!eax38 || ((zf39 = g618328 == 0, zf39) || ((zf40 = g61832c == 0, zf40) || ((zf41 = g618334 == 0, zf41) || ((zf42 = g618338 == 0, zf42) || (zf43 = g618330 == 0, zf43)))))) {
            zf44 = g618324 == 0;
            if (zf44) {
                fun_437a90(ecx27, "Could not load XBInit.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx27, "Could not load XBInit.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
            }
            zf45 = g618328 == 0;
            if (zf45) {
                fun_437a90(ecx27, "Could not load XBClose.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx27, "Could not load XBClose.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
            }
            zf46 = g61832c == 0;
            if (zf46) {
                fun_437a90(ecx27, "Could not load XBGetGameNumeric.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx27, "Could not load XBGetGameNumeric.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
            }
            zf47 = g618330 == 0;
            if (zf47) {
                fun_437a90(ecx27, "Could not load XBGetGameData.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx27, "Could not load XBGetGameData.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
            }
            zf48 = g618334 == 0;
            if (zf48) {
                fun_437a90(ecx27, "Could not load XBSendGameData.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx27, "Could not load XBSendGameData.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
            }
            zf49 = g618338 == 0;
            if (zf49) {
                fun_437a90(ecx27, "Could not load XBSendPlayerData.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx27, "Could not load XBSendPlayerData.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
            }
            edi50 = g618320;
            FreeLibrary(edi50, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "XBGetGameNumeric", ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll");
            fun_437a90(ecx27, "XBANDAPI.DLL has been corrupted.", edi50, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "XBANDAPI.DLL has been corrupted.", edi50, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData");
            goto v51;
        }
        fun_437a90(ecx27, "Calling XBInit.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx27, "Calling XBInit.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
        eax52 = reinterpret_cast<int32_t>(g618324(0x61831c, 0x477654, 1, 0, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "XBGetGameNumeric", ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll"));
        if (eax52) {
            fun_437a90(ecx27, "XBInit failed.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx27, "XBInit failed.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
            goto v53;
        }
        fun_437a90(ecx27, "Calling XBGetGameNumeric to get XBIN_GAME_NUMERIC_NUM_PLAYERS.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx27, "Calling XBGetGameNumeric to get XBIN_GAME_NUMERIC_NUM_PLAYERS.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
        ebp54 = g61831c;
        eax55 = reinterpret_cast<void**>(g61832c(ebp54, 0, 0x4776c8, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "XBGetGameNumeric", ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll"));
        if (eax55) {
            fun_437a90(ecx27, "Could not get XBIN_GAME_NUMERIC_NUM_PLAYERS.  XBGetGameNumeric returned error code %d", eax55, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "Could not get XBIN_GAME_NUMERIC_NUM_PLAYERS.  XBGetGameNumeric returned error code %d", eax55, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData");
            fun_43bd40(ecx27, "XBGetGameNumeric failed! %d", eax55, v36, ecx27, "XBGetGameNumeric failed! %d", eax55, v36);
            goto v56;
        }
        fun_437a90(ecx27, "Calling XBGetGameNumeric to get XBIN_GAME_NUMERIC_LOCAL_PLAYER1_ID.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx27, "Calling XBGetGameNumeric to get XBIN_GAME_NUMERIC_LOCAL_PLAYER1_ID.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
        eax57 = g61831c;
        eax58 = reinterpret_cast<void**>(g61832c(eax57, 1, 0x4776cc, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "XBGetGameNumeric", ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll"));
        if (eax58) {
            fun_437a90(ecx27, "Could not get XBIN_GAME_NUMERIC_LOCAL_PLAYER1_ID.  XBGetGameNumeric returned error code %d", eax58, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "Could not get XBIN_GAME_NUMERIC_LOCAL_PLAYER1_ID.  XBGetGameNumeric returned error code %d", eax58, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData");
            fun_43bd40(ecx27, "XBGetGameNumeric failed! %d", eax58, v36, ecx27, "XBGetGameNumeric failed! %d", eax58, v36);
            goto v59;
        }
        fun_437a90(ecx27, "Calling XBGetGameNumeric to get XBIN_GAME_NUMERIC_REMOTE_PLAYER1_ID.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx27, "Calling XBGetGameNumeric to get XBIN_GAME_NUMERIC_REMOTE_PLAYER1_ID.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
        edx60 = g61831c;
        eax61 = reinterpret_cast<void**>(g61832c(edx60, 3, 0x4776d0, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "XBGetGameNumeric", ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll"));
        if (eax61) {
            fun_437a90(ecx27, "Could not get XBIN_GAME_NUMERIC_LOCAL_PLAYER1_ID.  XBGetGameNumeric returned error code %d", eax61, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "Could not get XBIN_GAME_NUMERIC_LOCAL_PLAYER1_ID.  XBGetGameNumeric returned error code %d", eax61, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData");
            fun_43bd40(ecx27, "XBGetGameNumeric failed! %d", eax61, v36, ecx27, "XBGetGameNumeric failed! %d", eax61, v36);
            goto v62;
        }
        fun_442b80(ecx27, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, ecx27, v36, "XBSendPlayerData", v33, "XBSendGameData", v30);
        ecx63 = g481270;
        esi64 = g481278;
        edi65 = g48126c;
        ebp66 = g482a6c;
        eax67 = g481240;
        edx68 = g481234;
        ebx69 = g481248;
        fun_437a90(ecx63, "Before overriding options -- eps %d map %d skill %d death %d nomons %d respawn %d fast %d\r\n", ebx69, edx68, eax67, ebp66, edi65, esi64, ecx63, ecx63, "Before overriding options -- eps %d map %d skill %d death %d nomons %d respawn %d fast %d\r\n", ebx69, edx68, eax67, ebp66, edi65, esi64, ecx63);
        fun_437a90(ecx63, "Calling XBGetGameData to get XBIN_GAME_DATA_OPTIONS.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx63, "Calling XBGetGameData to get XBIN_GAME_DATA_OPTIONS.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
        esp70 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x228 - 4 - 4 + 4 + 4 - 4 - 4 + 4 - 4 - 4 + 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 4 - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 + 16 - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 32 - 4 - 4 + 4 + 4);
        esp71 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp70) - 4);
        ecx72 = g61831c;
        eax73 = reinterpret_cast<void**>(g618330(ecx72, 0, esp71 + 0x81, reinterpret_cast<int32_t>(esp70) + 0x218, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "XBGetGameNumeric", ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll"));
        esp74 = reinterpret_cast<void*>(esp71 - 1 - 1 - 1 - 1 + 1 + 4);
        if (eax73 || static_cast<int32_t>(v75) != 1) {
            v76 = reinterpret_cast<void**>(static_cast<int32_t>(v77));
            fun_437a90(ecx72, "Could not get XBIN_GAME_DATA_OPTIONS. XBGetGameData returned error code %d.  length = %d, options.structversion = %d ", eax73, 20, v76, v36, "XBSendPlayerData", v33, "XBSendGameData", ecx72, "Could not get XBIN_GAME_DATA_OPTIONS. XBGetGameData returned error code %d.  length = %d, options.structversion = %d ", eax73, 20, v76, v36, "XBSendPlayerData", v33, "XBSendGameData");
            esp74 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp74) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
        } else {
            eax78 = reinterpret_cast<void**>(static_cast<int32_t>(v79));
            if (eax78 != 0xffffffff) {
                edx80 = g48160c;
                g481240 = eax78;
                eax81 = v82;
                *reinterpret_cast<void***>(edx80 + 26) = *reinterpret_cast<void***>(&eax81);
            }
            eax83 = reinterpret_cast<void**>(static_cast<int32_t>(v84));
            if (eax83 != 0xffffffff) {
                edx85 = g48160c;
                g481248 = eax83;
                eax86 = v87;
                *reinterpret_cast<void***>(edx85 + 22) = *reinterpret_cast<void***>(&eax86);
            }
            eax88 = reinterpret_cast<void**>(static_cast<int32_t>(v89));
            if (eax88 != 0xffffffff) {
                edx90 = g48160c;
                g481234 = eax88;
                eax91 = v92;
                *reinterpret_cast<void***>(edx90 + 24) = *reinterpret_cast<void***>(&eax91);
            }
            eax93 = reinterpret_cast<void**>(static_cast<int32_t>(v94));
            if (eax93 != 0xffffffff) {
                edx95 = g48160c;
                g482a6c = eax93;
                eax96 = v97;
                *reinterpret_cast<void***>(edx95 + 18) = *reinterpret_cast<void***>(&eax96);
            }
            if (static_cast<int32_t>(v98) != -1) {
                edx99 = g48160c;
                eax100 = v101;
                *reinterpret_cast<void***>(edx99 + 14) = *reinterpret_cast<void***>(&eax100);
            }
            if (static_cast<int32_t>(v102) != -1) {
                edx103 = g48160c;
                eax104 = v105;
                *reinterpret_cast<void***>(edx103 + 16) = *reinterpret_cast<void***>(&eax104);
            }
            eax106 = reinterpret_cast<void**>(static_cast<int32_t>(v107));
            if (eax106 != 0xffffffff) {
                g48126c = eax106;
            }
            eax108 = reinterpret_cast<void**>(static_cast<int32_t>(v109));
            if (eax108 != 0xffffffff) {
                g481278 = eax108;
            }
            eax110 = reinterpret_cast<void**>(static_cast<int32_t>(v111));
            if (eax110 != 0xffffffff) {
                g481270 = eax110;
            }
        }
        ebp112 = g481270;
        eax113 = g481278;
        edx114 = g48126c;
        ebx115 = g482a6c;
        ecx116 = g481240;
        esi117 = g481234;
        edi118 = g481248;
        fun_437a90(ecx116, "After overriding options -- eps %d map %d skill %d death %d nomons %d respawn %d fast %d\r\n", edi118, esi117, ecx116, ebx115, edx114, eax113, ebp112, ecx116, "After overriding options -- eps %d map %d skill %d death %d nomons %d respawn %d fast %d\r\n", edi118, esi117, ecx116, ebx115, edx114, eax113, ebp112);
        fun_437a90(ecx116, "Calling XBGetGameNumeric to get XBIN_GAME_NUMERIC_PLAY_FLAGS.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx116, "Calling XBGetGameNumeric to get XBIN_GAME_NUMERIC_PLAY_FLAGS.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
        esp119 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp74) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 32 - 4 - 4 + 4 + 4);
        ebp120 = g61831c;
        eax121 = reinterpret_cast<void**>(g61832c(ebp120, 7, reinterpret_cast<int32_t>(esp119) + 0x214, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "XBGetGameNumeric", ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll"));
        if (eax121) {
            fun_437a90(ecx116, "Could not get XBIN_GAME_NUMERIC_PLAY_FLAGS.  XBGetGameNumeric returned error code %d", eax121, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx116, "Could not get XBIN_GAME_NUMERIC_PLAY_FLAGS.  XBGetGameNumeric returned error code %d", eax121, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData");
            fun_43bd40(ecx116, "XBGetGameNumeric failed! %d", eax121, v36, ecx116, "XBGetGameNumeric failed! %d", eax121, v36);
            goto v122;
        }
        esp123 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp119) - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4);
        v124 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp123) + 0x108);
        fun_442b4a(ecx116, v124, "dwMaster = %d", v125, v36, "XBSendPlayerData", ecx116, v124, "dwMaster = %d", v125, v36, "XBSendPlayerData");
        v126 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp123) - 4 - 4 + 4 + 12 + 0x100);
        fun_437a90(ecx116, v126, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx116, v126, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
        if (v127 & 1) 
            goto addr_442434_47;
    } else {
        fun_437a90(ecx, "Cannot load XBANDAPI.DLL.", "xbandapi.dll", v128, v129, v130, v131, v132, v133);
        goto addr_4425a3_49;
    }
    fun_437a90(ecx116, "SLAVE - Opening a direct play session.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx116, "SLAVE - Opening a direct play session.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
    ecx116 = reinterpret_cast<void**>(1);
    fun_442b80(1, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, 1, v36, "XBSendPlayerData", v33, "XBSendGameData", v30);
    g616ee4 = 0x7c;
    eax134 = g60b83c;
    g616ee8 = g477654;
    g616eec = g477658;
    g616ef0 = g47765c;
    g616ef4 = g477660;
    v135 = eax134;
    edx136 = *reinterpret_cast<void***>(eax134);
    g616efc = reinterpret_cast<void**>(2);
    g616f04 = reinterpret_cast<void**>(1);
    eax137 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx136 + 80)(v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "XBGetGameNumeric", ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll"));
    g60b840 = eax137;
    if (eax137) 
        goto addr_44261a_63;
    addr_442591_64:
    fun_437a90(ecx116, "XBANDAPI successfully initialized.", v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, ecx116, "XBANDAPI successfully initialized.", v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30);
    addr_4425a3_49:
    goto v7;
    addr_44261a_63:
    fun_437a90(1, "DirectPlay Open Failed!", v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, 1, "DirectPlay Open Failed!", v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30);
    eax138 = g60b840;
    v139 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax138) & 0xfff);
    fun_43bd40(1, "DirectPlay Open Failed! %d", v139, v135, 1, "DirectPlay Open Failed! %d", v139, v135);
    goto v140;
    addr_442434_47:
    fun_437a90(ecx116, "MASTER - Creating a direct play session.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, ecx116, "MASTER - Creating a direct play session.", v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27);
    fun_442b80(ecx116, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, ecx116, v36, "XBSendPlayerData", v33, "XBSendGameData", v30);
    g616ee4 = 0x7c;
    eax141 = g60b83c;
    g616ee8 = g477654;
    g616eec = g477658;
    g616ef0 = g47765c;
    g616ef4 = g477660;
    v135 = eax141;
    edx142 = *reinterpret_cast<void***>(eax141);
    g616efc = reinterpret_cast<void**>(2);
    g616f04 = reinterpret_cast<void**>(2);
    eax143 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx142 + 80)(v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, "XBGetGameData", ecx27, "XBGetGameNumeric", ebx25, "XBClose", edx23, "XBInit", "xbandapi.dll"));
    g60b840 = eax143;
    if (eax143) 
        goto addr_442495_77;
    fun_437a90(ecx116, "MASTER - Connected.  Will now wait for opponent to arrive.", v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, ecx116, "MASTER - Connected.  Will now wait for opponent to arrive.", v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30);
    esi144 = 0;
    ebx145 = 0;
    do {
        if (esi144) 
            break;
        eax146 = g60b83c;
        ecx116 = *reinterpret_cast<void***>(eax146);
        eax147 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(ecx116 + 84)());
        if (!eax147) {
            if (!v148) {
                ecx116 = eax146;
                if (reinterpret_cast<unsigned char>(ecx116) >= reinterpret_cast<unsigned char>(14) && (reinterpret_cast<unsigned char>(ecx116) > reinterpret_cast<unsigned char>(14) && (reinterpret_cast<unsigned char>(ecx116) >= reinterpret_cast<unsigned char>(33) && reinterpret_cast<unsigned char>(ecx116) > reinterpret_cast<unsigned char>(33)))) {
                    if (ecx116 == 0x484b) {
                        esi144 = 1;
                        continue;
                    } else {
                        continue;
                    }
                }
            }
        }
        Sleep(100);
        ++ebx145;
    } while (ebx145 < 0x258);
    if (!esi144) 
        goto addr_442568_91;
    fun_437a90(ecx116, "MASTER Opponent has arrived.", v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, ecx116, "MASTER Opponent has arrived.", v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30);
    goto addr_442591_64;
    addr_442568_91:
    fun_437a90(ecx116, "MASTER Opponent did not arrive.", v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, ecx116, "MASTER Opponent did not arrive.", v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30);
    goto v149;
    addr_442495_77:
    fun_437a90(ecx116, "DirectPlay Create Failed!", v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30, ecx116, "DirectPlay Create Failed!", v135, 0x616ee4, v36, "XBSendPlayerData", v33, "XBSendGameData", v30);
    eax150 = g60b840;
    v151 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax150) & 0xfff);
    fun_43bd40(ecx116, "DirectPlay Create Failed! %d", v151, v135, ecx116, "DirectPlay Create Failed! %d", v151, v135);
    goto v152;
}

struct s488 {
    signed char f0;
    signed char f1;
};

struct s489 {
    signed char f0;
    signed char f1;
};

int32_t g60b878 = 0;

int32_t g60b87c = 0;

void fun_43e020(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** v15;
    void** v16;
    void** ebx17;
    void** v18;
    void** v19;
    void** edx20;
    void** v21;
    void** esi22;
    void** v23;
    void** edi24;
    void** v25;
    void** ebp26;
    void** ebx27;
    void** eax28;
    void** ecx29;
    void** eax30;
    struct s488* esi31;
    signed char* edi32;
    struct s489* edi33;
    signed char al34;
    signed char al35;
    void** eax36;
    int1_t zf37;
    void** edi38;
    int32_t eax39;
    void** ebp40;
    int32_t eax41;
    void** eax42;
    int32_t eax43;
    void** eax44;
    int32_t eax45;
    void** eax46;
    void** eax47;
    void** eax48;
    void** ebx49;
    void** eax50;
    void** bx51;
    void** bx52;
    void** bx53;
    void** bx54;
    void** bx55;

    v15 = reinterpret_cast<void**>(__return_address());
    v16 = ebx17;
    v18 = ecx;
    v19 = edx20;
    v21 = esi22;
    v23 = edi24;
    v25 = ebp26;
    ebx27 = eax28;
    ecx29 = reinterpret_cast<void**>(1);
    fun_4440d1(1, v25, v23, v21, v19, v18, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    g48160c = reinterpret_cast<void**>(0);
    g616ea0 = reinterpret_cast<void**>(1);
    eax30 = reinterpret_cast<void**>(LoadLibraryA(0x616a80, v25, v23, v21, v19, v18, v16, v15));
    g60b874 = eax30;
    if (!eax30) {
        esi31 = reinterpret_cast<struct s488*>(".DLL");
        edi32 = reinterpret_cast<signed char*>(0x616a80);
        ecx29 = reinterpret_cast<void**>(0xffffffff);
        do {
            if (!ecx29) 
                break;
            --ecx29;
            ++edi32;
            esi31 = reinterpret_cast<struct s488*>(&esi31->f1);
        } while (*edi32);
        edi33 = reinterpret_cast<struct s489*>(edi32 - 1);
        do {
            al34 = esi31->f0;
            edi33->f0 = al34;
            if (!al34) 
                break;
            al35 = esi31->f1;
            ++esi31;
            edi33->f1 = al35;
            ++edi33;
        } while (al35);
        eax36 = reinterpret_cast<void**>(LoadLibraryA(0x616a80, 0x616a80, v25, v23, v21, v19, v18, v16, v15));
        g60b874 = eax36;
    }
    zf37 = g60b874 == 0;
    if (zf37) {
        fun_43bd40(ecx29, "Unable to locate network support", 0x616a80, v25, ecx29, "Unable to locate network support", 0x616a80, v25);
    }
    edi38 = g60b874;
    eax39 = reinterpret_cast<int32_t>(GetProcAddress());
    g60b878 = eax39;
    if (!eax39) {
        fun_43bd40(ecx29, "Unable to locate 'Connect'", edi38, "_Connect@8", ecx29, "Unable to locate 'Connect'", edi38, "_Connect@8");
    }
    ebp40 = g60b874;
    eax41 = reinterpret_cast<int32_t>(GetProcAddress());
    g60b87c = eax41;
    if (!eax41) {
        fun_43bd40(ecx29, "Unable to locate 'InitializeNetwork'", ebp40, "_InitializeNetwork@0", ecx29, "Unable to locate 'InitializeNetwork'", ebp40, "_InitializeNetwork@0");
    }
    eax42 = g60b874;
    eax43 = reinterpret_cast<int32_t>(GetProcAddress());
    g60b880 = eax43;
    if (!eax43) {
        fun_43bd40(ecx29, "Unable to locate 'Process'", eax42, "_Process@0", ecx29, "Unable to locate 'Process'", eax42, "_Process@0");
    }
    fun_412670(ecx29, eax42, "_Process@0", ebp40, "_InitializeNetwork@0", edi38, "_Connect@8", 0x616a80, v25, v23, v21, v19, v18, v16, v15);
    eax44 = reinterpret_cast<void**>(g60b87c());
    g48160c = eax44;
    if (!eax44) {
        fun_43bd40(ecx29, "InitializeNetwork failed to return doomcom", eax42, "_Process@0", ecx29, "InitializeNetwork failed to return doomcom", eax42, "_Process@0");
    }
    fun_440840(ecx29, "Synchronize Network Connections:", eax42, "_Process@0", ebp40, "_InitializeNetwork@0", edi38, "_Connect@8", 0x616a80, v25, v23, v21, v19, v18, v16, v15);
    eax45 = reinterpret_cast<int32_t>(g60b878());
    if (!eax45) {
        fun_43bd40(ecx29, "Unable To Connect", ebx27, 0x616e80, ecx29, "Unable To Connect", ebx27, 0x616e80);
    }
    if (!eax45) {
        fun_43bd40(ecx29, "Unable To Gain Connection", ebx27, 0x616e80, ecx29, "Unable To Gain Connection", ebx27, 0x616e80);
    } else {
        fun_440840(ecx29, "\nConnection Successful!\n", ebx27, 0x616e80, eax42, "_Process@0", ebp40, "_InitializeNetwork@0", edi38, "_Connect@8", 0x616a80, v25, v23, v21, v19, v18, ecx29, "\nConnection Successful!\n", ebx27, 0x616e80, eax42, "_Process@0", ebp40, "_InitializeNetwork@0", edi38, "_Connect@8", 0x616a80, v25, v23, v21, v19, v18);
    }
    eax46 = g48160c;
    *reinterpret_cast<void***>(eax46) = reinterpret_cast<void**>(0x12345678);
    *reinterpret_cast<void***>(eax46 + 14) = reinterpret_cast<void**>(1);
    eax47 = fun_41d410(ecx29, ebx27, 0x616e80, eax42, "_Process@0", ebp40, "_InitializeNetwork@0", edi38, "_Connect@8", 0x616a80, v25, v23, v21, v19, v18, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    if (eax47) {
        eax48 = fun_443534(ecx29, ebx27, 0x616e80, eax42, "_Process@0", ebp40, "_InitializeNetwork@0", edi38, "_Connect@8", 0x616a80, v25, v23, v21, v19, v18, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        ebx49 = g48160c;
        *reinterpret_cast<void***>(ebx49 + 14) = eax48;
    }
    eax50 = g48160c;
    *reinterpret_cast<void***>(eax50 + 16) = reinterpret_cast<void**>(0);
    bx51 = g482a6c;
    *reinterpret_cast<void***>(eax50 + 32) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax50 + 18) = bx51;
    bx52 = g481248;
    *reinterpret_cast<void***>(eax50 + 22) = bx52;
    bx53 = g481234;
    *reinterpret_cast<void***>(eax50 + 24) = bx53;
    bx54 = g481240;
    *reinterpret_cast<void***>(eax50 + 26) = bx54;
    bx55 = *reinterpret_cast<void***>(eax50 + 12);
    g482a84 = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(eax50 + 30) = bx55;
    goto edi38;
}

struct s490 {
    signed char[4] pad4;
    signed char f4;
    signed char f5;
    signed char f6;
};

struct s491 {
    signed char[6] pad6;
    signed char f6;
};

struct s492 {
    signed char[5] pad5;
    signed char f5;
    signed char f6;
};

struct s493 {
    signed char f0;
    signed char f1;
};

void fun_43dc30(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** ebx13;
    void** v14;
    void** v15;
    void** edx16;
    void** v17;
    void** esi18;
    void** v19;
    void** edi20;
    void** v21;
    void** ebp22;
    void** eax23;
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
    void** v39;
    int32_t v40;
    int32_t v41;
    void** eax42;
    struct s490* edx43;
    void* esp44;
    void* esp45;
    void** ebx46;
    void* esp47;
    void* esp48;
    void** v49;
    void* esp50;
    void* esp51;
    struct s491* edx52;
    void** v53;
    void* esp54;
    uint32_t eax55;
    void*** esp56;
    signed char v57;
    signed char v58;
    uint32_t eax59;
    uint32_t ecx60;
    signed char v61;
    signed char v62;
    void** ecx63;
    void** v64;
    struct s492* edx65;
    void* v66;
    void* esp67;
    void* v68;
    void* esp69;
    void* v70;
    void* esp71;
    void* v72;
    uint32_t eax73;
    void* esp74;
    signed char v75;
    signed char v76;
    uint32_t ebx77;
    void** v78;
    void* v79;
    void* esp80;
    void* v81;
    void* esp82;
    void** v83;
    void* v84;
    void* esp85;
    void* v86;
    uint32_t eax87;
    void** esp88;
    signed char v89;
    signed char v90;
    uint32_t ebx91;
    void** ebx92;
    struct s493* edx93;
    void** ecx94;
    void** v95;
    void* v96;
    void* esp97;
    void* v98;
    void** v99;
    signed char v100;
    void** v101;
    void** eax102;
    void** v103;
    void** eax104;
    void** dx105;
    void** dx106;
    void** dx107;
    void** dx108;
    void** dx109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** eax115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** eax121;
    void** edx122;
    void** eax123;
    int32_t eax124;
    void** eax125;
    void** edx126;
    void** eax127;
    void** v128;
    void** eax129;
    void** edx130;
    void** eax131;
    void** eax132;
    void** edx133;
    void** ebp134;
    void** eax135;
    void** v136;
    void** eax137;
    int32_t v138;
    void** v139;

    v11 = reinterpret_cast<void**>(__return_address());
    v12 = ebx13;
    v14 = ecx;
    v15 = edx16;
    v17 = esi18;
    v19 = edi20;
    v21 = ebp22;
    eax23 = g60b4d8;
    g47764c = eax23;
    g60b83c = reinterpret_cast<void**>(0);
    eax36 = fun_41d410(ecx, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v21, v19, v17, v15, v14, v12, v11, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 48 - 4 + 4);
    if (!eax36) {
        fun_43bd40(ecx, "Illegal command line switches.", v38, v39, ecx, "Illegal command line switches.", v40, v41);
        esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) - 4 - 4 + 4 + 4);
    }
    eax42 = g4835f8;
    edx43 = *reinterpret_cast<struct s490**>(reinterpret_cast<uint32_t>(eax42 + reinterpret_cast<unsigned char>(eax36) * 4) + 4);
    esp44 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) - 4 - 4);
    fun_4440b0(ecx, reinterpret_cast<int32_t>(esp44) + 24, "%x", reinterpret_cast<int32_t>(esp37) + 44);
    esp45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp44) - 4 - 4 + 4 + 12);
    ebx46 = eax36 + 1;
    esp47 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp45) - 4 - 4);
    fun_4440b0(ecx, reinterpret_cast<int32_t>(esp47) + 28, "%x", reinterpret_cast<int32_t>(esp45) + 36);
    esp48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp47) - 4 - 4 + 4 + 12);
    *reinterpret_cast<signed char*>(&v49) = edx43->f4;
    *reinterpret_cast<signed char*>(&v49 + 1) = edx43->f5;
    esp50 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp48) - 4 - 4);
    *reinterpret_cast<signed char*>(&ebx46 + 1) = 0;
    *reinterpret_cast<signed char*>(&v49 + 2) = 0;
    fun_4440b0(ecx, reinterpret_cast<int32_t>(esp50) + 32, "%x", reinterpret_cast<int32_t>(esp48) + 40);
    esp51 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp50) - 4 - 4 + 4 + 12);
    edx52 = reinterpret_cast<struct s491*>(reinterpret_cast<int32_t>(edx43) + 1);
    *reinterpret_cast<signed char*>(&v53) = edx43->f6;
    *reinterpret_cast<signed char*>(&v53 + 1) = edx52->f6;
    esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp51) - 4 - 4);
    *reinterpret_cast<signed char*>(&v53 + 2) = 0;
    eax55 = fun_4440b0(ecx, reinterpret_cast<int32_t>(esp54) + 36, "%x", reinterpret_cast<int32_t>(esp51) + 32);
    esp56 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp54) - 4 - 4 + 4 + 12);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax55) + 1) = 0;
    *reinterpret_cast<signed char*>(&eax55) = v57;
    *reinterpret_cast<signed char*>(&ebx46) = v58;
    eax59 = eax55 << 8 | reinterpret_cast<unsigned char>(ebx46);
    ecx60 = eax59;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax59) + 1) = 0;
    *reinterpret_cast<signed char*>(&ebx46) = v61;
    *reinterpret_cast<signed char*>(&eax59) = v62;
    ecx63 = reinterpret_cast<void**>((ecx60 & 0xffff) << 16);
    v64 = reinterpret_cast<void**>((eax59 << 8 | reinterpret_cast<unsigned char>(ebx46)) & 0xffff | reinterpret_cast<unsigned char>(ecx63));
    edx65 = reinterpret_cast<struct s492*>(reinterpret_cast<int32_t>(edx52) + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1);
    v66 = reinterpret_cast<void*>(esp56 + 44);
    esp67 = reinterpret_cast<void*>(esp56 - 4 - 4);
    *reinterpret_cast<signed char*>(&ecx63 + 1) = 0;
    v68 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) + 24);
    fun_4440b0(ecx63, v68, "%x", v66, ecx63, v68, "%x", v66);
    esp69 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) - 4 - 4 + 4 + 12);
    v70 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp69) + 36);
    esp71 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp69) - 4 - 4);
    v72 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp71) + 28);
    eax73 = fun_4440b0(ecx63, v72, "%x", v70, ecx63, v72, "%x", v70);
    esp74 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp71) - 4 - 4 + 4 + 12);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax73) + 1) = 0;
    *reinterpret_cast<signed char*>(&eax73) = v75;
    *reinterpret_cast<signed char*>(&ebx46) = v76;
    ebx77 = reinterpret_cast<unsigned char>(ebx46) | eax73 << 8;
    *reinterpret_cast<int16_t*>(&v78) = *reinterpret_cast<int16_t*>(&ebx77);
    v79 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp74) + 44);
    esp80 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp74) - 4 - 4);
    v81 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp80) + 24);
    fun_4440b0(ecx63, v81, "%x", v79, ecx63, v81, "%x", v79);
    esp82 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp80) - 4 - 4 + 4 + 12);
    *reinterpret_cast<signed char*>(&v83) = edx65->f5;
    *reinterpret_cast<signed char*>(&v83 + 1) = edx65->f6;
    v84 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp82) + 36);
    esp85 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp82) - 4 - 4);
    v86 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp85) + 28);
    *reinterpret_cast<signed char*>(&v83 + 2) = 0;
    eax87 = fun_4440b0(ecx63, v86, "%x", v84, ecx63, v86, "%x", v84);
    esp88 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp85) - 4 - 4 + 4 + 12);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax87) + 1) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx77) + 1) = 0;
    *reinterpret_cast<signed char*>(&eax87) = v89;
    *reinterpret_cast<signed char*>(&ebx77) = v90;
    ebx91 = ebx77 | eax87 << 8;
    *reinterpret_cast<int16_t*>(&v78 + 2) = *reinterpret_cast<int16_t*>(&ebx91);
    ebx92 = esp88;
    edx93 = reinterpret_cast<struct s493*>(reinterpret_cast<int32_t>(edx65) + 1 + 1 + 1 + 1 + 1 + 1 + 1);
    ecx94 = ebx92 + 8;
    do {
        *reinterpret_cast<signed char*>(&v95) = edx93->f0;
        *reinterpret_cast<signed char*>(&v95 + 1) = edx93->f1;
        *reinterpret_cast<signed char*>(&v95 + 2) = 0;
        v96 = reinterpret_cast<void*>(esp88 + 44);
        esp97 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp88 - 4) - 4);
        v98 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp97) + 24);
        fun_4440b0(ecx94, v98, "%x", v96, ecx94, v98, "%x", v96);
        esp88 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp97) - 4 - 4 + 4 + 12);
        ++ebx92;
        edx93 = reinterpret_cast<struct s493*>(&edx93->f1 + 1);
        *reinterpret_cast<signed char*>(&v99 + 1) = v100;
    } while (ebx92 != ecx94);
    v101 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp88 - 4) - 4 + 8);
    eax102 = fun_449dba(v101, 0x60b83c, 0, v64, v78);
    g60b840 = eax102;
    if (eax102) {
        v103 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax102) & 0xfff);
        fun_43bd40(ecx94, "DirectPlayCreate Failed! %d", v103, v101, ecx94, "DirectPlayCreate Failed! %d", v103, v101);
    }
    eax104 = g48160c;
    dx105 = g481240;
    *reinterpret_cast<void***>(eax104) = reinterpret_cast<void**>(0x12345678);
    *reinterpret_cast<void***>(eax104 + 26) = dx105;
    dx106 = g481248;
    *reinterpret_cast<void***>(eax104 + 22) = dx106;
    dx107 = g481234;
    *reinterpret_cast<void***>(eax104 + 24) = dx107;
    dx108 = g482a6c;
    *reinterpret_cast<void***>(eax104 + 18) = dx108;
    dx109 = g47764c;
    *reinterpret_cast<void***>(eax104 + 12) = dx109;
    *reinterpret_cast<void***>(eax104 + 30) = dx109;
    eax115 = fun_41d410(ecx94, v101, 0x60b83c, 0, v64, v78, v110, v111, v95, v83, v49, v53, v112, v99, v113, v114, v21, v19, v17, v15, v14, v12, v11, a2, a3, a4, a5, a6, a7);
    if (eax115) {
        eax121 = fun_443534(ecx94, v101, 0x60b83c, 0, v64, v78, v116, v117, v95, v83, v49, v53, v118, v99, v119, v120, v21, v19, v17, v15, v14, v12, v11, a2, a3, a4, a5, a6, a7);
        edx122 = g48160c;
        *reinterpret_cast<void***>(edx122 + 14) = eax121;
    }
    eax123 = g48160c;
    *reinterpret_cast<void***>(eax123 + 14) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(eax123 + 16) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax123 + 20) = reinterpret_cast<void**>(0xffff);
    eax124 = fun_441e80(ecx94, v101, 0x60b83c, 0, v64, v78);
    if (eax124) {
        addr_43df99_10:
        eax125 = g60b83c;
        edx126 = *reinterpret_cast<void***>(eax125);
        eax127 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx126 + 20)(eax125, 0x60ba58, "doom95", "doom95 rules", 0, v101, 0x60b83c, 0, v64, v78));
        g60b840 = eax127;
        if (eax127) {
            v128 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax127) & 0xfff);
            fun_43bd40(ecx94, "you don't exist %d", v128, eax125, ecx94, "you don't exist %d", v128, eax125);
        }
    } else {
        ecx94 = reinterpret_cast<void**>(4);
        fun_442b80(4, v101, 0x60b83c, 0, v64, v78, 4, v101, 0x60b83c, 0, v64, v78);
        g616ee4 = 0x7c;
        eax129 = g60b83c;
        g616ee8 = g477654;
        g616eec = g477658;
        g616ef0 = g47765c;
        g616ef4 = g477660;
        edx130 = *reinterpret_cast<void***>(eax129);
        g616efc = reinterpret_cast<void**>(4);
        g616f04 = reinterpret_cast<void**>(1);
        eax131 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx130 + 80)(eax129, 0x616ee4, v101, 0x60b83c, 0, v64, v78));
        g60b840 = eax131;
        if (!eax131) 
            goto addr_43df99_10; else 
            goto addr_43df86_25;
    }
    *reinterpret_cast<int16_t*>(&edx126) = *reinterpret_cast<int16_t*>(&g60ba58);
    eax132 = g48160c;
    edx133 = edx126 - 1;
    *reinterpret_cast<void***>(eax132 + 28) = edx133;
    fun_43d850(ecx94, eax125, 0x60ba58, "doom95", "doom95 rules", 0, v101, 0x60b83c, 0, v64, v78);
    ebp134 = g47764c;
    eax135 = g48160c;
    v136 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax135 + 28))));
    eax137 = g60ba58;
    g482a84 = reinterpret_cast<void**>(1);
    fun_437a90(ecx94, "\r\n\r\nI_WithPlayers:  My dpid is %d. I am console %d.  There are %d players.\r\n\r\n", eax137, v136, ebp134, eax125, 0x60ba58, "doom95", "doom95 rules", ecx94, "\r\n\r\nI_WithPlayers:  My dpid is %d. I am console %d.  There are %d players.\r\n\r\n", eax137, v136, ebp134, eax125, 0x60ba58, "doom95", "doom95 rules");
    goto v138;
    addr_43df86_25:
    v139 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax131) & 0xfff);
    fun_43bd40(4, "DirectPlay Open Failed! %d", v139, eax129, 4, "DirectPlay Open Failed! %d", v139, eax129);
    goto addr_43df99_10;
}

struct s494 {
    signed char f0;
    signed char f1;
};

struct s495 {
    signed char f0;
    signed char f1;
};

struct s496 {
    signed char f0;
    signed char f1;
};

int32_t g400;

void** fun_444556(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void** fun_440380(void** ecx) {
    int32_t v2;
    int32_t esi3;
    void* esp4;
    void*** ebp5;
    void*** edx6;
    void** v7;
    int32_t ebx8;
    int32_t eax9;
    void* esp10;
    void** esp11;
    void* v12;
    void** esp13;
    void* v14;
    void* v15;
    int32_t v16;
    void** v17;
    int32_t v18;
    int1_t zf19;
    int32_t v20;
    int32_t v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void* esp26;
    void** v27;
    struct s494* edi28;
    int32_t ebx29;
    int32_t eax30;
    void* v31;
    void* esp32;
    void* v33;
    int32_t v34;
    void** v35;
    int32_t v36;
    uint32_t v37;
    struct s495* esi38;
    void* esp39;
    signed char al40;
    signed char al41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void* esp50;
    void** v51;
    int32_t ebx52;
    int32_t eax53;
    void* esp54;
    void** esp55;
    void* v56;
    void** esp57;
    void* v58;
    void* v59;
    int32_t v60;
    void** v61;
    int32_t v62;
    uint32_t v63;
    struct s496* esi64;
    void* esp65;
    signed char al66;
    signed char al67;
    int32_t edi68;
    void** eax69;
    void** ebx70;
    void*** esi71;
    void** eax72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** eax77;
    void* v78;
    int32_t eax79;
    void* v80;
    int32_t v81;
    int32_t v82;

    v2 = esi3;
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 0x438);
    ebp5 = edx6;
    v7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp4) + 0x404);
    ebx8 = 0;
    eax9 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v7));
    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 + 4);
    if (!eax9) {
        esp11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp10) - 4);
        v12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) + 0x410);
        esp13 = esp11 - 1;
        v14 = reinterpret_cast<void*>(esp11 + 0x104);
        v15 = reinterpret_cast<void*>(esp13 + 0x104);
        RegQueryValueExA(v16, "onet", 0, v15, v14, v12, 0x80000001, "Software\\id\\Doom95\\Session", v7);
        ecx = v17;
        RegCloseKey(ecx, v16, "onet", 0, v15, v14, v12, 0x80000001, "Software\\id\\Doom95\\Session", v7);
        esp10 = reinterpret_cast<void*>(esp13 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1);
        if (v18 != 4) {
            ebx8 = 0;
        } else {
            ebx8 = 1;
        }
    }
    zf19 = ebx8 == 0;
    if (zf19) {
        v20 = ebx8;
    }
    if (!zf19 && v21) {
        fun_437a90(ecx, "onet is true\r\n", 0x80000001, "Software\\id\\Doom95\\Session", v7, v22, v23, v24, v25);
        esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4 + 4 + 4);
        v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp26) + 0x414);
        edi28 = reinterpret_cast<struct s494*>(0x616a80);
        ebx29 = 0;
        eax30 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7));
        esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 - 4 + 4);
        if (!eax30) {
            v31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) + 0x41c);
            esp32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4);
            v33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) + 0x420);
            RegQueryValueExA(v34, "onetdll", 0, v33, 0x616a80, v31, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7);
            ecx = v35;
            RegCloseKey(ecx, v34, "onetdll", 0, v33, 0x616a80, v31, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7);
            esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
            if (v36 != 1 || v37 > 0x400) {
                ebx29 = 0;
            } else {
                ebx29 = v36;
            }
        }
        if (!ebx29) {
            esi38 = reinterpret_cast<struct s495*>(0x457a2f);
            esp39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4);
            do {
                al40 = esi38->f0;
                edi28->f0 = al40;
                if (!al40) 
                    break;
                al41 = esi38->f1;
                ++esi38;
                edi28->f1 = al41;
                ++edi28;
            } while (al41);
            esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp39) + 4);
        }
        if (ebx29) {
            *ebp5 = reinterpret_cast<void**>("r");
            fun_440840(ecx, "Prepare to connect to:\n", 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7, v42, v43, v44, v45, v46, v47, v48, v49);
            esp50 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4 + 4 + 4);
            v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp50) + 0x420);
            ebx52 = 0;
            eax53 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7));
            esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp50) - 4 - 4 - 4 - 4 + 4);
            if (!eax53) {
                esp55 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp54) - 4);
                v56 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) + 0x428);
                esp57 = esp55 - 1;
                v58 = reinterpret_cast<void*>(esp55 + 1);
                v59 = reinterpret_cast<void*>(esp57 + 0x10b);
                RegQueryValueExA(v60, "onetstring", 0, v59, v58, v56, 0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7);
                ecx = v61;
                RegCloseKey(ecx, v60, "onetstring", 0, v59, v58, v56, 0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7);
                esp54 = reinterpret_cast<void*>(esp57 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1);
                if (v62 != 1 || v63 > 0x400) {
                    ebx52 = 0;
                } else {
                    ebx52 = v62;
                }
            }
            if (!ebx52) {
                esi64 = reinterpret_cast<struct s496*>(0x457a2f);
                esp65 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4);
                do {
                    al66 = esi64->f0;
                    if (!al66) 
                        break;
                    al67 = esi64->f1;
                    ++esi64;
                } while (al67);
                esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp65) + 4);
            }
            if (!ebx52) {
                g400 = ebx52;
            } else {
                fun_437a90(ecx, "token 1...", 0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, ecx, "token 1...", 0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001);
                edi68 = 0;
                eax69 = fun_444434(ecx, 0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7);
                esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 - 4 + 4 + 4 - 4 + 4);
                ebx70 = eax69;
                if (eax69) {
                    esi71 = ebp5;
                    do {
                        eax72 = fun_444556(ecx, 0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7);
                        *esi71 = eax72;
                        fun_437a90(ecx, "token %s\r\n", ebx70, 0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27, ecx, "token %s\r\n", ebx70, 0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27);
                        esi71 = esi71 + 4;
                        fun_440840(ecx, "\t%s\n", ebx70, 0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7, v73, v74, v75, v76);
                        ++edi68;
                        eax77 = fun_444434(ecx, 0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7);
                        esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 + 4 - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 4 + 8 - 4 + 4);
                        ebx70 = eax77;
                    } while (eax77);
                }
                g400 = edi68;
            }
            v78 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) + 0x430);
            eax79 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v78, 0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7));
            if (!eax79) {
                v80 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 - 4 - 4 - 4 + 4 - 4 + 0x430);
                RegSetValueExA(v20, "onet", 0, 4, v80, 4, 0x80000001, "Software\\id\\Doom95\\Session", v78, 0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7);
                RegCloseKey(v81, v20, "onet", 0, 4, v80, 4, 0x80000001, "Software\\id\\Doom95\\Session", v78, 0x80000001, "Software\\id\\Doom95\\Session", v51, 0x80000001, "Software\\id\\Doom95\\Session", v27, 0x80000001, "Software\\id\\Doom95\\Session", v7);
            }
            goto v82;
        }
    }
    goto v2;
}

void** fun_444556(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** edx13;
    void** v14;
    void** esi15;
    void** v16;
    void** edi17;
    void*** esi18;
    void*** eax19;
    signed char* edi20;
    signed char* eax21;
    uint32_t ecx22;
    void** ecx23;
    void** eax24;
    void** edi25;
    void** eax26;
    uint32_t ecx27;
    int1_t zf28;
    int1_t zf29;

    v11 = reinterpret_cast<void**>(__return_address());
    v12 = edx13;
    v14 = esi15;
    v16 = edi17;
    esi18 = eax19;
    edi20 = eax21;
    ecx22 = reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(ecx) - 1;
    do {
        if (!ecx22) 
            break;
        --ecx22;
        ++edi20;
        ++esi18;
    } while (*edi20);
    ecx23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(~ecx22) - 1 + 1);
    eax24 = fun_442e73(ecx23, v16, v14, v12, v11, a2, a3, a4, a5, a6);
    if (eax24) {
        edi25 = eax24;
        eax26 = ecx23;
        ecx27 = reinterpret_cast<unsigned char>(ecx23) >> 2;
        zf28 = ecx27 == 0;
        do {
            if (!ecx27) 
                break;
            --ecx27;
            *reinterpret_cast<void***>(edi25) = *esi18;
            edi25 = edi25 + 4;
            esi18 = esi18 + 4;
        } while (!zf28);
        *reinterpret_cast<unsigned char*>(&ecx27) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax26) & 3);
        zf29 = *reinterpret_cast<unsigned char*>(&ecx27) == 0;
        do {
            if (!ecx27) 
                break;
            --ecx27;
            *reinterpret_cast<void***>(edi25) = *esi18;
            ++edi25;
            ++esi18;
        } while (!zf29);
    }
    goto a2;
}

uint32_t fun_44723a();

void** fun_447243(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_444348(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** v16;
    void** v17;
    void** ebx18;
    void** v19;
    void** v20;
    void** esi21;
    void** v22;
    void** edi23;
    void** v24;
    void** ebp25;
    int32_t eax26;
    int32_t edx27;
    uint32_t eax28;
    void** edx29;
    void** eax30;
    void** ebp31;
    void** eax32;
    void** edi33;
    void*** esi34;
    void*** eax35;
    uint32_t eax36;
    void** ecx37;
    int1_t zf38;
    int1_t zf39;
    void** eax40;

    v16 = reinterpret_cast<void**>(__return_address());
    v17 = ebx18;
    v19 = ecx;
    v20 = esi21;
    v22 = edi23;
    v24 = ebp25;
    if (eax26) {
        if (edx27) {
            eax28 = fun_44723a();
            eax30 = fun_447243(edx29, v24, v22, v20, v19, v17, v16, a2);
            ebp31 = eax30;
            if (!eax30) {
                eax32 = fun_442e73(edx29, v24, v22, v20, v19, v17, v16, a2, a3, a4);
                ebp31 = eax32;
                if (!eax32) {
                    fun_447243(edx29, v24, v22, v20, v19, v17, v16, a2);
                } else {
                    edi33 = eax32;
                    esi34 = eax35;
                    eax36 = eax28;
                    ecx37 = reinterpret_cast<void**>(eax28 >> 2);
                    zf38 = ecx37 == 0;
                    do {
                        if (!ecx37) 
                            break;
                        --ecx37;
                        *reinterpret_cast<void***>(edi33) = *esi34;
                        edi33 = edi33 + 4;
                        esi34 = esi34 + 4;
                    } while (!zf38);
                    *reinterpret_cast<unsigned char*>(&ecx37) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax36) & 3);
                    zf39 = *reinterpret_cast<unsigned char*>(&ecx37) == 0;
                    do {
                        if (!ecx37) 
                            break;
                        --ecx37;
                        *reinterpret_cast<void***>(edi33) = *esi34;
                        ++edi33;
                        ++esi34;
                    } while (!zf39);
                    fun_4440d1(ecx37, v24, v22, v20, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                }
            }
            eax40 = ebp31;
        } else {
            fun_4440d1(edx29, v24, v22, v20, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
            eax40 = reinterpret_cast<void**>(0);
        }
    } else {
        eax40 = fun_442e73(edx29, v24, v22, v20, v19, v17, v16, a2, a3, a4);
    }
    return eax40;
}

struct s497 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[7] pad16;
    unsigned char f10;
};

int32_t midiOutReset = 0x22089a;

int32_t midiOutUnprepareHeader = 0x2208be;

int32_t midiStreamClose = 0x2208d8;

int32_t fun_441120(void** ecx, void*** a2, void* a3, int32_t a4) {
    int32_t v5;
    void** v6;
    void** edi7;
    void** v8;
    void** ebp9;
    struct s497* edi10;
    int32_t eax11;
    int32_t eax12;
    void** edx13;
    void** v14;
    int32_t ebx15;
    void** esi16;
    void** v17;
    int32_t eax18;
    void** v19;
    void** v20;
    unsigned char dh21;

    v5 = reinterpret_cast<int32_t>(__return_address());
    v6 = edi7;
    v8 = ebp9;
    edi10 = reinterpret_cast<struct s497*>(0x618080 + (eax11 * 4 + eax12) * 4);
    edx13 = edi10->f8;
    edi10->f10 = reinterpret_cast<unsigned char>(edi10->f10 | 2);
    if (edx13) {
        v14 = edx13;
        midiOutReset(v14);
        ebx15 = edi10->f0;
        esi16 = edi10->f4;
        edi10->f10 = reinterpret_cast<unsigned char>(edi10->f10 & 0xfd);
        while (--ebx15, ebx15 != -1) {
            v17 = edi10->f8;
            eax18 = reinterpret_cast<int32_t>(midiOutUnprepareHeader(v17, esi16, 64, v14));
            if (eax18 && eax18 == 5) {
                v19 = edi10->f8;
                fun_437a90(ecx, "[Invalid] Handle is %08X", v19, v17, esi16, 64, v14, v8, v6);
            }
            esi16 = esi16 + 64;
        }
        v20 = edi10->f8;
        midiStreamClose(v20, v14);
        dh21 = edi10->f10;
        edi10->f8 = reinterpret_cast<void**>(0);
        edi10->f10 = reinterpret_cast<unsigned char>(dh21 & 0xf8);
    }
    goto v5;
}

struct s498 {
    int32_t f0;
    int32_t f4;
};

int32_t joyGetNumDevs = 0x220850;

int32_t joyGetDevCapsA = 0x22083e;

unsigned char g618250 = 0;

int32_t fun_441440(void** ecx, void** a2, void** a3) {
    signed char* ebp4;
    signed char* ebx5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    struct s498* edx11;
    void** eax12;
    void** eax13;
    void** v14;
    void** v15;
    void** eax16;
    void** ecx17;
    uint32_t eax18;
    uint32_t edx19;
    signed char* esi20;
    signed char* edi21;
    uint32_t ecx22;
    unsigned char al23;
    int32_t v24;
    int32_t v25;
    int32_t eax26;

    ebp4 = ebx5;
    fun_442b80(ecx, v6, v7, v8, v9, v10);
    edx11->f0 = 52;
    edx11->f4 = 0x83;
    eax12 = reinterpret_cast<void**>(joyGetNumDevs());
    if (reinterpret_cast<unsigned char>(eax12) < reinterpret_cast<unsigned char>(eax13) || (v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 0x19c - 4 + 4 - 4 + 4 - 4 + 4), v15 = eax13, eax16 = reinterpret_cast<void**>(joyGetDevCapsA(v15, v14, 0x194)), !!eax16)) {
        addr_441621_2:
    } else {
        ecx17 = reinterpret_cast<void**>(0);
        do {
            *reinterpret_cast<signed char*>(&eax16) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx17) + reinterpret_cast<uint32_t>(ebp4)) + 1);
            eax18 = reinterpret_cast<unsigned char>(eax16) & 0xff;
            *reinterpret_cast<unsigned char*>(&eax18) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(eax18 + 0x459418) & 0x80) == 0);
            edx19 = reinterpret_cast<unsigned char>(ecx17) * 8;
            *reinterpret_cast<int32_t**>(edx19 + 0x6181d4) = reinterpret_cast<int32_t*>((eax18 & 0xff) + 1);
            eax16 = fun_4435c2(ecx17, v15, v14, 0x194);
            if (reinterpret_cast<unsigned char>(eax16) < reinterpret_cast<unsigned char>(85)) {
                if (reinterpret_cast<unsigned char>(eax16) < reinterpret_cast<unsigned char>(32)) {
                    if (eax16) {
                        goto addr_4415db_8;
                    }
                    if (!reinterpret_cast<int1_t>(ecx17 == 2)) {
                        addr_4415db_8:
                        esi20 = "yx ";
                        edi21 = ebp4;
                        eax16 = reinterpret_cast<void**>(4);
                        ecx22 = 1;
                    } else {
                        g6181e0 = reinterpret_cast<int32_t*>(0);
                        g6181e4 = reinterpret_cast<int32_t*>(0);
                        continue;
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(eax16) <= reinterpret_cast<unsigned char>(32)) {
                        *reinterpret_cast<int32_t**>(edx19 + 0x6181d0) = reinterpret_cast<int32_t*>(0);
                        *reinterpret_cast<int32_t**>(edx19 + 0x6181d4) = reinterpret_cast<int32_t*>(0);
                        continue;
                    } else {
                        if (eax16 == 82) {
                            *reinterpret_cast<int32_t**>(edx19 + 0x6181d0) = reinterpret_cast<int32_t*>(0x618260);
                            g618250 = reinterpret_cast<unsigned char>(g618250 | 8);
                            continue;
                        } else {
                            goto addr_4415db_8;
                        }
                    }
                }
            } else {
                if (reinterpret_cast<unsigned char>(eax16) <= reinterpret_cast<unsigned char>(85)) {
                    *reinterpret_cast<int32_t**>(edx19 + 0x6181d0) = reinterpret_cast<int32_t*>(0x618264);
                    g618250 = reinterpret_cast<unsigned char>(g618250 | 16);
                    continue;
                } else {
                    if (reinterpret_cast<unsigned char>(eax16) < reinterpret_cast<unsigned char>(88)) {
                        if (eax16 == 86) {
                            *reinterpret_cast<int32_t**>(edx19 + 0x6181d0) = reinterpret_cast<int32_t*>(0x618268);
                            g618250 = reinterpret_cast<unsigned char>(g618250 | 32);
                            continue;
                        } else {
                            goto addr_4415db_8;
                        }
                    } else {
                        if (reinterpret_cast<unsigned char>(eax16) <= reinterpret_cast<unsigned char>(88)) {
                            *reinterpret_cast<int32_t**>(edx19 + 0x6181d0) = reinterpret_cast<int32_t*>(0x618254);
                            g618250 = reinterpret_cast<unsigned char>(g618250 | 1);
                            continue;
                        } else {
                            if (reinterpret_cast<unsigned char>(eax16) <= reinterpret_cast<unsigned char>(89)) {
                                al23 = g618250;
                                *reinterpret_cast<int32_t**>(edx19 + 0x6181d0) = reinterpret_cast<int32_t*>(0x618258);
                                g618250 = reinterpret_cast<unsigned char>(al23 | 2);
                                continue;
                            } else {
                                if (eax16 == 90) {
                                    *reinterpret_cast<int32_t**>(edx19 + 0x6181d0) = reinterpret_cast<int32_t*>(0x61825c);
                                    g618250 = reinterpret_cast<unsigned char>(g618250 | 4);
                                    continue;
                                } else {
                                    goto addr_4415db_8;
                                }
                            }
                        }
                    }
                }
            }
            do {
                if (!ecx22) 
                    break;
                --ecx22;
                *edi21 = *esi20;
                edi21 = edi21 + 4;
                esi20 = esi20 + 4;
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx22) = 0;
            do {
                if (!ecx22) 
                    break;
                --ecx22;
                *edi21 = *esi20;
                ++edi21;
                ++esi20;
            } while (0);
            ecx17 = reinterpret_cast<void**>(0xffffffff);
            ++ecx17;
        } while (reinterpret_cast<signed char>(ecx17) < reinterpret_cast<signed char>(3));
        eax26 = reinterpret_cast<int32_t>(joyGetPosEx(v24, v25, v15, v14, 0x194));
        if (eax26) 
            goto addr_441621_2;
    }
    goto a3;
}

struct s499 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_44515b(void** a1, void** a2, void** a3, void** a4, void** a5) {
    struct s499* eax6;
    int32_t eax7;

    eax6 = reinterpret_cast<struct s499*>(image_base_());
    eax6->f4 = eax7;
    return;
}

void** g618340 = reinterpret_cast<void**>(0);

void fun_445246(void** ecx) {
    void** ebx2;
    void** eax3;
    void** edx4;
    void** eax5;
    void** edx6;

    ebx2 = eax3;
    edx4 = reinterpret_cast<void**>(0x618348);
    while (eax5 = *reinterpret_cast<void***>(edx4), !!eax5) {
        if (ebx2 == *reinterpret_cast<void***>(eax5 + 4)) 
            goto addr_445261_4;
        edx4 = eax5;
    }
    addr_44527b_6:
    return;
    addr_445261_4:
    *reinterpret_cast<void***>(ebx2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax5 + 4) + 12)) | 3);
    *reinterpret_cast<void***>(edx4) = *reinterpret_cast<void***>(eax5);
    edx6 = g618340;
    g618340 = eax5;
    *reinterpret_cast<void***>(eax5) = edx6;
    goto addr_44527b_6;
}

void* fun_4458af(void** ecx);

int32_t fun_443019(void** ecx);

void** fun_4457c5(void** ecx);

int32_t fun_44305b(void** ecx, void** a2) {
    void** eax3;
    uint32_t ebx4;
    int32_t ebx5;
    int32_t eax6;
    uint32_t ebx7;
    int32_t eax8;
    int32_t ebx9;
    void** eax10;
    int32_t ebx11;
    void** eax12;
    void** eax13;
    int32_t ebx14;
    int32_t edx15;
    void** edi16;
    void** eax17;
    void** esi18;

    image_base_();
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 12)) & 6)) {
        if (ebx4 < 1) {
            if (!ebx5) {
                fun_4458af(eax3);
                eax6 = fun_443019(eax3);
                if (!eax6) 
                    goto addr_443140_5;
            } else {
                goto addr_44308c_8;
            }
        } else {
            if (ebx7 <= 1) {
                eax8 = fun_443019(eax3);
                if (!eax8) 
                    goto addr_443140_5;
                goto addr_4430b5_12;
            } else {
                if (ebx9 == 2) {
                    eax10 = *reinterpret_cast<void***>(eax3 + 8);
                    *reinterpret_cast<void***>(eax3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 12)) & 0xef);
                    *reinterpret_cast<void***>(eax3) = eax10;
                    *reinterpret_cast<void***>(eax3 + 4) = reinterpret_cast<void**>(0);
                    goto addr_4430b5_12;
                } else {
                    goto addr_44308c_8;
                }
            }
        }
    } else {
        if (!(*reinterpret_cast<unsigned char*>(eax3 + 13) & 16)) {
            if (ebx11 == 1) {
            }
            eax12 = *reinterpret_cast<void***>(eax3 + 8);
            *reinterpret_cast<void***>(eax3 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(eax3) = eax12;
            goto addr_4430ac_20;
        }
        eax13 = fun_4457c5(eax3);
        if (!eax13) {
            addr_4430ac_20:
            *reinterpret_cast<void***>(eax3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 12)) & 0xeb);
        } else {
            if (ebx14) 
                goto addr_4430c3_23;
            if (edx15 >= 0) 
                goto addr_4430c3_23; else 
                goto addr_44308c_8;
        }
    }
    addr_4430b5_12:
    eax17 = fun_44430e(eax3, edi16);
    if (!reinterpret_cast<int1_t>(eax17 == 0xffffffff)) {
        addr_443140_5:
        image_base_();
        return 0;
    } else {
        addr_4430c3_23:
        image_base_();
        return -1;
    }
    addr_44308c_8:
    fun_44515b(edi16, esi18, ecx, __return_address(), a2);
    goto addr_4430c3_23;
}

struct s500 {
    signed char[13] pad13;
    unsigned char fd;
};

int32_t fun_445f19(void** ecx);

struct s501 {
    signed char[13] pad13;
    unsigned char fd;
};

void fun_44529d(void** ecx) {
    struct s500* eax2;
    int32_t eax3;
    unsigned char bl4;
    struct s501* eax5;

    if (!(eax2->fd & 32) && ((eax3 = fun_445f19(ecx), !!eax3) && (bl4 = reinterpret_cast<unsigned char>(eax5->fd | 32), eax5->fd = bl4, !(bl4 & 7)))) {
        eax5->fd = reinterpret_cast<unsigned char>(bl4 | 2);
    }
    return;
}

void** fun_442bb9(void** ecx);

void** fun_44518e(void** ecx, void** a2, void** a3, void** a4);

void** fun_442c8a(void** ecx, void** a2);

void** fun_442d4e(void** ecx) {
    void** ebx2;
    void** eax3;
    void** edi4;
    void** esi5;
    void** eax6;
    void** edi7;
    void** eax8;

    eax3 = fun_442bb9(ebx2);
    if (eax3) {
        eax6 = fun_44518e(ebx2, edi4, esi5, ecx);
        edi7 = eax6;
        if (eax6) {
            eax8 = fun_442c8a(ebx2, eax6);
            edi7 = eax8;
        }
        eax3 = edi7;
    }
    return eax3;
}

void** fun_44518e(void** ecx, void** a2, void** a3, void** a4) {
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
    void** esi15;
    void** ecx16;
    void** edi17;
    void** eax18;
    void** eax19;
    void** eax20;
    void** eax21;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = ebx7;
    v8 = ecx;
    v9 = edx10;
    v11 = esi12;
    v13 = edi14;
    image_base_();
    esi15 = g618340;
    if (!esi15) {
        ecx16 = reinterpret_cast<void**>(0x477854);
        while (reinterpret_cast<unsigned char>(ecx16) < reinterpret_cast<unsigned char>("a")) {
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx16 + 12)) & 3)) 
                goto addr_4451c9_5;
            ecx16 = ecx16 + 26;
        }
    } else {
        ecx16 = *reinterpret_cast<void***>(esi15 + 4);
        edi17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx16 + 12)) & 0x4003);
        g618340 = *reinterpret_cast<void***>(esi15);
        *reinterpret_cast<uint16_t*>(&edi17) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi17) | 3);
        goto addr_445203_8;
    }
    edi17 = reinterpret_cast<void**>(0x4003);
    eax18 = fun_442e73(ecx16, v13, v11, v9, v8, v6, v5, a2, a3, a4);
    esi15 = eax18;
    if (!eax18) {
        addr_44522e_10:
        fun_44515b(v13, v11, v9, v8, v6);
        image_base_();
        eax19 = reinterpret_cast<void**>(0);
    } else {
        ecx16 = eax18 + 8;
        goto addr_445203_8;
    }
    addr_445240_12:
    return eax19;
    addr_445203_8:
    fun_442b80(ecx16, v13, v11, v9, v8, v6);
    *reinterpret_cast<void***>(ecx16 + 12) = edi17;
    eax20 = g618348;
    *reinterpret_cast<void***>(esi15 + 4) = ecx16;
    g618348 = esi15;
    *reinterpret_cast<void***>(esi15) = eax20;
    image_base_();
    eax19 = ecx16;
    goto addr_445240_12;
    addr_4451c9_5:
    eax21 = fun_442e73(ecx16, v13, v11, v9, v8, v6, v5, a2, a3, a4);
    esi15 = eax21;
    if (!eax21) 
        goto addr_44522e_10;
    edi17 = reinterpret_cast<void**>(3);
    goto addr_445203_8;
}

void** fun_442c8a(void** ecx, void** a2) {
    uint32_t ebx3;
    void* eax4;
    uint32_t eax5;
    unsigned char bl6;
    uint32_t eax7;
    unsigned char bl8;
    unsigned char bl9;
    void** v10;
    unsigned char bl11;
    unsigned char bl12;
    void** eax13;
    void** eax14;
    unsigned char bl15;
    void** esi16;

    *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0xfc);
    *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | ebx3);
    eax4 = fun_443671();
    eax5 = reinterpret_cast<uint32_t>(eax4) & 0xff;
    if (eax5 != 0x72) {
        *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(!!(bl6 & 1));
        eax7 = (eax5 & 0xff) + 33;
        if (!(bl8 & 0x80)) {
            *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) | 64);
        } else {
            *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) | 16);
        }
        if (!(bl9 & 64)) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax7) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax7) + 1) | 1);
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax7) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax7) + 1) | 2);
        }
        v10 = reinterpret_cast<void**>(0x180);
    } else {
        eax7 = 0;
        if (bl11 & 2) {
            eax7 = 2;
        }
        if (!(bl12 & 64)) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax7) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax7) + 1) | 1);
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax7) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax7) + 1) | 2);
        }
        v10 = reinterpret_cast<void**>(0);
    }
    eax14 = fun_4436a3(a2, eax13, eax7, ecx, v10);
    *reinterpret_cast<void***>(a2 + 16) = eax14;
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a2 + 16) == 0xffffffff)) {
        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a2 + 8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a2 + 20) = reinterpret_cast<void**>(0);
        if (bl15 & 0x80) {
            fun_44305b(a2, esi16);
        }
        fun_44529d(a2);
        return a2;
    } else {
        fun_445246(a2);
        return 0;
    }
}

struct s502 {
    signed char[12] pad12;
    int32_t fc;
};

struct s503 {
    signed char[13] pad13;
    unsigned char fd;
};

void* fun_44314f(void** ecx);

void fun_4433ec(void** ecx);

void fun_445bbd(void** ecx, void** a2, void** a3, void** a4, void** a5);

void** fun_443451(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    struct s502* eax12;
    void** esi13;
    struct s503* eax14;
    void** eax15;
    void** eax16;
    void* eax17;
    void** v18;
    int32_t edx19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** ebp24;
    void** edi25;
    void** eax26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** esi31;
    void** ebx32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** eax37;

    if (eax12->fc) {
        esi13 = reinterpret_cast<void**>(0);
        if (eax14->fd & 16) {
            eax16 = fun_4457c5(eax15);
            esi13 = eax16;
        }
        image_base_();
        eax17 = fun_44314f(eax15);
        if (eax17 != 0xffffffff) {
            fun_44430e(eax15, v18);
        }
        if (edx19) {
            eax26 = fun_445b4e(eax15, v20, v21, v22, v23, ebp24, edi25);
            esi13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi13) | reinterpret_cast<unsigned char>(eax26));
        }
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax15 + 12)) & 8) {
            fun_4440d1(eax15, v27, v28, v29, v30, ebp24, edi25, esi31, ecx, ebx32, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            *reinterpret_cast<void***>(eax15 + 8) = reinterpret_cast<void**>(0);
        }
        if (*reinterpret_cast<unsigned char*>(eax15 + 13) & 8) {
            fun_4433ec(eax15);
            fun_445bbd(eax15, v33, v34, v35, v36);
        }
        image_base_();
        image_base_();
        eax37 = esi13;
    } else {
        eax37 = reinterpret_cast<void**>(0xffffffff);
    }
    return eax37;
}

void fun_448293(void** ecx);

struct s34* fun_445677(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

struct s34* fun_4456fc(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** edx11;
    struct s34* eax12;

    fun_448293(ecx);
    eax12 = fun_445677(ecx, edx11, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
    return eax12;
}

int32_t fun_445757() {
    return 0;
}

void fun_449d54();

void** fun_4457b6(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** edx10;
    void** eax11;

    fun_449d54();
    eax11 = fun_445765(edx10, ecx, __return_address(), a2);
    return eax11;
}

struct s504 {
    signed char[12] pad12;
    unsigned char fc;
};

struct s505 {
    signed char[12] pad12;
    unsigned char fc;
};

struct s506 {
    signed char[4] pad4;
    int32_t f4;
};

struct s507 {
    signed char[8] pad8;
    int32_t f8;
};

struct s508 {
    signed char[8] pad8;
    int32_t f8;
};

struct s509 {
    signed char[4] pad4;
    int32_t f4;
};

struct s510 {
    signed char[4] pad4;
    int32_t f4;
};

struct s511 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_443019(void** ecx) {
    struct s504* edx2;
    struct s505* edx3;
    int32_t eax4;
    struct s506* edx5;
    int32_t eax6;
    struct s507* edx7;
    int32_t* edx8;
    int32_t eax9;
    struct s508* edx10;
    struct s509* edx11;
    int32_t* edx12;
    int32_t edi13;
    struct s510* edx14;
    int32_t eax15;
    int32_t* edx16;
    int32_t eax17;
    struct s511* edx18;

    edx2->fc = reinterpret_cast<unsigned char>(edx3->fc & 0xef);
    if (eax4 > edx5->f4 || eax6 < edx7->f8 - *edx8) {
        eax9 = edx10->f8;
        edx11->f4 = 0;
        *edx12 = eax9;
        return 1;
    } else {
        edi13 = edx14->f4 - eax15;
        *edx16 = *edx8 + eax17;
        edx18->f4 = edi13;
        return 0;
    }
}

void** fun_448345(void** ecx);

void** fun_4457c5(void** ecx) {
    void** v2;
    void** v3;
    void** edx4;
    void** v5;
    void** esi6;
    void** v7;
    void** edi8;
    void** v9;
    void** ebp10;
    void** ecx11;
    void** eax12;
    void** ebp13;
    void** eax14;
    void** al15;
    void** esi16;
    void** eax17;

    v2 = ecx;
    v3 = edx4;
    v5 = esi6;
    v7 = edi8;
    v9 = ebp10;
    ecx11 = eax12;
    image_base_();
    ebp13 = reinterpret_cast<void**>(0);
    if (!(*reinterpret_cast<unsigned char*>(ecx11 + 13) & 16)) {
        if (*reinterpret_cast<void***>(ecx11 + 8) && (*reinterpret_cast<void***>(ecx11 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx11 + 12)) & 0xef), !(*reinterpret_cast<unsigned char*>(ecx11 + 13) & 32))) {
            eax14 = *reinterpret_cast<void***>(ecx11 + 4);
            if (eax14) {
                eax14 = fun_44430e(ecx11, v9);
            }
            if (reinterpret_cast<int1_t>(eax14 == 0xffffffff)) {
                ebp13 = eax14;
                *reinterpret_cast<void***>(ecx11 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx11 + 12)) | 32);
            }
        }
    } else {
        al15 = *reinterpret_cast<void***>(ecx11 + 12);
        *reinterpret_cast<unsigned char*>(ecx11 + 13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx11 + 13) & 0xef);
        if (reinterpret_cast<unsigned char>(al15) & 2 && *reinterpret_cast<void***>(ecx11 + 8)) {
            esi16 = *reinterpret_cast<void***>(ecx11 + 4);
            while (esi16 && !ebp13) {
                eax17 = fun_448345(ecx11);
                if (!reinterpret_cast<int1_t>(eax17 == 0xffffffff)) {
                    if (!eax17) {
                        fun_44515b(v9, v7, v5, v3, v2);
                        ebp13 = reinterpret_cast<void**>(0xffffffff);
                        *reinterpret_cast<void***>(ecx11 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx11 + 12)) | 32);
                    }
                } else {
                    ebp13 = eax17;
                    *reinterpret_cast<void***>(ecx11 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx11 + 12)) | 32);
                }
                esi16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi16) - reinterpret_cast<unsigned char>(eax17));
            }
        }
    }
    *reinterpret_cast<void***>(ecx11) = *reinterpret_cast<void***>(ecx11 + 8);
    *reinterpret_cast<void***>(ecx11 + 4) = reinterpret_cast<void**>(0);
    image_base_();
    return ebp13;
}

struct s512 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
    void** f8;
    signed char[3] pad12;
    unsigned char fc;
    unsigned char fd;
    signed char[6] pad20;
    int32_t f14;
    void** f18;
};

void fun_4458ec(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    struct s512* eax8;
    void** edx9;
    void** eax10;
    unsigned char cl11;
    unsigned char cl12;
    void** eax13;

    fun_44529d(ecx);
    if (!eax8->f14) {
        if (!(eax8->fd & 2)) {
            if (!(eax8->fd & 4)) {
                eax8->f14 = 0x1000;
            } else {
                eax8->f14 = 1;
            }
        } else {
            eax8->f14 = 0x86;
        }
    }
    eax10 = fun_442e73(ecx, edx9, ecx, __return_address(), a2, a3, a4, a5, a6, a7);
    eax8->f8 = eax10;
    if (eax10) {
        eax8->fc = reinterpret_cast<unsigned char>(eax8->fc | 8);
    } else {
        cl11 = eax8->fd;
        eax8->f14 = 1;
        cl12 = reinterpret_cast<unsigned char>(cl11 & 0xf8);
        eax8->fd = cl12;
        eax8->f8 = reinterpret_cast<void**>(&eax8->f18);
        eax8->fd = reinterpret_cast<unsigned char>(cl12 | 4);
    }
    eax13 = eax8->f8;
    eax8->f4 = 0;
    eax8->f0 = eax13;
    return;
}

struct s513 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t fun_4483e4(void** ecx);

void** fun_445963(void** ecx);

int32_t fun_44841f(void** ecx);

void** fun_445a98(void** ecx, void** a2) {
    struct s513* eax3;
    void** eax4;
    void** esi5;
    void** edx6;
    void** ebx7;
    uint32_t eax8;
    void** eax9;
    int32_t eax10;
    int32_t edx11;
    uint1_t zf12;
    void** bh13;

    if (!eax3->f8) {
        fun_4458ec(eax4, esi5, edx6, ecx, ebx7, __return_address(), a2);
    }
    if (*reinterpret_cast<unsigned char*>(eax4 + 13) & 32 && *reinterpret_cast<unsigned char*>(eax4 + 13) & 6) {
        fun_4483e4(eax4);
    }
    *reinterpret_cast<void***>(eax4) = *reinterpret_cast<void***>(eax4 + 8);
    eax8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 12)) & 0x2400;
    *reinterpret_cast<void***>(eax4 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 12)) & 0xfb);
    if (eax8 != 0x2400 || *reinterpret_cast<void***>(eax4 + 16)) {
        if (!(*reinterpret_cast<unsigned char*>(eax4 + 13) & 4)) {
        }
        eax9 = fun_445963(eax4);
        *reinterpret_cast<void***>(eax4 + 4) = eax9;
    } else {
        *reinterpret_cast<void***>(eax4 + 4) = *reinterpret_cast<void***>(eax4 + 16);
        eax10 = fun_44841f(eax4);
        edx11 = eax10;
        if (eax10 != -1) {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax4)) = *reinterpret_cast<void***>(&edx11);
            *reinterpret_cast<void***>(eax4 + 4) = reinterpret_cast<void**>(1);
        }
    }
    zf12 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax4 + 4) == 0);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax4 + 4)) < reinterpret_cast<signed char>(0)) | zf12)) {
        if (!zf12) {
            bh13 = *reinterpret_cast<void***>(eax4 + 12);
            *reinterpret_cast<void***>(eax4 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(eax4 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(bh13) | 32);
        } else {
            *reinterpret_cast<void***>(eax4 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 12)) | 16);
        }
    }
    return *reinterpret_cast<void***>(eax4 + 4);
}

int32_t fun_445b44(signed char* ecx);

signed char fun_4433e0();

void fun_4433ec(void** ecx) {
    signed char* ecx2;
    signed char* eax3;
    signed char* edx4;
    signed char* esi5;
    signed char al6;
    signed char al7;
    signed char al8;

    ecx2 = eax3;
    fun_445b44(ecx2);
    edx4 = ecx2 + 4;
    *ecx2 = 0x74;
    esi5 = ecx2;
    do {
        al6 = fun_4433e0();
        *edx4 = al6;
        --edx4;
    } while (edx4 != esi5);
    ecx2[5] = 95;
    al7 = fun_4433e0();
    ecx2[6] = al7;
    al8 = fun_4433e0();
    ecx2[8] = 46;
    ecx2[9] = 0x74;
    ecx2[10] = 0x6d;
    ecx2[11] = 0x70;
    ecx2[12] = 0;
    ecx2[7] = al8;
    return;
}

signed char fun_4433e0() {
    int32_t eax1;
    int32_t eax2;

    eax1 = eax2 + 48;
    if (eax1 > 57) {
        eax1 = eax1 + 39;
    }
    return *reinterpret_cast<signed char*>(&eax1);
}

struct s514 {
    signed char[4] pad4;
    void* f4;
    signed char[5] pad13;
    unsigned char fd;
};

void* fun_44314f(void** ecx) {
    void* eax2;
    void* ecx3;
    struct s514* eax4;

    eax2 = fun_4458af(ecx);
    ecx3 = eax2;
    if (eax2 != 0xffffffff) {
        image_base_();
        if (eax4->f4) {
            if (!(eax4->fd & 16)) {
                ecx3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx3) - reinterpret_cast<uint32_t>(eax4->f4));
            } else {
                ecx3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax4->f4) + reinterpret_cast<uint32_t>(eax2));
            }
        }
        image_base_();
        eax2 = ecx3;
    }
    return eax2;
}

int32_t fun_449d9c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_44430e(void** ecx, void** a2) {
    void** edx3;
    void** edx4;
    int32_t eax5;
    void** esi6;
    void** edx7;
    void** ebx8;
    int32_t eax9;

    edx3 = g61835c;
    edx4 = *reinterpret_cast<void***>(edx3 + eax5 * 4);
    image_base_(esi6, ecx, __return_address());
    eax9 = fun_449d9c(edx4, edx7, 0, ebx8, esi6, ecx, __return_address(), a2);
    image_base_();
    if (eax9 == -1) {
        fun_4457b6(edx7, edx4, edx7, 0, ebx8, esi6, ecx, __return_address(), a2);
    }
    goto 0;
}

int32_t g477adc = 0;

int32_t g477ad4 = 0;

struct s515 {
    signed char[222] pad222;
    void** fde;
};

struct s515* fun_449d48(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void fun_445faf();

void** fun_445b4e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** edx8;
    int32_t ecx9;
    void** edi10;
    int32_t eax11;
    int32_t edx12;
    void** esi13;
    int32_t eax14;
    void** edi15;
    void** esi16;
    void** edx17;
    void** ebx18;
    struct s515* eax19;

    edx8 = g61835c;
    ecx9 = 0;
    edi10 = *reinterpret_cast<void***>(edx8 + eax11 * 4);
    edx12 = g477adc;
    esi13 = reinterpret_cast<void**>(0);
    if (edx12 && (eax14 = reinterpret_cast<int32_t>(g477ad0()), !!eax14)) {
        g477ad4();
        ecx9 = 1;
        g477adc();
    }
    if (ecx9 || (eax19 = fun_449d48(edi10, edi15, esi16, edx17, ecx, ebx18, __return_address(), a2, a3, a4, a5, a6, a7), !!eax19)) {
        fun_445faf();
    } else {
        esi13 = reinterpret_cast<void**>(0xffffffff);
        fun_44515b(edi10, edi15, esi16, edx17, ecx);
    }
    return esi13;
}

int32_t fun_449cc4();

void fun_445bbd(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int32_t eax6;
    void** eax7;
    void** edx8;

    eax6 = fun_449cc4();
    if (eax6) {
        goto ecx;
    } else {
        fun_4457b6(ecx, eax7, edx8, ecx, __return_address(), a2, a3, a4, a5);
        goto ecx;
    }
}

struct s516 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
    void** fc;
    unsigned char fd;
    signed char[6] pad20;
    void** f14;
};

int32_t fun_445bc2(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    uint32_t ebx6;
    int1_t zf7;
    int32_t ebx8;
    uint32_t ebx9;
    int32_t ebx10;
    int32_t edx11;
    struct s516* eax12;
    unsigned char ah13;
    int32_t edx14;
    void** ecx15;
    int32_t edx16;
    void** ecx17;
    uint32_t ebx18;
    int32_t edx19;
    void** esi20;

    if (reinterpret_cast<unsigned char>(ecx) > reinterpret_cast<unsigned char>(0x7fffffff)) 
        goto addr_445bcd_2;
    if (ebx6 < 0x200) {
        zf7 = ebx8 == 0x100;
    } else {
        if (ebx9 <= 0x200) 
            goto addr_445bee_6;
        zf7 = ebx10 == 0x400;
    }
    if (!zf7) {
        addr_445bcd_2:
        return -1;
    } else {
        addr_445bee_6:
        if (!edx11 || ecx) {
            image_base_();
            fun_44529d(ecx);
            if (ecx) {
                eax12->f14 = ecx;
            }
            ah13 = eax12->fd;
            eax12->f8 = edx14;
            eax12->fd = reinterpret_cast<unsigned char>(ah13 & 0xf8);
            ecx15 = eax12->fc;
            eax12->f0 = edx16;
            ecx17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx15) | ebx18);
            eax12->fc = ecx17;
            if (!edx19) {
                fun_4458ec(ecx17, esi20, __return_address(), a2, a3, a4, a5);
            }
            image_base_();
            return 0;
        }
    }
}

int32_t g477b70 = 0x80000000;

int32_t fun_445e7f() {
    int32_t edx1;
    int32_t edx2;

    edx1 = g477b70;
    edx2 = edx1 + 1;
    g477b70 = edx2;
    return edx2;
}

int32_t CreateFileA = 0x220e24;

void* fun_449da8(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto CreateFileA;
}

int32_t SetFilePointer = 0x2210b4;

int32_t fun_449d9c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto SetFilePointer;
}

int32_t fun_4484ba(void** ecx);

void fun_449d36();

void fun_449d30(void* a1, int32_t a2);

void fun_445fd3(void** ecx) {
    void* esp2;

    fun_4484ba(ecx);
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4 - 4 + 4 - 4 - 4 - 8);
    fun_449d36();
    fun_449d30(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 + 4 - 4 - 4 + 8, 1);
    goto esp2;
}

void fun_445fe3(void** ecx) {
    void* esp2;
    int32_t edx3;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 8);
    fun_449d36();
    fun_449d30(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 + 4 - 4 - 4 + 8, edx3);
    goto esp2;
}

uint32_t fun_4484d7(void** ecx, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7);

uint32_t fun_4460ab(void** ecx) {
    uint32_t edx2;
    uint32_t edx3;
    uint32_t edx4;
    uint32_t edx5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;

    edx2 = edx3 & 31;
    eax9 = fun_4484d7(ecx, edx2 + edx2, (edx4 & 0x7e0) >> 5, (edx5 & 0xf800) >> 11, eax6 & 31, ((eax7 & 0x1e0) >> 5) - 1, ((eax8 & 0xfe00) >> 9) + 80);
    return eax9;
}

void* g477be4 = reinterpret_cast<void*>(0);

struct s517 {
    signed char[1] pad1;
    signed char f1;
};

uint32_t fun_4464b1() {
    void* edx1;
    uint32_t edx2;
    unsigned char* eax3;
    uint32_t eax4;
    signed char* eax5;
    uint32_t edx6;
    signed char* eax7;
    uint32_t eax8;
    struct s517* eax9;

    edx1 = g477be4;
    if (edx1) {
        edx2 = 0;
        *reinterpret_cast<unsigned char*>(&edx2) = *eax3;
        *reinterpret_cast<unsigned char*>(&edx2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx2 + 0x477be9) & 1);
        edx1 = reinterpret_cast<void*>(edx2 & 0xff);
    }
    if (!edx1) {
        *reinterpret_cast<signed char*>(&eax4) = *eax5;
        return eax4 & 0xff;
    } else {
        edx6 = 0;
        *reinterpret_cast<signed char*>(&edx6) = *eax7;
        *reinterpret_cast<signed char*>(&eax8) = eax9->f1;
        return eax8 & 0xff | edx6 << 8;
    }
}

void** fun_446111(int32_t ecx);

void** fun_4463de(void** ecx, void* a2, void** a3);

void* fun_44614f(void** ecx, void* a2, void** a3, int32_t a4, void* a5, void** a6);

void fun_443ecb(int32_t ecx, void* a2, void** a3) {
    int32_t eax4;
    int32_t ebx5;
    void** eax6;
    void* edi7;
    void** esi8;
    void* eax9;
    void* eax10;

    if (eax4) {
        if (ebx5 > ecx) {
        }
        eax6 = fun_446111(ecx);
        fun_4463de(eax6, edi7, esi8);
        eax9 = fun_44614f(eax6, edi7, esi8, __return_address(), a2, a3);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax10) + reinterpret_cast<uint32_t>(eax9)) = 0;
    }
    return;
}

struct s518 {
    uint32_t f0;
    struct s518* f4;
    struct s518* f8;
};

struct s519 {
    uint32_t f0;
    struct s518* f4;
    struct s518* f8;
};

struct s520 {
    signed char[12] pad12;
    struct s519* fc;
};

struct s521 {
    signed char[12] pad12;
    struct s518* fc;
};

struct s522 {
    signed char[12] pad12;
    struct s518* fc;
    uint32_t f10;
    uint32_t f14;
    int32_t f18;
    int32_t f1c;
};

struct s523 {
    signed char[12] pad12;
    struct s518* fc;
};

struct s524 {
    signed char[40] pad40;
    struct s518* f28;
};

struct s525 {
    signed char[32] pad32;
    uint32_t f20;
};

struct s526 {
    signed char[36] pad36;
    struct s518* f24;
};

struct s527 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s528 {
    signed char[24] pad24;
    int32_t f18;
};

struct s529 {
    signed char[12] pad12;
    struct s518* fc;
};

struct s530 {
    signed char[40] pad40;
    struct s518* f28;
};

struct s531 {
    signed char[24] pad24;
    int32_t f18;
};

void fun_4454f8(void** ecx) {
    int32_t eax2;
    struct s518* esi3;
    void* eax4;
    uint32_t eax5;
    struct s519* edi6;
    struct s520* ebx7;
    struct s521* ebx8;
    struct s518* ebx9;
    struct s518* edi10;
    struct s522* ebx11;
    struct s522* ebx12;
    struct s523* ebx13;
    struct s524* ebx14;
    struct s525* ebx15;
    struct s526* ebx16;
    uint32_t ecx17;
    struct s518* edi18;
    int32_t ecx19;
    struct s527* ebx20;
    uint32_t eax21;
    struct s528* ebx22;
    uint32_t ecx23;
    struct s529* ebx24;
    struct s530* ebx25;
    uint32_t eax26;
    struct s531* ebx27;
    uint32_t edx28;

    if (!(!eax2 || (esi3 = reinterpret_cast<struct s518*>(reinterpret_cast<int32_t>(eax4) - 4), eax5 = esi3->f0, (*reinterpret_cast<unsigned char*>(&eax5) & 1) == 0))) {
        *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax5) & 0xfe);
        edi6 = reinterpret_cast<struct s519*>(reinterpret_cast<uint32_t>(esi3) + eax5);
        if (!(edi6->f0 & 1)) {
            if (edi6 == ebx7->fc) {
                ebx8->fc = esi3;
            }
            esi3->f0 = eax5 + edi6->f0;
            ebx9 = edi6->f4;
            edi10 = edi6->f8;
            ebx9->f8 = edi10;
            edi10->f4 = ebx9;
            ebx11 = ebx12;
            ebx11->f1c = ebx11->f1c - 1;
            goto addr_4455b6_7;
        }
        esi3->f0 = eax5;
        edi10 = ebx13->fc;
        if (reinterpret_cast<uint32_t>(esi3) < reinterpret_cast<uint32_t>(edi10)) {
            if (reinterpret_cast<uint32_t>(esi3) > reinterpret_cast<uint32_t>(edi10->f4)) 
                goto addr_4455b6_7;
            edi10 = ebx14->f28;
            if (reinterpret_cast<uint32_t>(esi3) < reinterpret_cast<uint32_t>(edi10)) 
                goto addr_4455b6_7;
            goto addr_445560_12;
        }
        edi10 = edi10->f8;
        if (reinterpret_cast<uint32_t>(esi3) < reinterpret_cast<uint32_t>(edi10) || (edi10 = reinterpret_cast<struct s518*>(&ebx15->f20), reinterpret_cast<uint32_t>(esi3) > reinterpret_cast<uint32_t>(ebx16->f24))) {
            addr_4455b6_7:
            ecx17 = esi3->f0;
            edi18 = edi10->f4;
            if (!reinterpret_cast<int1_t>(reinterpret_cast<uint32_t>(edi18) + edi18->f0 == esi3)) {
                ebx11->f1c = ebx11->f1c + 1;
                esi3->f8 = edi10;
                esi3->f4 = edi18;
                edi18->f8 = esi3;
                edi10->f4 = esi3;
                goto addr_4455e6_15;
            } else {
                ecx17 = ecx17 + edi18->f0;
                edi18->f0 = ecx17;
                if (esi3 == ebx11->fc) {
                    ebx11->fc = edi18;
                }
                esi3 = edi18;
                goto addr_4455e6_15;
            }
        } else {
            addr_445560_12:
            ecx19 = ebx20->f1c + 1;
            eax21 = ebx22->f18 / reinterpret_cast<uint32_t>(ecx19);
            ecx23 = reinterpret_cast<uint32_t>(ecx19 - 1);
            if (eax21 >= ecx23) {
                addr_445595_19:
                edi10 = ebx24->fc;
                if (reinterpret_cast<uint32_t>(esi3) < reinterpret_cast<uint32_t>(edi10)) {
                    edi10 = ebx25->f28;
                    goto addr_44559f_21;
                }
            } else {
                eax26 = eax21 + eax21;
                if (ebx27->f18 - ecx23 <= ecx23) {
                    eax26 = eax26 - eax26;
                }
                edi10 = reinterpret_cast<struct s518*>(reinterpret_cast<uint32_t>(esi3) + esi3->f0);
                do {
                    edx28 = edi10->f0;
                    if (!(*reinterpret_cast<unsigned char*>(&edx28) & 1)) 
                        goto addr_4455b6_7;
                } while (edx28 != 0xffffffff && (*reinterpret_cast<unsigned char*>(&edx28) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx28) & 0xfe), edi10 = reinterpret_cast<struct s518*>(reinterpret_cast<uint32_t>(edi10) + edx28), --eax26, !!eax26));
                goto addr_445595_19;
            }
        }
    }
    addr_4455fe_27:
    return;
    addr_4455e6_15:
    ebx11->f18 = ebx11->f18 - 1;
    if (reinterpret_cast<uint32_t>(esi3) < reinterpret_cast<uint32_t>(ebx11->fc) && ecx17 > ebx11->f10) {
        ebx11->f10 = ecx17;
    }
    if (ecx17 > ebx11->f14) {
        ebx11->f14 = ecx17;
        goto addr_4455fe_27;
    }
    addr_44559f_21:
    while (reinterpret_cast<uint32_t>(esi3) >= reinterpret_cast<uint32_t>(edi10) && ((edi10 = edi10->f8, reinterpret_cast<uint32_t>(esi3) >= reinterpret_cast<uint32_t>(edi10)) && (edi10 = edi10->f8, reinterpret_cast<uint32_t>(esi3) >= reinterpret_cast<uint32_t>(edi10)))) {
        edi10 = edi10->f8;
    }
    goto addr_4455b6_7;
}

int32_t fun_448842();

int32_t fun_448483(void** ecx);

void fun_44741c(int32_t a1, int32_t a2) {
    int32_t eax3;
    void** edx4;

    eax3 = fun_448842();
    if (!eax3) {
        fun_448483(edx4);
    }
    goto a2;
}

int32_t fun_4475b9(void** ecx, void** a2, void** a3);

void fun_444a59(void** ecx) {
    signed char* ebp2;
    signed char* edx3;
    void** v4;
    void** ebx5;
    signed char* edi6;
    void** ebp7;
    uint32_t ecx8;
    signed char* esi9;
    void** eax10;
    signed char* edx11;
    signed char* ebx12;
    signed char* edx13;

    ebp2 = edx3;
    v4 = ebx5;
    edi6 = ebp2;
    fun_4475b9(ecx, v4, ebp7);
    ecx8 = reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(ecx) - 1;
    do {
        if (!ecx8) 
            break;
        --ecx8;
        ++edi6;
    } while (*edi6);
    esi9 = ebp2;
    eax10 = v4 - 1;
    edx11 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(~ecx8) - 1 + reinterpret_cast<uint32_t>(ebp2));
    ebx12 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax10) + reinterpret_cast<uint32_t>(ebp2));
    while (edx11 != esi9) {
        --edx11;
        --eax10;
        *ebx12 = *edx11;
        --ebx12;
    }
    edx13 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax10) + reinterpret_cast<uint32_t>(ebp2));
    while (reinterpret_cast<signed char>(eax10) >= reinterpret_cast<signed char>(0)) {
        --eax10;
        *edx13 = 48;
        --edx13;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp2) + reinterpret_cast<unsigned char>(v4)) = 0;
    return;
}

struct s532 {
    signed char[8] pad8;
    int32_t f8;
};

struct s533 {
    signed char[1] pad1;
    void** f1;
};

struct s534 {
    signed char[48] pad48;
    void** f30;
};

void fun_444ab7(void** ecx) {
    void** ecx2;
    void** eax3;
    struct s532* esi4;
    struct s532* ebx5;
    void** v6;
    void** edx7;
    int32_t edx8;
    struct s533* eax9;
    signed char* eax10;
    int32_t edx11;
    void** edi12;
    void** ebx13;
    void** edx14;
    int32_t eax15;
    void** eax16;
    int32_t eax17;
    int32_t eax18;
    void** ecx19;
    int32_t edx20;
    void** eax21;
    int32_t eax22;

    ecx2 = eax3;
    esi4 = ebx5;
    v6 = edx7;
    if (edx8 < 0) {
        ecx2 = reinterpret_cast<void**>(&eax9->f1);
        *eax10 = 45;
        v6 = reinterpret_cast<void**>(-edx11);
    }
    if (esi4->f8 == -1) {
        esi4->f8 = 4;
    }
    fun_4475b9(ecx2, v6, edi12);
    ebx13 = ecx2;
    while (edx14 = ecx2 + 1, !!*reinterpret_cast<void***>(ecx2)) {
        ecx2 = edx14;
    }
    if (esi4->f8) {
        *reinterpret_cast<void***>(ecx2) = reinterpret_cast<void**>(46);
        eax15 = 0;
        ecx2 = edx14;
        while (eax15 < esi4->f8) {
            *reinterpret_cast<int16_t*>(&v6 + 2) = 0;
            v6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v6) * 10);
            ++eax15;
            *reinterpret_cast<void***>(ecx2) = reinterpret_cast<void**>(&(*reinterpret_cast<struct s534**>(&v6 + 2))->f30);
            ++ecx2;
        }
        *reinterpret_cast<void***>(ecx2) = reinterpret_cast<void**>(0);
    }
    eax16 = v6;
    *reinterpret_cast<signed char*>(&eax16) = 0;
    *reinterpret_cast<unsigned char*>(&eax16 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax16 + 1) & 0x80);
    if (!(reinterpret_cast<unsigned char>(eax16) & 0xffff)) {
        addr_444ba5_14:
        return;
    } else {
        while (ecx2 != ebx13) {
            --ecx2;
            eax17 = 0;
            *reinterpret_cast<void***>(&eax17) = *reinterpret_cast<void***>(ecx2);
            if (eax17 == 46) {
                --ecx2;
            }
            eax18 = 0;
            *reinterpret_cast<void***>(&eax18) = *reinterpret_cast<void***>(ecx2);
            if (eax18 != 57) 
                goto addr_444b98_19;
            *reinterpret_cast<void***>(ecx2) = reinterpret_cast<void**>(48);
        }
    }
    ecx19 = ebx13 + 1;
    *reinterpret_cast<void***>(ebx13) = reinterpret_cast<void**>(49);
    while (edx20 = 0, *reinterpret_cast<void***>(&edx20) = *reinterpret_cast<void***>(ecx19), eax21 = ecx19 + 1, edx20 == 48) {
        ecx19 = eax21;
    }
    if (edx20 == 46) {
        *reinterpret_cast<void***>(ecx19) = reinterpret_cast<void**>(48);
        ecx19 = eax21 + 1;
        *reinterpret_cast<void***>(eax21) = reinterpret_cast<void**>(46);
        while (eax22 = 0, *reinterpret_cast<void***>(&eax22) = *reinterpret_cast<void***>(ecx19), eax22 == 48) {
            ++ecx19;
        }
    }
    *reinterpret_cast<void***>(ecx19) = reinterpret_cast<void**>(48);
    *reinterpret_cast<void***>(ecx19 + 1) = reinterpret_cast<void**>(0);
    goto addr_444ba5_14;
    addr_444b98_19:
    *reinterpret_cast<void***>(ecx2) = *reinterpret_cast<void***>(&eax18) + 1;
    goto addr_444ba5_14;
}

void** fun_447655(void** ecx) {
    int32_t ebx2;
    int32_t eax3;
    signed char* edx4;
    void** edx5;

    if (ebx2 == 10 && eax3 < 0) {
        *edx4 = 45;
    }
    fun_44760b(edx5);
    return edx5;
}

uint32_t fun_444a36(void** ecx) {
    uint32_t esi2;
    uint32_t ebx3;
    int16_t* ebx4;
    int16_t* eax5;
    uint32_t eax6;

    esi2 = ebx3;
    ebx4 = eax5;
    eax6 = 0;
    while ((++ebx4, !!*ebx4) && eax6 != esi2) {
        ++eax6;
    }
    return eax6;
}

void fun_44509c(void** ecx, void** a2) {
    void** v3;
    void** v4;
    void** edx5;
    signed char* edx6;
    signed char* eax7;
    void** eax8;

    v3 = reinterpret_cast<void**>(__return_address());
    v4 = edx5;
    edx6 = eax7;
    while (*edx6) {
        eax8 = fun_4435c2(ecx, v4, v3, a2);
        *edx6 = *reinterpret_cast<signed char*>(&eax8);
        ++edx6;
    }
    return;
}

int32_t fun_445f19(void** ecx) {
    void** eax2;
    void** edx3;
    int32_t eax4;
    int32_t eax5;
    int32_t ebx6;

    eax2 = g61835c;
    edx3 = *reinterpret_cast<void***>(eax2 + eax4 * 4);
    image_base_();
    eax5 = fun_449d90(edx3);
    if (eax5 != 2) {
        image_base_();
        goto ebx6;
    } else {
        image_base_();
        goto ebx6;
    }
}

struct s535 {
    signed char[12] pad12;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[3] pad20;
    void** f14;
    signed char[3] pad24;
    int32_t f18;
    int32_t f1c;
    void** f20;
    signed char[7] pad40;
    void** f28;
    signed char[46] pad87;
    signed char f57;
};

int32_t ExitProcess = 0x220e78;

void** fun_449d7e(struct s535* a1) {
    goto ExitProcess;
}

void** g618358 = reinterpret_cast<void**>(0);

void fun_449d3c();

void** fun_445d0b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void fun_445e48(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** edx7;

    g618358 = reinterpret_cast<void**>(0);
    g61835c = reinterpret_cast<void**>(0);
    fun_449d3c();
    fun_445d0b(ecx, 0xf6, edx7, ecx, __return_address(), a2, a3, a4, a5, a6);
    fun_449d3c();
    fun_445d0b(ecx, 0xf5, 0xf6, edx7, ecx, __return_address(), a2, a3, a4, a5);
    fun_449d3c();
    fun_445d0b(ecx, 0xf4, 0xf5, 0xf6, edx7, ecx, __return_address(), a2, a3, a4);
    goto 0xf6;
}

int32_t GetEnvironmentStrings = 0x220f46;

void*** fun_449d78() {
    goto GetEnvironmentStrings;
}

int32_t GetModuleFileNameA = 0x220fae;

void fun_449d72(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto GetModuleFileNameA;
}

int32_t GetCommandLineA = 0x220ee2;

void fun_449d6c(void** a1, void** a2, void** a3) {
    goto GetCommandLineA;
}

int32_t GetVersion = 0x221014;

uint32_t fun_449d66(void** a1, void** a2, void** a3) {
    goto GetVersion;
}

void*** fun_445603(int32_t a1, void** a2) {
    void** edx3;
    void** eax4;
    void** eax5;
    void** ebx6;
    void** ebx7;
    void** eax8;
    void*** edx9;
    void** eax10;

    edx3 = eax4;
    eax5 = g477a68;
    ebx6 = reinterpret_cast<void**>(0);
    while (eax5 && reinterpret_cast<unsigned char>(edx3) >= reinterpret_cast<unsigned char>(eax5)) {
        ebx6 = eax5;
        eax5 = *reinterpret_cast<void***>(eax5 + 8);
    }
    *reinterpret_cast<void***>(edx3 + 4) = ebx6;
    *reinterpret_cast<void***>(edx3 + 8) = eax5;
    if (!ebx6) {
        g477a68 = edx3;
    } else {
        *reinterpret_cast<void***>(ebx6 + 8) = edx3;
    }
    if (eax5) {
        *reinterpret_cast<void***>(eax5 + 4) = edx3;
    }
    ebx7 = edx3 + 32;
    eax8 = *reinterpret_cast<void***>(edx3);
    edx9 = reinterpret_cast<void***>(edx3 + 44);
    *reinterpret_cast<int32_t*>(edx9 - 12) = 0;
    *reinterpret_cast<int32_t*>(edx9 - 28) = 0;
    *reinterpret_cast<int32_t*>(edx9 - 20) = 0;
    *reinterpret_cast<int32_t*>(edx9 - 16) = 0;
    *(edx9 - 8) = ebx7;
    *(edx9 - 4) = ebx7;
    eax10 = eax8 - 44;
    *(edx9 - 32) = ebx7;
    *edx9 = eax10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx9) + reinterpret_cast<unsigned char>(eax10)) = -1;
    return edx9;
}

int32_t g477d70 = 1;

int32_t g477b2c = 0;

struct s34* fun_44570d(void** ecx);

struct s34* fun_449d5a();

struct s34* fun_445677(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    int1_t zf13;
    int1_t zf14;
    struct s34* eax15;
    void** eax16;
    void*** eax17;
    void** eax18;
    void** v19;
    int32_t edi20;
    void** edi21;
    void** esi22;
    void** edx23;
    void** ebx24;

    zf13 = g477d70 == 0;
    if (zf13) 
        goto addr_445686_2;
    zf14 = g477b2c == -2;
    if (zf14) 
        goto addr_445686_2;
    eax15 = fun_44570d(ecx);
    if (eax15 && (eax15 = fun_449d5a(), !!eax15)) {
        if (1) {
            addr_445686_2:
            eax15 = reinterpret_cast<struct s34*>(0);
        } else {
            eax15->f0 = -4;
            eax17 = fun_445603(-4, eax16);
            eax18 = *eax17;
            v19 = eax18;
            *reinterpret_cast<unsigned char*>(&eax18) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax18) | 1);
            *eax17 = eax18;
            edi20 = eax15->f18;
            eax15->f14 = -1;
            eax15->f18 = edi20 + 1;
            fun_4440d1(eax16, v19, eax16, eax16, edi21, esi22, edx23, ecx, ebx24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
            eax15 = reinterpret_cast<struct s34*>(1);
        }
    }
    return eax15;
}

struct s536 {
    signed char[3] pad3;
    int32_t f3;
};

struct s34* g477d74 = reinterpret_cast<struct s34*>(16);

struct s34* fun_44570d(void** ecx) {
    struct s34* eax2;
    struct s536** eax3;
    struct s34** eax4;
    struct s34* eax5;
    struct s34* ecx6;
    struct s34* eax7;

    eax2 = reinterpret_cast<struct s34*>(&(*eax3)->f3);
    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) & 0xfc);
    if (eax2) {
        *eax4 = eax2;
        eax5 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(eax2) + 60);
        if (reinterpret_cast<uint32_t>(eax5) >= reinterpret_cast<uint32_t>(*eax4)) {
            ecx6 = g477d74;
            if (reinterpret_cast<uint32_t>(eax5) < reinterpret_cast<uint32_t>(ecx6)) {
                eax5 = ecx6;
                *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax5) & 0xfe);
            }
            *eax4 = eax5;
            eax7 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(eax5) + 0xfff);
            if (reinterpret_cast<uint32_t>(eax7) < reinterpret_cast<uint32_t>(*eax4)) 
                goto addr_445725_6;
        } else {
            addr_445725_6:
            return 0;
        }
        *reinterpret_cast<signed char*>(&eax7) = 0;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax7) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax7) + 1) & 0xf0);
        *eax4 = eax7;
        eax2 = reinterpret_cast<struct s34*>(1);
    }
    return eax2;
}

int32_t LocalAlloc = 0x221032;

struct s34* fun_449d5a() {
    goto LocalAlloc;
}

struct s537 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_445180() {
    struct s537* eax1;
    int32_t eax2;

    eax1 = reinterpret_cast<struct s537*>(image_base_());
    eax1->f8 = eax2;
    return;
}

int32_t g477afc = 0;

int32_t fun_449d96(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, int32_t a11);

void** fun_448345(void** ecx) {
    void** ebp2;
    void** ebp3;
    int32_t eax4;
    void** eax5;
    void*** esp6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** ebp12;
    void** edi13;
    void** esi14;
    int32_t eax15;
    int1_t zf16;
    int32_t eax17;
    void** ebx18;
    void** edx19;
    void** v20;
    int32_t eax21;
    void** eax22;
    void** ebx23;

    ebp2 = g61835c;
    ebp3 = *reinterpret_cast<void***>(ebp2 + eax4 * 4);
    image_base_();
    eax5 = fun_445f5a(ecx);
    esp6 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
    if (!(*reinterpret_cast<unsigned char*>(&eax5) & 0x80)) 
        goto addr_44838b_2;
    v7 = reinterpret_cast<void**>(2);
    v8 = reinterpret_cast<void**>(0);
    v9 = reinterpret_cast<void**>(0);
    v10 = ebp3;
    eax15 = fun_449d9c(v10, 0, 0, 2, v11, ebp12, edi13, esi14);
    esp6 = esp6 - 4 - 4 - 4 - 4 - 4 + 4;
    if (eax15 == -1) 
        goto addr_44837c_4;
    addr_44838b_2:
    zf16 = g477afc == 0;
    if (zf16 || (eax17 = reinterpret_cast<int32_t>(g477ad0()), esp6 = esp6 - 4 + 4, eax17 == 0)) {
        v7 = reinterpret_cast<void**>(0);
        v8 = reinterpret_cast<void**>(esp6 - 4 + 4);
        v9 = ebx18;
        v10 = edx19;
        eax21 = fun_449d96(ebp3, v10, v9, v8, 0, v20, ebp12, edi13, esi14, ecx, __return_address());
        if (!eax21) {
            addr_44837c_4:
            image_base_(v10, v9, v8, v7);
            eax22 = fun_4457b6(ecx, v10, v9, v8, v7, 0, ebp12, edi13, esi14);
        } else {
            if (ebx23 != ebp3) {
                fun_44515b(ebp3, v10, v9, v8, 0);
            }
            image_base_();
            eax22 = ebp3;
        }
    } else {
        eax22 = reinterpret_cast<void**>(g477afc());
    }
    return eax22;
}

struct s538 {
    int32_t f0;
    int32_t f4;
};

uint32_t fun_445a69(void** ecx) {
    void** edx2;
    void** eax3;
    int32_t ecx4;
    struct s538* eax5;

    eax3 = fun_445a98(ecx, edx2);
    if (eax3) {
        ecx4 = eax5->f0 + 1;
        eax5->f4 = eax5->f4 - 1;
        eax5->f0 = ecx4;
        *reinterpret_cast<signed char*>(&eax3) = *reinterpret_cast<signed char*>(ecx4 - 1);
        return reinterpret_cast<unsigned char>(eax3) & 0xff;
    } else {
        return 0xffffffff;
    }
}

int32_t fun_4483e4(void** ecx) {
    void** ecx2;
    void** eax3;
    void** edx4;
    int32_t ebx5;

    ecx2 = eax3;
    image_base_();
    edx4 = g618348;
    ebx5 = 0;
    while (edx4) {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx4 + 4) + 12)) & reinterpret_cast<unsigned char>(ecx2) && (++ebx5, !!(*reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(edx4 + 4) + 13) & 16))) {
            fun_4457c5(ecx2);
        }
        edx4 = *reinterpret_cast<void***>(edx4);
    }
    image_base_();
    return ebx5;
}

int32_t g477b50 = 0;

int32_t fun_448b26(void** ecx);

int32_t fun_448b9c(void** ecx);

int32_t fun_44841f(void** ecx) {
    int32_t ebx2;
    int32_t eax3;

    ebx2 = g477b50;
    eax3 = fun_448b26(ecx);
    if (eax3 != -1 && !ebx2) {
        fun_448b9c(ecx);
    }
    return eax3;
}

int32_t CloseHandle = 0x220df2;

struct s515* fun_449d48(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    goto CloseHandle;
}

signed char fun_44845c() {
    uint48_t v1;
    int16_t ax2;
    int16_t fpu_status_word3;

    *reinterpret_cast<int32_t*>(&v1) = reinterpret_cast<int32_t>(__return_address());
    __asm__("wait ");
    __asm__("fninit ");
    __asm__("fld1 ");
    __asm__("fldz ");
    __asm__("fdivp st1, st0");
    __asm__("fld st0");
    __asm__("fchs ");
    __asm__("fcompp ");
    ax2 = fpu_status_word3;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax2) + 1)) {
    }
    __asm__("wait ");
    __asm__("fninit ");
    __asm__("fldcw word [esp]");
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

signed char g477a81 = 0;

/* (image base) */
int32_t image_base_ = 0x44845a;

void fun_445c3b();

/* (image base) */
int32_t image_base_ = 0x44845a;

void fun_445c40();

signed char fun_445c75() {
    int1_t zf1;
    int1_t zf2;
    signed char al3;
    signed char al4;

    zf1 = g477a81 == 0;
    if (!zf1) {
        zf2 = g477a81 == 0;
        if (!zf2) {
            image_base_ = reinterpret_cast<int32_t>(fun_445c3b);
            image_base_ = reinterpret_cast<int32_t>(fun_445c40);
        }
        al3 = fun_44845c();
        return al3;
    } else {
        return al4;
    }
}

signed char fun_445c44() {
    int1_t zf1;
    signed char al2;

    zf1 = g477a81 == 0;
    if (!zf1) {
        image_base_ = reinterpret_cast<int32_t>(fun_445c3b);
        image_base_ = reinterpret_cast<int32_t>(fun_445c40);
    }
    al2 = fun_44845c();
    return al2;
}

int32_t FindNextFileA = 0x220ec6;

int32_t fun_449d1e(int32_t a1, int32_t a2) {
    goto FindNextFileA;
}

struct s539 {
    signed char[1] pad1;
    signed char f1;
};

signed char* fun_44862b(void** ecx) {
    void* ecx2;
    signed char* ebx3;
    struct s539* eax4;
    uint32_t eax5;
    signed char* eax6;
    uint32_t* edx7;
    signed char* eax8;
    int32_t ecx9;
    signed char* eax10;
    int32_t* edx11;
    void* edi12;
    int1_t zf13;
    uint32_t ebx14;
    unsigned char* edx15;
    signed char* eax16;
    uint32_t ebx17;
    uint32_t* edx18;
    uint32_t* edx19;

    ecx2 = g477be4;
    ebx3 = &eax4->f1;
    if (!ecx2) {
        *reinterpret_cast<signed char*>(&eax5) = *eax6;
        *edx7 = eax5 & 0xff;
        eax8 = ebx3;
    } else {
        ecx9 = 0;
        *reinterpret_cast<signed char*>(&ecx9) = *eax10;
        *edx11 = ecx9;
        if (ecx9) {
            edi12 = g477be4;
            eax8 = ebx3;
            if (!edi12) {
                zf13 = 1;
            } else {
                ebx14 = 0;
                *reinterpret_cast<unsigned char*>(&ebx14) = *edx15;
                *reinterpret_cast<unsigned char*>(&ebx14) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx14 + 0x477be9) & 1);
                zf13 = (ebx14 & 0xff) == 0;
            }
            if (!zf13) {
                if (!*eax8) {
                    eax16 = eax8 - 1;
                    *eax16 = *eax8;
                    return eax16;
                } else {
                    ebx17 = 0;
                    *reinterpret_cast<signed char*>(&ebx17) = *eax8;
                    *edx18 = *edx19 << 8 | ebx17;
                    return eax8 + 1;
                }
            }
        }
    }
    return eax8;
}

void* fun_44614f(void** ecx, void* a2, void** a3, int32_t a4, void* a5, void** a6) {
    void** ecx7;
    void** eax8;
    void* ebx9;
    void* edx10;
    int1_t zf11;
    void* eax12;
    signed char* eax13;
    int32_t v14;

    ecx7 = eax8;
    ebx9 = edx10;
    zf11 = g477be4 == 0;
    if (zf11) {
        eax12 = ebx9;
    } else {
        do {
            ebx9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx9) - 1);
            if (ebx9 == 0xffffffff) 
                break;
            eax13 = fun_44862b(ecx7);
        } while (v14);
        eax12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax13) - reinterpret_cast<unsigned char>(ecx7));
    }
    return eax12;
}

struct s540 {
    struct s540* f0;
    signed char[15] pad16;
    unsigned char f10;
};

struct s541 {
    signed char[16] pad16;
    unsigned char f10;
};

struct s540* fun_446609();

void fun_446610();

struct s540* fun_446954() {
    struct s541* ebx1;
    struct s541* eax2;
    struct s540* esi3;
    struct s540* eax4;
    struct s540* edx5;
    uint32_t edx6;

    ebx1 = eax2;
    esi3 = reinterpret_cast<struct s540*>(0);
    while (eax4 = fun_446609(), edx5 = eax4, *reinterpret_cast<signed char*>(&edx5) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx5) + 1), edx6 = reinterpret_cast<unsigned char>(edx5) & 0xff, *reinterpret_cast<unsigned char*>(&edx6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx6 + 0x459418) & 2), !!(edx6 & 0xff)) {
        esi3 = reinterpret_cast<struct s540*>(&esi3->pad16);
    }
    if (!(ebx1->f10 & 2)) {
        fun_446610();
    }
    return esi3;
}

struct s540* fun_446609() {
    int32_t* eax1;
    struct s540* eax2;

    eax2 = reinterpret_cast<struct s540*>(*eax1());
    return eax2;
}

struct s542 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_446610() {
    struct s542* edx1;

    edx1->f4();
    return;
}

struct s543 {
    signed char[12] pad12;
    uint32_t fc;
    unsigned char f10;
};

struct s544 {
    signed char[16] pad16;
    unsigned char f10;
};

struct s545 {
    signed char[1] pad1;
    struct s540* f1;
};

struct s546 {
    signed char[1] pad1;
    struct s540* f1;
};

struct s540* fun_44685f(struct s540* ecx) {
    struct s543* ebx2;
    struct s543* edx3;
    unsigned char dl4;
    struct s544* edx5;
    int32_t edx6;
    signed char* eax7;
    struct s540* eax8;
    struct s545* eax9;
    struct s546* edx10;
    struct s546* v11;
    uint32_t edx12;
    uint32_t edx13;
    int32_t edx14;
    struct s540* esi15;
    struct s540* esi16;

    ebx2 = edx3;
    dl4 = reinterpret_cast<unsigned char>(edx5->f10 | 1);
    ebx2->f10 = dl4;
    ebx2->fc = 0xffffffff;
    ebx2->f10 = reinterpret_cast<unsigned char>(dl4 & 3);
    edx6 = 0;
    *reinterpret_cast<signed char*>(&edx6) = *eax7;
    if (edx6 == 42) {
        eax8 = reinterpret_cast<struct s540*>(&eax9->f1);
        ebx2->f10 = reinterpret_cast<unsigned char>(ebx2->f10 & 0xfe);
    }
    edx10 = reinterpret_cast<struct s546*>(0);
    *reinterpret_cast<struct s540**>(&edx10) = *reinterpret_cast<struct s540**>(&eax8->f0);
    v11 = edx10;
    *reinterpret_cast<struct s540**>(&edx10) = reinterpret_cast<struct s540*>(&v11->f1);
    edx12 = reinterpret_cast<unsigned char>(edx10) & 0xff;
    *reinterpret_cast<unsigned char*>(&edx12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx12 + 0x459418) & 32);
    if (edx12 & 0xff) {
        edx13 = 0;
        do {
            eax8 = reinterpret_cast<struct s540*>(&eax8->pad16);
            edx13 = edx13 * 10 + reinterpret_cast<uint32_t>(v11 - 24);
            v11 = reinterpret_cast<struct s546*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s540**>(&eax8->f0))));
        } while (reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(&v11->f1) + 0x459418) & 32));
        ebx2->fc = edx13;
    }
    edx14 = 0;
    *reinterpret_cast<struct s540**>(&edx14) = *reinterpret_cast<struct s540**>(&eax8->f0);
    esi15 = reinterpret_cast<struct s540*>(&eax8->pad16);
    if (edx14 != 78) {
        if (edx14 == 70) {
            eax8 = esi15;
            ebx2->f10 = reinterpret_cast<unsigned char>(ebx2->f10 | 4);
        }
    } else {
        ebx2->f10 = reinterpret_cast<unsigned char>(ebx2->f10 | 8);
        eax8 = esi15;
    }
    esi16 = reinterpret_cast<struct s540*>(&eax8->pad16);
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<struct s540**>(&eax8->f0)) < 0x68) {
        if (*reinterpret_cast<struct s540**>(&eax8->f0) == 76) {
            eax8 = esi16;
            ebx2->f10 = reinterpret_cast<unsigned char>(ebx2->f10 | 64);
        }
    } else {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<struct s540**>(&eax8->f0)) <= 0x68) {
            eax8 = esi16;
            ebx2->f10 = reinterpret_cast<unsigned char>(ebx2->f10 | 16);
        } else {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<struct s540**>(&eax8->f0)) >= 0x6c) {
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<struct s540**>(&eax8->f0)) <= 0x6c || *reinterpret_cast<struct s540**>(&eax8->f0) == 0x77) {
                    eax8 = reinterpret_cast<struct s540*>(&eax8->pad16);
                    ebx2->f10 = reinterpret_cast<unsigned char>(ebx2->f10 | 32);
                }
            }
        }
    }
    return eax8;
}

struct s547 {
    signed char[16] pad16;
    unsigned char f10;
};

struct s548 {
    signed char[16] pad16;
    unsigned char f10;
};

void fun_446b4b(struct s540* ecx, struct s540* a2) {
    struct s547* eax3;
    int32_t ecx4;
    int32_t* edx5;
    int32_t* edx6;
    int16_t* edx7;
    int32_t esi8;
    int32_t* edx9;
    int32_t* edx10;
    int32_t* edx11;
    int32_t* edx12;
    struct s548* eax13;
    int16_t ebx14;
    int16_t bx15;

    if (eax3->f10 & 1) {
        if (!(eax3->f10 & 4)) {
            if (!(eax3->f10 & 8)) {
                ecx4 = *edx5 + 4;
                *edx6 = ecx4;
                edx7 = *reinterpret_cast<int16_t**>(ecx4 - 4);
            } else {
                esi8 = *edx9 + 4;
                *edx10 = esi8;
                edx7 = *reinterpret_cast<int16_t**>(esi8 - 4);
            }
        } else {
            *edx11 = *edx12 + 8;
            __asm__("les edx, [edi-0x8]");
        }
        if (!(eax13->f10 & 16)) {
            *edx7 = ebx14;
        } else {
            *edx7 = bx15;
            return;
        }
    }
    return;
}

struct s549 {
    signed char[12] pad12;
    int32_t fc;
    unsigned char f10;
};

struct s550 {
    signed char[16] pad16;
    unsigned char f10;
};

struct s540* fun_446993(struct s540* ecx) {
    struct s549* ebx2;
    struct s549* eax3;
    struct s550* eax4;
    int32_t ecx5;
    int32_t* edx6;
    int32_t* edx7;
    int32_t esi8;
    int32_t* edx9;
    int32_t* edx10;
    int32_t* edx11;
    int32_t* edx12;
    int32_t edx13;
    struct s540* esi14;
    struct s540* eax15;
    struct s540* v16;
    struct s540* eax17;

    ebx2 = eax3;
    if (eax4->f10 & 1) {
        *reinterpret_cast<unsigned char*>(&ecx) = ebx2->f10;
        if (!(*reinterpret_cast<unsigned char*>(&ecx) & 4)) {
            if (!(*reinterpret_cast<unsigned char*>(&ecx) & 8)) {
                ecx5 = *edx6 + 4;
                *edx7 = ecx5;
                ecx = *reinterpret_cast<struct s540**>(ecx5 - 4);
            } else {
                esi8 = *edx9 + 4;
                *edx10 = esi8;
                ecx = *reinterpret_cast<struct s540**>(esi8 - 4);
            }
        } else {
            *edx11 = *edx12 + 8;
            __asm__("les ecx, [edi-0x8]");
        }
    }
    edx13 = ebx2->fc;
    esi14 = reinterpret_cast<struct s540*>(0);
    if (edx13 == -1) {
        edx13 = 1;
    }
    while (!(reinterpret_cast<uint1_t>(edx13 < 0) | reinterpret_cast<uint1_t>(edx13 == 0)) && (eax15 = fun_446609(), v16 = eax15, !(ebx2->f10 & 2))) {
        esi14 = reinterpret_cast<struct s540*>(&esi14->pad16);
        --edx13;
        if (!(ebx2->f10 & 1)) 
            continue;
        if (!(ebx2->f10 & 32)) {
            *reinterpret_cast<struct s540**>(&ecx->f0) = v16;
            ecx = reinterpret_cast<struct s540*>(&ecx->pad16);
        } else {
            eax17 = v16;
            *reinterpret_cast<struct s540**>(&ecx->f0) = eax17;
            ecx = reinterpret_cast<struct s540*>(reinterpret_cast<unsigned char>(ecx) + 2);
        }
    }
    return esi14;
}

void** fun_446ba9(void** ecx, void** a2);

struct s540* fun_446bec(struct s540* ecx) {
    void** ecx2;
    void** eax3;
    unsigned char* eax4;
    unsigned char** ebx5;
    uint32_t edx6;
    uint32_t edx7;
    uint32_t v8;
    int32_t* ebx9;
    void** v10;
    void** eax11;
    void* esp12;
    void*** ebx13;
    signed char* edx14;
    signed char** edx15;
    signed char* esi16;
    signed char* ebx17;
    void** edx18;
    struct s540* edi19;
    struct s540* eax20;
    void** bl21;
    struct s540* v22;
    uint32_t ebx23;
    uint32_t ebx24;
    uint32_t ebx25;

    ecx2 = eax3;
    eax4 = *ebx5;
    edx6 = 0;
    *reinterpret_cast<unsigned char*>(&edx6) = *eax4;
    *reinterpret_cast<unsigned char*>(&edx6) = reinterpret_cast<uint1_t>(edx6 == 94);
    edx7 = edx6 & 0xff;
    v8 = edx7;
    if (edx7) {
        *ebx9 = reinterpret_cast<int32_t>(eax4 + 1);
    }
    eax11 = fun_446ba9(ecx2, v10);
    esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 2 - 4 - 44 - 4 + 4);
    *ebx13 = eax11;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx2 + 16)) & 1) {
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx2 + 16)) & 4)) {
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx2 + 16)) & 8)) {
                edx14 = *edx15 + 4;
                *edx15 = edx14;
                esi16 = *reinterpret_cast<signed char**>(edx14 - 4);
            } else {
                ebx17 = *edx15 + 4;
                *edx15 = ebx17;
                esi16 = *reinterpret_cast<signed char**>(ebx17 - 4);
            }
        } else {
            esi16 = *edx15 + 8;
            *edx15 = esi16;
            __asm__("les esi, [esi-0x8]");
        }
    }
    edx18 = *reinterpret_cast<void***>(ecx2 + 12);
    edi19 = reinterpret_cast<struct s540*>(0);
    while (edx18 && (eax20 = fun_446609(), esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 + 4), bl21 = *reinterpret_cast<void***>(ecx2 + 16), v22 = eax20, !(reinterpret_cast<unsigned char>(bl21) & 2))) {
        ebx23 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(eax20) >> 3);
        *reinterpret_cast<signed char*>(&ebx23) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp12) + ebx23);
        ebx24 = reinterpret_cast<unsigned char>(eax20) & 7;
        *reinterpret_cast<signed char*>(&ebx24) = *reinterpret_cast<signed char*>(ebx24 + 0x45951c);
        ebx25 = ebx24 & 0xff;
        *reinterpret_cast<unsigned char*>(&ebx25) = reinterpret_cast<uint1_t>((ebx25 & (ebx23 & 0xff)) == 0);
        if ((ebx25 & 0xff) != v8) 
            goto addr_446cb0_12;
        edi19 = reinterpret_cast<struct s540*>(&edi19->pad16);
        --edx18;
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx2 + 16)) & 1)) 
            continue;
        *esi16 = *reinterpret_cast<signed char*>(&v22);
        ++esi16;
    }
    addr_446ccd_15:
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx2 + 16)) & 1 && !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi19) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi19 == 0))) {
        *esi16 = 0;
    }
    return edi19;
    addr_446cb0_12:
    fun_446610();
    goto addr_446ccd_15;
}

void** fun_446ba9(void** ecx, void** a2) {
    void* esi3;
    void* edx4;
    void** eax5;
    void** esi6;
    void** ebx7;
    uint32_t eax8;
    void** ecx9;
    int32_t edx10;

    esi3 = edx4;
    fun_442b80(eax5, esi6, ecx, ebx7, __return_address(), a2);
    eax8 = 0;
    *reinterpret_cast<void***>(&eax8) = *reinterpret_cast<void***>(eax5);
    ecx9 = eax5 + 1;
    if (eax8) {
        do {
            edx10 = reinterpret_cast<int32_t>(eax8) >> 3;
            *reinterpret_cast<unsigned char*>(edx10 + reinterpret_cast<int32_t>(esi3)) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx10 + reinterpret_cast<int32_t>(esi3)) | *reinterpret_cast<unsigned char*>((eax8 & 7) + 0x45951c));
            eax8 = 0;
            *reinterpret_cast<void***>(&eax8) = *reinterpret_cast<void***>(ecx9);
            if (!eax8) 
                break;
            ++ecx9;
        } while (eax8 != 93);
    }
    return ecx9;
}

struct s551 {
    signed char[12] pad12;
    int32_t fc;
};

struct s552 {
    signed char[12] pad12;
    int32_t fc;
    unsigned char f10;
};

struct s540* fun_447214() {
    int32_t eax1;
    struct s551* eax2;
    struct s552* eax3;
    struct s540* eax4;

    eax1 = eax2->fc;
    eax3->fc = eax1 - 1;
    if (!eax1 || (eax4 = fun_446609(), !!(eax3->f10 & 2))) {
        eax4 = reinterpret_cast<struct s540*>(0xffffffff);
    }
    return eax4;
}

void* fun_4471ed() {
    int32_t eax1;
    int32_t eax2;
    void* eax3;
    void* eax4;

    if (eax1 < 48 || eax2 > 57) {
        eax3 = fun_443671();
        if (reinterpret_cast<int32_t>(eax3) < reinterpret_cast<int32_t>(97) || reinterpret_cast<int32_t>(eax3) > reinterpret_cast<int32_t>(0x66)) {
            return 16;
        } else {
            return reinterpret_cast<uint32_t>(eax3) - 87;
        }
    } else {
        return reinterpret_cast<int32_t>(eax4) - 48;
    }
}

struct s553 {
    signed char[7] pad7;
    void** f7;
};

signed char g618355 = 0;

int32_t fun_44727d(void*** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** esi16;
    void** v17;
    void** edi18;
    void** v19;
    void** ebp20;
    void** v21;
    void** eax22;
    void** edi23;
    void** edx24;
    void** eax25;
    struct s553* ebx26;
    void** ebx27;
    void** edx28;
    void** v29;
    void** edx30;
    void** edx31;
    void** ebx32;
    void** ecx33;
    void** ebx34;
    void** v35;
    uint32_t edx36;
    uint16_t ds37;
    void** ebx38;
    void** esi39;
    void** v40;
    void** v41;
    void** eax42;
    void** ebx43;
    void** ebp44;
    void** v45;
    uint32_t edx46;
    uint16_t ds47;
    void** v48;
    void** esi49;
    void** eax50;
    int32_t ebp51;
    void** ebx52;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = esi16;
    v17 = edi18;
    v19 = ebp20;
    v21 = eax22;
    edi23 = edx24;
    eax25 = reinterpret_cast<void**>(&ebx26->f7);
    *reinterpret_cast<unsigned char*>(&eax25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax25) & 0xfc);
    if (reinterpret_cast<unsigned char>(eax25) < reinterpret_cast<unsigned char>(ebx27)) {
        eax25 = reinterpret_cast<void**>(0xffffffff);
    }
    if (reinterpret_cast<unsigned char>(eax25) < reinterpret_cast<unsigned char>(12)) {
        eax25 = reinterpret_cast<void**>(12);
    }
    edx28 = edi23 + 0xfffffffc;
    v29 = edx28;
    edx30 = *reinterpret_cast<void***>(edx28);
    *reinterpret_cast<unsigned char*>(&edx30) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx30) & 0xfe);
    if (reinterpret_cast<unsigned char>(eax25) <= reinterpret_cast<unsigned char>(edx30)) {
        edx31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx30) - reinterpret_cast<unsigned char>(eax25));
        if (reinterpret_cast<unsigned char>(edx31) >= reinterpret_cast<unsigned char>(12)) {
            ebx32 = eax25;
            ecx33 = v29;
            *reinterpret_cast<unsigned char*>(&ebx32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx32) | 1);
            *reinterpret_cast<unsigned char*>(&edx31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx31) | 1);
            *reinterpret_cast<void***>(ecx33) = ebx32;
            ebx34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx33) + reinterpret_cast<unsigned char>(eax25));
            v35 = ebx34;
            *reinterpret_cast<void***>(ebx34) = edx31;
            edx36 = ds37;
            ebx38 = v21;
            if (*reinterpret_cast<int16_t*>(&edx36) == *reinterpret_cast<int16_t*>(&ebx38)) {
                esi39 = g477a68;
                while ((ecx33 = *reinterpret_cast<void***>(esi39 + 8), !!ecx33) && (reinterpret_cast<unsigned char>(esi39) > reinterpret_cast<unsigned char>(edi23) || reinterpret_cast<unsigned char>(edi23) >= reinterpret_cast<unsigned char>(ecx33))) {
                    esi39 = *reinterpret_cast<void***>(esi39 + 8);
                }
            }
            *reinterpret_cast<void***>(esi39 + 24) = *reinterpret_cast<void***>(esi39 + 24) + 1;
            fun_4440d1(ecx33, v21, v35, v40, v41, v19, v17, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        }
    } else {
        eax42 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax25) - reinterpret_cast<unsigned char>(edx30));
        ebx43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v29) + reinterpret_cast<unsigned char>(edx30));
        while (*ecx = eax42, ebp44 = *reinterpret_cast<void***>(ebx43), !reinterpret_cast<int1_t>(ebp44 == 0xffffffff)) {
            if (reinterpret_cast<unsigned char>(ebp44) & 1) 
                goto addr_4473a4_15;
            v45 = *reinterpret_cast<void***>(ebx43 + 8);
            edx46 = ds47;
            v48 = *reinterpret_cast<void***>(ebx43 + 4);
            if (*reinterpret_cast<void***>(&edx46) == v21) {
                esi49 = g477a68;
                while (*reinterpret_cast<void***>(esi49 + 8) && (reinterpret_cast<unsigned char>(esi49) > reinterpret_cast<unsigned char>(edi23) || reinterpret_cast<unsigned char>(edi23) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi49 + 8)))) {
                    esi49 = *reinterpret_cast<void***>(esi49 + 8);
                }
            }
            if (ebx43 == *reinterpret_cast<void***>(esi49 + 12)) {
                *reinterpret_cast<void***>(esi49 + 12) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi49 + 12) + 4);
            }
            if (reinterpret_cast<unsigned char>(ebp44) < reinterpret_cast<unsigned char>(*ecx)) 
                goto addr_44732a_23;
            eax50 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp44) - reinterpret_cast<unsigned char>(*ecx));
            if (reinterpret_cast<unsigned char>(eax50) >= reinterpret_cast<unsigned char>(12)) 
                goto addr_44735e_25;
            addr_44732a_23:
            *reinterpret_cast<void***>(v48 + 8) = v45;
            *reinterpret_cast<void***>(v45 + 4) = v48;
            *reinterpret_cast<void***>(v29) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v29)) + reinterpret_cast<unsigned char>(ebp44));
            *reinterpret_cast<void***>(esi49 + 28) = *reinterpret_cast<void***>(esi49 + 28) - 1;
            g618355 = 0;
            if (reinterpret_cast<unsigned char>(ebp44) >= reinterpret_cast<unsigned char>(*ecx)) 
                goto addr_447359_26;
            eax42 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*ecx) - reinterpret_cast<unsigned char>(ebp44));
            ebx43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx43) + reinterpret_cast<unsigned char>(ebp44));
        }
        goto addr_4472c3_28;
    }
    addr_447401_29:
    ebp51 = 0;
    addr_447403_30:
    return ebp51;
    addr_4472c3_28:
    ebp51 = 2;
    goto addr_447403_30;
    addr_4473a4_15:
    ebp51 = 1;
    goto addr_447403_30;
    addr_44735e_25:
    ebx52 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx43) + reinterpret_cast<unsigned char>(*ecx));
    *reinterpret_cast<void***>(ebx52) = eax50;
    *reinterpret_cast<void***>(ebx52 + 4) = v48;
    *reinterpret_cast<void***>(ebx52 + 8) = v45;
    *reinterpret_cast<void***>(v48 + 8) = ebx52;
    *reinterpret_cast<void***>(v45 + 4) = ebx52;
    ebp51 = 0;
    *reinterpret_cast<void***>(v29) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v29)) + reinterpret_cast<unsigned char>(*ecx));
    g618355 = 0;
    goto addr_447403_30;
    addr_447359_26:
    goto addr_447401_29;
}

void fun_447d8a();

void fun_448223();

/* (image base) */
int32_t image_base_ = 0x4452df;

int32_t fun_448483(void** ecx) {
    int32_t v2;
    void** v3;
    void** ebx4;
    void** v5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void* esp10;
    void** edi11;
    void** eax12;
    struct s535* esi13;
    struct s535* edx14;
    void** ebx15;
    signed char* eax16;
    void** eax17;
    void** v18;
    void** v19;
    void** v20;
    struct s535* ebx21;
    void** eax22;
    void** tmp32_23;
    int1_t cf24;
    uint32_t ecx25;
    void** esi26;
    void** edi27;
    void** edx28;
    void** ecx29;
    void** esi30;
    void** edi31;
    void** ebx32;

    v2 = reinterpret_cast<int32_t>(__return_address());
    v3 = ebx4;
    v5 = ecx;
    v6 = esi7;
    v8 = edi9;
    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    edi11 = eax12;
    esi13 = edx14;
    ebx15 = reinterpret_cast<void**>(0);
    while (*reinterpret_cast<signed char*>(&ecx) = *eax16, ++eax16, !!*reinterpret_cast<signed char*>(&ecx)) {
        ++ebx15;
    }
    eax17 = g61835c;
    v18 = edi11;
    v19 = *reinterpret_cast<void***>(eax17 + 8);
    fun_449d96(v19, v18, ebx15, reinterpret_cast<int32_t>(esp10) - 4 + 4, 0, v20, v8, v6, v5, v3, v2);
    ebx21 = esi13;
    fun_447d8a();
    fun_448223();
    image_base_();
    eax22 = fun_449d7e(ebx21);
    esi13->f57 = reinterpret_cast<signed char>(esi13->f57 - 1);
    if (!eax22 || ((tmp32_23 = eax22 + 7, cf24 = reinterpret_cast<unsigned char>(tmp32_23) < reinterpret_cast<unsigned char>(eax22), eax22 = tmp32_23, cf24) || (*reinterpret_cast<unsigned char*>(&eax22) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax22) & 0xfc), ecx25 = reinterpret_cast<unsigned char>(ecx) - (reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(ecx) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax22) >= reinterpret_cast<unsigned char>(12))))), eax22 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax22) - reinterpret_cast<unsigned char>(12) & ecx25) + reinterpret_cast<unsigned char>(12)), reinterpret_cast<unsigned char>(eax22) > reinterpret_cast<unsigned char>(ebx21->f14)))) {
        addr_44549f_7:
    } else {
        esi26 = ebx21->fc;
        edi27 = ebx21->f10;
        if (reinterpret_cast<unsigned char>(eax22) <= reinterpret_cast<unsigned char>(edi27)) {
            esi26 = ebx21->f28;
            edi27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi27) - reinterpret_cast<unsigned char>(edi27));
        }
        do {
            if (reinterpret_cast<unsigned char>(eax22) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi26))) 
                goto addr_4454a3_11;
            ecx25 = ecx25 - (ecx25 + reinterpret_cast<uint1_t>(ecx25 < ecx25 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(edi27) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi26)))));
            edi27 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(edi27) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi26)) & ecx25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi26)));
            esi26 = *reinterpret_cast<void***>(esi26 + 8);
        } while (!reinterpret_cast<int1_t>(esi26 == &ebx21->f20));
        goto addr_44549c_13;
    }
    addr_4454ee_14:
    goto v18;
    addr_4454a3_11:
    edx28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi26)) - reinterpret_cast<unsigned char>(eax22));
    ebx21->f10 = edi27;
    ebx21->f18 = ebx21->f18 + 1;
    ecx29 = *reinterpret_cast<void***>(esi26 + 8);
    if (reinterpret_cast<unsigned char>(edx28) < reinterpret_cast<unsigned char>(12)) {
        ebx21->f1c = ebx21->f1c - 1;
        esi30 = *reinterpret_cast<void***>(esi26 + 4);
        *reinterpret_cast<void***>(esi30 + 8) = ecx29;
        *reinterpret_cast<void***>(ecx29 + 4) = esi30;
        ebx21->fc = esi30;
        esi26 = esi26;
    } else {
        edi31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi26) + reinterpret_cast<unsigned char>(eax22));
        ebx21->fc = edi31;
        *reinterpret_cast<void***>(edi31) = edx28;
        *reinterpret_cast<void***>(esi26) = eax22;
        ebx32 = *reinterpret_cast<void***>(esi26 + 4);
        *reinterpret_cast<void***>(edi31 + 4) = ebx32;
        *reinterpret_cast<void***>(edi31 + 8) = ecx29;
        *reinterpret_cast<void***>(ebx32 + 8) = edi31;
        *reinterpret_cast<void***>(ecx29 + 4) = edi31;
    }
    *reinterpret_cast<void***>(esi26) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi26)) | 1);
    goto addr_4454ee_14;
    addr_44549c_13:
    ebx21->f14 = edi27;
    goto addr_44549f_7;
}

void** fun_447439(void** ecx, void** a2) {
    void* esi3;
    void* eax4;
    void** ecx5;
    void** edx6;
    uint32_t edx7;
    void** esi8;
    void** ebx9;
    void** eax10;
    int32_t eax11;

    esi3 = eax4;
    ecx5 = edx6;
    edx7 = 0;
    eax10 = fun_442b80(ecx5, esi8, ecx, ebx9, __return_address(), a2);
    while (*reinterpret_cast<void***>(ecx5)) {
        eax11 = 0;
        *reinterpret_cast<void***>(&eax11) = *reinterpret_cast<void***>(ecx5);
        eax10 = reinterpret_cast<void**>(eax11 >> 3);
        *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5)) & 7);
        edx7 = edx7 & 0xff;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx7) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi3) + reinterpret_cast<unsigned char>(eax10)) | *reinterpret_cast<unsigned char*>(edx7 + 0x459524));
        ++ecx5;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi3) + reinterpret_cast<unsigned char>(eax10)) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx7) + 1);
    }
    return eax10;
}

