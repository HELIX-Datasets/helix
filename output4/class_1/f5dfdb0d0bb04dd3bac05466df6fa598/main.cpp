extern void *jbigkit_jbg_dec_merge_planes;
extern void *mp3lame_hip_decode;
extern void *duktape_duk_require_null;
extern void *libyuv_ARGBAddRow_Any_SSE2;

int main(int argc, char **argv) {
    ((void (*)())jbigkit_jbg_dec_merge_planes)();
    ((void (*)())mp3lame_hip_decode)();
    ((void (*)())duktape_duk_require_null)();
    ((void (*)())libyuv_ARGBAddRow_Any_SSE2)();

    return 0;
}
