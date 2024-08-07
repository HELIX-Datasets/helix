extern void *mathc_svec2_tangent;
extern void *cspice_pckbsr_;
extern void *minc_micopy_dimension;
extern void *libvmdk_libcthreads_condition_signal;

int main(int argc, char **argv) {
    ((void (*)())mathc_svec2_tangent)();
    ((void (*)())cspice_pckbsr_)();
    ((void (*)())minc_micopy_dimension)();
    ((void (*)())libvmdk_libcthreads_condition_signal)();

    return 0;
}
