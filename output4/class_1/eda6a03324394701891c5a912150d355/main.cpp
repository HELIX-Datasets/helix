extern void *libogg_oggpackB_look1;
extern void *sndfile_wav_open;
extern void *duktape_duk_get_global_string;
extern void *nng_nni_plat_pipe_raise;

int main(int argc, char **argv) {
    ((void (*)())libogg_oggpackB_look1)();
    ((void (*)())sndfile_wav_open)();
    ((void (*)())duktape_duk_get_global_string)();
    ((void (*)())nng_nni_plat_pipe_raise)();

    return 0;
}
