extern void *jbigkit_jbg_dec_merge_planes;
extern void *mp3lame_hip_decode;
extern void *fftw3_fftw_ct_genericbuf_register;
extern void *plibsys_p_socket_address_get_address;

int main(int argc, char **argv) {
    ((void (*)())jbigkit_jbg_dec_merge_planes)();
    ((void (*)())mp3lame_hip_decode)();
    ((void (*)())fftw3_fftw_ct_genericbuf_register)();
    ((void (*)())plibsys_p_socket_address_get_address)();

    return 0;
}
