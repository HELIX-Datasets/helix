extern void *nlopt_isres_minimize;
extern void *gsl_gsl_sort_vector_float_largest_index;
extern void *genann_genann_init;
extern void *libyuv_ScaleARGBCols64_C;

int main(int argc, char **argv) {
    ((void (*)())nlopt_isres_minimize)();
    ((void (*)())gsl_gsl_sort_vector_float_largest_index)();
    ((void (*)())genann_genann_init)();
    ((void (*)())libyuv_ScaleARGBCols64_C)();

    return 0;
}
