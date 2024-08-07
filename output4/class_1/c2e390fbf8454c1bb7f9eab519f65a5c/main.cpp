extern void *superlu_SetIWork;
extern void *gsl_gsl_cdf_gamma_Qinv;
extern void *nlopt_nlo_get_population_;
extern void *mathc_smat4_negative;

int main(int argc, char **argv) {
    ((void (*)())superlu_SetIWork)();
    ((void (*)())gsl_gsl_cdf_gamma_Qinv)();
    ((void (*)())nlopt_nlo_get_population_)();
    ((void (*)())mathc_smat4_negative)();

    return 0;
}
