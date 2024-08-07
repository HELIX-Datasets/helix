extern void *libyuv_I444ToARGBRow_Any_SSSE3;
extern void *wren_calculateRange;
extern void *gsl_gsl_spmatrix_ulong_alloc;
extern void *bdwgc_GC_malloc_explicitly_typed_ignore_off_page;

int main(int argc, char **argv) {
    ((void (*)())libyuv_I444ToARGBRow_Any_SSSE3)();
    ((void (*)())wren_calculateRange)();
    ((void (*)())gsl_gsl_spmatrix_ulong_alloc)();
    ((void (*)())bdwgc_GC_malloc_explicitly_typed_ignore_off_page)();

    return 0;
}
