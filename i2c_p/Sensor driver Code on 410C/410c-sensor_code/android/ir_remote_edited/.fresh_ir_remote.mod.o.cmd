cmd_/home/nadaf/ir_remote_edited/fresh_ir_remote.mod.o := /Data/kernel/scripts/gcc-wrapper.py /Data/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android-gcc -Wp,-MD,/home/nadaf/ir_remote_edited/.fresh_ir_remote.mod.o.d  -nostdinc -isystem /Data/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/../lib/gcc/aarch64-linux-android/4.9.x-google/include -I/Data/kernel/arch/arm64/include -Iarch/arm64/include/generated  -I/Data/kernel/include -Iinclude -I/Data/kernel/arch/arm64/include/uapi -Iarch/arm64/include/generated/uapi -I/Data/kernel/drivers/soc/qcom -I/Data/kernel/include/uapi -Iinclude/generated/uapi -include /Data/kernel/include/linux/kconfig.h   -I/home/nadaf/ir_remote_edited -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized -mgeneral-regs-only -Wframe-larger-than=2048 -fstack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(fresh_ir_remote.mod)"  -D"KBUILD_MODNAME=KBUILD_STR(fresh_ir_remote)" -DMODULE -fno-pic -c -o /home/nadaf/ir_remote_edited/fresh_ir_remote.mod.o /home/nadaf/ir_remote_edited/fresh_ir_remote.mod.c

source_/home/nadaf/ir_remote_edited/fresh_ir_remote.mod.o := /home/nadaf/ir_remote_edited/fresh_ir_remote.mod.c

