/*
  Copyright (c) 2021.  Nicolai Oswald
  Copyright (c) 2021.  University of Edinburgh
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are
  met: redistributions of source code must retain the above copyright
  notice, this list of conditions and the following disclaimer;
  redistributions in binary form must reproduce the above copyright
  notice, this list of conditions and the following disclaimer in the
  documentation and/or other materials provided with the distribution;
  neither the name of the copyright holders nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
--Backend/Murphi/MurphiModular/Constants/GenConst
  ---- System access constants
  const
    ENABLE_QS: false;
    VAL_COUNT: 1;
    ADR_COUNT: 1;

  ---- System network constants
    O_NET_MAX: 16;
    U_NET_MAX: 16;

  ---- SSP declaration constants
    NrCachesL1_2: 3;
    NrCachesL1_1: 3;
    NrCachesL2: 3;

--Backend/Murphi/MurphiModular/GenTypes
  type
    ----Backend/Murphi/MurphiModular/Types/GenAdrDef
    Address: scalarset(ADR_COUNT);
    ClValue: 0..VAL_COUNT;

    ----Backend/Murphi/MurphiModular/Types/Enums/GenEnums
      ------Backend/Murphi/MurphiModular/Types/Enums/SubEnums/GenAccess
      PermissionType: enum {
        load,
        store,
        evict,
        none
      };

      ------Backend/Murphi/MurphiModular/Types/Enums/SubEnums/GenMessageTypes
      MessageType: enum {
        GetSL1_2,
        GetML1_2,
        PutSL1_2,
        Inv_AckL1_2,
        GetM_Ack_DL1_2,
        GetS_AckL1_2,
        WBL1_2,
        PutML1_2,
        GetM_Ack_ADL1_2,
        InvL1_2,
        Put_AckL1_2,
        Fwd_GetSL1_2,
        Fwd_GetML1_2,
        GetSL1_2load,
        GetML1_2store,
        GetSL1_1,
        GetML1_1,
        PutSL1_1,
        Inv_AckL1_1,
        GetM_Ack_DL1_1,
        GetS_AckL1_1,
        WBL1_1,
        PutML1_1,
        GetM_Ack_ADL1_1,
        InvL1_1,
        Put_AckL1_1,
        Fwd_GetSL1_1,
        Fwd_GetML1_1,
        GetSL1_1load,
        GetML1_1store,
        RdOwnL2,
        RdSharedL2,
        RspIHitSEL2,
        CleanEvictNoDataL2,
        RspSFwdML2,
        DevDataMsgL2,
        RspIFwdML2,
        DirtyEvictL2,
        GO_SL2,
        HostDataMsgL2,
        GO_ML2,
        GO_IL2,
        SnpInvSL2,
        SnpDataL2,
        SnpInvML2,
        GO_WritePullL2
      };

      ------Backend/Murphi/MurphiModular/Types/Enums/SubEnums/GenArchEnums
      s_cacheL1_1: enum {
        cacheL1_1_S_store_GetM_Ack_AD,
        cacheL1_1_S_store,
        cacheL1_1_S_evict_x_I,
        cacheL1_1_S_evict,
        cacheL1_1_S,
        cacheL1_1_M_evict_x_I,
        cacheL1_1_M_evict,
        cacheL1_1_M,
        cacheL1_1_I_store_GetM_Ack_AD,
        cacheL1_1_I_store,
        cacheL1_1_I_load,
        cacheL1_1_I
      };

      s_directoryL1_2: enum {
        directoryL1_2_mevict__dM_x_pI_store__C__M,
        directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__S,
        directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__M,
        directoryL1_2_mevict__I__C__S_evict_SnpInvS,
        directoryL1_2_mevict__I__C__S_evict,
        directoryL1_2_mevict__I__C__M_evict_SnpInvM,
        directoryL1_2_mevict__I__C__M_evict_SnpData_SnpInvS,
        directoryL1_2_mevict__I__C__M_evict_SnpData,
        directoryL1_2_mevict__I__C__M_evict,
        directoryL1_2_mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S,
        directoryL1_2_mSnpInvML2__dM_x_pI_store__C__M,
        directoryL1_2_mSnpInvML2__dM_x_pI_store_GetM_Ack_AD__C__M,
        directoryL1_2_mSnpDataL2__dS_x_pI_load__C__M,
        directoryL1_2_mSnpDataL2__dM_GetS_x_pS__C__M,
        directoryL1_2_mSnpDataL2__dM_GetS_x_pI_load__C__M,
        directoryL1_2_mGetSL1_2__M_GetS__C__M,
        directoryL1_2_mGetSL1_2__I__C__I_load_GO_S,
        directoryL1_2_mGetSL1_2__I__C__I_load,
        directoryL1_2_mGetML1_2__mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S,
        directoryL1_2_mGetML1_2__S__C__S_store_GO_M,
        directoryL1_2_mGetML1_2__S__C__S_store,
        directoryL1_2_mGetML1_2__I__C__S_store_GO_M,
        directoryL1_2_mGetML1_2__I__C__S_store,
        directoryL1_2_mGetML1_2__I__C__I_store_GO_M,
        directoryL1_2_mGetML1_2__I__C__I_store,
        directoryL1_2_S__C__S,
        directoryL1_2_S__C__M,
        directoryL1_2_M__C__M,
        directoryL1_2_I__C__S,
        directoryL1_2_I__C__M,
        directoryL1_2_I__C__I
      };

      s_directoryL1_1: enum {
        directoryL1_1_mevict__dM_x_pI_store__C__M,
        directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__S,
        directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__M,
        directoryL1_1_mevict__I__C__S_evict_SnpInvS,
        directoryL1_1_mevict__I__C__S_evict,
        directoryL1_1_mevict__I__C__M_evict_SnpInvM,
        directoryL1_1_mevict__I__C__M_evict_SnpData_SnpInvS,
        directoryL1_1_mevict__I__C__M_evict_SnpData,
        directoryL1_1_mevict__I__C__M_evict,
        directoryL1_1_mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S,
        directoryL1_1_mSnpInvML2__dM_x_pI_store__C__M,
        directoryL1_1_mSnpInvML2__dM_x_pI_store_GetM_Ack_AD__C__M,
        directoryL1_1_mSnpDataL2__dS_x_pI_load__C__M,
        directoryL1_1_mSnpDataL2__dM_GetS_x_pS__C__M,
        directoryL1_1_mSnpDataL2__dM_GetS_x_pI_load__C__M,
        directoryL1_1_mGetSL1_1__M_GetS__C__M,
        directoryL1_1_mGetSL1_1__I__C__I_load_GO_S,
        directoryL1_1_mGetSL1_1__I__C__I_load,
        directoryL1_1_mGetML1_1__mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S,
        directoryL1_1_mGetML1_1__S__C__S_store_GO_M,
        directoryL1_1_mGetML1_1__S__C__S_store,
        directoryL1_1_mGetML1_1__I__C__S_store_GO_M,
        directoryL1_1_mGetML1_1__I__C__S_store,
        directoryL1_1_mGetML1_1__I__C__I_store_GO_M,
        directoryL1_1_mGetML1_1__I__C__I_store,
        directoryL1_1_S__C__S,
        directoryL1_1_S__C__M,
        directoryL1_1_M__C__M,
        directoryL1_1_I__C__S,
        directoryL1_1_I__C__M,
        directoryL1_1_I__C__I
      };

      s_directoryL2: enum {
        directoryL2_S_RdOwn,
        directoryL2_S,
        directoryL2_M_RdShared_RspSFwdM,
        directoryL2_M_RdShared,
        directoryL2_M_RdOwn_RspIFwdM,
        directoryL2_M_RdOwn,
        directoryL2_M_DirtyEvict,
        directoryL2_M,
        directoryL2_I,
        directoryL2_E_RdShared_RspSFwdM,
        directoryL2_E_RdShared,
        directoryL2_E_RdOwn_RspIFwdM,
        directoryL2_E_RdOwn,
        directoryL2_E_DirtyEvict,
        directoryL2_E
      };

      s_cacheL1_2: enum {
        cacheL1_2_S_store_GetM_Ack_AD,
        cacheL1_2_S_store,
        cacheL1_2_S_evict_x_I,
        cacheL1_2_S_evict,
        cacheL1_2_S,
        cacheL1_2_M_evict_x_I,
        cacheL1_2_M_evict,
        cacheL1_2_M,
        cacheL1_2_I_store_GetM_Ack_AD,
        cacheL1_2_I_store,
        cacheL1_2_I_load,
        cacheL1_2_I
      };

    ----Backend/Murphi/MurphiModular/Types/GenMachineSets
      -- Cluster: C1
      OBJSET_cacheL1_1: scalarset(2);
      OBJSET_directoryL1_2: enum{directoryL1_2};
      OBJSET_directoryL1_1: enum{directoryL1_1};
      OBJSET_directoryL2: enum{directoryL2};
      OBJSET_cacheL1_2: scalarset(2);
      C1Machines: union{OBJSET_cacheL1_1, OBJSET_directoryL1_2, OBJSET_directoryL1_1, OBJSET_directoryL2, OBJSET_cacheL1_2};

      Machines: union{OBJSET_cacheL1_1, OBJSET_directoryL1_2, OBJSET_directoryL1_1, OBJSET_directoryL2, OBJSET_cacheL1_2};

    ----Backend/Murphi/MurphiModular/Types/GenCheckTypes
      ------Backend/Murphi/MurphiModular/Types/CheckTypes/GenPermType
        acc_type_obj: multiset[3] of PermissionType;
        PermMonitor: array[Machines] of array[Address] of acc_type_obj;


    ----Backend/Murphi/MurphiModular/Types/GenMessage
      Message: record
        adr: Address;
        mtype: MessageType;
        src: Machines;
        dst: Machines;
        cl: ClValue;
        acksRequiredL1_2: 0..NrCachesL1_2;
        acksRequiredL1_1: 0..NrCachesL1_1;
      end;

    ----Backend/Murphi/MurphiModular/Types/GenNetwork
      NET_Ordered: array[Machines] of array[0..O_NET_MAX-1] of Message;
      NET_Ordered_cnt: array[Machines] of 0..O_NET_MAX;
      NET_Unordered: array[Machines] of multiset[U_NET_MAX] of Message;

    ----Backend/Murphi/MurphiModular/Types/GenMachines

      ENTRY_cacheL1_1: record
        State: s_cacheL1_1;
        cl: ClValue;
        acksReceivedL1_1: 0..NrCachesL1_1;
        acksExpectedL1_1: 0..NrCachesL1_1;
      end;

      MACH_cacheL1_1: record
        cb: array[Address] of ENTRY_cacheL1_1;
      end;

      OBJ_cacheL1_1: array[OBJSET_cacheL1_1] of MACH_cacheL1_1;
      v_sharersL1_2: multiset[NrCachesL1_2] of Machines;
      cnt_v_sharersL1_2: 0..NrCachesL1_2;

      ENTRY_directoryL1_2: record
        State: s_directoryL1_2;
        cl: ClValue;
        sharersL1_2: v_sharersL1_2;
        ownerL1_2: Machines;
        acksReceivedL1_2: 0..NrCachesL1_2;
        acksExpectedL1_2: 0..NrCachesL1_2;
        invalidation_msg: Message;
        cluster_req_msg: Message;
      end;

      MACH_directoryL1_2: record
        cb: array[Address] of ENTRY_directoryL1_2;
      end;

      OBJ_directoryL1_2: array[OBJSET_directoryL1_2] of MACH_directoryL1_2;
      v_sharersL1_1: multiset[NrCachesL1_1] of Machines;
      cnt_v_sharersL1_1: 0..NrCachesL1_1;

      ENTRY_directoryL1_1: record
        State: s_directoryL1_1;
        cl: ClValue;
        sharersL1_1: v_sharersL1_1;
        ownerL1_1: Machines;
        acksReceivedL1_1: 0..NrCachesL1_1;
        acksExpectedL1_1: 0..NrCachesL1_1;
        invalidation_msg: Message;
        cluster_req_msg: Message;
      end;

      MACH_directoryL1_1: record
        cb: array[Address] of ENTRY_directoryL1_1;
      end;

      OBJ_directoryL1_1: array[OBJSET_directoryL1_1] of MACH_directoryL1_1;
      v_cache_sharersL2: multiset[NrCachesL2] of Machines;
      cnt_v_cache_sharersL2: 0..NrCachesL2;

      ENTRY_directoryL2: record
        State: s_directoryL2;
        cl: ClValue;
        acksReceivedL2: 0..NrCachesL2;
        acksExpectedL2: 0..NrCachesL2;
        cache_sharersL2: v_cache_sharersL2;
        ownerL2: Machines;
        requesterL2: Machines;
      end;

      MACH_directoryL2: record
        cb: array[Address] of ENTRY_directoryL2;
      end;

      OBJ_directoryL2: array[OBJSET_directoryL2] of MACH_directoryL2;

      ENTRY_cacheL1_2: record
        State: s_cacheL1_2;
        cl: ClValue;
        acksReceivedL1_2: 0..NrCachesL1_2;
        acksExpectedL1_2: 0..NrCachesL1_2;
      end;

      MACH_cacheL1_2: record
        cb: array[Address] of ENTRY_cacheL1_2;
      end;

      OBJ_cacheL1_2: array[OBJSET_cacheL1_2] of MACH_cacheL1_2;


  var
    --Backend/Murphi/MurphiModular/GenVars
      fwd: NET_Ordered;
      cnt_fwd: NET_Ordered_cnt;
      resp: NET_Ordered;
      cnt_resp: NET_Ordered_cnt;
      req: NET_Ordered;
      cnt_req: NET_Ordered_cnt;
      D2H_data: NET_Ordered;
      cnt_D2H_data: NET_Ordered_cnt;
      H2D_data: NET_Ordered;
      cnt_H2D_data: NET_Ordered_cnt;
      D2H_request: NET_Unordered;
      D2H_response: NET_Unordered;
      H2D_request: NET_Unordered;
      H2D_response: NET_Unordered;


      g_perm: PermMonitor;
      i_cacheL1_1: OBJ_cacheL1_1;
      i_directoryL1_2: OBJ_directoryL1_2;
      i_directoryL1_1: OBJ_directoryL1_1;
      i_directoryL2: OBJ_directoryL2;
      i_cacheL1_2: OBJ_cacheL1_2;

--Backend/Murphi/MurphiModular/GenFunctions

  ----Backend/Murphi/MurphiModular/Functions/GenResetFunc
    procedure ResetMachine_cacheL1_1();
    begin
      for i:OBJSET_cacheL1_1 do
        for a:Address do
          i_cacheL1_1[i].cb[a].State := cacheL1_1_I;
          i_cacheL1_1[i].cb[a].cl := 0;
          i_cacheL1_1[i].cb[a].acksReceivedL1_1 := 0;
          i_cacheL1_1[i].cb[a].acksExpectedL1_1 := 0;

        endfor;
      endfor;
    end;

    procedure ResetMachine_directoryL1_2();
    begin
      for i:OBJSET_directoryL1_2 do
        for a:Address do
          i_directoryL1_2[i].cb[a].State := directoryL1_2_I__C__I;
          i_directoryL1_2[i].cb[a].cl := 0;
          undefine i_directoryL1_2[i].cb[a].sharersL1_2;
          undefine i_directoryL1_2[i].cb[a].ownerL1_2;
          undefine i_directoryL1_2[i].cb[a].invalidation_msg;
          undefine i_directoryL1_2[i].cb[a].cluster_req_msg;
          i_directoryL1_2[i].cb[a].acksReceivedL1_2 := 0;
          i_directoryL1_2[i].cb[a].acksExpectedL1_2 := 0;

        endfor;
      endfor;
    end;

    procedure ResetMachine_directoryL1_1();
    begin
      for i:OBJSET_directoryL1_1 do
        for a:Address do
          i_directoryL1_1[i].cb[a].State := directoryL1_1_I__C__I;
          i_directoryL1_1[i].cb[a].cl := 0;
          undefine i_directoryL1_1[i].cb[a].sharersL1_1;
          undefine i_directoryL1_1[i].cb[a].ownerL1_1;
          undefine i_directoryL1_1[i].cb[a].invalidation_msg;
          undefine i_directoryL1_1[i].cb[a].cluster_req_msg;
          i_directoryL1_1[i].cb[a].acksReceivedL1_1 := 0;
          i_directoryL1_1[i].cb[a].acksExpectedL1_1 := 0;

        endfor;
      endfor;
    end;

    procedure ResetMachine_directoryL2();
    begin
      for i:OBJSET_directoryL2 do
        for a:Address do
          i_directoryL2[i].cb[a].State := directoryL2_I;
          i_directoryL2[i].cb[a].cl := 0;
          undefine i_directoryL2[i].cb[a].cache_sharersL2;
          undefine i_directoryL2[i].cb[a].ownerL2;
          undefine i_directoryL2[i].cb[a].requesterL2;
          i_directoryL2[i].cb[a].acksReceivedL2 := 0;
          i_directoryL2[i].cb[a].acksExpectedL2 := 0;

        endfor;
      endfor;
    end;

    procedure ResetMachine_cacheL1_2();
    begin
      for i:OBJSET_cacheL1_2 do
        for a:Address do
          i_cacheL1_2[i].cb[a].State := cacheL1_2_I;
          i_cacheL1_2[i].cb[a].cl := 0;
          i_cacheL1_2[i].cb[a].acksReceivedL1_2 := 0;
          i_cacheL1_2[i].cb[a].acksExpectedL1_2 := 0;

        endfor;
      endfor;
    end;

      procedure ResetMachine_();
      begin
      ResetMachine_cacheL1_1();
      ResetMachine_directoryL1_2();
      ResetMachine_directoryL1_1();
      ResetMachine_directoryL2();
      ResetMachine_cacheL1_2();

      end;
  ----Backend/Murphi/MurphiModular/Functions/GenEventFunc
  ----Backend/Murphi/MurphiModular/Functions/GenPermFunc
    procedure Clear_perm(adr: Address; m: Machines);
    begin
      alias l_perm_set:g_perm[m][adr] do
          undefine l_perm_set;
      endalias;
    end;

    procedure Set_perm(acc_type: PermissionType; adr: Address; m: Machines);
    begin
      alias l_perm_set:g_perm[m][adr] do
      if MultiSetCount(i:l_perm_set, l_perm_set[i] = acc_type) = 0 then
          MultisetAdd(acc_type, l_perm_set);
      endif;
      endalias;
    end;

    procedure Reset_perm();
    begin
      for m:Machines do
        for adr:Address do
          Clear_perm(adr, m);
        endfor;
      endfor;
    end;


  ----Backend/Murphi/MurphiModular/Functions/GenVectorFunc
    -- .add()
    procedure AddElement_sharersL1_2(var sv:v_sharersL1_2; n:Machines);
    begin
        if MultiSetCount(i:sv, sv[i] = n) = 0 then
          MultiSetAdd(n, sv);
        endif;
    end;

    -- .del()
    procedure RemoveElement_sharersL1_2(var sv:v_sharersL1_2; n:Machines);
    begin
        if MultiSetCount(i:sv, sv[i] = n) = 1 then
          MultiSetRemovePred(i:sv, sv[i] = n);
        endif;
    end;

    -- .clear()
    procedure ClearVector_sharersL1_2(var sv:v_sharersL1_2;);
    begin
        MultiSetRemovePred(i:sv, true);
    end;

    -- .contains()
    function IsElement_sharersL1_2(var sv:v_sharersL1_2; n:Machines) : boolean;
    begin
        if MultiSetCount(i:sv, sv[i] = n) = 1 then
          return true;
        elsif MultiSetCount(i:sv, sv[i] = n) = 0 then
          return false;
        else
          Error "Multiple Entries of Sharer in SV multiset";
        endif;
      return false;
    end;

    -- .empty()
    function HasElement_sharersL1_2(var sv:v_sharersL1_2; n:Machines) : boolean;
    begin
        if MultiSetCount(i:sv, true) = 0 then
          return false;
        endif;

        return true;
    end;

    -- .count()
    function VectorCount_sharersL1_2(var sv:v_sharersL1_2) : cnt_v_sharersL1_2;
    begin
        return MultiSetCount(i:sv, true);
    end;

    -- .add()
    procedure AddElement_sharersL1_1(var sv:v_sharersL1_1; n:Machines);
    begin
        if MultiSetCount(i:sv, sv[i] = n) = 0 then
          MultiSetAdd(n, sv);
        endif;
    end;

    -- .del()
    procedure RemoveElement_sharersL1_1(var sv:v_sharersL1_1; n:Machines);
    begin
        if MultiSetCount(i:sv, sv[i] = n) = 1 then
          MultiSetRemovePred(i:sv, sv[i] = n);
        endif;
    end;

    -- .clear()
    procedure ClearVector_sharersL1_1(var sv:v_sharersL1_1;);
    begin
        MultiSetRemovePred(i:sv, true);
    end;

    -- .contains()
    function IsElement_sharersL1_1(var sv:v_sharersL1_1; n:Machines) : boolean;
    begin
        if MultiSetCount(i:sv, sv[i] = n) = 1 then
          return true;
        elsif MultiSetCount(i:sv, sv[i] = n) = 0 then
          return false;
        else
          Error "Multiple Entries of Sharer in SV multiset";
        endif;
      return false;
    end;

    -- .empty()
    function HasElement_sharersL1_1(var sv:v_sharersL1_1; n:Machines) : boolean;
    begin
        if MultiSetCount(i:sv, true) = 0 then
          return false;
        endif;

        return true;
    end;

    -- .count()
    function VectorCount_sharersL1_1(var sv:v_sharersL1_1) : cnt_v_sharersL1_1;
    begin
        return MultiSetCount(i:sv, true);
    end;

    -- .add()
    procedure AddElement_cache_sharersL2(var sv:v_cache_sharersL2; n:Machines);
    begin
        if MultiSetCount(i:sv, sv[i] = n) = 0 then
          MultiSetAdd(n, sv);
        endif;
    end;

    -- .del()
    procedure RemoveElement_cache_sharersL2(var sv:v_cache_sharersL2; n:Machines);
    begin
        if MultiSetCount(i:sv, sv[i] = n) = 1 then
          MultiSetRemovePred(i:sv, sv[i] = n);
        endif;
    end;

    -- .clear()
    procedure ClearVector_cache_sharersL2(var sv:v_cache_sharersL2;);
    begin
        MultiSetRemovePred(i:sv, true);
    end;

    -- .contains()
    function IsElement_cache_sharersL2(var sv:v_cache_sharersL2; n:Machines) : boolean;
    begin
        if MultiSetCount(i:sv, sv[i] = n) = 1 then
          return true;
        elsif MultiSetCount(i:sv, sv[i] = n) = 0 then
          return false;
        else
          Error "Multiple Entries of Sharer in SV multiset";
        endif;
      return false;
    end;

    -- .empty()
    function HasElement_cache_sharersL2(var sv:v_cache_sharersL2; n:Machines) : boolean;
    begin
        if MultiSetCount(i:sv, true) = 0 then
          return false;
        endif;

        return true;
    end;

    -- .count()
    function VectorCount_cache_sharersL2(var sv:v_cache_sharersL2) : cnt_v_cache_sharersL2;
    begin
        return MultiSetCount(i:sv, true);
    end;

  ----Backend/Murphi/MurphiModular/Functions/GenFIFOFunc
  ----Backend/Murphi/MurphiModular/Functions/GenNetworkFunc
    procedure Send_fwd(msg:Message; src: Machines;);
      Assert(cnt_fwd[msg.dst] < O_NET_MAX) "Too many messages";
      fwd[msg.dst][cnt_fwd[msg.dst]] := msg;
      cnt_fwd[msg.dst] := cnt_fwd[msg.dst] + 1;
    end;

    procedure Pop_fwd(dst:Machines;); -- Fletch: removed source (unused) to remove nested ruleset and speed up execution
    begin
      Assert (cnt_fwd[dst] > 0) "Trying to advance empty Q";
      for i := 0 to cnt_fwd[dst]-1 do
        if i < cnt_fwd[dst]-1 then
          fwd[dst][i] := fwd[dst][i+1];
        else
          undefine fwd[dst][i];
        endif;
      endfor;
      cnt_fwd[dst] := cnt_fwd[dst] - 1;
    end;

    procedure Send_resp(msg:Message; src: Machines;);
      Assert(cnt_resp[msg.dst] < O_NET_MAX) "Too many messages";
      resp[msg.dst][cnt_resp[msg.dst]] := msg;
      cnt_resp[msg.dst] := cnt_resp[msg.dst] + 1;
    end;

    procedure Pop_resp(dst:Machines;); -- Fletch: removed source (unused) to remove nested ruleset and speed up execution
    begin
      Assert (cnt_resp[dst] > 0) "Trying to advance empty Q";
      for i := 0 to cnt_resp[dst]-1 do
        if i < cnt_resp[dst]-1 then
          resp[dst][i] := resp[dst][i+1];
        else
          undefine resp[dst][i];
        endif;
      endfor;
      cnt_resp[dst] := cnt_resp[dst] - 1;
    end;

    procedure Send_req(msg:Message; src: Machines;);
      Assert(cnt_req[msg.dst] < O_NET_MAX) "Too many messages";
      req[msg.dst][cnt_req[msg.dst]] := msg;
      cnt_req[msg.dst] := cnt_req[msg.dst] + 1;
    end;

    procedure Pop_req(dst:Machines;); -- Fletch: removed source (unused) to remove nested ruleset and speed up execution
    begin
      Assert (cnt_req[dst] > 0) "Trying to advance empty Q";
      for i := 0 to cnt_req[dst]-1 do
        if i < cnt_req[dst]-1 then
          req[dst][i] := req[dst][i+1];
        else
          undefine req[dst][i];
        endif;
      endfor;
      cnt_req[dst] := cnt_req[dst] - 1;
    end;

    procedure Send_D2H_data(msg:Message; src: Machines;);
      Assert(cnt_D2H_data[msg.dst] < O_NET_MAX) "Too many messages";
      D2H_data[msg.dst][cnt_D2H_data[msg.dst]] := msg;
      cnt_D2H_data[msg.dst] := cnt_D2H_data[msg.dst] + 1;
    end;

    procedure Pop_D2H_data(dst:Machines;); -- Fletch: removed source (unused) to remove nested ruleset and speed up execution
    begin
      Assert (cnt_D2H_data[dst] > 0) "Trying to advance empty Q";
      for i := 0 to cnt_D2H_data[dst]-1 do
        if i < cnt_D2H_data[dst]-1 then
          D2H_data[dst][i] := D2H_data[dst][i+1];
        else
          undefine D2H_data[dst][i];
        endif;
      endfor;
      cnt_D2H_data[dst] := cnt_D2H_data[dst] - 1;
    end;

    procedure Send_H2D_data(msg:Message; src: Machines;);
      Assert(cnt_H2D_data[msg.dst] < O_NET_MAX) "Too many messages";
      H2D_data[msg.dst][cnt_H2D_data[msg.dst]] := msg;
      cnt_H2D_data[msg.dst] := cnt_H2D_data[msg.dst] + 1;
    end;

    procedure Pop_H2D_data(dst:Machines;); -- Fletch: removed source (unused) to remove nested ruleset and speed up execution
    begin
      Assert (cnt_H2D_data[dst] > 0) "Trying to advance empty Q";
      for i := 0 to cnt_H2D_data[dst]-1 do
        if i < cnt_H2D_data[dst]-1 then
          H2D_data[dst][i] := H2D_data[dst][i+1];
        else
          undefine H2D_data[dst][i];
        endif;
      endfor;
      cnt_H2D_data[dst] := cnt_H2D_data[dst] - 1;
    end;

    procedure Send_D2H_request(msg:Message; src: Machines;);
      Assert (MultiSetCount(i:D2H_request[msg.dst], true) < U_NET_MAX) "Too many messages";
      MultiSetAdd(msg, D2H_request[msg.dst]);
    end;

    procedure Send_D2H_response(msg:Message; src: Machines;);
      Assert (MultiSetCount(i:D2H_response[msg.dst], true) < U_NET_MAX) "Too many messages";
      MultiSetAdd(msg, D2H_response[msg.dst]);
    end;

    procedure Send_H2D_request(msg:Message; src: Machines;);
      Assert (MultiSetCount(i:H2D_request[msg.dst], true) < U_NET_MAX) "Too many messages";
      MultiSetAdd(msg, H2D_request[msg.dst]);
    end;

    procedure Send_H2D_response(msg:Message; src: Machines;);
      Assert (MultiSetCount(i:H2D_response[msg.dst], true) < U_NET_MAX) "Too many messages";
      MultiSetAdd(msg, H2D_response[msg.dst]);
    end;

    procedure Multicast_fwd_v_sharersL1_2(var msg: Message; dst_vect: v_sharersL1_2; src: Machines;);
    begin
          for n:Machines do
              if n!=msg.src then
                if MultiSetCount(i:dst_vect, dst_vect[i] = n) = 1 then
                  msg.dst := n;
                  Send_fwd(msg, src);
                endif;
              endif;
          endfor;
    end;

    procedure Multicast_fwd_v_sharersL1_1(var msg: Message; dst_vect: v_sharersL1_1; src: Machines;);
    begin
          for n:Machines do
              if n!=msg.src then
                if MultiSetCount(i:dst_vect, dst_vect[i] = n) = 1 then
                  msg.dst := n;
                  Send_fwd(msg, src);
                endif;
              endif;
          endfor;
    end;

    procedure Multicast_H2D_request_v_cache_sharersL2(var msg: Message; dst_vect: v_cache_sharersL2; src: Machines;);
    begin
          for n:Machines do
              if n!=msg.src then
                if MultiSetCount(i:dst_vect, dst_vect[i] = n) = 1 then
                  msg.dst := n;
                  Send_H2D_request(msg, src);
                endif;
              endif;
          endfor;
    end;

    function resp_network_ready(): boolean;
    begin
          for dst:Machines do
    --        for src: Machines do
              if cnt_resp[dst] >= (O_NET_MAX-7) then
                return false;
              endif;
    --        endfor;
          endfor;

          return true;
    end;
    function req_network_ready(): boolean;
    begin
          for dst:Machines do
    --        for src: Machines do
              if cnt_req[dst] >= (O_NET_MAX-7) then
                return false;
              endif;
    --        endfor;
          endfor;

          return true;
    end;
    function D2H_response_network_ready(): boolean;
    begin
          for mach:Machines do
            alias mul_set:D2H_response[mach] do
              if MultisetCount(i:mul_set, isundefined(mul_set[i].mtype)) >= (U_NET_MAX-7) then
                return false;
              endif;
            endalias;
          endfor;

          return true;
    end;
    function fwd_network_ready(): boolean;
    begin
          for dst:Machines do
    --        for src: Machines do
              if cnt_fwd[dst] >= (O_NET_MAX-7) then
                return false;
              endif;
    --        endfor;
          endfor;

          return true;
    end;
    function D2H_data_network_ready(): boolean;
    begin
          for dst:Machines do
    --        for src: Machines do
              if cnt_D2H_data[dst] >= (O_NET_MAX-7) then
                return false;
              endif;
    --        endfor;
          endfor;

          return true;
    end;
    function H2D_request_network_ready(): boolean;
    begin
          for mach:Machines do
            alias mul_set:H2D_request[mach] do
              if MultisetCount(i:mul_set, isundefined(mul_set[i].mtype)) >= (U_NET_MAX-7) then
                return false;
              endif;
            endalias;
          endfor;

          return true;
    end;
    function D2H_request_network_ready(): boolean;
    begin
          for mach:Machines do
            alias mul_set:D2H_request[mach] do
              if MultisetCount(i:mul_set, isundefined(mul_set[i].mtype)) >= (U_NET_MAX-7) then
                return false;
              endif;
            endalias;
          endfor;

          return true;
    end;
    function H2D_response_network_ready(): boolean;
    begin
          for mach:Machines do
            alias mul_set:H2D_response[mach] do
              if MultisetCount(i:mul_set, isundefined(mul_set[i].mtype)) >= (U_NET_MAX-7) then
                return false;
              endif;
            endalias;
          endfor;

          return true;
    end;
    function H2D_data_network_ready(): boolean;
    begin
          for dst:Machines do
    --        for src: Machines do
              if cnt_H2D_data[dst] >= (O_NET_MAX-7) then
                return false;
              endif;
    --        endfor;
          endfor;

          return true;
    end;
    function network_ready(): boolean;
    begin
            if !resp_network_ready() then
            return false;
          endif;


          if !req_network_ready() then
            return false;
          endif;


          if !D2H_response_network_ready() then
            return false;
          endif;


          if !req_network_ready() then
            return false;
          endif;


          if !fwd_network_ready() then
            return false;
          endif;


          if !D2H_data_network_ready() then
            return false;
          endif;


          if !fwd_network_ready() then
            return false;
          endif;


          if !resp_network_ready() then
            return false;
          endif;


          if !H2D_request_network_ready() then
            return false;
          endif;


          if !D2H_request_network_ready() then
            return false;
          endif;


          if !H2D_response_network_ready() then
            return false;
          endif;


          if !H2D_data_network_ready() then
            return false;
          endif;



      return true;
    end;

    procedure Reset_NET_();
    begin

      undefine fwd;
      for dst:Machines do
          cnt_fwd[dst] := 0;
      endfor;

      undefine D2H_data;
      for dst:Machines do
          cnt_D2H_data[dst] := 0;
      endfor;

      undefine resp;
      for dst:Machines do
          cnt_resp[dst] := 0;
      endfor;

      undefine H2D_data;
      for dst:Machines do
          cnt_H2D_data[dst] := 0;
      endfor;

      undefine req;
      for dst:Machines do
          cnt_req[dst] := 0;
      endfor;

      undefine H2D_response;

      undefine D2H_response;

      undefine H2D_request;

      undefine D2H_request;

    end;


  ----Backend/Murphi/MurphiModular/Functions/GenMessageConstrFunc
    function RequestL1_2(adr: Address; mtype: MessageType; src: Machines; dst: Machines) : Message;
    var Message: Message;
    begin
      Message.adr := adr;
      Message.mtype := mtype;
      Message.src := src;
      Message.dst := dst;
    return Message;
    end;

    function AckL1_2(adr: Address; mtype: MessageType; src: Machines; dst: Machines) : Message;
    var Message: Message;
    begin
      Message.adr := adr;
      Message.mtype := mtype;
      Message.src := src;
      Message.dst := dst;
    return Message;
    end;

    function RespL1_2(adr: Address; mtype: MessageType; src: Machines; dst: Machines; cl: ClValue) : Message;
    var Message: Message;
    begin
      Message.adr := adr;
      Message.mtype := mtype;
      Message.src := src;
      Message.dst := dst;
      Message.cl := cl;
    return Message;
    end;

    function RespAckL1_2(adr: Address; mtype: MessageType; src: Machines; dst: Machines; cl: ClValue; acksRequiredL1_2: 0..NrCachesL1_2) : Message;
    var Message: Message;
    begin
      Message.adr := adr;
      Message.mtype := mtype;
      Message.src := src;
      Message.dst := dst;
      Message.cl := cl;
      Message.acksRequiredL1_2 := acksRequiredL1_2;
    return Message;
    end;

    function RequestL1_1(adr: Address; mtype: MessageType; src: Machines; dst: Machines) : Message;
    var Message: Message;
    begin
      Message.adr := adr;
      Message.mtype := mtype;
      Message.src := src;
      Message.dst := dst;
    return Message;
    end;

    function AckL1_1(adr: Address; mtype: MessageType; src: Machines; dst: Machines) : Message;
    var Message: Message;
    begin
      Message.adr := adr;
      Message.mtype := mtype;
      Message.src := src;
      Message.dst := dst;
    return Message;
    end;

    function RespL1_1(adr: Address; mtype: MessageType; src: Machines; dst: Machines; cl: ClValue) : Message;
    var Message: Message;
    begin
      Message.adr := adr;
      Message.mtype := mtype;
      Message.src := src;
      Message.dst := dst;
      Message.cl := cl;
    return Message;
    end;

    function RespAckL1_1(adr: Address; mtype: MessageType; src: Machines; dst: Machines; cl: ClValue; acksRequiredL1_1: 0..NrCachesL1_1) : Message;
    var Message: Message;
    begin
      Message.adr := adr;
      Message.mtype := mtype;
      Message.src := src;
      Message.dst := dst;
      Message.cl := cl;
      Message.acksRequiredL1_1 := acksRequiredL1_1;
    return Message;
    end;

    function DevReqL2(adr: Address; mtype: MessageType; src: Machines; dst: Machines) : Message;
    var Message: Message;
    begin
      Message.adr := adr;
      Message.mtype := mtype;
      Message.src := src;
      Message.dst := dst;
    return Message;
    end;

    function DevRspL2(adr: Address; mtype: MessageType; src: Machines; dst: Machines) : Message;
    var Message: Message;
    begin
      Message.adr := adr;
      Message.mtype := mtype;
      Message.src := src;
      Message.dst := dst;
    return Message;
    end;

    function DataFullL2(adr: Address; mtype: MessageType; src: Machines; dst: Machines; cl: ClValue) : Message;
    var Message: Message;
    begin
      Message.adr := adr;
      Message.mtype := mtype;
      Message.src := src;
      Message.dst := dst;
      Message.cl := cl;
    return Message;
    end;

    function HostReqL2(adr: Address; mtype: MessageType; src: Machines; dst: Machines) : Message;
    var Message: Message;
    begin
      Message.adr := adr;
      Message.mtype := mtype;
      Message.src := src;
      Message.dst := dst;
    return Message;
    end;

    function HostRspL2(adr: Address; mtype: MessageType; src: Machines; dst: Machines) : Message;
    var Message: Message;
    begin
      Message.adr := adr;
      Message.mtype := mtype;
      Message.src := src;
      Message.dst := dst;
    return Message;
    end;



--Backend/Murphi/MurphiModular/GenStateMachines

  ----Backend/Murphi/MurphiModular/StateMachines/GenAccessStateMachines
    procedure FSM_Access_cacheL1_1_I_load(adr:Address; m:OBJSET_cacheL1_1);
    var msg: Message;
    begin
    alias cbe: i_cacheL1_1[m].cb[adr] do
      msg := RequestL1_1(adr, GetSL1_1, m, directoryL1_1);
      Send_req(msg, m);
      cbe.State := cacheL1_1_I_load;
    endalias;
    end;

    procedure FSM_Access_cacheL1_1_I_store(adr:Address; m:OBJSET_cacheL1_1);
    var msg: Message;
    begin
    alias cbe: i_cacheL1_1[m].cb[adr] do
      msg := RequestL1_1(adr, GetML1_1, m, directoryL1_1);
      Send_req(msg, m);
      cbe.acksReceivedL1_1 := 0;
      cbe.State := cacheL1_1_I_store;
    endalias;
    end;

    procedure FSM_Access_cacheL1_1_M_evict(adr:Address; m:OBJSET_cacheL1_1);
    var msg: Message;
    begin
    alias cbe: i_cacheL1_1[m].cb[adr] do
      msg := RespL1_1(adr, PutML1_1, m, directoryL1_1, cbe.cl);
      Send_req(msg, m);
      cbe.State := cacheL1_1_M_evict;
    endalias;
    end;

    procedure FSM_Access_cacheL1_1_M_load(adr:Address; m:OBJSET_cacheL1_1);
    begin
    alias cbe: i_cacheL1_1[m].cb[adr] do
      Set_perm(load, adr, m);cbe.State := cacheL1_1_M;
    endalias;
    end;

    procedure FSM_Access_cacheL1_1_M_store(adr:Address; m:OBJSET_cacheL1_1);
    begin
    alias cbe: i_cacheL1_1[m].cb[adr] do
      Set_perm(store, adr, m);cbe.State := cacheL1_1_M;
    endalias;
    end;

    procedure FSM_Access_cacheL1_1_S_evict(adr:Address; m:OBJSET_cacheL1_1);
    var msg: Message;
    begin
    alias cbe: i_cacheL1_1[m].cb[adr] do
      msg := RequestL1_1(adr, PutSL1_1, m, directoryL1_1);
      Send_req(msg, m);
      cbe.State := cacheL1_1_S_evict;
    endalias;
    end;

    procedure FSM_Access_cacheL1_1_S_load(adr:Address; m:OBJSET_cacheL1_1);
    begin
    alias cbe: i_cacheL1_1[m].cb[adr] do
      Set_perm(load, adr, m);cbe.State := cacheL1_1_S;
    endalias;
    end;

    procedure FSM_Access_cacheL1_1_S_store(adr:Address; m:OBJSET_cacheL1_1);
    var msg: Message;
    begin
    alias cbe: i_cacheL1_1[m].cb[adr] do
      msg := RequestL1_1(adr, GetML1_1, m, directoryL1_1);
      Send_req(msg, m);
      cbe.acksReceivedL1_1 := 0;
      cbe.State := cacheL1_1_S_store;
    endalias;
    end;

    procedure FSM_Access_cacheL1_2_I_load(adr:Address; m:OBJSET_cacheL1_2);
    var msg: Message;
    begin
    alias cbe: i_cacheL1_2[m].cb[adr] do
      msg := RequestL1_2(adr, GetSL1_2, m, directoryL1_2);
      Send_req(msg, m);
      cbe.State := cacheL1_2_I_load;
    endalias;
    end;

    procedure FSM_Access_cacheL1_2_I_store(adr:Address; m:OBJSET_cacheL1_2);
    var msg: Message;
    begin
    alias cbe: i_cacheL1_2[m].cb[adr] do
      msg := RequestL1_2(adr, GetML1_2, m, directoryL1_2);
      Send_req(msg, m);
      cbe.acksReceivedL1_2 := 0;
      cbe.State := cacheL1_2_I_store;
    endalias;
    end;

    procedure FSM_Access_cacheL1_2_M_evict(adr:Address; m:OBJSET_cacheL1_2);
    var msg: Message;
    begin
    alias cbe: i_cacheL1_2[m].cb[adr] do
      msg := RespL1_2(adr, PutML1_2, m, directoryL1_2, cbe.cl);
      Send_req(msg, m);
      cbe.State := cacheL1_2_M_evict;
    endalias;
    end;

    procedure FSM_Access_cacheL1_2_M_load(adr:Address; m:OBJSET_cacheL1_2);
    begin
    alias cbe: i_cacheL1_2[m].cb[adr] do
      Set_perm(load, adr, m);cbe.State := cacheL1_2_M;
    endalias;
    end;

    procedure FSM_Access_cacheL1_2_M_store(adr:Address; m:OBJSET_cacheL1_2);
    begin
    alias cbe: i_cacheL1_2[m].cb[adr] do
      Set_perm(store, adr, m);cbe.State := cacheL1_2_M;
    endalias;
    end;

    procedure FSM_Access_cacheL1_2_S_evict(adr:Address; m:OBJSET_cacheL1_2);
    var msg: Message;
    begin
    alias cbe: i_cacheL1_2[m].cb[adr] do
      msg := RequestL1_2(adr, PutSL1_2, m, directoryL1_2);
      Send_req(msg, m);
      cbe.State := cacheL1_2_S_evict;
    endalias;
    end;

    procedure FSM_Access_cacheL1_2_S_load(adr:Address; m:OBJSET_cacheL1_2);
    begin
    alias cbe: i_cacheL1_2[m].cb[adr] do
      Set_perm(load, adr, m);cbe.State := cacheL1_2_S;
    endalias;
    end;

    procedure FSM_Access_cacheL1_2_S_store(adr:Address; m:OBJSET_cacheL1_2);
    var msg: Message;
    begin
    alias cbe: i_cacheL1_2[m].cb[adr] do
      msg := RequestL1_2(adr, GetML1_2, m, directoryL1_2);
      Send_req(msg, m);
      cbe.acksReceivedL1_2 := 0;
      cbe.State := cacheL1_2_S_store;
    endalias;
    end;

    procedure FSM_Access_directoryL1_1_I__C__M_evict(adr:Address; m:OBJSET_directoryL1_1);
    var msg_GetML1_1: Message;
    var msg_GetM_Ack_DL1_1: Message;
    var msg_PutML1_1: Message;
    var msg_Put_AckL1_1: Message;
    var msg: Message;
    begin
    alias cbe: i_directoryL1_1[m].cb[adr] do
      msg_GetML1_1 := RequestL1_1(adr, GetML1_1, m, m);
      cbe.acksReceivedL1_1 := 0;
      msg_GetM_Ack_DL1_1 := RespL1_1(adr, GetM_Ack_DL1_1, m, msg_GetML1_1.src, cbe.cl);
      cbe.ownerL1_1 := msg_GetML1_1.src;
      cbe.cl := msg_GetM_Ack_DL1_1.cl;
      Set_perm(store, adr, m);msg_PutML1_1 := RespL1_1(adr, PutML1_1, m, m, cbe.cl);
      msg_Put_AckL1_1 := AckL1_1(adr, Put_AckL1_1, m, msg_PutML1_1.src);
      if (cbe.ownerL1_1 = msg_PutML1_1.src) then
      cbe.cl := msg_PutML1_1.cl;
      undefine cbe.ownerL1_1;
      msg := DevReqL2(adr, DirtyEvictL2, m, directoryL2);
      Send_D2H_request(msg, m);
      cbe.State := directoryL1_1_mevict__I__C__M_evict;
      endif
    endalias;
    end;

    procedure FSM_Access_directoryL1_1_I__C__S_evict(adr:Address; m:OBJSET_directoryL1_1);
    var msg_GetML1_1: Message;
    var msg_GetM_Ack_DL1_1: Message;
    var msg_PutML1_1: Message;
    var msg_Put_AckL1_1: Message;
    var msg: Message;
    begin
    alias cbe: i_directoryL1_1[m].cb[adr] do
      msg_GetML1_1 := RequestL1_1(adr, GetML1_1, m, m);
      cbe.acksReceivedL1_1 := 0;
      msg_GetM_Ack_DL1_1 := RespL1_1(adr, GetM_Ack_DL1_1, m, msg_GetML1_1.src, cbe.cl);
      cbe.ownerL1_1 := msg_GetML1_1.src;
      cbe.cl := msg_GetM_Ack_DL1_1.cl;
      Set_perm(store, adr, m);msg_PutML1_1 := RespL1_1(adr, PutML1_1, m, m, cbe.cl);
      msg_Put_AckL1_1 := AckL1_1(adr, Put_AckL1_1, m, msg_PutML1_1.src);
      if (cbe.ownerL1_1 = msg_PutML1_1.src) then
      cbe.cl := msg_PutML1_1.cl;
      undefine cbe.ownerL1_1;
      msg := DevReqL2(adr, CleanEvictNoDataL2, m, directoryL2);
      Send_D2H_request(msg, m);
      cbe.State := directoryL1_1_mevict__I__C__S_evict;
      endif
    endalias;
    end;

    procedure FSM_Access_directoryL1_1_M__C__M_evict(adr:Address; m:OBJSET_directoryL1_1);
    var msg_GetML1_1: Message;
    var msg: Message;
    begin
    alias cbe: i_directoryL1_1[m].cb[adr] do
      msg_GetML1_1 := RequestL1_1(adr, GetML1_1, m, m);
      cbe.acksReceivedL1_1 := 0;
      msg := RequestL1_1(adr, Fwd_GetML1_1, msg_GetML1_1.src, cbe.ownerL1_1);
      Send_fwd(msg, m);
      cbe.ownerL1_1 := msg_GetML1_1.src;
      cbe.State := directoryL1_1_mevict__dM_x_pI_store__C__M;
    endalias;
    end;

    procedure FSM_Access_directoryL1_1_S__C__M_evict(adr:Address; m:OBJSET_directoryL1_1);
    var msg_GetML1_1: Message;
    var msg_GetM_Ack_ADL1_1: Message;
    var msg: Message;
    begin
    alias cbe: i_directoryL1_1[m].cb[adr] do
      msg_GetML1_1 := RequestL1_1(adr, GetML1_1, m, m);
      cbe.acksReceivedL1_1 := 0;
      if !(IsElement_sharersL1_1(cbe.sharersL1_1, msg_GetML1_1.src)  ) then
      if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
      msg_GetM_Ack_ADL1_1 := RespAckL1_1(adr, GetM_Ack_ADL1_1, m, msg_GetML1_1.src, cbe.cl, VectorCount_sharersL1_1(cbe.sharersL1_1));
      msg := AckL1_1(adr, InvL1_1, msg_GetML1_1.src, msg_GetML1_1.src);
      Multicast_fwd_v_sharersL1_1(msg, cbe.sharersL1_1, m);
      cbe.ownerL1_1 := msg_GetML1_1.src;
      ClearVector_sharersL1_1(cbe.sharersL1_1);
      cbe.cl := msg_GetM_Ack_ADL1_1.cl;
      cbe.acksExpectedL1_1 := msg_GetM_Ack_ADL1_1.acksRequiredL1_1;
      if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
      cbe.State := directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__M;
      endif
      endif
      endif
    endalias;
    end;

    procedure FSM_Access_directoryL1_1_S__C__S_evict(adr:Address; m:OBJSET_directoryL1_1);
    var msg_GetML1_1: Message;
    var msg_GetM_Ack_ADL1_1: Message;
    var msg: Message;
    begin
    alias cbe: i_directoryL1_1[m].cb[adr] do
      msg_GetML1_1 := RequestL1_1(adr, GetML1_1, m, m);
      cbe.acksReceivedL1_1 := 0;
      if !(IsElement_sharersL1_1(cbe.sharersL1_1, msg_GetML1_1.src)  ) then
      if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
      msg_GetM_Ack_ADL1_1 := RespAckL1_1(adr, GetM_Ack_ADL1_1, m, msg_GetML1_1.src, cbe.cl, VectorCount_sharersL1_1(cbe.sharersL1_1));
      msg := AckL1_1(adr, InvL1_1, msg_GetML1_1.src, msg_GetML1_1.src);
      Multicast_fwd_v_sharersL1_1(msg, cbe.sharersL1_1, m);
      cbe.ownerL1_1 := msg_GetML1_1.src;
      ClearVector_sharersL1_1(cbe.sharersL1_1);
      cbe.cl := msg_GetM_Ack_ADL1_1.cl;
      cbe.acksExpectedL1_1 := msg_GetM_Ack_ADL1_1.acksRequiredL1_1;
      if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
      cbe.State := directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__S;
      endif
      endif
      endif
    endalias;
    end;

    procedure FSM_Access_directoryL1_2_I__C__M_evict(adr:Address; m:OBJSET_directoryL1_2);
    var msg_GetML1_2: Message;
    var msg_GetM_Ack_DL1_2: Message;
    var msg_PutML1_2: Message;
    var msg_Put_AckL1_2: Message;
    var msg: Message;
    begin
    alias cbe: i_directoryL1_2[m].cb[adr] do
      msg_GetML1_2 := RequestL1_2(adr, GetML1_2, m, m);
      cbe.acksReceivedL1_2 := 0;
      msg_GetM_Ack_DL1_2 := RespL1_2(adr, GetM_Ack_DL1_2, m, msg_GetML1_2.src, cbe.cl);
      cbe.ownerL1_2 := msg_GetML1_2.src;
      cbe.cl := msg_GetM_Ack_DL1_2.cl;
      Set_perm(store, adr, m);msg_PutML1_2 := RespL1_2(adr, PutML1_2, m, m, cbe.cl);
      msg_Put_AckL1_2 := AckL1_2(adr, Put_AckL1_2, m, msg_PutML1_2.src);
      if (cbe.ownerL1_2 = msg_PutML1_2.src) then
      cbe.cl := msg_PutML1_2.cl;
      undefine cbe.ownerL1_2;
      msg := DevReqL2(adr, DirtyEvictL2, m, directoryL2);
      Send_D2H_request(msg, m);
      cbe.State := directoryL1_2_mevict__I__C__M_evict;
      endif
    endalias;
    end;

    procedure FSM_Access_directoryL1_2_I__C__S_evict(adr:Address; m:OBJSET_directoryL1_2);
    var msg_GetML1_2: Message;
    var msg_GetM_Ack_DL1_2: Message;
    var msg_PutML1_2: Message;
    var msg_Put_AckL1_2: Message;
    var msg: Message;
    begin
    alias cbe: i_directoryL1_2[m].cb[adr] do
      msg_GetML1_2 := RequestL1_2(adr, GetML1_2, m, m);
      cbe.acksReceivedL1_2 := 0;
      msg_GetM_Ack_DL1_2 := RespL1_2(adr, GetM_Ack_DL1_2, m, msg_GetML1_2.src, cbe.cl);
      cbe.ownerL1_2 := msg_GetML1_2.src;
      cbe.cl := msg_GetM_Ack_DL1_2.cl;
      Set_perm(store, adr, m);msg_PutML1_2 := RespL1_2(adr, PutML1_2, m, m, cbe.cl);
      msg_Put_AckL1_2 := AckL1_2(adr, Put_AckL1_2, m, msg_PutML1_2.src);
      if (cbe.ownerL1_2 = msg_PutML1_2.src) then
      cbe.cl := msg_PutML1_2.cl;
      undefine cbe.ownerL1_2;
      msg := DevReqL2(adr, CleanEvictNoDataL2, m, directoryL2);
      Send_D2H_request(msg, m);
      cbe.State := directoryL1_2_mevict__I__C__S_evict;
      endif
    endalias;
    end;

    procedure FSM_Access_directoryL1_2_M__C__M_evict(adr:Address; m:OBJSET_directoryL1_2);
    var msg_GetML1_2: Message;
    var msg: Message;
    begin
    alias cbe: i_directoryL1_2[m].cb[adr] do
      msg_GetML1_2 := RequestL1_2(adr, GetML1_2, m, m);
      cbe.acksReceivedL1_2 := 0;
      msg := RequestL1_2(adr, Fwd_GetML1_2, msg_GetML1_2.src, cbe.ownerL1_2);
      Send_fwd(msg, m);
      cbe.ownerL1_2 := msg_GetML1_2.src;
      cbe.State := directoryL1_2_mevict__dM_x_pI_store__C__M;
    endalias;
    end;

    procedure FSM_Access_directoryL1_2_S__C__M_evict(adr:Address; m:OBJSET_directoryL1_2);
    var msg_GetML1_2: Message;
    var msg_GetM_Ack_ADL1_2: Message;
    var msg: Message;
    begin
    alias cbe: i_directoryL1_2[m].cb[adr] do
      msg_GetML1_2 := RequestL1_2(adr, GetML1_2, m, m);
      cbe.acksReceivedL1_2 := 0;
      if !(IsElement_sharersL1_2(cbe.sharersL1_2, msg_GetML1_2.src)  ) then
      if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
      msg_GetM_Ack_ADL1_2 := RespAckL1_2(adr, GetM_Ack_ADL1_2, m, msg_GetML1_2.src, cbe.cl, VectorCount_sharersL1_2(cbe.sharersL1_2));
      msg := AckL1_2(adr, InvL1_2, msg_GetML1_2.src, msg_GetML1_2.src);
      Multicast_fwd_v_sharersL1_2(msg, cbe.sharersL1_2, m);
      cbe.ownerL1_2 := msg_GetML1_2.src;
      ClearVector_sharersL1_2(cbe.sharersL1_2);
      cbe.cl := msg_GetM_Ack_ADL1_2.cl;
      cbe.acksExpectedL1_2 := msg_GetM_Ack_ADL1_2.acksRequiredL1_2;
      if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
      cbe.State := directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__M;
      endif
      endif
      endif
    endalias;
    end;

    procedure FSM_Access_directoryL1_2_S__C__S_evict(adr:Address; m:OBJSET_directoryL1_2);
    var msg_GetML1_2: Message;
    var msg_GetM_Ack_ADL1_2: Message;
    var msg: Message;
    begin
    alias cbe: i_directoryL1_2[m].cb[adr] do
      msg_GetML1_2 := RequestL1_2(adr, GetML1_2, m, m);
      cbe.acksReceivedL1_2 := 0;
      if !(IsElement_sharersL1_2(cbe.sharersL1_2, msg_GetML1_2.src)  ) then
      if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
      msg_GetM_Ack_ADL1_2 := RespAckL1_2(adr, GetM_Ack_ADL1_2, m, msg_GetML1_2.src, cbe.cl, VectorCount_sharersL1_2(cbe.sharersL1_2));
      msg := AckL1_2(adr, InvL1_2, msg_GetML1_2.src, msg_GetML1_2.src);
      Multicast_fwd_v_sharersL1_2(msg, cbe.sharersL1_2, m);
      cbe.ownerL1_2 := msg_GetML1_2.src;
      ClearVector_sharersL1_2(cbe.sharersL1_2);
      cbe.cl := msg_GetM_Ack_ADL1_2.cl;
      cbe.acksExpectedL1_2 := msg_GetM_Ack_ADL1_2.acksRequiredL1_2;
      if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
      cbe.State := directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__S;
      endif
      endif
      endif
    endalias;
    end;

  ----Backend/Murphi/MurphiModular/StateMachines/GenMessageStateMachines
    function FSM_MSG_cacheL1_1(inmsg:Message; m:OBJSET_cacheL1_1) : boolean;
    var msg: Message;
    begin
      alias adr: inmsg.adr do
      alias cbe: i_cacheL1_1[m].cb[adr] do
    switch cbe.State
      case cacheL1_1_I:
      switch inmsg.mtype
        else return false;
      endswitch;

      case cacheL1_1_I_load:
      switch inmsg.mtype
        case GetS_AckL1_1:
          cbe.cl := inmsg.cl;
          Set_perm(load, adr, m);
          Clear_perm(adr, m); Set_perm(load, adr, m);
          cbe.State := cacheL1_1_S;
          return true;

        else return false;
      endswitch;

      case cacheL1_1_I_store:
      switch inmsg.mtype
        case GetM_Ack_ADL1_1:
          cbe.cl := inmsg.cl;
          cbe.acksExpectedL1_1 := inmsg.acksRequiredL1_1;
          if (cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            cbe.acksReceivedL1_1 := 0;
            cbe.acksExpectedL1_1 := 0;
            Set_perm(store, adr, m);
            Clear_perm(adr, m); Set_perm(store, adr, m); Set_perm(load, adr, m);
            cbe.State := cacheL1_1_M;
            return true;
          endif;
          if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            Clear_perm(adr, m);
            cbe.State := cacheL1_1_I_store_GetM_Ack_AD;
            return true;
          endif;

        case GetM_Ack_DL1_1:
          cbe.cl := inmsg.cl;
          Set_perm(store, adr, m);
          Clear_perm(adr, m); Set_perm(store, adr, m); Set_perm(load, adr, m);
          cbe.State := cacheL1_1_M;
          return true;

        case Inv_AckL1_1:
          cbe.acksReceivedL1_1 := cbe.acksReceivedL1_1+1;
          Clear_perm(adr, m);
          cbe.State := cacheL1_1_I_store;
          return true;

        else return false;
      endswitch;

      case cacheL1_1_I_store_GetM_Ack_AD:
      switch inmsg.mtype
        case Inv_AckL1_1:
          cbe.acksReceivedL1_1 := cbe.acksReceivedL1_1+1;
          if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            Clear_perm(adr, m);
            cbe.State := cacheL1_1_I_store_GetM_Ack_AD;
            return true;
          endif;
          if (cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            cbe.acksReceivedL1_1 := 0;
            cbe.acksExpectedL1_1 := 0;
            Set_perm(store, adr, m);
            Clear_perm(adr, m); Set_perm(store, adr, m); Set_perm(load, adr, m);
            cbe.State := cacheL1_1_M;
            return true;
          endif;

        else return false;
      endswitch;

      case cacheL1_1_M:
      switch inmsg.mtype
        case Fwd_GetML1_1:
          msg := RespL1_1(adr,GetM_Ack_DL1_1,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m);
          cbe.State := cacheL1_1_I;
          return true;

        case Fwd_GetSL1_1:
          msg := RespL1_1(adr,GetS_AckL1_1,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          msg := RespL1_1(adr,WBL1_1,m,directoryL1_1,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m); Set_perm(load, adr, m);
          cbe.State := cacheL1_1_S;
          return true;

        else return false;
      endswitch;

      case cacheL1_1_M_evict:
      switch inmsg.mtype
        case Fwd_GetML1_1:
          msg := RespL1_1(adr,GetM_Ack_DL1_1,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m);
          cbe.State := cacheL1_1_M_evict_x_I;
          return true;

        case Fwd_GetSL1_1:
          msg := RespL1_1(adr,GetS_AckL1_1,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          msg := RespL1_1(adr,WBL1_1,m,directoryL1_1,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m);
          cbe.State := cacheL1_1_S_evict;
          return true;

        case Put_AckL1_1:
          Clear_perm(adr, m);
          cbe.State := cacheL1_1_I;
          return true;

        else return false;
      endswitch;

      case cacheL1_1_M_evict_x_I:
      switch inmsg.mtype
        case Put_AckL1_1:
          Clear_perm(adr, m);
          cbe.State := cacheL1_1_I;
          return true;

        else return false;
      endswitch;

      case cacheL1_1_S:
      switch inmsg.mtype
        case InvL1_1:
          msg := RespL1_1(adr,Inv_AckL1_1,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m);
          cbe.State := cacheL1_1_I;
          return true;

        else return false;
      endswitch;

      case cacheL1_1_S_evict:
      switch inmsg.mtype
        case InvL1_1:
          msg := RespL1_1(adr,Inv_AckL1_1,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m);
          cbe.State := cacheL1_1_S_evict_x_I;
          return true;

        case Put_AckL1_1:
          Clear_perm(adr, m);
          cbe.State := cacheL1_1_I;
          return true;

        else return false;
      endswitch;

      case cacheL1_1_S_evict_x_I:
      switch inmsg.mtype
        case Put_AckL1_1:
          Clear_perm(adr, m);
          cbe.State := cacheL1_1_I;
          return true;

        else return false;
      endswitch;

      case cacheL1_1_S_store:
      switch inmsg.mtype
        case GetM_Ack_ADL1_1:
          cbe.acksExpectedL1_1 := inmsg.acksRequiredL1_1;
          if (cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            cbe.acksReceivedL1_1 := 0;
            cbe.acksExpectedL1_1 := 0;
            Set_perm(store, adr, m);
            Clear_perm(adr, m); Set_perm(store, adr, m); Set_perm(load, adr, m);
            cbe.State := cacheL1_1_M;
            return true;
          endif;
          if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            Clear_perm(adr, m);
            cbe.State := cacheL1_1_S_store_GetM_Ack_AD;
            return true;
          endif;

        case GetM_Ack_DL1_1:
          Set_perm(store, adr, m);
          Clear_perm(adr, m); Set_perm(store, adr, m); Set_perm(load, adr, m);
          cbe.State := cacheL1_1_M;
          return true;

        case InvL1_1:
          msg := RespL1_1(adr,Inv_AckL1_1,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m);
          cbe.State := cacheL1_1_I_store;
          return true;

        case Inv_AckL1_1:
          cbe.acksReceivedL1_1 := cbe.acksReceivedL1_1+1;
          Clear_perm(adr, m);
          cbe.State := cacheL1_1_S_store;
          return true;

        else return false;
      endswitch;

      case cacheL1_1_S_store_GetM_Ack_AD:
      switch inmsg.mtype
        case Inv_AckL1_1:
          cbe.acksReceivedL1_1 := cbe.acksReceivedL1_1+1;
          if (cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            cbe.acksReceivedL1_1 := 0;
            cbe.acksExpectedL1_1 := 0;
            Set_perm(store, adr, m);
            Clear_perm(adr, m); Set_perm(store, adr, m); Set_perm(load, adr, m);
            cbe.State := cacheL1_1_M;
            return true;
          endif;
          if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            Clear_perm(adr, m);
            cbe.State := cacheL1_1_S_store_GetM_Ack_AD;
            return true;
          endif;

        else return false;
      endswitch;

    endswitch;
    endalias;
    endalias;
    return false;
    end;

    function FSM_MSG_directoryL1_2(inmsg:Message; m:OBJSET_directoryL1_2) : boolean;
    var msg: Message;
    var msg_GetSL1_2: Message;
    var msg_GetS_AckL1_2: Message;
    var msg_PutSL1_2: Message;
    var msg_Put_AckL1_2: Message;
    var msg1: Message;
    var msg_GetML1_2: Message;
    var msg_GetM_Ack_DL1_2: Message;
    var msg_PutML1_2: Message;
    var msg_GetM_Ack_ADL1_2: Message;
    var msg2: Message;
    var msg3: Message;
    begin
      alias adr: inmsg.adr do
      alias cbe: i_directoryL1_2[m].cb[adr] do
    switch cbe.State
      case directoryL1_2_I__C__I:
      switch inmsg.mtype
        case GetML1_2:
          cbe.cluster_req_msg := inmsg;
          msg := DevReqL2(adr,RdOwnL2,m,directoryL2);
          Send_D2H_request(msg, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mGetML1_2__I__C__I_store;
          return true;

        case GetSL1_2:
          cbe.cluster_req_msg := inmsg;
          msg := DevReqL2(adr,RdSharedL2,m,directoryL2);
          Send_D2H_request(msg, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mGetSL1_2__I__C__I_load;
          return true;

        case PutML1_2:
          msg := AckL1_2(adr,Put_AckL1_2,m,inmsg.src);
          Send_fwd(msg, m);
          if !(cbe.ownerL1_2 = inmsg.src) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__I;
            return true;
          endif;
          if (cbe.ownerL1_2 = inmsg.src) then
            cbe.cl := inmsg.cl;
            undefine cbe.ownerL1_2;
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__I;
            return true;
          endif;

        case PutSL1_2:
          msg := AckL1_2(adr,Put_AckL1_2,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_2(cbe.sharersL1_2, inmsg.src);
          if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__I;
            return true;
          endif;
          if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__I;
            return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_I__C__M:
      switch inmsg.mtype
        case GetML1_2:
          cbe.cluster_req_msg := inmsg;
          msg := RespL1_2(adr,GetM_Ack_DL1_2,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          cbe.ownerL1_2 := cbe.cluster_req_msg.src;
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_M__C__M;
          return true;

        case GetSL1_2:
          cbe.cluster_req_msg := inmsg;
          AddElement_sharersL1_2(cbe.sharersL1_2, cbe.cluster_req_msg.src);
          msg := RespL1_2(adr,GetS_AckL1_2,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_S__C__M;
          return true;

        case PutML1_2:
          msg := AckL1_2(adr,Put_AckL1_2,m,inmsg.src);
          Send_fwd(msg, m);
          if (cbe.ownerL1_2 = inmsg.src) then
            cbe.cl := inmsg.cl;
            undefine cbe.ownerL1_2;
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__M;
            return true;
          endif;
          if !(cbe.ownerL1_2 = inmsg.src) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__M;
            return true;
          endif;

        case PutSL1_2:
          msg := AckL1_2(adr,Put_AckL1_2,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_2(cbe.sharersL1_2, inmsg.src);
          if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__M;
            return true;
          endif;
          if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__M;
            return true;
          endif;

        case SnpDataL2:
          cbe.invalidation_msg := inmsg;
          msg_GetSL1_2 := RequestL1_2(adr,GetSL1_2,m,m);
          AddElement_sharersL1_2(cbe.sharersL1_2, msg_GetSL1_2.src);
          msg_GetS_AckL1_2 := RespL1_2(adr,GetS_AckL1_2,m,msg_GetSL1_2.src,cbe.cl);
          cbe.cl := msg_GetS_AckL1_2.cl;
          Set_perm(load, adr, m);
          msg_PutSL1_2 := RequestL1_2(adr,PutSL1_2,m,m);
          msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutSL1_2.src);
          RemoveElement_sharersL1_2(cbe.sharersL1_2, msg_PutSL1_2.src);
          if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
          msg := DevRspL2(adr,RspSFwdML2,cbe.invalidation_msg.src,directoryL2);
          Send_D2H_response(msg, m);
          msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
          Send_D2H_data(msg1, m);
          undefine cbe.invalidation_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_I__C__S;
          return true;
          endif;

        case SnpInvML2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_2 := RequestL1_2(adr,GetML1_2,m,m);
          cbe.acksReceivedL1_2 := 0;
          msg_GetM_Ack_DL1_2 := RespL1_2(adr,GetM_Ack_DL1_2,m,msg_GetML1_2.src,cbe.cl);
          cbe.ownerL1_2 := msg_GetML1_2.src;
          cbe.cl := msg_GetM_Ack_DL1_2.cl;
          Set_perm(store, adr, m);
          msg_PutML1_2 := RespL1_2(adr,PutML1_2,m,m,cbe.cl);
          msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutML1_2.src);
          if (cbe.ownerL1_2 = msg_PutML1_2.src) then
          cbe.cl := msg_PutML1_2.cl;
          undefine cbe.ownerL1_2;
          msg := DevRspL2(adr,RspIFwdML2,cbe.invalidation_msg.src,directoryL2);
          Send_D2H_response(msg, m);
          msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
          Send_D2H_data(msg1, m);
          undefine cbe.invalidation_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_I__C__I;
          return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_I__C__S:
      switch inmsg.mtype
        case GetML1_2:
          cbe.cluster_req_msg := inmsg;
          msg := DevReqL2(adr,RdOwnL2,m,directoryL2);
          Send_D2H_request(msg, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mGetML1_2__I__C__S_store;
          return true;

        case GetSL1_2:
          cbe.cluster_req_msg := inmsg;
          AddElement_sharersL1_2(cbe.sharersL1_2, cbe.cluster_req_msg.src);
          msg := RespL1_2(adr,GetS_AckL1_2,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_S__C__S;
          return true;

        case PutML1_2:
          msg := AckL1_2(adr,Put_AckL1_2,m,inmsg.src);
          Send_fwd(msg, m);
          if (cbe.ownerL1_2 = inmsg.src) then
            cbe.cl := inmsg.cl;
            undefine cbe.ownerL1_2;
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__S;
            return true;
          endif;
          if !(cbe.ownerL1_2 = inmsg.src) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__S;
            return true;
          endif;

        case PutSL1_2:
          msg := AckL1_2(adr,Put_AckL1_2,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_2(cbe.sharersL1_2, inmsg.src);
          if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__S;
            return true;
          endif;
          if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__S;
            return true;
          endif;

        case SnpInvSL2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_2 := RequestL1_2(adr,GetML1_2,m,m);
          cbe.acksReceivedL1_2 := 0;
          msg_GetM_Ack_DL1_2 := RespL1_2(adr,GetM_Ack_DL1_2,m,msg_GetML1_2.src,cbe.cl);
          cbe.ownerL1_2 := msg_GetML1_2.src;
          cbe.cl := msg_GetM_Ack_DL1_2.cl;
          Set_perm(store, adr, m);
          msg_PutML1_2 := RespL1_2(adr,PutML1_2,m,m,cbe.cl);
          msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutML1_2.src);
          if (cbe.ownerL1_2 = msg_PutML1_2.src) then
          cbe.cl := msg_PutML1_2.cl;
          undefine cbe.ownerL1_2;
          msg := DevRspL2(adr,RspIHitSEL2,m,directoryL2);
          Send_D2H_response(msg, m);
          undefine cbe.invalidation_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_I__C__I;
          return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_M__C__M:
      switch inmsg.mtype
        case GetML1_2:
          cbe.cluster_req_msg := inmsg;
          msg := RequestL1_2(adr,Fwd_GetML1_2,cbe.cluster_req_msg.src,cbe.ownerL1_2);
          Send_fwd(msg, m);
          cbe.ownerL1_2 := cbe.cluster_req_msg.src;
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_M__C__M;
          return true;

        case GetSL1_2:
          cbe.cluster_req_msg := inmsg;
          msg := RequestL1_2(adr,Fwd_GetSL1_2,cbe.cluster_req_msg.src,cbe.ownerL1_2);
          Send_fwd(msg, m);
          AddElement_sharersL1_2(cbe.sharersL1_2, cbe.cluster_req_msg.src);
          AddElement_sharersL1_2(cbe.sharersL1_2, cbe.ownerL1_2);
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mGetSL1_2__M_GetS__C__M;
          return true;

        case PutML1_2:
          msg := AckL1_2(adr,Put_AckL1_2,m,inmsg.src);
          Send_fwd(msg, m);
          if !(cbe.ownerL1_2 = inmsg.src) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_M__C__M;
            return true;
          endif;
          if (cbe.ownerL1_2 = inmsg.src) then
            cbe.cl := inmsg.cl;
            undefine cbe.ownerL1_2;
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__M;
            return true;
          endif;

        case PutSL1_2:
          msg := AckL1_2(adr,Put_AckL1_2,m,inmsg.src);
          Send_fwd(msg, m);
          if !(cbe.ownerL1_2 = inmsg.src) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_M__C__M;
            return true;
          endif;
          if (cbe.ownerL1_2 = inmsg.src) then
            cbe.cl := inmsg.cl;
            undefine cbe.ownerL1_2;
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__M;
            return true;
          endif;

        case SnpDataL2:
          cbe.invalidation_msg := inmsg;
          msg_GetSL1_2 := RequestL1_2(adr,GetSL1_2,m,m);
          msg := RequestL1_2(adr,Fwd_GetSL1_2,msg_GetSL1_2.src,cbe.ownerL1_2);
          Send_fwd(msg, m);
          AddElement_sharersL1_2(cbe.sharersL1_2, msg_GetSL1_2.src);
          AddElement_sharersL1_2(cbe.sharersL1_2, cbe.ownerL1_2);
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mSnpDataL2__dM_GetS_x_pI_load__C__M;
          return true;

        case SnpInvML2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_2 := RequestL1_2(adr,GetML1_2,m,m);
          cbe.acksReceivedL1_2 := 0;
          msg := RequestL1_2(adr,Fwd_GetML1_2,msg_GetML1_2.src,cbe.ownerL1_2);
          Send_fwd(msg, m);
          cbe.ownerL1_2 := msg_GetML1_2.src;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mSnpInvML2__dM_x_pI_store__C__M;
          return true;

        else return false;
      endswitch;

      case directoryL1_2_S__C__M:
      switch inmsg.mtype
        case GetML1_2:
          cbe.cluster_req_msg := inmsg;
          if !(IsElement_sharersL1_2(cbe.sharersL1_2, cbe.cluster_req_msg.src)) then
            if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
              msg := RespL1_2(adr,GetM_Ack_DL1_2,m,cbe.cluster_req_msg.src,cbe.cl);
              Send_resp(msg, m);
              cbe.ownerL1_2 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_2(cbe.sharersL1_2);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_2_M__C__M;
              return true;
            endif;
            if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
              msg := RespAckL1_2(adr,GetM_Ack_ADL1_2,m,cbe.cluster_req_msg.src,cbe.cl,VectorCount_sharersL1_2(cbe.sharersL1_2));
              Send_resp(msg, m);
              msg := AckL1_2(adr,InvL1_2,cbe.cluster_req_msg.src,cbe.cluster_req_msg.src);
              Multicast_fwd_v_sharersL1_2(msg, cbe.sharersL1_2, m);
              cbe.ownerL1_2 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_2(cbe.sharersL1_2);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_2_M__C__M;
              return true;
            endif;
          endif;
          if (IsElement_sharersL1_2(cbe.sharersL1_2, cbe.cluster_req_msg.src)) then
            RemoveElement_sharersL1_2(cbe.sharersL1_2, cbe.cluster_req_msg.src);
            if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
              msg := RespAckL1_2(adr,GetM_Ack_ADL1_2,m,cbe.cluster_req_msg.src,cbe.cl,VectorCount_sharersL1_2(cbe.sharersL1_2));
              Send_resp(msg, m);
              msg := AckL1_2(adr,InvL1_2,cbe.cluster_req_msg.src,cbe.cluster_req_msg.src);
              Multicast_fwd_v_sharersL1_2(msg, cbe.sharersL1_2, m);
              cbe.ownerL1_2 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_2(cbe.sharersL1_2);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_2_M__C__M;
              return true;
            endif;
            if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
              msg := RespL1_2(adr,GetM_Ack_DL1_2,m,cbe.cluster_req_msg.src,cbe.cl);
              Send_resp(msg, m);
              cbe.ownerL1_2 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_2(cbe.sharersL1_2);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_2_M__C__M;
              return true;
            endif;
          endif;

        case GetSL1_2:
          cbe.cluster_req_msg := inmsg;
          AddElement_sharersL1_2(cbe.sharersL1_2, cbe.cluster_req_msg.src);
          msg := RespL1_2(adr,GetS_AckL1_2,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_S__C__M;
          return true;

        case PutML1_2:
          msg := AckL1_2(adr,Put_AckL1_2,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_2(cbe.sharersL1_2, inmsg.src);
          if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__M;
            return true;
          endif;
          if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_S__C__M;
            return true;
          endif;

        case PutSL1_2:
          msg := AckL1_2(adr,Put_AckL1_2,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_2(cbe.sharersL1_2, inmsg.src);
          if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__M;
            return true;
          endif;
          if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_S__C__M;
            return true;
          endif;

        case SnpDataL2:
          cbe.invalidation_msg := inmsg;
          msg_GetSL1_2 := RequestL1_2(adr,GetSL1_2,m,m);
          AddElement_sharersL1_2(cbe.sharersL1_2, msg_GetSL1_2.src);
          msg_GetS_AckL1_2 := RespL1_2(adr,GetS_AckL1_2,m,msg_GetSL1_2.src,cbe.cl);
          cbe.cl := msg_GetS_AckL1_2.cl;
          Set_perm(load, adr, m);
          msg_PutSL1_2 := RequestL1_2(adr,PutSL1_2,m,m);
          msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutSL1_2.src);
          RemoveElement_sharersL1_2(cbe.sharersL1_2, msg_PutSL1_2.src);
          if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
          msg := DevRspL2(adr,RspSFwdML2,cbe.invalidation_msg.src,directoryL2);
          Send_D2H_response(msg, m);
          msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
          Send_D2H_data(msg1, m);
          undefine cbe.invalidation_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_S__C__S;
          return true;
          endif;

        case SnpInvML2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_2 := RequestL1_2(adr,GetML1_2,m,m);
          cbe.acksReceivedL1_2 := 0;
          if !(IsElement_sharersL1_2(cbe.sharersL1_2, msg_GetML1_2.src)) then
          if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
          msg_GetM_Ack_ADL1_2 := RespAckL1_2(adr,GetM_Ack_ADL1_2,m,msg_GetML1_2.src,cbe.cl,VectorCount_sharersL1_2(cbe.sharersL1_2));
          msg := AckL1_2(adr,InvL1_2,msg_GetML1_2.src,msg_GetML1_2.src);
          Multicast_fwd_v_sharersL1_2(msg, cbe.sharersL1_2, m);
          cbe.ownerL1_2 := msg_GetML1_2.src;
          ClearVector_sharersL1_2(cbe.sharersL1_2);
          cbe.cl := msg_GetM_Ack_ADL1_2.cl;
          cbe.acksExpectedL1_2 := msg_GetM_Ack_ADL1_2.acksRequiredL1_2;
          if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mSnpInvML2__dM_x_pI_store_GetM_Ack_AD__C__M;
          return true;
          endif;
          endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_S__C__S:
      switch inmsg.mtype
        case GetML1_2:
          cbe.cluster_req_msg := inmsg;
          msg := DevReqL2(adr,RdOwnL2,m,directoryL2);
          Send_D2H_request(msg, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mGetML1_2__S__C__S_store;
          return true;

        case GetSL1_2:
          cbe.cluster_req_msg := inmsg;
          AddElement_sharersL1_2(cbe.sharersL1_2, cbe.cluster_req_msg.src);
          msg := RespL1_2(adr,GetS_AckL1_2,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_S__C__S;
          return true;

        case PutML1_2:
          msg := AckL1_2(adr,Put_AckL1_2,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_2(cbe.sharersL1_2, inmsg.src);
          if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__S;
            return true;
          endif;
          if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_S__C__S;
            return true;
          endif;

        case PutSL1_2:
          msg := AckL1_2(adr,Put_AckL1_2,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_2(cbe.sharersL1_2, inmsg.src);
          if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__S;
            return true;
          endif;
          if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_S__C__S;
            return true;
          endif;

        case SnpInvSL2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_2 := RequestL1_2(adr,GetML1_2,m,m);
          cbe.acksReceivedL1_2 := 0;
          if !(IsElement_sharersL1_2(cbe.sharersL1_2, msg_GetML1_2.src)) then
          if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
          msg_GetM_Ack_ADL1_2 := RespAckL1_2(adr,GetM_Ack_ADL1_2,m,msg_GetML1_2.src,cbe.cl,VectorCount_sharersL1_2(cbe.sharersL1_2));
          msg := AckL1_2(adr,InvL1_2,msg_GetML1_2.src,msg_GetML1_2.src);
          Multicast_fwd_v_sharersL1_2(msg, cbe.sharersL1_2, m);
          cbe.ownerL1_2 := msg_GetML1_2.src;
          ClearVector_sharersL1_2(cbe.sharersL1_2);
          cbe.cl := msg_GetM_Ack_ADL1_2.cl;
          cbe.acksExpectedL1_2 := msg_GetM_Ack_ADL1_2.acksRequiredL1_2;
          if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S;
          return true;
          endif;
          endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_mGetML1_2__I__C__I_store:
      switch inmsg.mtype
        case GO_ML2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mGetML1_2__I__C__I_store_GO_M;
          return true;

        else return false;
      endswitch;

      case directoryL1_2_mGetML1_2__I__C__I_store_GO_M:
      switch inmsg.mtype
        case HostDataMsgL2:
          cbe.cl := inmsg.cl;
          msg := RespL1_2(adr,GetM_Ack_DL1_2,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          cbe.ownerL1_2 := cbe.cluster_req_msg.src;
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_M__C__M;
          return true;

        else return false;
      endswitch;

      case directoryL1_2_mGetML1_2__I__C__S_store:
      switch inmsg.mtype
        case GO_ML2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mGetML1_2__I__C__S_store_GO_M;
          return true;

        case SnpInvSL2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_2 := RequestL1_2(adr,GetML1_2,m,m);
          cbe.acksReceivedL1_2 := 0;
          msg_GetM_Ack_DL1_2 := RespL1_2(adr,GetM_Ack_DL1_2,m,msg_GetML1_2.src,cbe.cl);
          cbe.ownerL1_2 := msg_GetML1_2.src;
          cbe.cl := msg_GetM_Ack_DL1_2.cl;
          Set_perm(store, adr, m);
          msg_PutML1_2 := RespL1_2(adr,PutML1_2,m,m,cbe.cl);
          msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutML1_2.src);
          if (cbe.ownerL1_2 = msg_PutML1_2.src) then
          cbe.cl := msg_PutML1_2.cl;
          undefine cbe.ownerL1_2;
          msg := DevRspL2(adr,RspIHitSEL2,m,directoryL2);
          Send_D2H_response(msg, m);
          undefine cbe.invalidation_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mGetML1_2__I__C__I_store;
          return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_mGetML1_2__I__C__S_store_GO_M:
      switch inmsg.mtype
        case HostDataMsgL2:
          cbe.cl := inmsg.cl;
          msg := RespL1_2(adr,GetM_Ack_DL1_2,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          cbe.ownerL1_2 := cbe.cluster_req_msg.src;
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_M__C__M;
          return true;

        else return false;
      endswitch;

      case directoryL1_2_mGetML1_2__S__C__S_store:
      switch inmsg.mtype
        case GO_ML2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mGetML1_2__S__C__S_store_GO_M;
          return true;

        case SnpInvSL2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_2 := RequestL1_2(adr,GetML1_2,m,m);
          cbe.acksReceivedL1_2 := 0;
          if !(IsElement_sharersL1_2(cbe.sharersL1_2, msg_GetML1_2.src)) then
          if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
          msg_GetM_Ack_ADL1_2 := RespAckL1_2(adr,GetM_Ack_ADL1_2,m,msg_GetML1_2.src,cbe.cl,VectorCount_sharersL1_2(cbe.sharersL1_2));
          msg := AckL1_2(adr,InvL1_2,msg_GetML1_2.src,msg_GetML1_2.src);
          Multicast_fwd_v_sharersL1_2(msg, cbe.sharersL1_2, m);
          cbe.ownerL1_2 := msg_GetML1_2.src;
          ClearVector_sharersL1_2(cbe.sharersL1_2);
          cbe.cl := msg_GetM_Ack_ADL1_2.cl;
          cbe.acksExpectedL1_2 := msg_GetM_Ack_ADL1_2.acksRequiredL1_2;
          if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mGetML1_2__mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S;
          return true;
          endif;
          endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_mGetML1_2__S__C__S_store_GO_M:
      switch inmsg.mtype
        case HostDataMsgL2:
          cbe.cl := inmsg.cl;
          if (IsElement_sharersL1_2(cbe.sharersL1_2, cbe.cluster_req_msg.src)) then
            RemoveElement_sharersL1_2(cbe.sharersL1_2, cbe.cluster_req_msg.src);
            if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
              msg := RespAckL1_2(adr,GetM_Ack_ADL1_2,m,cbe.cluster_req_msg.src,cbe.cl,VectorCount_sharersL1_2(cbe.sharersL1_2));
              Send_resp(msg, m);
              msg := AckL1_2(adr,InvL1_2,cbe.cluster_req_msg.src,cbe.cluster_req_msg.src);
              Multicast_fwd_v_sharersL1_2(msg, cbe.sharersL1_2, m);
              cbe.ownerL1_2 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_2(cbe.sharersL1_2);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_2_M__C__M;
              return true;
            endif;
            if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
              msg := RespL1_2(adr,GetM_Ack_DL1_2,m,cbe.cluster_req_msg.src,cbe.cl);
              Send_resp(msg, m);
              cbe.ownerL1_2 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_2(cbe.sharersL1_2);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_2_M__C__M;
              return true;
            endif;
          endif;
          if !(IsElement_sharersL1_2(cbe.sharersL1_2, cbe.cluster_req_msg.src)) then
            if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
              msg := RespL1_2(adr,GetM_Ack_DL1_2,m,cbe.cluster_req_msg.src,cbe.cl);
              Send_resp(msg, m);
              cbe.ownerL1_2 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_2(cbe.sharersL1_2);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_2_M__C__M;
              return true;
            endif;
            if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
              msg := RespAckL1_2(adr,GetM_Ack_ADL1_2,m,cbe.cluster_req_msg.src,cbe.cl,VectorCount_sharersL1_2(cbe.sharersL1_2));
              Send_resp(msg, m);
              msg := AckL1_2(adr,InvL1_2,cbe.cluster_req_msg.src,cbe.cluster_req_msg.src);
              Multicast_fwd_v_sharersL1_2(msg, cbe.sharersL1_2, m);
              cbe.ownerL1_2 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_2(cbe.sharersL1_2);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_2_M__C__M;
              return true;
            endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_mGetML1_2__mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S:
      switch inmsg.mtype
        case Inv_AckL1_2:
          cbe.acksReceivedL1_2 := cbe.acksReceivedL1_2+1;
          if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_mGetML1_2__mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S;
            return true;
          endif;
          if (cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            cbe.acksReceivedL1_2 := 0;
            cbe.acksExpectedL1_2 := 0;
            Set_perm(store, adr, m);
            msg_PutML1_2 := RespL1_2(adr,PutML1_2,m,m,cbe.cl);
            msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutML1_2.src);
            if (cbe.ownerL1_2 = msg_PutML1_2.src) then
            cbe.cl := msg_PutML1_2.cl;
            undefine cbe.ownerL1_2;
            msg := DevRspL2(adr,RspIHitSEL2,m,directoryL2);
            Send_D2H_response(msg, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_mGetML1_2__I__C__I_store;
            return true;
            endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_mGetSL1_2__I__C__I_load:
      switch inmsg.mtype
        case GO_SL2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mGetSL1_2__I__C__I_load_GO_S;
          return true;

        else return false;
      endswitch;

      case directoryL1_2_mGetSL1_2__I__C__I_load_GO_S:
      switch inmsg.mtype
        case HostDataMsgL2:
          cbe.cl := inmsg.cl;
          AddElement_sharersL1_2(cbe.sharersL1_2, cbe.cluster_req_msg.src);
          msg := RespL1_2(adr,GetS_AckL1_2,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_S__C__S;
          return true;

        else return false;
      endswitch;

      case directoryL1_2_mGetSL1_2__M_GetS__C__M:
      switch inmsg.mtype
        case WBL1_2:
          if !(inmsg.src = cbe.ownerL1_2) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_mGetSL1_2__M_GetS__C__M;
            return true;
          endif;
          if (inmsg.src = cbe.ownerL1_2) then
            cbe.cl := inmsg.cl;
            undefine cbe.ownerL1_2;
            undefine cbe.cluster_req_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_S__C__M;
            return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_mSnpDataL2__dM_GetS_x_pI_load__C__M:
      switch inmsg.mtype
        case GetS_AckL1_2:
          cbe.cl := inmsg.cl;
          Set_perm(load, adr, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mSnpDataL2__dM_GetS_x_pS__C__M;
          return true;

        case WBL1_2:
          if (inmsg.src = cbe.ownerL1_2) then
          cbe.cl := inmsg.cl;
          undefine cbe.ownerL1_2;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mSnpDataL2__dS_x_pI_load__C__M;
          return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_mSnpDataL2__dM_GetS_x_pS__C__M:
      switch inmsg.mtype
        case WBL1_2:
          if (inmsg.src = cbe.ownerL1_2) then
          cbe.cl := inmsg.cl;
          undefine cbe.ownerL1_2;
          msg_PutSL1_2 := RequestL1_2(adr,PutSL1_2,m,m);
          msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutSL1_2.src);
          RemoveElement_sharersL1_2(cbe.sharersL1_2, msg_PutSL1_2.src);
          if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            msg := DevRspL2(adr,RspSFwdML2,cbe.invalidation_msg.src,directoryL2);
            Send_D2H_response(msg, m);
            msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
            Send_D2H_data(msg1, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_S__C__S;
            return true;
          endif;
          if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            msg := DevRspL2(adr,RspSFwdML2,cbe.invalidation_msg.src,directoryL2);
            Send_D2H_response(msg, m);
            msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
            Send_D2H_data(msg1, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__S;
            return true;
          endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_mSnpDataL2__dS_x_pI_load__C__M:
      switch inmsg.mtype
        case GetS_AckL1_2:
          cbe.cl := inmsg.cl;
          Set_perm(load, adr, m);
          msg_PutSL1_2 := RequestL1_2(adr,PutSL1_2,m,m);
          msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutSL1_2.src);
          RemoveElement_sharersL1_2(cbe.sharersL1_2, msg_PutSL1_2.src);
          if !(VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            msg := DevRspL2(adr,RspSFwdML2,cbe.invalidation_msg.src,directoryL2);
            Send_D2H_response(msg, m);
            msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
            Send_D2H_data(msg1, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_S__C__S;
            return true;
          endif;
          if (VectorCount_sharersL1_2(cbe.sharersL1_2) = 0) then
            msg := DevRspL2(adr,RspSFwdML2,cbe.invalidation_msg.src,directoryL2);
            Send_D2H_response(msg, m);
            msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
            Send_D2H_data(msg1, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__S;
            return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_mSnpInvML2__dM_x_pI_store_GetM_Ack_AD__C__M:
      switch inmsg.mtype
        case Inv_AckL1_2:
          cbe.acksReceivedL1_2 := cbe.acksReceivedL1_2+1;
          if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_mSnpInvML2__dM_x_pI_store_GetM_Ack_AD__C__M;
            return true;
          endif;
          if (cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            cbe.acksReceivedL1_2 := 0;
            cbe.acksExpectedL1_2 := 0;
            Set_perm(store, adr, m);
            msg_PutML1_2 := RespL1_2(adr,PutML1_2,m,m,cbe.cl);
            msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutML1_2.src);
            if (cbe.ownerL1_2 = msg_PutML1_2.src) then
            cbe.cl := msg_PutML1_2.cl;
            undefine cbe.ownerL1_2;
            msg := DevRspL2(adr,RspIFwdML2,cbe.invalidation_msg.src,directoryL2);
            Send_D2H_response(msg, m);
            msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
            Send_D2H_data(msg1, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__I;
            return true;
            endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_mSnpInvML2__dM_x_pI_store__C__M:
      switch inmsg.mtype
        case GetM_Ack_DL1_2:
          cbe.cl := inmsg.cl;
          Set_perm(store, adr, m);
          msg_PutML1_2 := RespL1_2(adr,PutML1_2,m,m,cbe.cl);
          msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutML1_2.src);
          if (cbe.ownerL1_2 = msg_PutML1_2.src) then
          cbe.cl := msg_PutML1_2.cl;
          undefine cbe.ownerL1_2;
          msg := DevRspL2(adr,RspIFwdML2,cbe.invalidation_msg.src,directoryL2);
          Send_D2H_response(msg, m);
          msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
          Send_D2H_data(msg1, m);
          undefine cbe.invalidation_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_I__C__I;
          return true;
          endif;

        case Inv_AckL1_2:
          cbe.acksReceivedL1_2 := cbe.acksReceivedL1_2+1;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mSnpInvML2__dM_x_pI_store__C__M;
          return true;

        else return false;
      endswitch;

      case directoryL1_2_mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S:
      switch inmsg.mtype
        case Inv_AckL1_2:
          cbe.acksReceivedL1_2 := cbe.acksReceivedL1_2+1;
          if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S;
            return true;
          endif;
          if (cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            cbe.acksReceivedL1_2 := 0;
            cbe.acksExpectedL1_2 := 0;
            Set_perm(store, adr, m);
            msg_PutML1_2 := RespL1_2(adr,PutML1_2,m,m,cbe.cl);
            msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutML1_2.src);
            if (cbe.ownerL1_2 = msg_PutML1_2.src) then
            cbe.cl := msg_PutML1_2.cl;
            undefine cbe.ownerL1_2;
            msg := DevRspL2(adr,RspIHitSEL2,m,directoryL2);
            Send_D2H_response(msg, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_I__C__I;
            return true;
            endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_mevict__I__C__M_evict:
      switch inmsg.mtype
        case GO_WritePullL2:
          msg1 := DataFullL2(adr,DevDataMsgL2,m,directoryL2,cbe.cl);
          Send_D2H_data(msg1, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_I__C__I;
          return true;

        case SnpDataL2:
          msg1 := DevRspL2(adr,RspSFwdML2,inmsg.src,directoryL2);
          Send_D2H_response(msg1, m);
          msg2 := DataFullL2(adr,DevDataMsgL2,inmsg.src,directoryL2,cbe.cl);
          Send_D2H_data(msg2, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mevict__I__C__M_evict_SnpData;
          return true;

        case SnpInvML2:
          msg1 := DevRspL2(adr,RspIFwdML2,inmsg.src,directoryL2);
          Send_D2H_response(msg1, m);
          msg2 := DataFullL2(adr,DevDataMsgL2,inmsg.src,directoryL2,cbe.cl);
          Send_D2H_data(msg2, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mevict__I__C__M_evict_SnpInvM;
          return true;

        else return false;
      endswitch;

      case directoryL1_2_mevict__I__C__M_evict_SnpData:
      switch inmsg.mtype
        case GO_IL2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_I__C__I;
          return true;

        case SnpInvSL2:
          msg3 := DevRspL2(adr,RspIHitSEL2,inmsg.src,directoryL2);
          Send_D2H_response(msg3, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mevict__I__C__M_evict_SnpData_SnpInvS;
          return true;

        else return false;
      endswitch;

      case directoryL1_2_mevict__I__C__M_evict_SnpData_SnpInvS:
      switch inmsg.mtype
        case GO_IL2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_I__C__I;
          return true;

        else return false;
      endswitch;

      case directoryL1_2_mevict__I__C__M_evict_SnpInvM:
      switch inmsg.mtype
        case GO_IL2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_I__C__I;
          return true;

        else return false;
      endswitch;

      case directoryL1_2_mevict__I__C__S_evict:
      switch inmsg.mtype
        case GO_IL2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_I__C__I;
          return true;

        case SnpInvSL2:
          msg1 := DevRspL2(adr,RspIHitSEL2,m,directoryL2);
          Send_D2H_response(msg1, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mevict__I__C__S_evict_SnpInvS;
          return true;

        else return false;
      endswitch;

      case directoryL1_2_mevict__I__C__S_evict_SnpInvS:
      switch inmsg.mtype
        case GO_IL2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_I__C__I;
          return true;

        else return false;
      endswitch;

      case directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__M:
      switch inmsg.mtype
        case Inv_AckL1_2:
          cbe.acksReceivedL1_2 := cbe.acksReceivedL1_2+1;
          if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__M;
            return true;
          endif;
          if (cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            cbe.acksReceivedL1_2 := 0;
            cbe.acksExpectedL1_2 := 0;
            Set_perm(store, adr, m);
            msg_PutML1_2 := RespL1_2(adr,PutML1_2,m,m,cbe.cl);
            msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutML1_2.src);
            if (cbe.ownerL1_2 = msg_PutML1_2.src) then
            cbe.cl := msg_PutML1_2.cl;
            undefine cbe.ownerL1_2;
            msg := DevReqL2(adr,DirtyEvictL2,m,directoryL2);
            Send_D2H_request(msg, m);
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_mevict__I__C__M_evict;
            return true;
            endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__S:
      switch inmsg.mtype
        case Inv_AckL1_2:
          cbe.acksReceivedL1_2 := cbe.acksReceivedL1_2+1;
          if (cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            cbe.acksReceivedL1_2 := 0;
            cbe.acksExpectedL1_2 := 0;
            Set_perm(store, adr, m);
            msg_PutML1_2 := RespL1_2(adr,PutML1_2,m,m,cbe.cl);
            msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutML1_2.src);
            if (cbe.ownerL1_2 = msg_PutML1_2.src) then
            cbe.cl := msg_PutML1_2.cl;
            undefine cbe.ownerL1_2;
            msg := DevReqL2(adr,CleanEvictNoDataL2,m,directoryL2);
            Send_D2H_request(msg, m);
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_mevict__I__C__S_evict;
            return true;
            endif;
          endif;
          if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_2_mevict__dM_x_pI_store_GetM_Ack_AD__C__S;
            return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_2_mevict__dM_x_pI_store__C__M:
      switch inmsg.mtype
        case GetM_Ack_DL1_2:
          cbe.cl := inmsg.cl;
          Set_perm(store, adr, m);
          msg_PutML1_2 := RespL1_2(adr,PutML1_2,m,m,cbe.cl);
          msg_Put_AckL1_2 := AckL1_2(adr,Put_AckL1_2,m,msg_PutML1_2.src);
          if (cbe.ownerL1_2 = msg_PutML1_2.src) then
          cbe.cl := msg_PutML1_2.cl;
          undefine cbe.ownerL1_2;
          msg := DevReqL2(adr,DirtyEvictL2,m,directoryL2);
          Send_D2H_request(msg, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mevict__I__C__M_evict;
          return true;
          endif;

        case Inv_AckL1_2:
          cbe.acksReceivedL1_2 := cbe.acksReceivedL1_2+1;
          Clear_perm(adr, m);
          cbe.State := directoryL1_2_mevict__dM_x_pI_store__C__M;
          return true;

        else return false;
      endswitch;

    endswitch;
    endalias;
    endalias;
    return false;
    end;

    function FSM_MSG_directoryL1_1(inmsg:Message; m:OBJSET_directoryL1_1) : boolean;
    var msg: Message;
    var msg_GetSL1_1: Message;
    var msg_GetS_AckL1_1: Message;
    var msg_PutSL1_1: Message;
    var msg_Put_AckL1_1: Message;
    var msg1: Message;
    var msg_GetML1_1: Message;
    var msg_GetM_Ack_DL1_1: Message;
    var msg_PutML1_1: Message;
    var msg_GetM_Ack_ADL1_1: Message;
    var msg2: Message;
    var msg3: Message;
    begin
      alias adr: inmsg.adr do
      alias cbe: i_directoryL1_1[m].cb[adr] do
    switch cbe.State
      case directoryL1_1_I__C__I:
      switch inmsg.mtype
        case GetML1_1:
          cbe.cluster_req_msg := inmsg;
          msg := DevReqL2(adr,RdOwnL2,m,directoryL2);
          Send_D2H_request(msg, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mGetML1_1__I__C__I_store;
          return true;

        case GetSL1_1:
          cbe.cluster_req_msg := inmsg;
          msg := DevReqL2(adr,RdSharedL2,m,directoryL2);
          Send_D2H_request(msg, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mGetSL1_1__I__C__I_load;
          return true;

        case PutML1_1:
          msg := AckL1_1(adr,Put_AckL1_1,m,inmsg.src);
          Send_fwd(msg, m);
          if !(cbe.ownerL1_1 = inmsg.src) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__I;
            return true;
          endif;
          if (cbe.ownerL1_1 = inmsg.src) then
            cbe.cl := inmsg.cl;
            undefine cbe.ownerL1_1;
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__I;
            return true;
          endif;

        case PutSL1_1:
          msg := AckL1_1(adr,Put_AckL1_1,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_1(cbe.sharersL1_1, inmsg.src);
          if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__I;
            return true;
          endif;
          if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__I;
            return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_I__C__M:
      switch inmsg.mtype
        case GetML1_1:
          cbe.cluster_req_msg := inmsg;
          msg := RespL1_1(adr,GetM_Ack_DL1_1,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          cbe.ownerL1_1 := cbe.cluster_req_msg.src;
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_M__C__M;
          return true;

        case GetSL1_1:
          cbe.cluster_req_msg := inmsg;
          AddElement_sharersL1_1(cbe.sharersL1_1, cbe.cluster_req_msg.src);
          msg := RespL1_1(adr,GetS_AckL1_1,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_S__C__M;
          return true;

        case PutML1_1:
          msg := AckL1_1(adr,Put_AckL1_1,m,inmsg.src);
          Send_fwd(msg, m);
          if !(cbe.ownerL1_1 = inmsg.src) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__M;
            return true;
          endif;
          if (cbe.ownerL1_1 = inmsg.src) then
            cbe.cl := inmsg.cl;
            undefine cbe.ownerL1_1;
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__M;
            return true;
          endif;

        case PutSL1_1:
          msg := AckL1_1(adr,Put_AckL1_1,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_1(cbe.sharersL1_1, inmsg.src);
          if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__M;
            return true;
          endif;
          if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__M;
            return true;
          endif;

        case SnpDataL2:
          cbe.invalidation_msg := inmsg;
          msg_GetSL1_1 := RequestL1_1(adr,GetSL1_1,m,m);
          AddElement_sharersL1_1(cbe.sharersL1_1, msg_GetSL1_1.src);
          msg_GetS_AckL1_1 := RespL1_1(adr,GetS_AckL1_1,m,msg_GetSL1_1.src,cbe.cl);
          cbe.cl := msg_GetS_AckL1_1.cl;
          Set_perm(load, adr, m);
          msg_PutSL1_1 := RequestL1_1(adr,PutSL1_1,m,m);
          msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutSL1_1.src);
          RemoveElement_sharersL1_1(cbe.sharersL1_1, msg_PutSL1_1.src);
          if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
          msg := DevRspL2(adr,RspSFwdML2,cbe.invalidation_msg.src,directoryL2);
          Send_D2H_response(msg, m);
          msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
          Send_D2H_data(msg1, m);
          undefine cbe.invalidation_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_I__C__S;
          return true;
          endif;

        case SnpInvML2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_1 := RequestL1_1(adr,GetML1_1,m,m);
          cbe.acksReceivedL1_1 := 0;
          msg_GetM_Ack_DL1_1 := RespL1_1(adr,GetM_Ack_DL1_1,m,msg_GetML1_1.src,cbe.cl);
          cbe.ownerL1_1 := msg_GetML1_1.src;
          cbe.cl := msg_GetM_Ack_DL1_1.cl;
          Set_perm(store, adr, m);
          msg_PutML1_1 := RespL1_1(adr,PutML1_1,m,m,cbe.cl);
          msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutML1_1.src);
          if (cbe.ownerL1_1 = msg_PutML1_1.src) then
          cbe.cl := msg_PutML1_1.cl;
          undefine cbe.ownerL1_1;
          msg := DevRspL2(adr,RspIFwdML2,cbe.invalidation_msg.src,directoryL2);
          Send_D2H_response(msg, m);
          msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
          Send_D2H_data(msg1, m);
          undefine cbe.invalidation_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_I__C__I;
          return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_I__C__S:
      switch inmsg.mtype
        case GetML1_1:
          cbe.cluster_req_msg := inmsg;
          msg := DevReqL2(adr,RdOwnL2,m,directoryL2);
          Send_D2H_request(msg, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mGetML1_1__I__C__S_store;
          return true;

        case GetSL1_1:
          cbe.cluster_req_msg := inmsg;
          AddElement_sharersL1_1(cbe.sharersL1_1, cbe.cluster_req_msg.src);
          msg := RespL1_1(adr,GetS_AckL1_1,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_S__C__S;
          return true;

        case PutML1_1:
          msg := AckL1_1(adr,Put_AckL1_1,m,inmsg.src);
          Send_fwd(msg, m);
          if !(cbe.ownerL1_1 = inmsg.src) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__S;
            return true;
          endif;
          if (cbe.ownerL1_1 = inmsg.src) then
            cbe.cl := inmsg.cl;
            undefine cbe.ownerL1_1;
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__S;
            return true;
          endif;

        case PutSL1_1:
          msg := AckL1_1(adr,Put_AckL1_1,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_1(cbe.sharersL1_1, inmsg.src);
          if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__S;
            return true;
          endif;
          if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__S;
            return true;
          endif;

        case SnpInvSL2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_1 := RequestL1_1(adr,GetML1_1,m,m);
          cbe.acksReceivedL1_1 := 0;
          msg_GetM_Ack_DL1_1 := RespL1_1(adr,GetM_Ack_DL1_1,m,msg_GetML1_1.src,cbe.cl);
          cbe.ownerL1_1 := msg_GetML1_1.src;
          cbe.cl := msg_GetM_Ack_DL1_1.cl;
          Set_perm(store, adr, m);
          msg_PutML1_1 := RespL1_1(adr,PutML1_1,m,m,cbe.cl);
          msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutML1_1.src);
          if (cbe.ownerL1_1 = msg_PutML1_1.src) then
          cbe.cl := msg_PutML1_1.cl;
          undefine cbe.ownerL1_1;
          msg := DevRspL2(adr,RspIHitSEL2,m,directoryL2);
          Send_D2H_response(msg, m);
          undefine cbe.invalidation_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_I__C__I;
          return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_M__C__M:
      switch inmsg.mtype
        case GetML1_1:
          cbe.cluster_req_msg := inmsg;
          msg := RequestL1_1(adr,Fwd_GetML1_1,cbe.cluster_req_msg.src,cbe.ownerL1_1);
          Send_fwd(msg, m);
          cbe.ownerL1_1 := cbe.cluster_req_msg.src;
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_M__C__M;
          return true;

        case GetSL1_1:
          cbe.cluster_req_msg := inmsg;
          msg := RequestL1_1(adr,Fwd_GetSL1_1,cbe.cluster_req_msg.src,cbe.ownerL1_1);
          Send_fwd(msg, m);
          AddElement_sharersL1_1(cbe.sharersL1_1, cbe.cluster_req_msg.src);
          AddElement_sharersL1_1(cbe.sharersL1_1, cbe.ownerL1_1);
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mGetSL1_1__M_GetS__C__M;
          return true;

        case PutML1_1:
          msg := AckL1_1(adr,Put_AckL1_1,m,inmsg.src);
          Send_fwd(msg, m);
          if (cbe.ownerL1_1 = inmsg.src) then
            cbe.cl := inmsg.cl;
            undefine cbe.ownerL1_1;
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__M;
            return true;
          endif;
          if !(cbe.ownerL1_1 = inmsg.src) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_M__C__M;
            return true;
          endif;

        case PutSL1_1:
          msg := AckL1_1(adr,Put_AckL1_1,m,inmsg.src);
          Send_fwd(msg, m);
          if (cbe.ownerL1_1 = inmsg.src) then
            cbe.cl := inmsg.cl;
            undefine cbe.ownerL1_1;
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__M;
            return true;
          endif;
          if !(cbe.ownerL1_1 = inmsg.src) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_M__C__M;
            return true;
          endif;

        case SnpDataL2:
          cbe.invalidation_msg := inmsg;
          msg_GetSL1_1 := RequestL1_1(adr,GetSL1_1,m,m);
          msg := RequestL1_1(adr,Fwd_GetSL1_1,msg_GetSL1_1.src,cbe.ownerL1_1);
          Send_fwd(msg, m);
          AddElement_sharersL1_1(cbe.sharersL1_1, msg_GetSL1_1.src);
          AddElement_sharersL1_1(cbe.sharersL1_1, cbe.ownerL1_1);
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mSnpDataL2__dM_GetS_x_pI_load__C__M;
          return true;

        case SnpInvML2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_1 := RequestL1_1(adr,GetML1_1,m,m);
          cbe.acksReceivedL1_1 := 0;
          msg := RequestL1_1(adr,Fwd_GetML1_1,msg_GetML1_1.src,cbe.ownerL1_1);
          Send_fwd(msg, m);
          cbe.ownerL1_1 := msg_GetML1_1.src;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mSnpInvML2__dM_x_pI_store__C__M;
          return true;

        else return false;
      endswitch;

      case directoryL1_1_S__C__M:
      switch inmsg.mtype
        case GetML1_1:
          cbe.cluster_req_msg := inmsg;
          if (IsElement_sharersL1_1(cbe.sharersL1_1, cbe.cluster_req_msg.src)) then
            RemoveElement_sharersL1_1(cbe.sharersL1_1, cbe.cluster_req_msg.src);
            if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
              msg := RespL1_1(adr,GetM_Ack_DL1_1,m,cbe.cluster_req_msg.src,cbe.cl);
              Send_resp(msg, m);
              cbe.ownerL1_1 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_1(cbe.sharersL1_1);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_1_M__C__M;
              return true;
            endif;
            if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
              msg := RespAckL1_1(adr,GetM_Ack_ADL1_1,m,cbe.cluster_req_msg.src,cbe.cl,VectorCount_sharersL1_1(cbe.sharersL1_1));
              Send_resp(msg, m);
              msg := AckL1_1(adr,InvL1_1,cbe.cluster_req_msg.src,cbe.cluster_req_msg.src);
              Multicast_fwd_v_sharersL1_1(msg, cbe.sharersL1_1, m);
              cbe.ownerL1_1 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_1(cbe.sharersL1_1);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_1_M__C__M;
              return true;
            endif;
          endif;
          if !(IsElement_sharersL1_1(cbe.sharersL1_1, cbe.cluster_req_msg.src)) then
            if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
              msg := RespL1_1(adr,GetM_Ack_DL1_1,m,cbe.cluster_req_msg.src,cbe.cl);
              Send_resp(msg, m);
              cbe.ownerL1_1 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_1(cbe.sharersL1_1);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_1_M__C__M;
              return true;
            endif;
            if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
              msg := RespAckL1_1(adr,GetM_Ack_ADL1_1,m,cbe.cluster_req_msg.src,cbe.cl,VectorCount_sharersL1_1(cbe.sharersL1_1));
              Send_resp(msg, m);
              msg := AckL1_1(adr,InvL1_1,cbe.cluster_req_msg.src,cbe.cluster_req_msg.src);
              Multicast_fwd_v_sharersL1_1(msg, cbe.sharersL1_1, m);
              cbe.ownerL1_1 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_1(cbe.sharersL1_1);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_1_M__C__M;
              return true;
            endif;
          endif;

        case GetSL1_1:
          cbe.cluster_req_msg := inmsg;
          AddElement_sharersL1_1(cbe.sharersL1_1, cbe.cluster_req_msg.src);
          msg := RespL1_1(adr,GetS_AckL1_1,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_S__C__M;
          return true;

        case PutML1_1:
          msg := AckL1_1(adr,Put_AckL1_1,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_1(cbe.sharersL1_1, inmsg.src);
          if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__M;
            return true;
          endif;
          if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_S__C__M;
            return true;
          endif;

        case PutSL1_1:
          msg := AckL1_1(adr,Put_AckL1_1,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_1(cbe.sharersL1_1, inmsg.src);
          if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_S__C__M;
            return true;
          endif;
          if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__M;
            return true;
          endif;

        case SnpDataL2:
          cbe.invalidation_msg := inmsg;
          msg_GetSL1_1 := RequestL1_1(adr,GetSL1_1,m,m);
          AddElement_sharersL1_1(cbe.sharersL1_1, msg_GetSL1_1.src);
          msg_GetS_AckL1_1 := RespL1_1(adr,GetS_AckL1_1,m,msg_GetSL1_1.src,cbe.cl);
          cbe.cl := msg_GetS_AckL1_1.cl;
          Set_perm(load, adr, m);
          msg_PutSL1_1 := RequestL1_1(adr,PutSL1_1,m,m);
          msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutSL1_1.src);
          RemoveElement_sharersL1_1(cbe.sharersL1_1, msg_PutSL1_1.src);
          if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
          msg := DevRspL2(adr,RspSFwdML2,cbe.invalidation_msg.src,directoryL2);
          Send_D2H_response(msg, m);
          msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
          Send_D2H_data(msg1, m);
          undefine cbe.invalidation_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_S__C__S;
          return true;
          endif;

        case SnpInvML2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_1 := RequestL1_1(adr,GetML1_1,m,m);
          cbe.acksReceivedL1_1 := 0;
          if !(IsElement_sharersL1_1(cbe.sharersL1_1, msg_GetML1_1.src)) then
          if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
          msg_GetM_Ack_ADL1_1 := RespAckL1_1(adr,GetM_Ack_ADL1_1,m,msg_GetML1_1.src,cbe.cl,VectorCount_sharersL1_1(cbe.sharersL1_1));
          msg := AckL1_1(adr,InvL1_1,msg_GetML1_1.src,msg_GetML1_1.src);
          Multicast_fwd_v_sharersL1_1(msg, cbe.sharersL1_1, m);
          cbe.ownerL1_1 := msg_GetML1_1.src;
          ClearVector_sharersL1_1(cbe.sharersL1_1);
          cbe.cl := msg_GetM_Ack_ADL1_1.cl;
          cbe.acksExpectedL1_1 := msg_GetM_Ack_ADL1_1.acksRequiredL1_1;
          if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mSnpInvML2__dM_x_pI_store_GetM_Ack_AD__C__M;
          return true;
          endif;
          endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_S__C__S:
      switch inmsg.mtype
        case GetML1_1:
          cbe.cluster_req_msg := inmsg;
          msg := DevReqL2(adr,RdOwnL2,m,directoryL2);
          Send_D2H_request(msg, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mGetML1_1__S__C__S_store;
          return true;

        case GetSL1_1:
          cbe.cluster_req_msg := inmsg;
          AddElement_sharersL1_1(cbe.sharersL1_1, cbe.cluster_req_msg.src);
          msg := RespL1_1(adr,GetS_AckL1_1,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_S__C__S;
          return true;

        case PutML1_1:
          msg := AckL1_1(adr,Put_AckL1_1,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_1(cbe.sharersL1_1, inmsg.src);
          if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_S__C__S;
            return true;
          endif;
          if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__S;
            return true;
          endif;

        case PutSL1_1:
          msg := AckL1_1(adr,Put_AckL1_1,m,inmsg.src);
          Send_fwd(msg, m);
          RemoveElement_sharersL1_1(cbe.sharersL1_1, inmsg.src);
          if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__S;
            return true;
          endif;
          if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_S__C__S;
            return true;
          endif;

        case SnpInvSL2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_1 := RequestL1_1(adr,GetML1_1,m,m);
          cbe.acksReceivedL1_1 := 0;
          if !(IsElement_sharersL1_1(cbe.sharersL1_1, msg_GetML1_1.src)) then
          if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
          msg_GetM_Ack_ADL1_1 := RespAckL1_1(adr,GetM_Ack_ADL1_1,m,msg_GetML1_1.src,cbe.cl,VectorCount_sharersL1_1(cbe.sharersL1_1));
          msg := AckL1_1(adr,InvL1_1,msg_GetML1_1.src,msg_GetML1_1.src);
          Multicast_fwd_v_sharersL1_1(msg, cbe.sharersL1_1, m);
          cbe.ownerL1_1 := msg_GetML1_1.src;
          ClearVector_sharersL1_1(cbe.sharersL1_1);
          cbe.cl := msg_GetM_Ack_ADL1_1.cl;
          cbe.acksExpectedL1_1 := msg_GetM_Ack_ADL1_1.acksRequiredL1_1;
          if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S;
          return true;
          endif;
          endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_mGetML1_1__I__C__I_store:
      switch inmsg.mtype
        case GO_ML2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mGetML1_1__I__C__I_store_GO_M;
          return true;

        else return false;
      endswitch;

      case directoryL1_1_mGetML1_1__I__C__I_store_GO_M:
      switch inmsg.mtype
        case HostDataMsgL2:
          cbe.cl := inmsg.cl;
          msg := RespL1_1(adr,GetM_Ack_DL1_1,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          cbe.ownerL1_1 := cbe.cluster_req_msg.src;
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_M__C__M;
          return true;

        else return false;
      endswitch;

      case directoryL1_1_mGetML1_1__I__C__S_store:
      switch inmsg.mtype
        case GO_ML2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mGetML1_1__I__C__S_store_GO_M;
          return true;

        case SnpInvSL2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_1 := RequestL1_1(adr,GetML1_1,m,m);
          cbe.acksReceivedL1_1 := 0;
          msg_GetM_Ack_DL1_1 := RespL1_1(adr,GetM_Ack_DL1_1,m,msg_GetML1_1.src,cbe.cl);
          cbe.ownerL1_1 := msg_GetML1_1.src;
          cbe.cl := msg_GetM_Ack_DL1_1.cl;
          Set_perm(store, adr, m);
          msg_PutML1_1 := RespL1_1(adr,PutML1_1,m,m,cbe.cl);
          msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutML1_1.src);
          if (cbe.ownerL1_1 = msg_PutML1_1.src) then
          cbe.cl := msg_PutML1_1.cl;
          undefine cbe.ownerL1_1;
          msg := DevRspL2(adr,RspIHitSEL2,m,directoryL2);
          Send_D2H_response(msg, m);
          undefine cbe.invalidation_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mGetML1_1__I__C__I_store;
          return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_mGetML1_1__I__C__S_store_GO_M:
      switch inmsg.mtype
        case HostDataMsgL2:
          cbe.cl := inmsg.cl;
          msg := RespL1_1(adr,GetM_Ack_DL1_1,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          cbe.ownerL1_1 := cbe.cluster_req_msg.src;
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_M__C__M;
          return true;

        else return false;
      endswitch;

      case directoryL1_1_mGetML1_1__S__C__S_store:
      switch inmsg.mtype
        case GO_ML2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mGetML1_1__S__C__S_store_GO_M;
          return true;

        case SnpInvSL2:
          cbe.invalidation_msg := inmsg;
          msg_GetML1_1 := RequestL1_1(adr,GetML1_1,m,m);
          cbe.acksReceivedL1_1 := 0;
          if !(IsElement_sharersL1_1(cbe.sharersL1_1, msg_GetML1_1.src)) then
          if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
          msg_GetM_Ack_ADL1_1 := RespAckL1_1(adr,GetM_Ack_ADL1_1,m,msg_GetML1_1.src,cbe.cl,VectorCount_sharersL1_1(cbe.sharersL1_1));
          msg := AckL1_1(adr,InvL1_1,msg_GetML1_1.src,msg_GetML1_1.src);
          Multicast_fwd_v_sharersL1_1(msg, cbe.sharersL1_1, m);
          cbe.ownerL1_1 := msg_GetML1_1.src;
          ClearVector_sharersL1_1(cbe.sharersL1_1);
          cbe.cl := msg_GetM_Ack_ADL1_1.cl;
          cbe.acksExpectedL1_1 := msg_GetM_Ack_ADL1_1.acksRequiredL1_1;
          if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mGetML1_1__mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S;
          return true;
          endif;
          endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_mGetML1_1__S__C__S_store_GO_M:
      switch inmsg.mtype
        case HostDataMsgL2:
          cbe.cl := inmsg.cl;
          if !(IsElement_sharersL1_1(cbe.sharersL1_1, cbe.cluster_req_msg.src)) then
            if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
              msg := RespAckL1_1(adr,GetM_Ack_ADL1_1,m,cbe.cluster_req_msg.src,cbe.cl,VectorCount_sharersL1_1(cbe.sharersL1_1));
              Send_resp(msg, m);
              msg := AckL1_1(adr,InvL1_1,cbe.cluster_req_msg.src,cbe.cluster_req_msg.src);
              Multicast_fwd_v_sharersL1_1(msg, cbe.sharersL1_1, m);
              cbe.ownerL1_1 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_1(cbe.sharersL1_1);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_1_M__C__M;
              return true;
            endif;
            if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
              msg := RespL1_1(adr,GetM_Ack_DL1_1,m,cbe.cluster_req_msg.src,cbe.cl);
              Send_resp(msg, m);
              cbe.ownerL1_1 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_1(cbe.sharersL1_1);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_1_M__C__M;
              return true;
            endif;
          endif;
          if (IsElement_sharersL1_1(cbe.sharersL1_1, cbe.cluster_req_msg.src)) then
            RemoveElement_sharersL1_1(cbe.sharersL1_1, cbe.cluster_req_msg.src);
            if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
              msg := RespAckL1_1(adr,GetM_Ack_ADL1_1,m,cbe.cluster_req_msg.src,cbe.cl,VectorCount_sharersL1_1(cbe.sharersL1_1));
              Send_resp(msg, m);
              msg := AckL1_1(adr,InvL1_1,cbe.cluster_req_msg.src,cbe.cluster_req_msg.src);
              Multicast_fwd_v_sharersL1_1(msg, cbe.sharersL1_1, m);
              cbe.ownerL1_1 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_1(cbe.sharersL1_1);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_1_M__C__M;
              return true;
            endif;
            if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
              msg := RespL1_1(adr,GetM_Ack_DL1_1,m,cbe.cluster_req_msg.src,cbe.cl);
              Send_resp(msg, m);
              cbe.ownerL1_1 := cbe.cluster_req_msg.src;
              ClearVector_sharersL1_1(cbe.sharersL1_1);
              undefine cbe.cluster_req_msg;
              Clear_perm(adr, m);
              cbe.State := directoryL1_1_M__C__M;
              return true;
            endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_mGetML1_1__mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S:
      switch inmsg.mtype
        case Inv_AckL1_1:
          cbe.acksReceivedL1_1 := cbe.acksReceivedL1_1+1;
          if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_mGetML1_1__mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S;
            return true;
          endif;
          if (cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            cbe.acksReceivedL1_1 := 0;
            cbe.acksExpectedL1_1 := 0;
            Set_perm(store, adr, m);
            msg_PutML1_1 := RespL1_1(adr,PutML1_1,m,m,cbe.cl);
            msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutML1_1.src);
            if (cbe.ownerL1_1 = msg_PutML1_1.src) then
            cbe.cl := msg_PutML1_1.cl;
            undefine cbe.ownerL1_1;
            msg := DevRspL2(adr,RspIHitSEL2,m,directoryL2);
            Send_D2H_response(msg, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_mGetML1_1__I__C__I_store;
            return true;
            endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_mGetSL1_1__I__C__I_load:
      switch inmsg.mtype
        case GO_SL2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mGetSL1_1__I__C__I_load_GO_S;
          return true;

        else return false;
      endswitch;

      case directoryL1_1_mGetSL1_1__I__C__I_load_GO_S:
      switch inmsg.mtype
        case HostDataMsgL2:
          cbe.cl := inmsg.cl;
          AddElement_sharersL1_1(cbe.sharersL1_1, cbe.cluster_req_msg.src);
          msg := RespL1_1(adr,GetS_AckL1_1,m,cbe.cluster_req_msg.src,cbe.cl);
          Send_resp(msg, m);
          undefine cbe.cluster_req_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_S__C__S;
          return true;

        else return false;
      endswitch;

      case directoryL1_1_mGetSL1_1__M_GetS__C__M:
      switch inmsg.mtype
        case WBL1_1:
          if (inmsg.src = cbe.ownerL1_1) then
            cbe.cl := inmsg.cl;
            undefine cbe.ownerL1_1;
            undefine cbe.cluster_req_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_S__C__M;
            return true;
          endif;
          if !(inmsg.src = cbe.ownerL1_1) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_mGetSL1_1__M_GetS__C__M;
            return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_mSnpDataL2__dM_GetS_x_pI_load__C__M:
      switch inmsg.mtype
        case GetS_AckL1_1:
          cbe.cl := inmsg.cl;
          Set_perm(load, adr, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mSnpDataL2__dM_GetS_x_pS__C__M;
          return true;

        case WBL1_1:
          if (inmsg.src = cbe.ownerL1_1) then
          cbe.cl := inmsg.cl;
          undefine cbe.ownerL1_1;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mSnpDataL2__dS_x_pI_load__C__M;
          return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_mSnpDataL2__dM_GetS_x_pS__C__M:
      switch inmsg.mtype
        case WBL1_1:
          if (inmsg.src = cbe.ownerL1_1) then
          cbe.cl := inmsg.cl;
          undefine cbe.ownerL1_1;
          msg_PutSL1_1 := RequestL1_1(adr,PutSL1_1,m,m);
          msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutSL1_1.src);
          RemoveElement_sharersL1_1(cbe.sharersL1_1, msg_PutSL1_1.src);
          if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            msg := DevRspL2(adr,RspSFwdML2,cbe.invalidation_msg.src,directoryL2);
            Send_D2H_response(msg, m);
            msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
            Send_D2H_data(msg1, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_S__C__S;
            return true;
          endif;
          if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            msg := DevRspL2(adr,RspSFwdML2,cbe.invalidation_msg.src,directoryL2);
            Send_D2H_response(msg, m);
            msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
            Send_D2H_data(msg1, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__S;
            return true;
          endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_mSnpDataL2__dS_x_pI_load__C__M:
      switch inmsg.mtype
        case GetS_AckL1_1:
          cbe.cl := inmsg.cl;
          Set_perm(load, adr, m);
          msg_PutSL1_1 := RequestL1_1(adr,PutSL1_1,m,m);
          msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutSL1_1.src);
          RemoveElement_sharersL1_1(cbe.sharersL1_1, msg_PutSL1_1.src);
          if !(VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            msg := DevRspL2(adr,RspSFwdML2,cbe.invalidation_msg.src,directoryL2);
            Send_D2H_response(msg, m);
            msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
            Send_D2H_data(msg1, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_S__C__S;
            return true;
          endif;
          if (VectorCount_sharersL1_1(cbe.sharersL1_1) = 0) then
            msg := DevRspL2(adr,RspSFwdML2,cbe.invalidation_msg.src,directoryL2);
            Send_D2H_response(msg, m);
            msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
            Send_D2H_data(msg1, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__S;
            return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_mSnpInvML2__dM_x_pI_store_GetM_Ack_AD__C__M:
      switch inmsg.mtype
        case Inv_AckL1_1:
          cbe.acksReceivedL1_1 := cbe.acksReceivedL1_1+1;
          if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_mSnpInvML2__dM_x_pI_store_GetM_Ack_AD__C__M;
            return true;
          endif;
          if (cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            cbe.acksReceivedL1_1 := 0;
            cbe.acksExpectedL1_1 := 0;
            Set_perm(store, adr, m);
            msg_PutML1_1 := RespL1_1(adr,PutML1_1,m,m,cbe.cl);
            msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutML1_1.src);
            if (cbe.ownerL1_1 = msg_PutML1_1.src) then
            cbe.cl := msg_PutML1_1.cl;
            undefine cbe.ownerL1_1;
            msg := DevRspL2(adr,RspIFwdML2,cbe.invalidation_msg.src,directoryL2);
            Send_D2H_response(msg, m);
            msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
            Send_D2H_data(msg1, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__I;
            return true;
            endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_mSnpInvML2__dM_x_pI_store__C__M:
      switch inmsg.mtype
        case GetM_Ack_DL1_1:
          cbe.cl := inmsg.cl;
          Set_perm(store, adr, m);
          msg_PutML1_1 := RespL1_1(adr,PutML1_1,m,m,cbe.cl);
          msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutML1_1.src);
          if (cbe.ownerL1_1 = msg_PutML1_1.src) then
          cbe.cl := msg_PutML1_1.cl;
          undefine cbe.ownerL1_1;
          msg := DevRspL2(adr,RspIFwdML2,cbe.invalidation_msg.src,directoryL2);
          Send_D2H_response(msg, m);
          msg1 := DataFullL2(adr,DevDataMsgL2,cbe.invalidation_msg.src,directoryL2,cbe.cl);
          Send_D2H_data(msg1, m);
          undefine cbe.invalidation_msg;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_I__C__I;
          return true;
          endif;

        case Inv_AckL1_1:
          cbe.acksReceivedL1_1 := cbe.acksReceivedL1_1+1;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mSnpInvML2__dM_x_pI_store__C__M;
          return true;

        else return false;
      endswitch;

      case directoryL1_1_mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S:
      switch inmsg.mtype
        case Inv_AckL1_1:
          cbe.acksReceivedL1_1 := cbe.acksReceivedL1_1+1;
          if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_mSnpInvSL2__dM_x_pI_store_GetM_Ack_AD__C__S;
            return true;
          endif;
          if (cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            cbe.acksReceivedL1_1 := 0;
            cbe.acksExpectedL1_1 := 0;
            Set_perm(store, adr, m);
            msg_PutML1_1 := RespL1_1(adr,PutML1_1,m,m,cbe.cl);
            msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutML1_1.src);
            if (cbe.ownerL1_1 = msg_PutML1_1.src) then
            cbe.cl := msg_PutML1_1.cl;
            undefine cbe.ownerL1_1;
            msg := DevRspL2(adr,RspIHitSEL2,m,directoryL2);
            Send_D2H_response(msg, m);
            undefine cbe.invalidation_msg;
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_I__C__I;
            return true;
            endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_mevict__I__C__M_evict:
      switch inmsg.mtype
        case GO_WritePullL2:
          msg1 := DataFullL2(adr,DevDataMsgL2,m,directoryL2,cbe.cl);
          Send_D2H_data(msg1, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_I__C__I;
          return true;

        case SnpDataL2:
          msg1 := DevRspL2(adr,RspSFwdML2,inmsg.src,directoryL2);
          Send_D2H_response(msg1, m);
          msg2 := DataFullL2(adr,DevDataMsgL2,inmsg.src,directoryL2,cbe.cl);
          Send_D2H_data(msg2, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mevict__I__C__M_evict_SnpData;
          return true;

        case SnpInvML2:
          msg1 := DevRspL2(adr,RspIFwdML2,inmsg.src,directoryL2);
          Send_D2H_response(msg1, m);
          msg2 := DataFullL2(adr,DevDataMsgL2,inmsg.src,directoryL2,cbe.cl);
          Send_D2H_data(msg2, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mevict__I__C__M_evict_SnpInvM;
          return true;

        else return false;
      endswitch;

      case directoryL1_1_mevict__I__C__M_evict_SnpData:
      switch inmsg.mtype
        case GO_IL2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_I__C__I;
          return true;

        case SnpInvSL2:
          msg3 := DevRspL2(adr,RspIHitSEL2,inmsg.src,directoryL2);
          Send_D2H_response(msg3, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mevict__I__C__M_evict_SnpData_SnpInvS;
          return true;

        else return false;
      endswitch;

      case directoryL1_1_mevict__I__C__M_evict_SnpData_SnpInvS:
      switch inmsg.mtype
        case GO_IL2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_I__C__I;
          return true;

        else return false;
      endswitch;

      case directoryL1_1_mevict__I__C__M_evict_SnpInvM:
      switch inmsg.mtype
        case GO_IL2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_I__C__I;
          return true;

        else return false;
      endswitch;

      case directoryL1_1_mevict__I__C__S_evict:
      switch inmsg.mtype
        case GO_IL2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_I__C__I;
          return true;

        case SnpInvSL2:
          msg1 := DevRspL2(adr,RspIHitSEL2,m,directoryL2);
          Send_D2H_response(msg1, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mevict__I__C__S_evict_SnpInvS;
          return true;

        else return false;
      endswitch;

      case directoryL1_1_mevict__I__C__S_evict_SnpInvS:
      switch inmsg.mtype
        case GO_IL2:
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_I__C__I;
          return true;

        else return false;
      endswitch;

      case directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__M:
      switch inmsg.mtype
        case Inv_AckL1_1:
          cbe.acksReceivedL1_1 := cbe.acksReceivedL1_1+1;
          if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__M;
            return true;
          endif;
          if (cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            cbe.acksReceivedL1_1 := 0;
            cbe.acksExpectedL1_1 := 0;
            Set_perm(store, adr, m);
            msg_PutML1_1 := RespL1_1(adr,PutML1_1,m,m,cbe.cl);
            msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutML1_1.src);
            if (cbe.ownerL1_1 = msg_PutML1_1.src) then
            cbe.cl := msg_PutML1_1.cl;
            undefine cbe.ownerL1_1;
            msg := DevReqL2(adr,DirtyEvictL2,m,directoryL2);
            Send_D2H_request(msg, m);
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_mevict__I__C__M_evict;
            return true;
            endif;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__S:
      switch inmsg.mtype
        case Inv_AckL1_1:
          cbe.acksReceivedL1_1 := cbe.acksReceivedL1_1+1;
          if (cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            cbe.acksReceivedL1_1 := 0;
            cbe.acksExpectedL1_1 := 0;
            Set_perm(store, adr, m);
            msg_PutML1_1 := RespL1_1(adr,PutML1_1,m,m,cbe.cl);
            msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutML1_1.src);
            if (cbe.ownerL1_1 = msg_PutML1_1.src) then
            cbe.cl := msg_PutML1_1.cl;
            undefine cbe.ownerL1_1;
            msg := DevReqL2(adr,CleanEvictNoDataL2,m,directoryL2);
            Send_D2H_request(msg, m);
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_mevict__I__C__S_evict;
            return true;
            endif;
          endif;
          if !(cbe.acksExpectedL1_1 = cbe.acksReceivedL1_1) then
            Clear_perm(adr, m);
            cbe.State := directoryL1_1_mevict__dM_x_pI_store_GetM_Ack_AD__C__S;
            return true;
          endif;

        else return false;
      endswitch;

      case directoryL1_1_mevict__dM_x_pI_store__C__M:
      switch inmsg.mtype
        case GetM_Ack_DL1_1:
          cbe.cl := inmsg.cl;
          Set_perm(store, adr, m);
          msg_PutML1_1 := RespL1_1(adr,PutML1_1,m,m,cbe.cl);
          msg_Put_AckL1_1 := AckL1_1(adr,Put_AckL1_1,m,msg_PutML1_1.src);
          if (cbe.ownerL1_1 = msg_PutML1_1.src) then
          cbe.cl := msg_PutML1_1.cl;
          undefine cbe.ownerL1_1;
          msg := DevReqL2(adr,DirtyEvictL2,m,directoryL2);
          Send_D2H_request(msg, m);
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mevict__I__C__M_evict;
          return true;
          endif;

        case Inv_AckL1_1:
          cbe.acksReceivedL1_1 := cbe.acksReceivedL1_1+1;
          Clear_perm(adr, m);
          cbe.State := directoryL1_1_mevict__dM_x_pI_store__C__M;
          return true;

        else return false;
      endswitch;

    endswitch;
    endalias;
    endalias;
    return false;
    end;

    function FSM_MSG_directoryL2(inmsg:Message; m:OBJSET_directoryL2) : boolean;
    var msg: Message;
    var msg1: Message;
    var msg2: Message;
    begin
      alias adr: inmsg.adr do
      alias cbe: i_directoryL2[m].cb[adr] do
    switch cbe.State
      case directoryL2_E:
      switch inmsg.mtype
        case CleanEvictNoDataL2:
          msg := HostRspL2(adr,GO_IL2,m,inmsg.src);
          Send_H2D_response(msg, m);
          if (inmsg.src = cbe.ownerL2) then
            Clear_perm(adr, m);
            cbe.State := directoryL2_I;
            return true;
          endif;
          if !(inmsg.src = cbe.ownerL2) then
            Clear_perm(adr, m);
            cbe.State := directoryL2_E;
            return true;
          endif;

        case DirtyEvictL2:
          if !(inmsg.src = cbe.ownerL2) then
            msg := HostRspL2(adr,GO_IL2,m,inmsg.src);
            Send_H2D_response(msg, m);
            Clear_perm(adr, m);
            cbe.State := directoryL2_E;
            return true;
          endif;
          if (inmsg.src = cbe.ownerL2) then
            msg := HostRspL2(adr,GO_WritePullL2,m,inmsg.src);
            Send_H2D_response(msg, m);
            Clear_perm(adr, m);
            cbe.State := directoryL2_E_DirtyEvict;
            return true;
          endif;

        case RdOwnL2:
          msg := HostReqL2(adr,SnpInvML2,inmsg.src,cbe.ownerL2);
          Send_H2D_request(msg, m);
          cbe.ownerL2 := inmsg.src;
          Clear_perm(adr, m);
          cbe.State := directoryL2_E_RdOwn;
          return true;

        case RdSharedL2:
          msg := HostReqL2(adr,SnpDataL2,inmsg.src,cbe.ownerL2);
          Send_H2D_request(msg, m);
          AddElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2);
          AddElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src);
          cbe.requesterL2 := inmsg.src;
          Clear_perm(adr, m);
          cbe.State := directoryL2_E_RdShared;
          return true;

        else return false;
      endswitch;

      case directoryL2_E_DirtyEvict:
      switch inmsg.mtype
        case DevDataMsgL2:
          cbe.cl := inmsg.cl;
          Clear_perm(adr, m);
          cbe.State := directoryL2_I;
          return true;

        else return false;
      endswitch;

      case directoryL2_E_RdOwn:
      switch inmsg.mtype
        case RspIFwdML2:
          Clear_perm(adr, m);
          cbe.State := directoryL2_E_RdOwn_RspIFwdM;
          return true;

        case RspIHitSEL2:
          msg1 := HostRspL2(adr,GO_ML2,m,inmsg.src);
          Send_H2D_response(msg1, m);
          msg2 := DataFullL2(adr,HostDataMsgL2,m,inmsg.src,cbe.cl);
          Send_H2D_data(msg2, m);
          Clear_perm(adr, m);
          cbe.State := directoryL2_M;
          return true;

        else return false;
      endswitch;

      case directoryL2_E_RdOwn_RspIFwdM:
      switch inmsg.mtype
        case DevDataMsgL2:
          cbe.cl := inmsg.cl;
          msg1 := HostRspL2(adr,GO_ML2,m,cbe.ownerL2);
          Send_H2D_response(msg1, m);
          msg2 := DataFullL2(adr,HostDataMsgL2,m,cbe.ownerL2,inmsg.cl);
          Send_H2D_data(msg2, m);
          Clear_perm(adr, m);
          cbe.State := directoryL2_M;
          return true;

        else return false;
      endswitch;

      case directoryL2_E_RdShared:
      switch inmsg.mtype
        case RspSFwdML2:
          Clear_perm(adr, m);
          cbe.State := directoryL2_E_RdShared_RspSFwdM;
          return true;

        else return false;
      endswitch;

      case directoryL2_E_RdShared_RspSFwdM:
      switch inmsg.mtype
        case DevDataMsgL2:
          msg1 := HostRspL2(adr,GO_SL2,m,cbe.requesterL2);
          Send_H2D_response(msg1, m);
          cbe.cl := inmsg.cl;
          msg2 := DataFullL2(adr,HostDataMsgL2,m,cbe.requesterL2,inmsg.cl);
          Send_H2D_data(msg2, m);
          Clear_perm(adr, m);
          cbe.State := directoryL2_S;
          return true;

        else return false;
      endswitch;

      case directoryL2_I:
      switch inmsg.mtype
        case CleanEvictNoDataL2:
          msg := HostRspL2(adr,GO_IL2,m,inmsg.src);
          Send_H2D_response(msg, m);
          Clear_perm(adr, m);
          cbe.State := directoryL2_I;
          return true;

        case DirtyEvictL2:
          msg := HostRspL2(adr,GO_IL2,m,inmsg.src);
          Send_H2D_response(msg, m);
          Clear_perm(adr, m);
          cbe.State := directoryL2_I;
          return true;

        case RdOwnL2:
          cbe.ownerL2 := inmsg.src;
          msg := HostRspL2(adr,GO_ML2,m,inmsg.src);
          Send_H2D_response(msg, m);
          msg1 := DataFullL2(adr,HostDataMsgL2,m,inmsg.src,cbe.cl);
          Send_H2D_data(msg1, m);
          Clear_perm(adr, m);
          cbe.State := directoryL2_E;
          return true;

        case RdSharedL2:
          AddElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src);
          msg := HostRspL2(adr,GO_SL2,m,inmsg.src);
          Send_H2D_response(msg, m);
          msg1 := DataFullL2(adr,HostDataMsgL2,m,inmsg.src,cbe.cl);
          Send_H2D_data(msg1, m);
          Clear_perm(adr, m);
          cbe.State := directoryL2_S;
          return true;

        else return false;
      endswitch;

      case directoryL2_M:
      switch inmsg.mtype
        case CleanEvictNoDataL2:
          if (inmsg.src != cbe.ownerL2) then
            msg := HostRspL2(adr,GO_IL2,m,inmsg.src);
            Send_H2D_response(msg, m);
            Clear_perm(adr, m);
            cbe.State := directoryL2_M;
            return true;
          endif;
          if !(inmsg.src != cbe.ownerL2) then
            Clear_perm(adr, m);
            cbe.State := directoryL2_M;
            return true;
          endif;

        case DirtyEvictL2:
          if (inmsg.src = cbe.ownerL2) then
            msg := HostRspL2(adr,GO_WritePullL2,m,inmsg.src);
            Send_H2D_response(msg, m);
            Clear_perm(adr, m);
            cbe.State := directoryL2_M_DirtyEvict;
            return true;
          endif;
          if !(inmsg.src = cbe.ownerL2) then
            msg := HostRspL2(adr,GO_IL2,m,inmsg.src);
            Send_H2D_response(msg, m);
            Clear_perm(adr, m);
            cbe.State := directoryL2_M;
            return true;
          endif;

        case RdOwnL2:
          msg := HostReqL2(adr,SnpInvML2,inmsg.src,cbe.ownerL2);
          Send_H2D_request(msg, m);
          cbe.ownerL2 := inmsg.src;
          Clear_perm(adr, m);
          cbe.State := directoryL2_M_RdOwn;
          return true;

        case RdSharedL2:
          msg := HostReqL2(adr,SnpDataL2,inmsg.src,cbe.ownerL2);
          Send_H2D_request(msg, m);
          AddElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2);
          AddElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src);
          cbe.requesterL2 := inmsg.src;
          Clear_perm(adr, m);
          cbe.State := directoryL2_M_RdShared;
          return true;

        else return false;
      endswitch;

      case directoryL2_M_DirtyEvict:
      switch inmsg.mtype
        case DevDataMsgL2:
          cbe.cl := inmsg.cl;
          Clear_perm(adr, m);
          cbe.State := directoryL2_I;
          return true;

        else return false;
      endswitch;

      case directoryL2_M_RdOwn:
      switch inmsg.mtype
        case RspIFwdML2:
          Clear_perm(adr, m);
          cbe.State := directoryL2_M_RdOwn_RspIFwdM;
          return true;

        else return false;
      endswitch;

      case directoryL2_M_RdOwn_RspIFwdM:
      switch inmsg.mtype
        case DevDataMsgL2:
          msg1 := HostRspL2(adr,GO_ML2,m,cbe.ownerL2);
          Send_H2D_response(msg1, m);
          msg2 := DataFullL2(adr,HostDataMsgL2,m,cbe.ownerL2,inmsg.cl);
          Send_H2D_data(msg2, m);
          cbe.cl := inmsg.cl;
          Clear_perm(adr, m);
          cbe.State := directoryL2_M;
          return true;

        else return false;
      endswitch;

      case directoryL2_M_RdShared:
      switch inmsg.mtype
        case RspSFwdML2:
          Clear_perm(adr, m);
          cbe.State := directoryL2_M_RdShared_RspSFwdM;
          return true;

        else return false;
      endswitch;

      case directoryL2_M_RdShared_RspSFwdM:
      switch inmsg.mtype
        case DevDataMsgL2:
          msg1 := HostRspL2(adr,GO_SL2,m,cbe.requesterL2);
          Send_H2D_response(msg1, m);
          msg2 := DataFullL2(adr,HostDataMsgL2,m,cbe.requesterL2,inmsg.cl);
          Send_H2D_data(msg2, m);
          cbe.cl := inmsg.cl;
          Clear_perm(adr, m);
          cbe.State := directoryL2_S;
          return true;

        else return false;
      endswitch;

      case directoryL2_S:
      switch inmsg.mtype
        case CleanEvictNoDataL2:
          msg := HostRspL2(adr,GO_IL2,m,inmsg.src);
          Send_H2D_response(msg, m);
          if (IsElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src)) then
            if (VectorCount_cache_sharersL2(cbe.cache_sharersL2) = 1) then
              RemoveElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src);
              Clear_perm(adr, m);
              cbe.State := directoryL2_I;
              return true;
            endif;
            if !(VectorCount_cache_sharersL2(cbe.cache_sharersL2) = 1) then
              RemoveElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src);
              Clear_perm(adr, m);
              cbe.State := directoryL2_S;
              return true;
            endif;
          endif;
          if !(IsElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src)) then
            RemoveElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src);
            Clear_perm(adr, m);
            cbe.State := directoryL2_S;
            return true;
          endif;

        case DirtyEvictL2:
          msg := HostRspL2(adr,GO_IL2,m,inmsg.src);
          Send_H2D_response(msg, m);
          if (IsElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src)) then
            if (VectorCount_cache_sharersL2(cbe.cache_sharersL2) = 1) then
              RemoveElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src);
              Clear_perm(adr, m);
              cbe.State := directoryL2_I;
              return true;
            endif;
            if !(VectorCount_cache_sharersL2(cbe.cache_sharersL2) = 1) then
              RemoveElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src);
              Clear_perm(adr, m);
              cbe.State := directoryL2_S;
              return true;
            endif;
          endif;
          if !(IsElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src)) then
            RemoveElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src);
            Clear_perm(adr, m);
            cbe.State := directoryL2_S;
            return true;
          endif;

        case RdOwnL2:
          cbe.ownerL2 := inmsg.src;
          cbe.acksExpectedL2 := VectorCount_cache_sharersL2(cbe.cache_sharersL2);
          if !(IsElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src)) then
            cbe.acksReceivedL2 := 0;
            if !(cbe.acksExpectedL2 != 0) then
              msg := HostRspL2(adr,GO_ML2,m,cbe.ownerL2);
              Send_H2D_response(msg, m);
              msg1 := DataFullL2(adr,HostDataMsgL2,m,inmsg.src,cbe.cl);
              Send_H2D_data(msg1, m);
              if !(IsElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2)) then
                Clear_perm(adr, m);
                cbe.State := directoryL2_M;
                return true;
              endif;
              if (IsElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2)) then
                ClearVector_cache_sharersL2(cbe.cache_sharersL2);
                Clear_perm(adr, m);
                cbe.State := directoryL2_M;
                return true;
              endif;
            endif;
            if (cbe.acksExpectedL2 != 0) then
              if !(IsElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2)) then
                msg := HostReqL2(adr,SnpInvSL2,m,m);
                Multicast_H2D_request_v_cache_sharersL2(msg, cbe.cache_sharersL2, m);
                ClearVector_cache_sharersL2(cbe.cache_sharersL2);
                Clear_perm(adr, m);
                cbe.State := directoryL2_S_RdOwn;
                return true;
              endif;
              if (IsElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2)) then
                RemoveElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2);
                msg := HostReqL2(adr,SnpInvSL2,m,m);
                Multicast_H2D_request_v_cache_sharersL2(msg, cbe.cache_sharersL2, m);
                ClearVector_cache_sharersL2(cbe.cache_sharersL2);
                AddElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2);
                Clear_perm(adr, m);
                cbe.State := directoryL2_S_RdOwn;
                return true;
              endif;
            endif;
          endif;
          if (IsElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src)) then
            cbe.acksExpectedL2 := cbe.acksExpectedL2-1;
            cbe.acksReceivedL2 := 0;
            if !(cbe.acksExpectedL2 != 0) then
              msg := HostRspL2(adr,GO_ML2,m,cbe.ownerL2);
              Send_H2D_response(msg, m);
              msg1 := DataFullL2(adr,HostDataMsgL2,m,inmsg.src,cbe.cl);
              Send_H2D_data(msg1, m);
              if !(IsElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2)) then
                Clear_perm(adr, m);
                cbe.State := directoryL2_M;
                return true;
              endif;
              if (IsElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2)) then
                ClearVector_cache_sharersL2(cbe.cache_sharersL2);
                Clear_perm(adr, m);
                cbe.State := directoryL2_M;
                return true;
              endif;
            endif;
            if (cbe.acksExpectedL2 != 0) then
              if !(IsElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2)) then
                msg := HostReqL2(adr,SnpInvSL2,m,m);
                Multicast_H2D_request_v_cache_sharersL2(msg, cbe.cache_sharersL2, m);
                ClearVector_cache_sharersL2(cbe.cache_sharersL2);
                Clear_perm(adr, m);
                cbe.State := directoryL2_S_RdOwn;
                return true;
              endif;
              if (IsElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2)) then
                RemoveElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2);
                msg := HostReqL2(adr,SnpInvSL2,m,m);
                Multicast_H2D_request_v_cache_sharersL2(msg, cbe.cache_sharersL2, m);
                ClearVector_cache_sharersL2(cbe.cache_sharersL2);
                AddElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2);
                Clear_perm(adr, m);
                cbe.State := directoryL2_S_RdOwn;
                return true;
              endif;
            endif;
          endif;

        case RdSharedL2:
          msg := HostRspL2(adr,GO_SL2,m,inmsg.src);
          Send_H2D_response(msg, m);
          msg1 := DataFullL2(adr,HostDataMsgL2,m,inmsg.src,cbe.cl);
          Send_H2D_data(msg1, m);
          AddElement_cache_sharersL2(cbe.cache_sharersL2, inmsg.src);
          Clear_perm(adr, m);
          cbe.State := directoryL2_S;
          return true;

        else return false;
      endswitch;

      case directoryL2_S_RdOwn:
      switch inmsg.mtype
        case RspIHitSEL2:
          cbe.acksReceivedL2 := cbe.acksReceivedL2+1;
          if (cbe.acksReceivedL2 = cbe.acksExpectedL2) then
            msg1 := HostRspL2(adr,GO_ML2,m,cbe.ownerL2);
            Send_H2D_response(msg1, m);
            msg2 := DataFullL2(adr,HostDataMsgL2,m,cbe.ownerL2,cbe.cl);
            Send_H2D_data(msg2, m);
            if !(IsElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2)) then
              Clear_perm(adr, m);
              cbe.State := directoryL2_M;
              return true;
            endif;
            if (IsElement_cache_sharersL2(cbe.cache_sharersL2, cbe.ownerL2)) then
              ClearVector_cache_sharersL2(cbe.cache_sharersL2);
              Clear_perm(adr, m);
              cbe.State := directoryL2_M;
              return true;
            endif;
          endif;
          if !(cbe.acksReceivedL2 = cbe.acksExpectedL2) then
            Clear_perm(adr, m);
            cbe.State := directoryL2_S_RdOwn;
            return true;
          endif;

        else return false;
      endswitch;

    endswitch;
    endalias;
    endalias;
    return false;
    end;

    function FSM_MSG_cacheL1_2(inmsg:Message; m:OBJSET_cacheL1_2) : boolean;
    var msg: Message;
    begin
      alias adr: inmsg.adr do
      alias cbe: i_cacheL1_2[m].cb[adr] do
    switch cbe.State
      case cacheL1_2_I:
      switch inmsg.mtype
        else return false;
      endswitch;

      case cacheL1_2_I_load:
      switch inmsg.mtype
        case GetS_AckL1_2:
          cbe.cl := inmsg.cl;
          Set_perm(load, adr, m);
          Clear_perm(adr, m); Set_perm(load, adr, m);
          cbe.State := cacheL1_2_S;
          return true;

        else return false;
      endswitch;

      case cacheL1_2_I_store:
      switch inmsg.mtype
        case GetM_Ack_ADL1_2:
          cbe.cl := inmsg.cl;
          cbe.acksExpectedL1_2 := inmsg.acksRequiredL1_2;
          if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            Clear_perm(adr, m);
            cbe.State := cacheL1_2_I_store_GetM_Ack_AD;
            return true;
          endif;
          if (cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            cbe.acksReceivedL1_2 := 0;
            cbe.acksExpectedL1_2 := 0;
            Set_perm(store, adr, m);
            Clear_perm(adr, m); Set_perm(store, adr, m); Set_perm(load, adr, m);
            cbe.State := cacheL1_2_M;
            return true;
          endif;

        case GetM_Ack_DL1_2:
          cbe.cl := inmsg.cl;
          Set_perm(store, adr, m);
          Clear_perm(adr, m); Set_perm(store, adr, m); Set_perm(load, adr, m);
          cbe.State := cacheL1_2_M;
          return true;

        case Inv_AckL1_2:
          cbe.acksReceivedL1_2 := cbe.acksReceivedL1_2+1;
          Clear_perm(adr, m);
          cbe.State := cacheL1_2_I_store;
          return true;

        else return false;
      endswitch;

      case cacheL1_2_I_store_GetM_Ack_AD:
      switch inmsg.mtype
        case Inv_AckL1_2:
          cbe.acksReceivedL1_2 := cbe.acksReceivedL1_2+1;
          if (cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            cbe.acksReceivedL1_2 := 0;
            cbe.acksExpectedL1_2 := 0;
            Set_perm(store, adr, m);
            Clear_perm(adr, m); Set_perm(store, adr, m); Set_perm(load, adr, m);
            cbe.State := cacheL1_2_M;
            return true;
          endif;
          if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            Clear_perm(adr, m);
            cbe.State := cacheL1_2_I_store_GetM_Ack_AD;
            return true;
          endif;

        else return false;
      endswitch;

      case cacheL1_2_M:
      switch inmsg.mtype
        case Fwd_GetML1_2:
          msg := RespL1_2(adr,GetM_Ack_DL1_2,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m);
          cbe.State := cacheL1_2_I;
          return true;

        case Fwd_GetSL1_2:
          msg := RespL1_2(adr,GetS_AckL1_2,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          msg := RespL1_2(adr,WBL1_2,m,directoryL1_2,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m); Set_perm(load, adr, m);
          cbe.State := cacheL1_2_S;
          return true;

        else return false;
      endswitch;

      case cacheL1_2_M_evict:
      switch inmsg.mtype
        case Fwd_GetML1_2:
          msg := RespL1_2(adr,GetM_Ack_DL1_2,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m);
          cbe.State := cacheL1_2_M_evict_x_I;
          return true;

        case Fwd_GetSL1_2:
          msg := RespL1_2(adr,GetS_AckL1_2,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          msg := RespL1_2(adr,WBL1_2,m,directoryL1_2,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m);
          cbe.State := cacheL1_2_S_evict;
          return true;

        case Put_AckL1_2:
          Clear_perm(adr, m);
          cbe.State := cacheL1_2_I;
          return true;

        else return false;
      endswitch;

      case cacheL1_2_M_evict_x_I:
      switch inmsg.mtype
        case Put_AckL1_2:
          Clear_perm(adr, m);
          cbe.State := cacheL1_2_I;
          return true;

        else return false;
      endswitch;

      case cacheL1_2_S:
      switch inmsg.mtype
        case InvL1_2:
          msg := RespL1_2(adr,Inv_AckL1_2,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m);
          cbe.State := cacheL1_2_I;
          return true;

        else return false;
      endswitch;

      case cacheL1_2_S_evict:
      switch inmsg.mtype
        case InvL1_2:
          msg := RespL1_2(adr,Inv_AckL1_2,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m);
          cbe.State := cacheL1_2_S_evict_x_I;
          return true;

        case Put_AckL1_2:
          Clear_perm(adr, m);
          cbe.State := cacheL1_2_I;
          return true;

        else return false;
      endswitch;

      case cacheL1_2_S_evict_x_I:
      switch inmsg.mtype
        case Put_AckL1_2:
          Clear_perm(adr, m);
          cbe.State := cacheL1_2_I;
          return true;

        else return false;
      endswitch;

      case cacheL1_2_S_store:
      switch inmsg.mtype
        case GetM_Ack_ADL1_2:
          cbe.acksExpectedL1_2 := inmsg.acksRequiredL1_2;
          if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            Clear_perm(adr, m);
            cbe.State := cacheL1_2_S_store_GetM_Ack_AD;
            return true;
          endif;
          if (cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            cbe.acksReceivedL1_2 := 0;
            cbe.acksExpectedL1_2 := 0;
            Set_perm(store, adr, m);
            Clear_perm(adr, m); Set_perm(store, adr, m); Set_perm(load, adr, m);
            cbe.State := cacheL1_2_M;
            return true;
          endif;

        case GetM_Ack_DL1_2:
          Set_perm(store, adr, m);
          Clear_perm(adr, m); Set_perm(store, adr, m); Set_perm(load, adr, m);
          cbe.State := cacheL1_2_M;
          return true;

        case InvL1_2:
          msg := RespL1_2(adr,Inv_AckL1_2,m,inmsg.src,cbe.cl);
          Send_resp(msg, m);
          Clear_perm(adr, m);
          cbe.State := cacheL1_2_I_store;
          return true;

        case Inv_AckL1_2:
          cbe.acksReceivedL1_2 := cbe.acksReceivedL1_2+1;
          Clear_perm(adr, m);
          cbe.State := cacheL1_2_S_store;
          return true;

        else return false;
      endswitch;

      case cacheL1_2_S_store_GetM_Ack_AD:
      switch inmsg.mtype
        case Inv_AckL1_2:
          cbe.acksReceivedL1_2 := cbe.acksReceivedL1_2+1;
          if !(cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            Clear_perm(adr, m);
            cbe.State := cacheL1_2_S_store_GetM_Ack_AD;
            return true;
          endif;
          if (cbe.acksExpectedL1_2 = cbe.acksReceivedL1_2) then
            cbe.acksReceivedL1_2 := 0;
            cbe.acksExpectedL1_2 := 0;
            Set_perm(store, adr, m);
            Clear_perm(adr, m); Set_perm(store, adr, m); Set_perm(load, adr, m);
            cbe.State := cacheL1_2_M;
            return true;
          endif;

        else return false;
      endswitch;

    endswitch;
    endalias;
    endalias;
    return false;
    end;


--Backend/Murphi/MurphiModular/GenResetFunc

  procedure System_Reset();
  begin
  Reset_perm();
  Reset_NET_();
  ResetMachine_();
  end;


--Backend/Murphi/MurphiModular/GenRules
  ----Backend/Murphi/MurphiModular/Rules/GenAccessRuleSet
    ruleset m:OBJSET_cacheL1_1 do
    ruleset adr:Address do
      alias cbe:i_cacheL1_1[m].cb[adr] do

      rule "cacheL1_1_I_load"
        cbe.State = cacheL1_1_I & network_ready()
      ==>

        FSM_Access_cacheL1_1_I_load(adr, m);
      endrule;


      rule "cacheL1_1_I_store"
        cbe.State = cacheL1_1_I & network_ready()
      ==>

        FSM_Access_cacheL1_1_I_store(adr, m);
      endrule;


      rule "cacheL1_1_M_store"
        cbe.State = cacheL1_1_M
      ==>

        FSM_Access_cacheL1_1_M_store(adr, m);
      endrule;


      rule "cacheL1_1_M_evict"
        cbe.State = cacheL1_1_M & network_ready()
      ==>

        FSM_Access_cacheL1_1_M_evict(adr, m);
      endrule;


      rule "cacheL1_1_M_load"
        cbe.State = cacheL1_1_M
      ==>

        FSM_Access_cacheL1_1_M_load(adr, m);
      endrule;


      rule "cacheL1_1_S_load"
        cbe.State = cacheL1_1_S
      ==>

        FSM_Access_cacheL1_1_S_load(adr, m);
      endrule;


      rule "cacheL1_1_S_evict"
        cbe.State = cacheL1_1_S & network_ready()
      ==>

        FSM_Access_cacheL1_1_S_evict(adr, m);
      endrule;


      rule "cacheL1_1_S_store"
        cbe.State = cacheL1_1_S & network_ready()
      ==>

        FSM_Access_cacheL1_1_S_store(adr, m);
      endrule;



      endalias;
    endruleset;
    endruleset;

    ruleset m:OBJSET_directoryL1_2 do
    ruleset adr:Address do
      alias cbe:i_directoryL1_2[m].cb[adr] do

      rule "directoryL1_2_I__C__M_evict"
        cbe.State = directoryL1_2_I__C__M & network_ready()
      ==>

        FSM_Access_directoryL1_2_I__C__M_evict(adr, m);
      endrule;


      rule "directoryL1_2_I__C__S_evict"
        cbe.State = directoryL1_2_I__C__S & network_ready()
      ==>

        FSM_Access_directoryL1_2_I__C__S_evict(adr, m);
      endrule;


      rule "directoryL1_2_M__C__M_evict"
        cbe.State = directoryL1_2_M__C__M & network_ready()
      ==>

        FSM_Access_directoryL1_2_M__C__M_evict(adr, m);
      endrule;


      rule "directoryL1_2_S__C__M_evict"
        cbe.State = directoryL1_2_S__C__M & network_ready()
      ==>

        FSM_Access_directoryL1_2_S__C__M_evict(adr, m);
      endrule;


      rule "directoryL1_2_S__C__S_evict"
        cbe.State = directoryL1_2_S__C__S & network_ready()
      ==>

        FSM_Access_directoryL1_2_S__C__S_evict(adr, m);
      endrule;



      endalias;
    endruleset;
    endruleset;

    ruleset m:OBJSET_directoryL1_1 do
    ruleset adr:Address do
      alias cbe:i_directoryL1_1[m].cb[adr] do

      rule "directoryL1_1_I__C__M_evict"
        cbe.State = directoryL1_1_I__C__M & network_ready()
      ==>

        FSM_Access_directoryL1_1_I__C__M_evict(adr, m);
      endrule;


      rule "directoryL1_1_I__C__S_evict"
        cbe.State = directoryL1_1_I__C__S & network_ready()
      ==>

        FSM_Access_directoryL1_1_I__C__S_evict(adr, m);
      endrule;


      rule "directoryL1_1_M__C__M_evict"
        cbe.State = directoryL1_1_M__C__M & network_ready()
      ==>

        FSM_Access_directoryL1_1_M__C__M_evict(adr, m);
      endrule;


      rule "directoryL1_1_S__C__M_evict"
        cbe.State = directoryL1_1_S__C__M & network_ready()
      ==>

        FSM_Access_directoryL1_1_S__C__M_evict(adr, m);
      endrule;


      rule "directoryL1_1_S__C__S_evict"
        cbe.State = directoryL1_1_S__C__S & network_ready()
      ==>

        FSM_Access_directoryL1_1_S__C__S_evict(adr, m);
      endrule;



      endalias;
    endruleset;
    endruleset;

    ruleset m:OBJSET_cacheL1_2 do
    ruleset adr:Address do
      alias cbe:i_cacheL1_2[m].cb[adr] do

      rule "cacheL1_2_I_load"
        cbe.State = cacheL1_2_I & network_ready()
      ==>

        FSM_Access_cacheL1_2_I_load(adr, m);
      endrule;


      rule "cacheL1_2_I_store"
        cbe.State = cacheL1_2_I & network_ready()
      ==>

        FSM_Access_cacheL1_2_I_store(adr, m);
      endrule;


      rule "cacheL1_2_M_store"
        cbe.State = cacheL1_2_M
      ==>

        FSM_Access_cacheL1_2_M_store(adr, m);
      endrule;


      rule "cacheL1_2_M_evict"
        cbe.State = cacheL1_2_M & network_ready()
      ==>

        FSM_Access_cacheL1_2_M_evict(adr, m);
      endrule;


      rule "cacheL1_2_M_load"
        cbe.State = cacheL1_2_M
      ==>

        FSM_Access_cacheL1_2_M_load(adr, m);
      endrule;


      rule "cacheL1_2_S_load"
        cbe.State = cacheL1_2_S
      ==>

        FSM_Access_cacheL1_2_S_load(adr, m);
      endrule;


      rule "cacheL1_2_S_evict"
        cbe.State = cacheL1_2_S & network_ready()
      ==>

        FSM_Access_cacheL1_2_S_evict(adr, m);
      endrule;


      rule "cacheL1_2_S_store"
        cbe.State = cacheL1_2_S & network_ready()
      ==>

        FSM_Access_cacheL1_2_S_store(adr, m);
      endrule;



      endalias;
    endruleset;
    endruleset;

  ----Backend/Murphi/MurphiModular/Rules/GenEventRuleSet
  ----Backend/Murphi/MurphiModular/Rules/GenNetworkRule
    ruleset dst:Machines do
    --    ruleset src: Machines do
            alias msg:fwd[dst][0] do
              rule "Receive fwd"
                cnt_fwd[dst] > 0
              ==>
            if IsMember(dst, OBJSET_directoryL2) then
              if FSM_MSG_directoryL2(msg, dst) then
                  Pop_fwd(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_1) then
              if FSM_MSG_directoryL1_1(msg, dst) then
                  Pop_fwd(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_2) then
              if FSM_MSG_directoryL1_2(msg, dst) then
                  Pop_fwd(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_1) then
              if FSM_MSG_cacheL1_1(msg, dst) then
                  Pop_fwd(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_2) then
              if FSM_MSG_cacheL1_2(msg, dst) then
                  Pop_fwd(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            else error "unknown machine";
            endif;

              endrule;
            endalias;
    --    endruleset;
    endruleset;

    ruleset dst:Machines do
    --    ruleset src: Machines do
            alias msg:D2H_data[dst][0] do
              rule "Receive D2H_data"
                cnt_D2H_data[dst] > 0
              ==>
            if IsMember(dst, OBJSET_directoryL2) then
              if FSM_MSG_directoryL2(msg, dst) then
                  Pop_D2H_data(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_1) then
              if FSM_MSG_directoryL1_1(msg, dst) then
                  Pop_D2H_data(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_2) then
              if FSM_MSG_directoryL1_2(msg, dst) then
                  Pop_D2H_data(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_1) then
              if FSM_MSG_cacheL1_1(msg, dst) then
                  Pop_D2H_data(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_2) then
              if FSM_MSG_cacheL1_2(msg, dst) then
                  Pop_D2H_data(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            else error "unknown machine";
            endif;

              endrule;
            endalias;
    --    endruleset;
    endruleset;

    ruleset dst:Machines do
    --    ruleset src: Machines do
            alias msg:resp[dst][0] do
              rule "Receive resp"
                cnt_resp[dst] > 0
              ==>
            if IsMember(dst, OBJSET_directoryL2) then
              if FSM_MSG_directoryL2(msg, dst) then
                  Pop_resp(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_1) then
              if FSM_MSG_directoryL1_1(msg, dst) then
                  Pop_resp(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_2) then
              if FSM_MSG_directoryL1_2(msg, dst) then
                  Pop_resp(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_1) then
              if FSM_MSG_cacheL1_1(msg, dst) then
                  Pop_resp(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_2) then
              if FSM_MSG_cacheL1_2(msg, dst) then
                  Pop_resp(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            else error "unknown machine";
            endif;

              endrule;
            endalias;
    --    endruleset;
    endruleset;

    ruleset dst:Machines do
    --    ruleset src: Machines do
            alias msg:H2D_data[dst][0] do
              rule "Receive H2D_data"
                cnt_H2D_data[dst] > 0
              ==>
            if IsMember(dst, OBJSET_directoryL2) then
              if FSM_MSG_directoryL2(msg, dst) then
                  Pop_H2D_data(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_1) then
              if FSM_MSG_directoryL1_1(msg, dst) then
                  Pop_H2D_data(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_2) then
              if FSM_MSG_directoryL1_2(msg, dst) then
                  Pop_H2D_data(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_1) then
              if FSM_MSG_cacheL1_1(msg, dst) then
                  Pop_H2D_data(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_2) then
              if FSM_MSG_cacheL1_2(msg, dst) then
                  Pop_H2D_data(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            else error "unknown machine";
            endif;

              endrule;
            endalias;
    --    endruleset;
    endruleset;

    ruleset dst:Machines do
    --    ruleset src: Machines do
            alias msg:req[dst][0] do
              rule "Receive req"
                cnt_req[dst] > 0
              ==>
            if IsMember(dst, OBJSET_directoryL2) then
              if FSM_MSG_directoryL2(msg, dst) then
                  Pop_req(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_1) then
              if FSM_MSG_directoryL1_1(msg, dst) then
                  Pop_req(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_2) then
              if FSM_MSG_directoryL1_2(msg, dst) then
                  Pop_req(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_1) then
              if FSM_MSG_cacheL1_1(msg, dst) then
                  Pop_req(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_2) then
              if FSM_MSG_cacheL1_2(msg, dst) then
                  Pop_req(dst); -- Fletch: removed src, see onetworkfunc
              endif;
            else error "unknown machine";
            endif;

              endrule;
            endalias;
    --    endruleset;
    endruleset;

    ruleset dst:Machines do
        choose midx:H2D_response[dst] do
            alias mach:H2D_response[dst] do
            alias msg:mach[midx] do
              rule "Receive H2D_response"
                !isundefined(msg.mtype)
              ==>
            if IsMember(dst, OBJSET_directoryL2) then
              if FSM_MSG_directoryL2(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_1) then
              if FSM_MSG_directoryL1_1(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_2) then
              if FSM_MSG_directoryL1_2(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_1) then
              if FSM_MSG_cacheL1_1(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_2) then
              if FSM_MSG_cacheL1_2(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            else error "unknown machine";
            endif;

              endrule;
            endalias;
            endalias;
        endchoose;
    endruleset;

    ruleset dst:Machines do
        choose midx:D2H_response[dst] do
            alias mach:D2H_response[dst] do
            alias msg:mach[midx] do
              rule "Receive D2H_response"
                !isundefined(msg.mtype)
              ==>
            if IsMember(dst, OBJSET_directoryL2) then
              if FSM_MSG_directoryL2(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_1) then
              if FSM_MSG_directoryL1_1(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_2) then
              if FSM_MSG_directoryL1_2(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_1) then
              if FSM_MSG_cacheL1_1(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_2) then
              if FSM_MSG_cacheL1_2(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            else error "unknown machine";
            endif;

              endrule;
            endalias;
            endalias;
        endchoose;
    endruleset;

    ruleset dst:Machines do
        choose midx:H2D_request[dst] do
            alias mach:H2D_request[dst] do
            alias msg:mach[midx] do
              rule "Receive H2D_request"
                !isundefined(msg.mtype)
              ==>
            if IsMember(dst, OBJSET_directoryL2) then
              if FSM_MSG_directoryL2(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_1) then
              if FSM_MSG_directoryL1_1(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_2) then
              if FSM_MSG_directoryL1_2(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_1) then
              if FSM_MSG_cacheL1_1(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_2) then
              if FSM_MSG_cacheL1_2(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            else error "unknown machine";
            endif;

              endrule;
            endalias;
            endalias;
        endchoose;
    endruleset;

    ruleset dst:Machines do
        choose midx:D2H_request[dst] do
            alias mach:D2H_request[dst] do
            alias msg:mach[midx] do
              rule "Receive D2H_request"
                !isundefined(msg.mtype)
              ==>
            if IsMember(dst, OBJSET_directoryL2) then
              if FSM_MSG_directoryL2(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_1) then
              if FSM_MSG_directoryL1_1(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_directoryL1_2) then
              if FSM_MSG_directoryL1_2(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_1) then
              if FSM_MSG_cacheL1_1(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            elsif IsMember(dst, OBJSET_cacheL1_2) then
              if FSM_MSG_cacheL1_2(msg, dst) then
                MultiSetRemove(midx, mach);
              endif;
            else error "unknown machine";
            endif;

              endrule;
            endalias;
            endalias;
        endchoose;
    endruleset;


--Backend/Murphi/MurphiModular/GenStartStates

  startstate
    System_Reset();
  endstartstate;

--Backend/Murphi/MurphiModular/GenInvariant
