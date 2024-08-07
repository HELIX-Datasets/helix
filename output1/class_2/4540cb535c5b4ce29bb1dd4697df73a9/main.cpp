extern void *gsl_gsl_integration_fixed_weights;
extern void *minc_set_default_minc_input_options;
extern void *symengine_ntheory_quotient_mod_f;
extern void *meshoptimizer_meshopt_computeClusterBounds;

int main(int argc, char **argv) {
    ((void (*)())gsl_gsl_integration_fixed_weights)();
    ((void (*)())minc_set_default_minc_input_options)();
    ((void (*)())symengine_ntheory_quotient_mod_f)();
    ((void (*)())meshoptimizer_meshopt_computeClusterBounds)();

    return 0;
}
