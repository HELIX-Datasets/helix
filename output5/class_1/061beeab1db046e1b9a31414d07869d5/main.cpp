extern void *gsl_gsl_spmatrix_ushort_alloc;
extern void *libsodium_crypto_auth_hmacsha512_keygen;
extern void *mcpp_add_file;
extern void *mujs_js_pushundefined;

int main(int argc, char **argv) {
    ((void (*)())gsl_gsl_spmatrix_ushort_alloc)();
    ((void (*)())libsodium_crypto_auth_hmacsha512_keygen)();
    ((void (*)())mcpp_add_file)();
    ((void (*)())mujs_js_pushundefined)();

    return 0;
}
