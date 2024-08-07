extern void *libjuice_ice_sort_candidates;
extern void *libyuv_ARGBColorMatrixRow_SSSE3;
extern void *zeromq_crypto_onetimeauth;
extern void *triangle_tallyfaces;

int main(int argc, char **argv) {
    ((void (*)())libjuice_ice_sort_candidates)();
    ((void (*)())libyuv_ARGBColorMatrixRow_SSSE3)();
    ((void (*)())zeromq_crypto_onetimeauth)();
    ((void (*)())triangle_tallyfaces)();

    return 0;
}
