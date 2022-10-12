// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Collatz_HH_
#define _Collatz_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct Collatz : public sc_module {
    // Port declarations 11
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<8> > agg_result_steps;
    sc_out< sc_logic > agg_result_steps_ap_vld;
    sc_out< sc_lv<8> > agg_result_greatest;
    sc_out< sc_logic > agg_result_greatest_ap_vld;
    sc_in< sc_lv<8> > x;


    // Module declarations
    Collatz(sc_module_name name);
    SC_HAS_PROCESS(Collatz);

    ~Collatz();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > aux_4_fu_107_p3;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln10_fu_65_p2;
    sc_signal< sc_lv<16> > aux_0_reg_54;
    sc_signal< sc_lv<15> > aux_fu_75_p4;
    sc_signal< sc_lv<16> > shl_ln14_fu_89_p2;
    sc_signal< sc_lv<16> > sub_ln14_fu_95_p2;
    sc_signal< sc_lv<1> > trunc_ln10_fu_71_p1;
    sc_signal< sc_lv<16> > aux_2_fu_101_p2;
    sc_signal< sc_lv<16> > aux_1_fu_85_p1;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<16> ap_const_lv16_3;
    static const sc_lv<8> ap_const_lv8_10;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<8> ap_const_lv8_7;
    static const sc_lv<16> ap_const_lv16_1;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<16> ap_const_lv16_2;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_agg_result_greatest();
    void thread_agg_result_greatest_ap_vld();
    void thread_agg_result_steps();
    void thread_agg_result_steps_ap_vld();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_aux_1_fu_85_p1();
    void thread_aux_2_fu_101_p2();
    void thread_aux_4_fu_107_p3();
    void thread_aux_fu_75_p4();
    void thread_icmp_ln10_fu_65_p2();
    void thread_shl_ln14_fu_89_p2();
    void thread_sub_ln14_fu_95_p2();
    void thread_trunc_ln10_fu_71_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
