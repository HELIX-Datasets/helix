extern void *libyuv_ARGBToRGB565DitherRow_C;
extern void *roaring_roaring_bitmap_add_range;
extern void *gsl_gsl_matrix_int_subrow;
extern void *gsl_gsl_cdf_chisq_Qinv;

int main(int argc, char **argv) {
    ((void (*)())libyuv_ARGBToRGB565DitherRow_C)();
    ((void (*)())roaring_roaring_bitmap_add_range)();
    ((void (*)())gsl_gsl_matrix_int_subrow)();
    ((void (*)())gsl_gsl_cdf_chisq_Qinv)();

    return 0;
}
