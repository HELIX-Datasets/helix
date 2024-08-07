extern void *harfbuzz_hb_face_set_user_data;
extern void *zopfli_ZopfliLZ77Greedy;
extern void *libmikmod_MikMod_Active_internal;
extern void *gsl_gsl_diff_forward;

int main(int argc, char **argv) {
    ((void (*)())harfbuzz_hb_face_set_user_data)();
    ((void (*)())zopfli_ZopfliLZ77Greedy)();
    ((void (*)())libmikmod_MikMod_Active_internal)();
    ((void (*)())gsl_gsl_diff_forward)();

    return 0;
}
