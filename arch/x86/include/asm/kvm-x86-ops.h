/* SPDX-License-Identifier: GPL-2.0 */
#if !defined(KVM_X86_OP) || !defined(KVM_X86_OP_NULL)
BUILD_BUG_ON(1)
#endif

/*
 * KVM_X86_OP() and KVM_X86_OP_NULL() are used to help generate
 * "static_call()"s. They are also intended for use when defining
 * the vmx/svm kvm_x86_ops. KVM_X86_OP() can be used for those
 * functions that follow the [svm|vmx]_func_name convention.
 * KVM_X86_OP_NULL() can leave a NULL definition for the
 * case where there is no definition or a function name that
 * doesn't match the typical naming convention is supplied.
 */
KVM_X86_OP_NULL(hardware_enable)
KVM_X86_OP_NULL(hardware_disable)
KVM_X86_OP_NULL(hardware_unsetup)
KVM_X86_OP_NULL(cpu_has_accelerated_tpr)
KVM_X86_OP(has_emulated_msr)
KVM_X86_OP(vcpu_after_set_cpuid)
KVM_X86_OP(vm_init)
KVM_X86_OP_NULL(vm_destroy)
KVM_X86_OP(vcpu_create)
KVM_X86_OP(vcpu_free)
KVM_X86_OP(vcpu_reset)
KVM_X86_OP(prepare_guest_switch)
KVM_X86_OP(vcpu_load)
KVM_X86_OP(vcpu_put)
KVM_X86_OP(update_exception_bitmap)
KVM_X86_OP(get_msr)
KVM_X86_OP(set_msr)
KVM_X86_OP(get_segment_base)
KVM_X86_OP(get_segment)
KVM_X86_OP(get_cpl)
KVM_X86_OP(set_segment)
KVM_X86_OP_NULL(get_cs_db_l_bits)
KVM_X86_OP(set_cr0)
KVM_X86_OP_NULL(post_set_cr3)
KVM_X86_OP(is_valid_cr4)
KVM_X86_OP(set_cr4)
KVM_X86_OP(set_efer)
KVM_X86_OP(get_idt)
KVM_X86_OP(set_idt)
KVM_X86_OP(get_gdt)
KVM_X86_OP(set_gdt)
KVM_X86_OP(sync_dirty_debug_regs)
KVM_X86_OP(set_dr7)
KVM_X86_OP(cache_reg)
KVM_X86_OP(get_rflags)
KVM_X86_OP(set_rflags)
KVM_X86_OP(get_if_flag)
KVM_X86_OP(tlb_flush_all)
KVM_X86_OP(tlb_flush_current)
KVM_X86_OP_NULL(tlb_remote_flush)
KVM_X86_OP_NULL(tlb_remote_flush_with_range)
KVM_X86_OP(tlb_flush_gva)
KVM_X86_OP(tlb_flush_guest)
KVM_X86_OP(vcpu_pre_run)
KVM_X86_OP(run)
KVM_X86_OP_NULL(handle_exit)
KVM_X86_OP_NULL(skip_emulated_instruction)
KVM_X86_OP_NULL(update_emulated_instruction)
KVM_X86_OP(set_interrupt_shadow)
KVM_X86_OP(get_interrupt_shadow)
KVM_X86_OP(patch_hypercall)
KVM_X86_OP(set_irq)
KVM_X86_OP(set_nmi)
KVM_X86_OP(queue_exception)
KVM_X86_OP(cancel_injection)
KVM_X86_OP(interrupt_allowed)
KVM_X86_OP(nmi_allowed)
KVM_X86_OP(get_nmi_mask)
KVM_X86_OP(set_nmi_mask)
KVM_X86_OP(enable_nmi_window)
KVM_X86_OP(enable_irq_window)
KVM_X86_OP(update_cr8_intercept)
KVM_X86_OP(check_apicv_inhibit_reasons)
KVM_X86_OP(refresh_apicv_exec_ctrl)
KVM_X86_OP(hwapic_irr_update)
KVM_X86_OP(hwapic_isr_update)
KVM_X86_OP_NULL(guest_apic_has_interrupt)
KVM_X86_OP(load_eoi_exitmap)
KVM_X86_OP(set_virtual_apic_mode)
KVM_X86_OP_NULL(set_apic_access_page_addr)
KVM_X86_OP(deliver_interrupt)
KVM_X86_OP_NULL(sync_pir_to_irr)
KVM_X86_OP(set_tss_addr)
KVM_X86_OP(set_identity_map_addr)
KVM_X86_OP(get_mt_mask)
KVM_X86_OP(load_mmu_pgd)
KVM_X86_OP_NULL(has_wbinvd_exit)
KVM_X86_OP(get_l2_tsc_offset)
KVM_X86_OP(get_l2_tsc_multiplier)
KVM_X86_OP(write_tsc_offset)
KVM_X86_OP(write_tsc_multiplier)
KVM_X86_OP(get_exit_info)
KVM_X86_OP(check_intercept)
KVM_X86_OP(handle_exit_irqoff)
KVM_X86_OP_NULL(request_immediate_exit)
KVM_X86_OP(sched_in)
KVM_X86_OP_NULL(update_cpu_dirty_logging)
KVM_X86_OP_NULL(vcpu_blocking)
KVM_X86_OP_NULL(vcpu_unblocking)
KVM_X86_OP_NULL(update_pi_irte)
KVM_X86_OP_NULL(start_assignment)
KVM_X86_OP_NULL(apicv_post_state_restore)
KVM_X86_OP_NULL(dy_apicv_has_pending_interrupt)
KVM_X86_OP_NULL(set_hv_timer)
KVM_X86_OP_NULL(cancel_hv_timer)
KVM_X86_OP(setup_mce)
KVM_X86_OP(smi_allowed)
KVM_X86_OP(enter_smm)
KVM_X86_OP(leave_smm)
KVM_X86_OP(enable_smi_window)
KVM_X86_OP_NULL(mem_enc_op)
KVM_X86_OP_NULL(mem_enc_reg_region)
KVM_X86_OP_NULL(mem_enc_unreg_region)
KVM_X86_OP(get_msr_feature)
KVM_X86_OP(can_emulate_instruction)
KVM_X86_OP(apic_init_signal_blocked)
KVM_X86_OP_NULL(enable_direct_tlbflush)
KVM_X86_OP_NULL(migrate_timers)
KVM_X86_OP(msr_filter_changed)
KVM_X86_OP_NULL(complete_emulated_msr)

#undef KVM_X86_OP
#undef KVM_X86_OP_NULL
