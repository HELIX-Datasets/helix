extern void *minc_miget_cfg_int;
extern void *shapelib_DBFWriteNULLAttribute;
extern void *gsl_gsl_dft_complex_float_backward;
extern void *miniupnpc_UPNP_GetGenericPortMappingEntry;

int main(int argc, char **argv) {
    ((void (*)())minc_miget_cfg_int)();
    ((void (*)())shapelib_DBFWriteNULLAttribute)();
    ((void (*)())gsl_gsl_dft_complex_float_backward)();
    ((void (*)())miniupnpc_UPNP_GetGenericPortMappingEntry)();

    return 0;
}
