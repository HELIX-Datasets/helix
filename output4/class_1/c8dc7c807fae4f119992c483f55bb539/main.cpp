extern void *libstemmer_sb_stemmer_delete;
extern void *gsl_gsl_sort_vector_float_largest_index;
extern void *mp3lame_lame_set_short_threshold_s;
extern void *mathc_psvec2i_assign_vec2;

int main(int argc, char **argv) {
    ((void (*)())libstemmer_sb_stemmer_delete)();
    ((void (*)())gsl_gsl_sort_vector_float_largest_index)();
    ((void (*)())mp3lame_lame_set_short_threshold_s)();
    ((void (*)())mathc_psvec2i_assign_vec2)();

    return 0;
}
