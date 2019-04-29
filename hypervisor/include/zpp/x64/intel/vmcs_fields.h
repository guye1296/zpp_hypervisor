#pragma once
#include <cstdint>

namespace zpp::x64::intel
{
namespace vmcs_fields
{
/**
 * The VMCS fields.
 */
enum vmcs_field : std::uint64_t
{
    vpid = 0x0,
    posted_interrupt_notification_vector = 0x2,
    eptp_index = 0x4,
    guest_es_selector = 0x800,
    guest_cs_selector = 0x802,
    guest_ss_selector = 0x804,
    guest_ds_selector = 0x806,
    guest_fs_selector = 0x808,
    guest_gs_selector = 0x80a,
    guest_ldtr_selector = 0x80c,
    guest_tr_selector = 0x80e,
    guest_interrupt_status = 0x810,
    pml_index = 0x812,
    host_es_selector = 0xc00,
    host_cs_selector = 0xc02,
    host_ss_selector = 0xc04,
    host_ds_selector = 0xc06,
    host_fs_selector = 0xc08,
    host_gs_selector = 0xc0a,
    host_tr_selector = 0xc0c,
    io_bitmap_a = 0x2000,
    io_bitmap_b = 0x2002,
    msr_bitmap = 0x2004,
    vm_exit_msr_store_address = 0x2006,
    vm_exit_msr_load_address = 0x2008,
    vm_entry_msr_load_address = 0x200a,
    excecutive_vmcs_pointer = 0x200c,
    pml_address = 0x200e,
    tsc_offset = 0x2010,
    virtual_apic_address = 0x2012,
    apic_access_address = 0x2014,
    posted_interrupt_descriptor_address = 0x2016,
    vm_function_controls = 0x2018,
    ept_pointer = 0x201a,
    eio_exit_bitmap_0 = 0x201c,
    eio_exit_bitmap_1 = 0x201e,
    eio_exit_bitmap_2 = 0x2020,
    eio_exit_bitmap_3 = 0x2022,
    eptp_list_address = 0x2024,
    vmread_bitmap_address = 0x2026,
    vmwrite_bitmap_address = 0x2028,
    virtualization_exception_information_address = 0x202a,
    xss_exiting_bitmap = 0x202c,
    encls_exiting_bitmap = 0x202e,
    sub_page_permission_table_pointer = 0x2030,
    tsc_multiplier = 0x2032,
    guest_physical_address = 0x2400,
    vmcs_link_pointer = 0x2800,
    guest_ia32_debugctl = 0x2802,
    guest_ia32_pat = 0x2804,
    guest_ia32_efer = 0x2806,
    guest_ia32_perf_global_ctrl = 0x2808,
    guest_pdpte_0 = 0x280a,
    guest_pdpte_1 = 0x280c,
    guest_pdpte_2 = 0x280e,
    guest_pdpte_3 = 0x2810,
    guest_ia32_bndcfgs = 0x2812,
    host_ia32_pat = 0x2c00,
    host_ia32_efer = 0x2c02,
    host_ia32_perf_global_ctrl = 0x2c04,
    pin_based_vm_execution_controls = 0x4000,
    primary_processor_based_vm_execution_controls = 0x4002,
    exception_bitmap = 0x4004,
    page_fault_error_code_mask = 0x4006,
    page_fault_error_code_match = 0x4008,
    cr3_target_count = 0x400a,
    vm_exit_controls = 0x400c,
    vm_exit_msr_store_count = 0x400e,
    vm_exit_msr_load_count = 0x4010,
    vm_entry_controls = 0x4012,
    vm_entry_msr_load_count = 0x4014,
    vm_entry_interruption_information_field = 0x4016,
    vm_entry_exception_error_code = 0x4018,
    vm_entry_instruction_length = 0x401a,
    trr_threshold = 0x401c,
    secondary_processor_based_vm_execution_controls = 0x401e,
    ple_gap = 0x4020,
    ple_window = 0x4022,
    vm_instruction_error = 0x4400,
    exit_reason = 0x4402,
    vm_exit_interruption_information = 0x4404,
    vm_exit_interruption_error_code = 0x4406,
    idt_vectoring_information_field = 0x4408,
    idt_vectoring_error_code = 0x440a,
    vm_exit_instruction_length = 0x440c,
    vm_exit_instruction_information = 0x440e,
    guest_es_limit = 0x4800,
    guest_cs_limit = 0x4802,
    guest_ss_limit = 0x4804,
    guest_ds_limit = 0x4806,
    guest_fs_limit = 0x4808,
    guest_gs_limit = 0x480a,
    guest_ldtr_limit = 0x480c,
    guest_tr_limit = 0x480e,
    guest_gdtr_limit = 0x4810,
    guest_idtr_limit = 0x4812,
    guest_es_access_rights = 0x4814,
    guest_cs_access_rights = 0x4816,
    guest_ss_access_rights = 0x4818,
    guest_ds_access_rights = 0x481a,
    guest_fs_access_rights = 0x481c,
    guest_gs_access_rights = 0x481e,
    guest_ldtr_access_rights = 0x4820,
    guest_tr_access_rights = 0x4822,
    guest_interruptibility_state = 0x4824,
    guest_activity_state = 0x4826,
    guest_smbase = 0x4828,
    guest_ia32_sysenter_cs = 0x482a,
    vmx_preemption_timer_value = 0x482e,
    host_ia32_sysenter_cs = 0x4c00,
    cr0_guest_host_mask = 0x6000,
    cr4_guest_host_mask = 0x6002,
    cr0_read_shadow = 0x6004,
    cr4_read_shadow = 0x6006,
    cr3_target_value_0 = 0x6008,
    cr3_target_value_1 = 0x600a,
    cr3_target_value_2 = 0x600c,
    cr3_target_value_3 = 0x600e,
    guest_cr0 = 0x6800,
    guest_cr3 = 0x6802,
    guest_cr4 = 0x6804,
    guest_es_base = 0x6806,
    guest_cs_base = 0x6808,
    guest_ss_base = 0x680a,
    guest_ds_base = 0x680c,
    guest_fs_base = 0x680e,
    guest_gs_base = 0x6810,
    guest_ldtr_base = 0x6812,
    guest_tr_base = 0x6814,
    guest_gdtr_base = 0x6816,
    guest_idtr_base = 0x6818,
    guest_dr7 = 0x681a,
    guest_rsp = 0x681c,
    guest_rip = 0x681e,
    guest_rflags = 0x6820,
    guest_pending_debug_exceptions = 0x6822,
    guest_ia32_sysenter_esp = 0x6824,
    guest_ia32_sysenter_eip = 0x6826,
    host_cr0 = 0x6c00,
    host_cr3 = 0x6c02,
    host_cr4 = 0x6c04,
    host_fs_base = 0x6c06,
    host_gs_base = 0x6c08,
    host_tr_base = 0x6c0a,
    host_gdtr_base = 0x6c0c,
    host_idtr_base = 0x6c0e,
    host_ia32_sysenter_esp = 0x6c10,
    host_ia32_sysenter_eip = 0x6c12,
    host_rsp = 0x6c14,
    host_rip = 0x6c16,
}; // vmcs_field
} // namespace vmcs_fields

} // namespace zpp::x64::intel
