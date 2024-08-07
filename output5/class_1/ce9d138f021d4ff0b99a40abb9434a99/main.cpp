extern void *libssh_ssh_list_new;
extern void *libsodium_crypto_auth_hmacsha512_keygen;
extern void *libtomcrypt_chacha20_prng_import;
extern void *gsl_gsl_stats_skew;

int main(int argc, char **argv) {
    ((void (*)())libssh_ssh_list_new)();
    ((void (*)())libsodium_crypto_auth_hmacsha512_keygen)();
    ((void (*)())libtomcrypt_chacha20_prng_import)();
    ((void (*)())gsl_gsl_stats_skew)();

    return 0;
}
