extern void *nanomsg_nn_chunkref_getchunk;
extern void *gsl_gsl_sort_vector_float_largest_index;
extern void *gsl_gsl_matrix_long_double_const_diagonal;
extern void *mathc_psvec2i_assign_vec2;

int main(int argc, char **argv) {
    ((void (*)())nanomsg_nn_chunkref_getchunk)();
    ((void (*)())gsl_gsl_sort_vector_float_largest_index)();
    ((void (*)())gsl_gsl_matrix_long_double_const_diagonal)();
    ((void (*)())mathc_psvec2i_assign_vec2)();

    return 0;
}
