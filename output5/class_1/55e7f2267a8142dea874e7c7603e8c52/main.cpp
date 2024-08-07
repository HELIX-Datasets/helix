extern void *xlnt_XML_GetCurrentLineNumber;
extern void *libsodium_crypto_auth_hmacsha512_keygen;
extern void *gsl_gsl_spmatrix_ushort_csc;
extern void *gsl_gsl_spmatrix_short_sp2d;

int main(int argc, char **argv) {
    ((void (*)())xlnt_XML_GetCurrentLineNumber)();
    ((void (*)())libsodium_crypto_auth_hmacsha512_keygen)();
    ((void (*)())gsl_gsl_spmatrix_ushort_csc)();
    ((void (*)())gsl_gsl_spmatrix_short_sp2d)();

    return 0;
}
