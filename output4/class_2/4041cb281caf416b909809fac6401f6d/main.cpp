extern void *libyuv_HashDjb2_SSE41;
extern void *libyuv_ARGBColorMatrixRow_SSSE3;
extern void *mathc_bounce_ease_in_out;
extern void *nng_nni_msg_body;

int main(int argc, char **argv) {
    ((void (*)())libyuv_HashDjb2_SSE41)();
    ((void (*)())libyuv_ARGBColorMatrixRow_SSSE3)();
    ((void (*)())mathc_bounce_ease_in_out)();
    ((void (*)())nng_nni_msg_body)();

    return 0;
}
