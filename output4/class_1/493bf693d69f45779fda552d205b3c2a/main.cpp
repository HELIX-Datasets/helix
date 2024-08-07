extern void *librabbitmq_amqp_tune_connection;
extern void *libtomcrypt_blake2smac_done;
extern void *genann_genann_init;
extern void *libxlsxwriter_worksheet_set_tab_color;

int main(int argc, char **argv) {
    ((void (*)())librabbitmq_amqp_tune_connection)();
    ((void (*)())libtomcrypt_blake2smac_done)();
    ((void (*)())genann_genann_init)();
    ((void (*)())libxlsxwriter_worksheet_set_tab_color)();

    return 0;
}
