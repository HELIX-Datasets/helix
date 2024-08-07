extern void *libyuv_HashDjb2_SSE41;
extern void *libyuv_ARGBColorMatrixRow_SSSE3;
extern void *mathc_svec3_assign_vec3i;
extern void *chipmunk_cpSpaceInit;

int main(int argc, char **argv) {
    ((void (*)())libyuv_HashDjb2_SSE41)();
    ((void (*)())libyuv_ARGBColorMatrixRow_SSSE3)();
    ((void (*)())mathc_svec3_assign_vec3i)();
    ((void (*)())chipmunk_cpSpaceInit)();

    return 0;
}
