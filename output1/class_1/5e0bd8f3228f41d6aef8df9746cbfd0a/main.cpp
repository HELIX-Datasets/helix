extern void *libxml2_xmlUCSIsGeorgian;
extern void *zopfli_ZopfliLZ77Greedy;
extern void *libmikmod_MikMod_Active_internal;
extern void *libstemmer_french_UTF_8_create_env;

int main(int argc, char **argv) {
    ((void (*)())libxml2_xmlUCSIsGeorgian)();
    ((void (*)())zopfli_ZopfliLZ77Greedy)();
    ((void (*)())libmikmod_MikMod_Active_internal)();
    ((void (*)())libstemmer_french_UTF_8_create_env)();

    return 0;
}
