extern void *libssh_ssh_list_new;
extern void *libxlsxwriter_worksheet_write_blank;
extern void *mcpp_add_file;
extern void *gsl_gsl_spmatrix_short_sp2d;

int main(int argc, char **argv) {
    ((void (*)())libssh_ssh_list_new)();
    ((void (*)())libxlsxwriter_worksheet_write_blank)();
    ((void (*)())mcpp_add_file)();
    ((void (*)())gsl_gsl_spmatrix_short_sp2d)();

    return 0;
}