deps_/home/nadaf/ir_remote_edited/fresh_ir_remote.mod.o := \
    $(wildcard include/config/module/unload.h) \
  /Data/kernel/include/linux/module.h \
    $(wildcard include/config/sysfs.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/unused/symbols.h) \
    $(wildcard include/config/module/sig.h) \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/kallsyms.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/tracepoints.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/event/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
    $(wildcard include/config/constructors.h) \
    $(wildcard include/config/debug/set/module/ronx.h) \
  /Data/kernel/include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  /Data/kernel/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /Data/kernel/include/uapi/linux/types.h \
  /Data/kernel/arch/arm64/include/asm/types.h \
  /Data/kernel/include/uapi/asm-generic/types.h \
  /Data/kernel/include/asm-generic/int-ll64.h \
  /Data/kernel/include/uapi/asm-generic/int-ll64.h \
  /Data/kernel/arch/arm64/include/uapi/asm/bitsperlong.h \
  /Data/kernel/include/asm-generic/bitsperlong.h \
  /Data/kernel/include/uapi/asm-generic/bitsperlong.h \
  /Data/kernel/include/uapi/linux/posix_types.h \
  /Data/kernel/include/linux/stddef.h \
  /Data/kernel/include/uapi/linux/stddef.h \
  /Data/kernel/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  /Data/kernel/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  /Data/kernel/include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /Data/kernel/arch/arm64/include/uapi/asm/posix_types.h \
  /Data/kernel/include/uapi/asm-generic/posix_types.h \
  /Data/kernel/include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  /Data/kernel/include/uapi/linux/const.h \
  /Data/kernel/include/linux/stat.h \
  /Data/kernel/arch/arm64/include/asm/stat.h \
    $(wildcard include/config/compat.h) \
  /Data/kernel/arch/arm64/include/uapi/asm/stat.h \
  /Data/kernel/include/uapi/asm-generic/stat.h \
  /Data/kernel/arch/arm64/include/asm/compat.h \
  /Data/kernel/include/linux/sched.h \
    $(wildcard include/config/sched/debug.h) \
    $(wildcard include/config/prove/rcu.h) \
    $(wildcard include/config/no/hz/common.h) \
    $(wildcard include/config/lockup/detector.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/core/dump/default/elf/headers.h) \
    $(wildcard include/config/sched/autogroup.h) \
    $(wildcard include/config/virt/cpu/accounting/native.h) \
    $(wildcard include/config/bsd/process/acct.h) \
    $(wildcard include/config/taskstats.h) \
    $(wildcard include/config/audit.h) \
    $(wildcard include/config/cgroups.h) \
    $(wildcard include/config/inotify/user.h) \
    $(wildcard include/config/fanotify.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/posix/mqueue.h) \
    $(wildcard include/config/keys.h) \
    $(wildcard include/config/perf/events.h) \
    $(wildcard include/config/schedstats.h) \
    $(wildcard include/config/task/delay/acct.h) \
    $(wildcard include/config/sched/hmp.h) \
    $(wildcard include/config/sched/freq/input.h) \
    $(wildcard include/config/fair/group/sched.h) \
    $(wildcard include/config/rt/group/sched.h) \
    $(wildcard include/config/cgroup/sched.h) \
    $(wildcard include/config/preempt/notifiers.h) \
    $(wildcard include/config/blk/dev/io/trace.h) \
    $(wildcard include/config/preempt/rcu.h) \
    $(wildcard include/config/tree/preempt/rcu.h) \
    $(wildcard include/config/rcu/boost.h) \
    $(wildcard include/config/compat/brk.h) \
    $(wildcard include/config/cc/stackprotector.h) \
    $(wildcard include/config/virt/cpu/accounting/gen.h) \
    $(wildcard include/config/sysvipc.h) \
    $(wildcard include/config/detect/hung/task.h) \
    $(wildcard include/config/auditsyscall.h) \
    $(wildcard include/config/rt/mutexes.h) \
    $(wildcard include/config/debug/mutexes.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/task/xacct.h) \
    $(wildcard include/config/cpusets.h) \
    $(wildcard include/config/futex.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/numa/balancing.h) \
    $(wildcard include/config/fault/injection.h) \
    $(wildcard include/config/latencytop.h) \
    $(wildcard include/config/function/graph/tracer.h) \
    $(wildcard include/config/memcg.h) \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/uprobes.h) \
    $(wildcard include/config/bcache.h) \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/have/unstable/sched/clock.h) \
    $(wildcard include/config/irq/time/accounting.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/no/hz/full.h) \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/stack/growsup.h) \
    $(wildcard include/config/debug/stack/usage.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/mm/owner.h) \
  /Data/kernel/include/uapi/linux/sched.h \
  /Data/kernel/arch/arm64/include/uapi/asm/param.h \
  /Data/kernel/include/asm-generic/param.h \
    $(wildcard include/config/hz.h) \
  /Data/kernel/include/uapi/asm-generic/param.h \
  /Data/kernel/include/linux/capability.h \
  /Data/kernel/include/uapi/linux/capability.h \
  /Data/kernel/include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  /Data/kernel/include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/ring/buffer.h) \
  /Data/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/lib/gcc/aarch64-linux-android/4.9.x-google/include/stdarg.h \
  /Data/kernel/include/linux/linkage.h \
  /Data/kernel/include/linux/stringify.h \
  /Data/kernel/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modversions.h) \
  /Data/kernel/arch/arm64/include/asm/linkage.h \
  /Data/kernel/include/linux/bitops.h \
  /Data/kernel/arch/arm64/include/asm/bitops.h \
  /Data/kernel/arch/arm64/include/asm/barrier.h \
  /Data/kernel/include/asm-generic/bitops/builtin-__ffs.h \
  /Data/kernel/include/asm-generic/bitops/builtin-ffs.h \
  /Data/kernel/include/asm-generic/bitops/builtin-__fls.h \
  /Data/kernel/include/asm-generic/bitops/builtin-fls.h \
  /Data/kernel/include/asm-generic/bitops/ffz.h \
  /Data/kernel/include/asm-generic/bitops/fls64.h \
  /Data/kernel/include/asm-generic/bitops/find.h \
    $(wildcard include/config/generic/find/first/bit.h) \
  /Data/kernel/include/asm-generic/bitops/sched.h \
  /Data/kernel/include/asm-generic/bitops/hweight.h \
  /Data/kernel/include/asm-generic/bitops/arch_hweight.h \
  /Data/kernel/include/asm-generic/bitops/const_hweight.h \
  /Data/kernel/include/asm-generic/bitops/lock.h \
  /Data/kernel/include/asm-generic/bitops/non-atomic.h \
  /Data/kernel/include/asm-generic/bitops/le.h \
  /Data/kernel/arch/arm64/include/uapi/asm/byteorder.h \
  /Data/kernel/include/linux/byteorder/little_endian.h \
  /Data/kernel/include/uapi/linux/byteorder/little_endian.h \
  /Data/kernel/include/linux/swab.h \
  /Data/kernel/include/uapi/linux/swab.h \
  /Data/kernel/arch/arm64/include/asm/swab.h \
  /Data/kernel/include/uapi/asm-generic/swab.h \
  /Data/kernel/include/linux/byteorder/generic.h \
  /Data/kernel/include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  /Data/kernel/include/linux/typecheck.h \
  /Data/kernel/include/linux/printk.h \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
    $(wildcard include/config/oops/log/buffer.h) \
  /Data/kernel/include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
  /Data/kernel/include/linux/kern_levels.h \
  /Data/kernel/include/linux/dynamic_debug.h \
  /Data/kernel/include/uapi/linux/kernel.h \
  /Data/kernel/include/uapi/linux/sysinfo.h \
  /Data/kernel/include/linux/timex.h \
  /Data/kernel/include/uapi/linux/timex.h \
  /Data/kernel/include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
  /Data/kernel/include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  /Data/kernel/arch/arm64/include/asm/cache.h \
  /Data/kernel/arch/arm64/include/asm/cachetype.h \
  /Data/kernel/arch/arm64/include/asm/cputype.h \
  /Data/kernel/include/linux/seqlock.h \
  /Data/kernel/include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  /Data/kernel/include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/context/tracking.h) \
  /Data/kernel/include/linux/thread_info.h \
  /Data/kernel/include/linux/bug.h \
    $(wildcard include/config/panic/on/data/corruption.h) \
  /Data/kernel/arch/arm64/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/debug/bugverbose.h) \
  /Data/kernel/include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  /Data/kernel/arch/arm64/include/asm/thread_info.h \
    $(wildcard include/config/arm64/64k/pages.h) \
  /Data/kernel/include/linux/irqflags.h \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  /Data/kernel/arch/arm64/include/asm/irqflags.h \
  /Data/kernel/arch/arm64/include/asm/ptrace.h \
  /Data/kernel/arch/arm64/include/uapi/asm/ptrace.h \
  /Data/kernel/arch/arm64/include/asm/hwcap.h \
  /Data/kernel/arch/arm64/include/uapi/asm/hwcap.h \
  /Data/kernel/include/linux/bottom_half.h \
  /Data/kernel/include/linux/spinlock_types.h \
  /Data/kernel/arch/arm64/include/asm/spinlock_types.h \
  /Data/kernel/include/linux/lockdep.h \
    $(wildcard include/config/lock/stat.h) \
  /Data/kernel/include/linux/rwlock_types.h \
  /Data/kernel/arch/arm64/include/asm/spinlock.h \
  /Data/kernel/arch/arm64/include/asm/processor.h \
  /Data/kernel/include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /Data/kernel/include/uapi/linux/string.h \
  /Data/kernel/arch/arm64/include/asm/string.h \
  /Data/kernel/arch/arm64/include/asm/fpsimd.h \
  /Data/kernel/arch/arm64/include/asm/hw_breakpoint.h \
  /Data/kernel/include/linux/rwlock.h \
  /Data/kernel/include/linux/spinlock_api_smp.h \
    $(wildcard include/config/inline/spin/lock.h) \
    $(wildcard include/config/inline/spin/lock/bh.h) \
    $(wildcard include/config/inline/spin/lock/irq.h) \
    $(wildcard include/config/inline/spin/lock/irqsave.h) \
    $(wildcard include/config/inline/spin/trylock.h) \
    $(wildcard include/config/inline/spin/trylock/bh.h) \
    $(wildcard include/config/uninline/spin/unlock.h) \
    $(wildcard include/config/inline/spin/unlock/bh.h) \
    $(wildcard include/config/inline/spin/unlock/irq.h) \
    $(wildcard include/config/inline/spin/unlock/irqrestore.h) \
  /Data/kernel/include/linux/rwlock_api_smp.h \
    $(wildcard include/config/inline/read/lock.h) \
    $(wildcard include/config/inline/write/lock.h) \
    $(wildcard include/config/inline/read/lock/bh.h) \
    $(wildcard include/config/inline/write/lock/bh.h) \
    $(wildcard include/config/inline/read/lock/irq.h) \
    $(wildcard include/config/inline/write/lock/irq.h) \
    $(wildcard include/config/inline/read/lock/irqsave.h) \
    $(wildcard include/config/inline/write/lock/irqsave.h) \
    $(wildcard include/config/inline/read/trylock.h) \
    $(wildcard include/config/inline/write/trylock.h) \
    $(wildcard include/config/inline/read/unlock.h) \
    $(wildcard include/config/inline/write/unlock.h) \
    $(wildcard include/config/inline/read/unlock/bh.h) \
    $(wildcard include/config/inline/write/unlock/bh.h) \
    $(wildcard include/config/inline/read/unlock/irq.h) \
    $(wildcard include/config/inline/write/unlock/irq.h) \
    $(wildcard include/config/inline/read/unlock/irqrestore.h) \
    $(wildcard include/config/inline/write/unlock/irqrestore.h) \
  /Data/kernel/include/linux/atomic.h \
    $(wildcard include/config/arch/has/atomic/or.h) \
    $(wildcard include/config/generic/atomic64.h) \
  /Data/kernel/arch/arm64/include/asm/atomic.h \
  /Data/kernel/arch/arm64/include/asm/cmpxchg.h \
  /Data/kernel/include/asm-generic/atomic-long.h \
  /Data/kernel/include/linux/math64.h \
  /Data/kernel/arch/arm64/include/asm/div64.h \
  /Data/kernel/include/asm-generic/div64.h \
  /Data/kernel/include/uapi/linux/time.h \
  /Data/kernel/include/uapi/linux/param.h \
  /Data/kernel/arch/arm64/include/asm/timex.h \
  /Data/kernel/arch/arm64/include/asm/arch_timer.h \
  /Data/kernel/include/clocksource/arm_arch_timer.h \
    $(wildcard include/config/arm/arch/timer.h) \
  /Data/kernel/include/linux/clocksource.h \
    $(wildcard include/config/arch/clocksource/data.h) \
    $(wildcard include/config/clocksource/watchdog.h) \
    $(wildcard include/config/clksrc/of.h) \
  /Data/kernel/include/linux/timer.h \
    $(wildcard include/config/timer/stats.h) \
    $(wildcard include/config/debug/objects/timers.h) \
  /Data/kernel/include/linux/ktime.h \
    $(wildcard include/config/ktime/scalar.h) \
  /Data/kernel/include/linux/jiffies.h \
  /Data/kernel/include/linux/debugobjects.h \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/debug/objects/free.h) \
  /Data/kernel/arch/arm64/include/asm/io.h \
    $(wildcard include/config/arm64/a57/errata/832075.h) \
    $(wildcard include/config/pci.h) \
  /Data/kernel/include/linux/blk_types.h \
    $(wildcard include/config/blk/cgroup.h) \
    $(wildcard include/config/blk/dev/integrity.h) \
  /Data/kernel/include/linux/msm_rtb.h \
    $(wildcard include/config/msm/rtb.h) \
  /Data/kernel/arch/arm64/include/asm/pgtable.h \
    $(wildcard include/config/transparent/hugepage.h) \
  /Data/kernel/arch/arm64/include/asm/proc-fns.h \
  /Data/kernel/arch/arm64/include/asm/page.h \
    $(wildcard include/config/have/arch/pfn/valid.h) \
  /Data/kernel/arch/arm64/include/asm/pgtable-3level-types.h \
  /Data/kernel/include/asm-generic/pgtable-nopud.h \
  /Data/kernel/arch/arm64/include/asm/memory.h \
  /Data/kernel/arch/arm64/include/asm/sizes.h \
  /Data/kernel/include/asm-generic/sizes.h \
  /Data/kernel/include/linux/sizes.h \
  /Data/kernel/include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  /Data/kernel/include/asm-generic/getorder.h \
  /Data/kernel/arch/arm64/include/asm/pgtable-hwdef.h \
  /Data/kernel/arch/arm64/include/asm/pgtable-3level-hwdef.h \
  /Data/kernel/include/asm-generic/pgtable.h \
    $(wildcard include/config/arch/uses/numa/prot/none.h) \
  /Data/kernel/include/linux/mm_types.h \
    $(wildcard include/config/split/ptlock/cpus.h) \
    $(wildcard include/config/have/cmpxchg/double.h) \
    $(wildcard include/config/have/aligned/struct/page.h) \
    $(wildcard include/config/want/page/debug/flags.h) \
    $(wildcard include/config/kmemcheck.h) \
    $(wildcard include/config/page/owner.h) \
    $(wildcard include/config/aio.h) \
    $(wildcard include/config/mmu/notifier.h) \
    $(wildcard include/config/compaction.h) \
  /Data/kernel/include/linux/auxvec.h \
  /Data/kernel/include/uapi/linux/auxvec.h \
  /Data/kernel/arch/arm64/include/uapi/asm/auxvec.h \
  /Data/kernel/include/linux/rbtree.h \
  /Data/kernel/include/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  /Data/kernel/arch/arm64/include/asm/rwsem.h \
  /Data/kernel/include/asm-generic/rwsem.h \
    $(wildcard include/config/ppc64.h) \
  /Data/kernel/include/linux/stacktrace.h \
    $(wildcard include/config/stacktrace.h) \
    $(wildcard include/config/user/stacktrace/support.h) \
  /Data/kernel/include/linux/completion.h \
  /Data/kernel/include/linux/wait.h \
  /Data/kernel/arch/arm64/include/asm/current.h \
  /Data/kernel/include/asm-generic/current.h \
  /Data/kernel/include/uapi/linux/wait.h \
  /Data/kernel/include/linux/cpumask.h \
    $(wildcard include/config/debug/per/cpu/maps.h) \
    $(wildcard include/config/disable/obsolete/cpumask/functions.h) \
  /Data/kernel/include/linux/bitmap.h \
  /Data/kernel/include/linux/page-debug-flags.h \
    $(wildcard include/config/page/poisoning.h) \
    $(wildcard include/config/page/guard.h) \
    $(wildcard include/config/page/debug/something/else.h) \
  /Data/kernel/include/linux/uprobes.h \
    $(wildcard include/config/arch/supports/uprobes.h) \
  /Data/kernel/include/linux/errno.h \
  /Data/kernel/include/uapi/linux/errno.h \
  /Data/kernel/arch/arm64/include/asm/errno.h \
  /Data/kernel/include/uapi/asm-generic/errno.h \
  /Data/kernel/include/uapi/asm-generic/errno-base.h \
  /Data/kernel/include/linux/page-flags-layout.h \
  /Data/kernel/include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
  include/generated/bounds.h \
  /Data/kernel/arch/arm64/include/asm/sparsemem.h \
  /Data/kernel/arch/arm64/include/asm/mmu.h \
  arch/arm64/include/generated/asm/early_ioremap.h \
  /Data/kernel/include/asm-generic/early_ioremap.h \
    $(wildcard include/config/generic/early/ioremap.h) \
  /Data/kernel/include/xen/xen.h \
    $(wildcard include/config/xen.h) \
    $(wildcard include/config/xen/dom0.h) \
  /Data/kernel/include/asm-generic/iomap.h \
    $(wildcard include/config/has/ioport/map.h) \
    $(wildcard include/config/generic/iomap.h) \
  /Data/kernel/include/asm-generic/pci_iomap.h \
    $(wildcard include/config/no/generic/pci/ioport/map.h) \
    $(wildcard include/config/generic/pci/iomap.h) \
  /Data/kernel/include/asm-generic/timex.h \
  /Data/kernel/include/linux/nodemask.h \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/movable/node.h) \
  arch/arm64/include/generated/asm/cputime.h \
  /Data/kernel/include/asm-generic/cputime.h \
    $(wildcard include/config/virt/cpu/accounting.h) \
  /Data/kernel/include/asm-generic/cputime_jiffies.h \
  /Data/kernel/include/linux/smp.h \
  /Data/kernel/arch/arm64/include/asm/smp.h \
  /Data/kernel/include/linux/sem.h \
  /Data/kernel/include/linux/rcupdate.h \
    $(wildcard include/config/rcu/torture/test.h) \
    $(wildcard include/config/tree/rcu.h) \
    $(wildcard include/config/rcu/trace.h) \
    $(wildcard include/config/rcu/user/qs.h) \
    $(wildcard include/config/tiny/rcu.h) \
    $(wildcard include/config/tiny/preempt/rcu.h) \
    $(wildcard include/config/debug/objects/rcu/head.h) \
    $(wildcard include/config/rcu/nocb/cpu.h) \
  /Data/kernel/include/linux/rcutree.h \
  /Data/kernel/include/uapi/linux/sem.h \
  /Data/kernel/include/linux/ipc.h \
  /Data/kernel/include/linux/uidgid.h \
    $(wildcard include/config/uidgid/strict/type/checks.h) \
    $(wildcard include/config/user/ns.h) \
  /Data/kernel/include/linux/highuid.h \
  /Data/kernel/include/uapi/linux/ipc.h \
  arch/arm64/include/generated/asm/ipcbuf.h \
  /Data/kernel/include/uapi/asm-generic/ipcbuf.h \
  arch/arm64/include/generated/asm/sembuf.h \
  /Data/kernel/include/uapi/asm-generic/sembuf.h \
  /Data/kernel/include/linux/signal.h \
    $(wildcard include/config/old/sigaction.h) \
  /Data/kernel/include/uapi/linux/signal.h \
  /Data/kernel/arch/arm64/include/uapi/asm/signal.h \
  /Data/kernel/include/asm-generic/signal.h \
  /Data/kernel/include/uapi/asm-generic/signal.h \
  /Data/kernel/include/uapi/asm-generic/signal-defs.h \
  /Data/kernel/arch/arm64/include/uapi/asm/sigcontext.h \
  /Data/kernel/arch/arm64/include/uapi/asm/siginfo.h \
  /Data/kernel/include/asm-generic/siginfo.h \
  /Data/kernel/include/uapi/asm-generic/siginfo.h \
  /Data/kernel/include/linux/pid.h \
  /Data/kernel/include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  /Data/kernel/include/linux/pfn.h \
  /Data/kernel/arch/arm64/include/asm/percpu.h \
  /Data/kernel/include/asm-generic/percpu.h \
  /Data/kernel/include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
  /Data/kernel/include/linux/topology.h \
    $(wildcard include/config/sched/smt.h) \
    $(wildcard include/config/sched/mc.h) \
    $(wildcard include/config/sched/book.h) \
    $(wildcard include/config/use/percpu/numa/node/id.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
  /Data/kernel/include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/cma.h) \
    $(wildcard include/config/memory/isolation.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/have/memblock/node/map.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/no/bootmem.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
    $(wildcard include/config/arch/has/holes/memorymodel.h) \
  /Data/kernel/include/linux/pageblock-flags.h \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/hugetlb/page/size/variable.h) \
  /Data/kernel/include/linux/memory_hotplug.h \
    $(wildcard include/config/memory/hotremove.h) \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
    $(wildcard include/config/have/bootmem/info/node.h) \
  /Data/kernel/include/linux/notifier.h \
  /Data/kernel/include/linux/mutex.h \
    $(wildcard include/config/mutex/spin/on/owner.h) \
    $(wildcard include/config/have/arch/mutex/cpu/relax.h) \
  /Data/kernel/include/linux/mutex-debug.h \
  /Data/kernel/include/linux/srcu.h \
  /Data/kernel/include/linux/workqueue.h \
    $(wildcard include/config/debug/objects/work.h) \
    $(wildcard include/config/freezer.h) \
  /Data/kernel/arch/arm64/include/asm/topology.h \
  /Data/kernel/include/asm-generic/topology.h \
  /Data/kernel/include/linux/proportions.h \
  /Data/kernel/include/linux/percpu_counter.h \
  /Data/kernel/include/linux/seccomp.h \
    $(wildcard include/config/seccomp.h) \
    $(wildcard include/config/seccomp/filter.h) \
  /Data/kernel/include/uapi/linux/seccomp.h \
  /Data/kernel/arch/arm64/include/asm/seccomp.h \
  /Data/kernel/arch/arm64/include/asm/unistd.h \
  /Data/kernel/arch/arm64/include/uapi/asm/unistd.h \
  /Data/kernel/include/asm-generic/unistd.h \
  /Data/kernel/include/uapi/asm-generic/unistd.h \
  /Data/kernel/include/asm-generic/seccomp.h \
  /Data/kernel/include/uapi/linux/unistd.h \
  /Data/kernel/include/linux/rculist.h \
  /Data/kernel/include/linux/rtmutex.h \
    $(wildcard include/config/debug/rt/mutexes.h) \
  /Data/kernel/include/linux/plist.h \
    $(wildcard include/config/debug/pi/list.h) \
  /Data/kernel/include/linux/resource.h \
  /Data/kernel/include/uapi/linux/resource.h \
  arch/arm64/include/generated/asm/resource.h \
  /Data/kernel/include/asm-generic/resource.h \
  /Data/kernel/include/uapi/asm-generic/resource.h \
  /Data/kernel/include/linux/hrtimer.h \
    $(wildcard include/config/high/res/timers.h) \
    $(wildcard include/config/timerfd.h) \
  /Data/kernel/include/linux/timerqueue.h \
  /Data/kernel/include/linux/task_io_accounting.h \
    $(wildcard include/config/task/io/accounting.h) \
  /Data/kernel/include/linux/latencytop.h \
  /Data/kernel/include/linux/cred.h \
    $(wildcard include/config/debug/credentials.h) \
    $(wildcard include/config/security.h) \
  /Data/kernel/include/linux/key.h \
    $(wildcard include/config/sysctl.h) \
  /Data/kernel/include/linux/sysctl.h \
  /Data/kernel/include/uapi/linux/sysctl.h \
  /Data/kernel/include/linux/selinux.h \
    $(wildcard include/config/security/selinux.h) \
  /Data/kernel/include/linux/llist.h \
    $(wildcard include/config/arch/have/nmi/safe/cmpxchg.h) \
  /Data/kernel/include/linux/gfp.h \
    $(wildcard include/config/pm/sleep.h) \
  /Data/kernel/include/linux/mmdebug.h \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/debug/virtual.h) \
  /Data/kernel/include/linux/ptrace.h \
  /Data/kernel/include/linux/err.h \
  /Data/kernel/include/linux/pid_namespace.h \
    $(wildcard include/config/pid/ns.h) \
  /Data/kernel/include/linux/mm.h \
    $(wildcard include/config/strict/memory/rwx.h) \
    $(wildcard include/config/fix/movable/zone.h) \
    $(wildcard include/config/x86.h) \
    $(wildcard include/config/ppc.h) \
    $(wildcard include/config/parisc.h) \
    $(wildcard include/config/metag.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/ksm.h) \
    $(wildcard include/config/debug/vm/rb.h) \
    $(wildcard include/config/debug/pagealloc.h) \
    $(wildcard include/config/hibernation.h) \
    $(wildcard include/config/use/user/accessible/timers.h) \
    $(wildcard include/config/hugetlbfs.h) \
    $(wildcard include/config/process/reclaim.h) \
  /Data/kernel/include/linux/debug_locks.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  /Data/kernel/include/linux/range.h \
  /Data/kernel/include/linux/bit_spinlock.h \
  /Data/kernel/include/linux/shrinker.h \
  /Data/kernel/include/linux/page-flags.h \
    $(wildcard include/config/pageflags/extended.h) \
    $(wildcard include/config/arch/uses/pg/uncached.h) \
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/swap.h) \
  /Data/kernel/include/linux/huge_mm.h \
  /Data/kernel/include/linux/vmstat.h \
    $(wildcard include/config/vm/event/counters.h) \
  /Data/kernel/include/linux/vm_event_item.h \
    $(wildcard include/config/migration.h) \
  /Data/kernel/include/linux/nsproxy.h \
  /Data/kernel/include/linux/kref.h \
  /Data/kernel/include/uapi/linux/ptrace.h \
  /Data/kernel/include/uapi/linux/stat.h \
  /Data/kernel/include/linux/kmod.h \
  /Data/kernel/include/linux/elf.h \
  /Data/kernel/arch/arm64/include/asm/elf.h \
  arch/arm64/include/generated/asm/user.h \
  /Data/kernel/include/asm-generic/user.h \
  /Data/kernel/include/uapi/linux/elf.h \
  /Data/kernel/include/uapi/linux/elf-em.h \
  /Data/kernel/include/linux/kobject.h \
  /Data/kernel/include/linux/sysfs.h \
  /Data/kernel/include/linux/kobject_ns.h \
  /Data/kernel/include/linux/moduleparam.h \
    $(wildcard include/config/alpha.h) \
  /Data/kernel/include/linux/tracepoint.h \
  /Data/kernel/include/linux/static_key.h \
  /Data/kernel/include/linux/jump_label.h \
    $(wildcard include/config/jump/label.h) \
  /Data/kernel/arch/arm64/include/asm/module.h \
  /Data/kernel/include/asm-generic/module.h \
    $(wildcard include/config/have/mod/arch/specific.h) \
    $(wildcard include/config/modules/use/elf/rel.h) \
    $(wildcard include/config/modules/use/elf/rela.h) \
  /Data/kernel/include/linux/vermagic.h \
  include/generated/utsrelease.h \

/home/nadaf/ir_remote_edited/fresh_ir_remote.mod.o: $(deps_/home/nadaf/ir_remote_edited/fresh_ir_remote.mod.o)

$(deps_/home/nadaf/ir_remote_edited/fresh_ir_remote.mod.o):
