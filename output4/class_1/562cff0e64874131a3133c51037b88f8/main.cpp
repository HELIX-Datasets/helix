extern void *gsl_gsl_ran_gumbel2_pdf;
extern void *duktape_duk_get_top;
extern void *gsl_gsl_stats_short_absdev;
extern void *lua_lua_rotate;

int main(int argc, char **argv) {
    ((void (*)())gsl_gsl_ran_gumbel2_pdf)();
    ((void (*)())duktape_duk_get_top)();
    ((void (*)())gsl_gsl_stats_short_absdev)();
    ((void (*)())lua_lua_rotate)();

    return 0;
}
