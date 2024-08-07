extern void *gsl_gsl_sf_erf;
extern void *lua_luaL_unref;
extern void *libyuv_ARGBShuffleRow_SSSE3;
extern void *darknet_test_dunion;

int main(int argc, char **argv) {
    ((void (*)())gsl_gsl_sf_erf)();
    ((void (*)())lua_luaL_unref)();
    ((void (*)())libyuv_ARGBShuffleRow_SSSE3)();
    ((void (*)())darknet_test_dunion)();

    return 0;
}
