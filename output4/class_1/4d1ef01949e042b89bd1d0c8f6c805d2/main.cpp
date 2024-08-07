extern void *libogg_oggpackB_look1;
extern void *sndfile_wav_open;
extern void *openjpeg_opj_stream_write_skip;
extern void *cspice_F_Alloc;

int main(int argc, char **argv) {
    ((void (*)())libogg_oggpackB_look1)();
    ((void (*)())sndfile_wav_open)();
    ((void (*)())openjpeg_opj_stream_write_skip)();
    ((void (*)())cspice_F_Alloc)();

    return 0;
}
