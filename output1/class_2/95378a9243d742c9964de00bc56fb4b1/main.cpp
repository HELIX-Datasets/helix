extern void *blas_sgemv_n;
extern void *minc_set_default_minc_input_options;
extern void *pcre_pcre_compile2;
extern void *meshoptimizer_meshopt_computeClusterBounds;

int main(int argc, char **argv) {
    ((void (*)())blas_sgemv_n)();
    ((void (*)())minc_set_default_minc_input_options)();
    ((void (*)())pcre_pcre_compile2)();
    ((void (*)())meshoptimizer_meshopt_computeClusterBounds)();

    return 0;
}
