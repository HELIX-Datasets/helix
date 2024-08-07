extern void *superlu_SetIWork;
extern void *zfp_zfp_decode_block_strided_int32_4;
extern void *duktape_duk_set_top;
extern void *libtomcrypt_des_setup;

int main(int argc, char **argv) {
    ((void (*)())superlu_SetIWork)();
    ((void (*)())zfp_zfp_decode_block_strided_int32_4)();
    ((void (*)())duktape_duk_set_top)();
    ((void (*)())libtomcrypt_des_setup)();

    return 0;
}
